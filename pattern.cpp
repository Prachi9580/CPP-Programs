
#include<iostream>
using namespace std;
int main(){
   int n = 5, sum = 0;

    for(int i = 1; i<=n; i++){
       if(i==n){
        cout << i << " = ";
       }
       else{
        cout << i << " + ";
       }

       sum += i;
    }
    cout << sum; 
}
