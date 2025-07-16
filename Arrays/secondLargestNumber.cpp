#include <iostream>
#include <algorithm> 
using namespace std;

// second largest number with time complexity : 0(n) and space complexity 0(1)


int secondMaximumNumber(int employee[], int size,int Maximum){
     int secondMaximum = INT_MIN;
    for(int i = 0 ; i < size ; i++){
         if(employee[i] > secondMaximum && employee[i] != Maximum){
                secondMaximum = employee[i];
         }
    }  
    return secondMaximum;  
}

int maxNumber(int employee[], int size){
     int maximum = INT_MIN;
    for(int i = 0 ; i < size ; i++){
        maximum = max(maximum,employee[i]); 
    }  
    return maximum;  
}

int main() {
    int employee[6] = {1,2,3,10,8,4};
    int size = 6;
    int maximum = maxNumber(employee,size);
    cout << "Maximum : " << maximum << endl;
    int secondMaximum = secondMaximumNumber(employee,size,maximum);
    cout << "Second Maximum : " << secondMaximum << endl;
    
    return 0;
}