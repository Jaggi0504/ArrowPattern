#include<iostream>
using namespace std;


int main(){
    int N, n1, n2, i, j, sp;
    cin>>N;
    n1=(N+1)/2;
    n2=N/2;
    for(i=1;i<=n1;i++) {
        for(sp=1;sp<=i-1;sp++) {
            cout<<" ";
        }
        for(j=1;j<=i;j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=n2;i>=1;i--) {
        for(sp=i-1;sp>=1;sp--) {
            cout<<" ";
        }
        for(j=1;j<=i;j++) {
            cout<<"*"<<" "; 
        }
        cout<<endl;
    }
}
