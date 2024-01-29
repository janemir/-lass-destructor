#include <iostream>  
using namespace std;

class MyClass {
    int* data; // the default access modifier is private
public:
    MyClass(int size) { // constructor 
        data = new int [size]; // dynamic memory allocation for an array
        for (int i = 0; i < size; i++) {
            data[i] = i;
        }
        cout << "object " << data << " - the constructor is called" << endl;
    }
    ~MyClass() { // destructor
        delete[] data; // freeing up dynamically allocated memory
        cout << "object " << data << " - the destructor is called" << endl;
    }
};

void function() {
    cout <<"the start execution function" << endl;
    MyClass a(1);
    cout << "the function has completed execution" << endl;
}

int main() {
    function(); 
    return 0;
}
