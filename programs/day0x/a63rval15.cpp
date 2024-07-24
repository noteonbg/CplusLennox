#ifndef EMAIL_HPP
#define EMAIL_HPP

#include <string>

class Email {
 public:
  enum class State {none, set, valid};
 private:
  std::string value;
  State state{State::none};

 public:
  // constructors:
  Email() = default;
  //Email(const std::string& e)
  // : value{e} {
  //     checkState();
  //}
  Email(std::string e)
   : value{std::move(e)} {
       checkState();
  }

  // getter: 
  //std::string getValue() const {
  const std::string& getValue() const& {
    return value;
  }
  std::string getValue() && {
    return std::move(value);
  }

  // disable move semantics:
  //Email(Email&&) = delete;             // ERROR: disables also fallback
  //Email& operator=(Email&&) = delete;  // ERROR: disables also fallback
  Email(const Email&) = default;             // disables move (fallback available)
  Email& operator=(const Email&) = default;  // disables move (fallback available)

  // implement move semantics:
  Email(Email&& e) noexcept
   : value{std::move(e.value)}, state{e.state} {
      e.value.clear();
      e.state = State::none;
  }
  Email& operator= (Email&& e) noexcept {
      value = std::move(e.value);
      state = e.state;
      e.value.clear();
      e.state = State::none;
      return *this;
  }

  // other:
  void checkState();  // set state according to value
  friend std::ostream& operator << (std::ostream& strm, const Email& e);
};


inline void Email::checkState() {
    if (value.empty()) {
      state = State::none;
    }
    else if (value.find("@") != std::string::npos) {
      state = State::valid;
    }
    else {
      state = State::set;
    }
}

inline std::ostream& operator << (std::ostream& strm, const Email& e) {
    switch (e.state) {
      case Email::State::none:
        strm << "NONE";
        break;
      case Email::State::set:
        strm << '<' << e.value << '>';
        break;
      case Email::State::valid:
        strm << '<' << e.value << ">OK";
        break;
    }
    return strm;
}
  
#endif // EMAIL_HPP
