#include <iostream>
#include <algorithm> 
using namespace std;

int minNumber(int employee[], int size){
    int minimum = INT_MAX;
    for(int i = 0 ; i < size ; i++){
        minimum = min(minimum,employee[i]); 
    }  
    return minimum;
}

int maxNumber(int employee[], int size){
     int maximum = INT_MIN;
    for(int i = 0 ; i < size ; i++){
        maximum = max(maximum,employee[i]); 
    }  
    return maximum;  
}

int main() {
    int employee[6] = {1,2,3,10,9,4};
    int size = 6;
    int minimum = minNumber(employee,size);
    int maximum = maxNumber(employee,size);
    cout << "minimum : " << minimum << endl;
    cout << "maximum : " << maximum << endl;
    return 0;
}