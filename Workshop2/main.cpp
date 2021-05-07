/*
IEEE KU Workshop 2 on C++
Created on 7th May 2021

Any other comment ...
*/

// import libraries
#include <iostream>

// Namespace
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    
    // Operators
    
    // ARITHMETIC OPERATORS
    int a = 0;
    
    // We looked at +-/*% in the 1st workshop
    a ++; // increments a by 1, basically, a = a + 1 or a += 1
    a --; // decrements a by 1, ( a = a - 1 )
    
    // ASSIGNMENT OPERATORS
    int x = 5; // Assign 5 to variable x
    x += 1; // Means x = x + 1, which is, assign x to the result of sum of 1 and current x value
    x -= 1; // = 5, x = x -1 
    x *= 2; // x = x * 2;
    x /= 2; // x = x / 2;
    
    // Relational operators
    bool state; // define a boolean type variable
    
    state = x == 5;
    cout << " x is equal to 5, " << state << endl; //  1, denotes true, 0 denotes false
    
    state = x > 5; // 0 , false
    state = x >= 5; // 1, true since x == 5
    state = x < 5; // 0, false
    state = x <= 5; // 1, true
    state = x != 5; // 0, false
    
    // IF
    float marks = 35; 
    char grade = 'F'; // Assign the default grade
    
    if( marks >= 0 && marks < 40 )
    {
        grade = 'E';
    }
    
    if( marks >= 40 && marks < 50 )
    {
        grade = 'D';
    }
    
    if( marks >= 50 && marks < 60 )
    {
        grade = 'C';
    }
    
    if( marks >= 60 && marks < 70 )
    {
        grade = 'B';
    }
    
    if( marks >= 70 && marks <= 100 )
    {
        grade = 'A';
    }
    
    cout << "IF -> The grade for " << marks << "% is " << grade << endl;
    
    // IF ELSE
    if( marks >= 0 && marks < 40 )
    {
        grade = 'E';
    }
    
    else if( marks >= 40 && marks < 50 )
    {
        grade = 'D';
    }
    
    else if( marks >= 50 && marks < 60 )
    {
        grade = 'C';
    }
    
    else if( marks >= 60 && marks < 70 )
    {
        grade = 'B';
    }
    
    else if( marks >= 70 && marks <= 100 )
    {
        grade = 'A';
    }
    
    else
    {
        grade = 'U';
    }
    
    cout << "IF/ELSE -> The grade for " << marks << "% is " << grade << endl;
    
    // SWITCH
    switch(grade)
    {
        case 'A':
            cout << "Excellent performance!" << endl;
            break;
            
        case 'B':
            cout << "Good work!" << endl;
            break;
           
        case 'C':
            cout << "You can do even better!" << endl;
            break;
        
        case 'D':
            cout << "Pull up your socks!" << endl;
            break;
            
        case 'E':
            cout << "See me!" << endl;
            break;
        default:
            cout << "Unknown Grade" << endl;
    }
    
    // WHILE LOOP
    // print all numbers between 0 and 10
    cout << "WHILE LOOP : ";
    int i = 1;
    while( i < 10 )
    {
        cout << i << " ";
        i++;
    }
    cout << endl;
    
    // DO WHILE LOOP
    // Print number as long as i < 10
    cout << "DO-WHILE LOOP : ";
    do{
        cout << i << " ";
        i++;
    } while ( i < 10);
    
    cout << endl;
    
    // FOR LOOP
    for(int m=15; m<20; m++)
    {
        cout << "m = " << m << endl;
    }
  
    return 0;
}
