// 1   
// 23  
// 456 
// 78910

#include<iostream>
using namespace std;
int main(){
    int i, j ,n=1;
    for(i=1;i<=4;i++){
        for(j=1;j<=4; j++){
            if(j<=i){
                cout << n;
                 n++;}
            else
            cout<< " ";
        }
        cout << endl;
    }
}