//
//  main.cpp
//  Practical2
//
//  Created by Laura Walsh on 13/11/2018.
//  Copyright © 2018 Laura Walsh. All rights reserved.
//

#include "Insert_Remove.hpp"
#include <iostream>
using namespace std;

int main(){
    //Program 1------------------------------------------------------------------
    
    cout << "------Test programme 1------"<<endl;
    
    int sample[10]; //reserves 10 integer element
    
    // load the array
    
    for(int i = 0; i< 10; i++){
        sample[i] = i;
    }
    
    
    int sample2[10] = {1,5,7,8,9,4,3,2,5,76};
    
    //display the array
    cout << "sample 1: " << endl;
    for(int i = 0; i< 10; i++){
        cout << i <<  ") " << sample[i] << ", " ;
    }
    
    //display the array
    cout << endl<< "sample 2: " << endl;
    for(int i = 0; i< 10; i++){
        cout << i <<  ": " << sample2[i] << ", " ;
    }
    
    
    //pointer access
    int* p = sample; //define a pointer to the start of an array usign its name
    
    for( int i = 0; i <10; i++){
        *p++ = i*i;
    }
    
    //return the pointer back to the start of the array to print
    cout << endl<<"sample 1: " << endl;
    p = sample;
    for( int i = 0; i < 10; i++){
        cout <<  i <<  ") " << *p++ << ", ";
    }
    
    
    //pointer access
    cout <<endl<<"sample 2: " << endl;
    int* pts = sample2; //define a pointer to the start of an array usign its name
    for( int i = 0; i < 10; i++){
        cout <<  i <<  ") " << *pts++ << ", ";
    }
    
    
 
    //Program 2------------------------------------------------------------------
    
     cout << endl<< endl<<"------Test programme 2------"<<endl;
    
    int i = 27;
    int *i_ptr = &i; // declare a pointer and give it the value of the address of i
    cout << "value in i is " << i << endl;
    cout << "address of i is " << i_ptr << endl;
    cout << "value from dereferencing point is " << *i_ptr << endl;
    
    *i_ptr = 35;
    cout << "value in i is " << i << endl;
    
    double* d_ptr = NULL; // declare a pointer and initialise it as null
    cout << "the value in pointer is " << d_ptr << endl;

    
    if(d_ptr != NULL) *d_ptr = 0.25;
    cout << "the value in pointer is " << d_ptr << endl; // should still be null
    
    cout << "value in x  = ";
    int x = 10;
    int* pr = NULL;
    pr = &x;
    cout << *pr << endl;
    
    //Program 3------------------------------------------------------------------
    
     cout << endl<< endl<< "------Test programme 3------"<<endl;
    
    int len = 8;
    int* array = new int[len];
    for (int t = 0; t < len; t++) array[t] = t;
    
    // array before insertion
    cout << endl << "Array before insertion: " << endl;
    for (int t = 0; t < len; t++) cout << array[t] << " ";
    cout << endl;
    
    // insert a value 40 at element position 3
    insert(array, len, 3, 40);
    
    // array after insertion
    cout << endl << "Array after insertion: " << endl;
    for (int t = 0; t < len; t++) cout << array[t] << " ";
    cout << endl;
    
    // remove an element at index position 6
    remove(array, len, 6);
    
    // array after remove
    cout << endl << "Array after removal: " << endl;
    for (int t = 0; t < len; t++) cout << array[t] << " ";
    cout << endl;
    
    delete[] array;
    
    cout << endl << "Checking arrays for equivalence: ";
    int arraya[8] = { 121, 144, 19, 161, 19, 144, 19, 11 };
    int arrayb[8] = { 11, 121, 144, 19, 161, 19, 144, 19 };
    
    if (same_elements(arraya, arrayb, 8))
        cout << "The arrays are the same." << endl;
    else
        cout << "The arrays are not the same." << endl;

    
    return 0;
}
