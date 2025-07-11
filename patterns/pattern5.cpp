#include <iostream>
using namespace std;

int main() {
    int row,col;
    cout<<"Enter row:"<<endl;
    cin>>row;
    cout<<"Enter column:"<<endl;
    cin>>col;
    
    for(int i = 1; i <= row ; i++){
        for(int j = 1 ; j <= col - i + 1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}