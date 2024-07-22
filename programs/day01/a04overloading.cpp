    #include <iostream>
    using namespace std;

    // Function with float type parameter
    float absolute(float var) {
        if (var < 0.0)
            var = -var;
        return var;
    }

    // Function with int type parameter
    int absolute(int var) {
        if (var < 0)
            var = -var;
        return var;
    }


    // Function with 2 parameters
    void display(int var1, double var2) {
        cout << "Integer number: " << var1;
        cout << " and double number: " << var2 << endl;
    }

    // Function with double type single parameter
    void display(double var) {
        cout << "Double number: " << var << endl;
    }

    // Function with int type single parameter
    void display(int var) {
        cout << "Integer number: " << var << endl;
    }

    int main() {
        int a = 5;
        double b = 5.5;

        // Call function with int type parameter
        display(a);

        // Call function with double type parameter
        display(b);

        // Call function with 2 parameters
        display(a, b);

                cout << "Absolute value of -5 = " << absolute(-5) << endl;

        // Call function with float type parameter
        cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl;



        return 0;
    }
