#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
* Sort the Vector using the Bubble Sort Algorithm
* Returns a new Vector rather than modifying the original
* The Algorithm loops over the Vector and swaps the items such that it is arranged in a ascending order
* The Loop Stops when no swaps are made in a single iteration
* Params:
* original (vector<int>) -- The Vector to sort through
* log (boolean, default=true) -- States whether logging should be done or not
*/
vector<int> bubbleSort(vector <int> original, bool log=true){
    vector<int> retVector = original;
    int passes = 0;
    while (true){
        int swaps = 0;
        for (int i=0;i<retVector.size();i++){
            if (i!=retVector.size()-1){
                if (retVector[i]>retVector[i+1]){
                    swap(retVector[i],retVector[i+1]);
                    swaps++;
                }
            }
        }
        passes++;
        if (log){
        cout << "In Pass No " << passes << " There were " << swaps << " swaps"<<endl;
        }
        if (swaps==0){
            break;
        }
        else{
            swaps=0;
        }
    }
    return retVector;
}
