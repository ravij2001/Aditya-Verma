#include <iostream>
using namespace std;

int main() {
    int row,col;
    cout<<"Enter row:"<<endl;
    cin>>row;
    cout<<"Enter column:"<<endl;
    cin>>col;
    
    for(int i = 0; i < row ; i++){
        for(char ch = 'A' ; ch <= 'A' + i ; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}