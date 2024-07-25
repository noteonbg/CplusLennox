#if 0

#include <iostream>
#include <mutex>

std::mutex mtx; // Mutex for synchronization

/*

A simple lock that automatically binds a mutex in its constructor and releases it in the destructor.
Commonly used for basic scenarios where you need to protect a critical section.

*/

void foo() {

    
    std::lock_guard<std::mutex> lock(mtx); // Lock the mutex
    

    // lock is an object of lock_guard  and we are pasing mutex object in its constructor
    //because lock_guard 


    // Critical section: safe access to shared resources
    std::cout << "Inside foo()" << std::endl;
}

int main() {
    foo();
    // Mutex is automatically released when 'lock' goes out of scope
    return 0;
}





#endif

#if 1

//Allows manual locking and unlocking of the associated mutex.

#include <iostream>
#include <mutex>

std::mutex mtx; // Mutex for synchronization

void bar() {
    std::unique_lock<std::mutex> lock(mtx); // Lock the mutex
    // Critical section: safe access to shared resources
    std::cout << "Inside bar()" << std::endl;
    // Explicitly unlock if needed
    lock.unlock();
    // Other work...
}

int main() {
    bar();
    
    return 0;
}


#endif

#if 0

#include <iostream>
#include <shared_mutex>

/*

Used for reader-writer scenarios where multiple threads can read simultaneously.
Allows shared (read) access to the protected resource

*/

std::shared_mutex rwMutex; // Reader-writer mutex

void reader() {
    std::shared_lock<std::shared_mutex> lock(rwMutex); // Shared lock
    // Read data safely
    std::cout << "Reading data..." << std::endl;
}

int main() {
    reader();
    // Shared lock is automatically released when 'lock' goes out of scope
    return 0;
}


#endif