#include<bits/stdc++.h>
using namespace std;

void doThis(int arry[], int n){
    arry[0]+=100;
    cout<< "value inside internal function: "<< arry[0]<< endl;
}

int main (){
    int n=5;
    int arry[n];
    for(int i =0; i<n; i++){
        cin >> arry[i];
    }
    doThis(arry, n);

    cout << "Value inside main is: " << arry[0]<< endl;
    return 0;
}