#include <iostream>
using namespace std;

int main() {
    int row,col;
    cout<<"Enter row:"<<endl;
    cin>>row;
    cout<<"Enter column:"<<endl;
    cin>>col;
    int count = 1;
    for(int i = 1; i <= row; i++){
        for(int j = 1 ; j <= i; j++){
            cout<<count;
         count++;
        }    
        cout<<endl;
        
    }
    return 0;
}