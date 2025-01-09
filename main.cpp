// sam102                                                Jan 2025
// Primitive (Built-In) Data Types and their sizes

// In C++, all variables have a type (e.g. int, double) and each type of variable
// has a precise size - measured in bytes. (Type sizes may vary between systems)
//

#include <cstdint>
#include <iostream>

// To avoid continuously prefixing objects with "std::" - e.g. "std::cout"
// We can declare that we are using the standard namespace (std) throughout this file.
using namespace std;

int main() {

    cout << "sam102 - basic data types and sizeof operator" << endl;
    cout << "Size of various data types in bytes on this computer:" << endl;

    cout << "Size of char (character): " << sizeof(char) << " (Min value:" << CHAR_MIN << "; Max value:" << CHAR_MAX << ")" << endl;
    cout << "Size of unsigned char : " << sizeof(unsigned char) << " ( Min:" << 0 << "; Max:" << UCHAR_MAX << ")" <<endl;

    cout << "Size of int : " << sizeof(int) << " (Min:" << INT32_MIN << "; Max:" << INT32_MAX << ")" << endl;
    cout << "Size of unsigned int : " << sizeof(unsigned int) << " (Min value:" << 0 << "; Max value:" << UINT32_MAX << ")" << endl;

    cout << "Size of long integer: " << sizeof(long) << endl;

    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;

    char c = CHAR_MAX;  // -128 to +127
    cout << "Max value in unsigned char c = " << c << endl;  // shows the ASCII character for 127
    cout << "Max value in unsigned char c = " << +c << endl; // the + causes the integer value in c to display as opposed to the character in c

    // An int (of size 4 bytes) can store over 4 billion different values,
    // ranging from approx: -2 billion to +2 billion (i.e. 2,147,483,647)
    // ( Big! - but not big enough to store a count of the world's population!
    //
    int i = INT_MAX;  // a constant representing the max int value (for a 4-byte int) <limits.h>

    // Variables can overflow and underflow. Overflow can be a source of Error.
    //
    cout << "Max int value in i = " << i << endl;
    cout << "adding one to i (i++) causes an overflow in this case " << endl;
    i++;
    cout << "after i++, OVERFLOW occurs, and has become negative! i = " << i << endl;
    i++;
    cout << "increment i again, after i++; i = " << i << endl;

    // Types "int" and "long" are not big enough to store the population of the world.
    // so, we need a "long long int" variable

    cout << "Max value storable in a long long int = " << LLONG_MAX << endl;// 19 digits !

    long long int worldPopulation = 8009245600;  // 8 billion in Jan 2023

    // output the size of the 'double' data type
    cout << "sizeof(double) in bytes = " << sizeof(double) << endl;

    // We can use the sizeof() operator to get size of compound objects - like arrays.
    // (Compound means, made up of other things) The array below is made of int values.

    // array of int values
    int arr[5] = { 1,2,3,4,5 };  // initializes a 'static' array of 5 int values

    cout << "The size of arr[] in bytes is: sizeof(arr) = " << sizeof(arr) << endl;
    cout << "(i.e. 5 x 4 bytes = 20.  Each element is an int and is therefore 4 bytes long.)" << endl;

    // we can calculate the number of elements in an array using the following calculation:
    // (size of whole array in bytes) / (size of one element of the array)

    cout << "Number of elements in this 'int' arr[] is: " << sizeof(arr) / sizeof(int) << endl;
    return 0;
}

//TODO
// Q1. Display the size in bytes of a 'long long int'
// Print out the value stored in the worldPopulation variable.
