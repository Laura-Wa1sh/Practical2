//
//  Insert_Remove.cpp
//  Practical2
//
//  Created by Laura Walsh on 13/11/2018.
//  Copyright © 2018 Laura Walsh. All rights reserved.
//

#include "Insert_Remove.hpp"
#include <iostream>
using namespace std;

void insert(int* &array, int &array_len, int pos, int val){
    if(!array || array_len <=0){
        cout << "invalid array" << endl;
        return;
    }
    if(pos<0|| pos>=array_len){
        cout << "pos is out of range " << endl;
    }
    
    array_len++;
    int* temp = new int[array_len];
    
    for (int i =0; i<pos; i++){
        temp[i] = array[i];
    }
    
    temp[pos] = val;
    
    for(int i = pos+1; i <array_len; i++){
        temp[i] = array[i -1];
    }
    
    delete[] array;
    
    array = temp;
}

void remove(int* &array, int &array_len, int pos){
    if(!array || array_len <=0){
        cout << "invalid array" << endl;
        return;
    }
    if(pos<0|| pos>=array_len){
        cout << "pos is out of range " << endl;
    }
    
    array_len--;
    int* temp = new int[array_len];
    
    for(int i = 0; i<pos; i++){
        temp[i] = array[i];
    }
    
    for(int i = pos; i<array_len; i++){
        temp[i] = array[i+1];
}

    delete[] array;
array = temp;
}




int count_occurences(int* x, int n, int t)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (x[i] == t) count++;
    return count;
}

bool same_elements(int* a, int* b, int n)
{
    for (int i = 0; i < n; i++)
        if (count_occurences(a, n, a[i]) != count_occurences(b, n, a[i]))
            return false;
    return true;
}





