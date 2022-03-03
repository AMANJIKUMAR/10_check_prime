#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    int i=2;
    while(i<n){
        if (n%i==0){
            cout<<"not a prime no";
            break;
        }
        i=i+1;
    }
    if (i==n){
        cout<<"prime no";
    }
    cout<<endl;
    return 0;

}
