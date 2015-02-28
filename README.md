##Bubble Sorting for C++

Simple C++ header and code to bubble sort a Vector via iterations. This function bubble sorts a Vector and returns a new vector which is bubblesorted. Only Integer Vectors supported yet. (More Support through Function Overloading is coming)

###Usage

Download the Header file `bubbleSort.h` and the main cpp file `bubbleSort.cpp` from <a href="https://github.com/geekpradd/Bubble-Sort/releases/latest"> here</a> and then you can use the main sorting function.

```c
#include <iostream>
#include <vector>
#include "bubbleSort.h"
using namespace std;

vector<int> initializeVectorFromArray(int a[],int s){
    vector<int> sa;
    sa.assign(&a[0],&a[0]+s);
    return sa;
}
int main(){
	int myarray[4] = {2,34,12,33};
	vector<int> unsorted = initializeVectorFromArray(myarray,4);
	vector<int> sorted = bubbleSort(unsorted,log=true); //This vector is sorted and the values are {2,13,33,34};

}
```

The `log` parameter by default is `true` and you can set it to false to prevent logging.

###To-Do

1. Use Function Overloading to add support for double and float
2. Use pointers to directly modify the vector rather than returning a new vector
3. Add suport for C style Arrays and std::array.

###About

Created by geekpradd (c) 2015. MIT Licensed. 