#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int ncr(int n,int r){
    int binomial=1;
    int fact1=fact(n);
    int fact2=fact(r);
    int fact3=fact(n-r);
    binomial=fact1/(fact2*fact3);
    return binomial;

}
int main(){
    cout<<"factorial is "<< ncr(8,2)<<endl; 
}
