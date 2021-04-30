/*
This is a multiline comment, 
it means it can span multiple lines,
it is used for documenting your code.

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Diplays Hello World on the output console
    cout << "Hello World\n";
    
    // Defining variables
    int age, _x, year, mangoes;
    
    // Instantiating the variables
    age = 30;
    _x = 5;
    year = 2021;
    mangoes = 5;
    
    // To display these to the user
    cout << "My age is less than " << age << endl;
    cout << "The value of _x is " << _x << endl;
    cout << "The current year is " << year << endl;
    cout << "I have " << mangoes << " mangoes in the basket" << endl;
    
    // We can also define and instantiate variables at the same time
    char myGrade = 'B', bloodType = 'O';
    float distanceToNairobi = 29.5;
    
    // Display them
    cout << "My swimming garde was '" << myGrade << "'\n";
    cout << "John has a blod group " << bloodType << endl; 
    cout << "The distance between KU and Nairobi is approximately " << distanceToNairobi << " kms\n";
    
    // We can also do simple arithmetics on the variables like +-/*%
    int x = 6, y = 3, z = 4;
    
    // SUMMATION
    cout << "The sum of " << x << "," << y << " and " << z << " is " << (x+y+z) << endl;
    
    // DIFFERENCE
    cout << "The difference between " << x << " and " << y << " = " << (x-y) << endl;
    
    // MULTIPLICATION
    cout << "The product of " << x << "," << y << " and " << z << " is " << (x*y*z) << endl;

    // DIVISION
    cout << "The quotient of " << x << "/" << y << " is " << (x/y) << endl;
    
    // REMAINDER
    cout << "The remainder of dividing " << z << " by " << y << " is " << (z%y) << endl;
    
    // Getting user input
    // we use the cin command
    
    // Define a variable to store the input
    int myAge;
    
    // Display a message to the user
    cout << "Hi there, please enter your age: ";
    cin >> myAge;
    
    // Lets display the age
    cout << "Your age is " << myAge << endl;
    
    // Beaware the user may enter letters as well,
    
    // ASSIGNMENT
    // Prompt user for 2 values and store them in two variables
    // Do the +-/*% of the two values
    // Happy Coding!
    
    // Exit the application with a return code of 0
    return 0;
}
