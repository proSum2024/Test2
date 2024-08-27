#include <iostream>
using namespace std;

void printBoard(){
    for(int i=0;i<3;i++){
        cout<<"+-+-+-+"<<endl<<"| | | |"<<endl;
    }
    cout<<"+-+-+-+"<<endl;
}

int main(){
    printBoard();
    
    return 1;
}
