#include <iostream>
#include <algorithm> 
using namespace std;

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
    int maximum = maxNumber(employee,size);
    cout << "maximum : " << maximum << endl;
    return 0;
}