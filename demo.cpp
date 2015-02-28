#include <iostream>
#include <sstream>
#include <vector>
#include "bubbleSort.h"
using namespace std;
/*
* This is a demo file to show usage. Note that bubbleSort.h and bubbleSort.cpp need to be in the same 
* directory as this file so by default (if you cloned the repo) this file will give errors as the header
* and code is in the src folder.
*/ 
/*
* Print Vector onto the console. It's similar to how sets are printed in Python
* Params:
* v (vector<int>) -- The Vector to Print
*/
void printVector(vector<int> v){
    string output = "{";
    for (int i=0;i<v.size();i++){
        ostringstream a;
        a << v[i];
        if (i==(v.size()-1)){
            output += a.str() +"}";
        }
        else{
             output += a.str() + ", ";
        }
    }
    cout <<output<<endl;
}

/*
* Assign the Vector values from an Array
* Params:
* a (int) -- The Array from which the Vector is initialized
* s (int) -- Length of the Array
*/
vector<int> initializeVectorFromArray(int a[],int s){
    vector<int> sa;
    sa.assign(&a[0],&a[0]+s);
    return sa;
}
int main()
{
     int arr[6] = {3,12,2,131,128,100};//Create a demo array
     vector<int> myvec = initializeVectorFromArray(arr,6); //Initialize the Vector
     printVector(bubbleSort(myvec)); //Print the Sorted Array with logging
     return 0;
}
