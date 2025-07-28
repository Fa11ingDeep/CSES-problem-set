#include <iostream>
using namespace std;

void create_permutation(long n){
    if (n==1){
        cout<< n;
    }
    else if (n % 2 == 0){
        if(n-1<2){
            cout<<"NO SOLUTION"<<endl;
            return ;
        }
        for(long i=0 ; i< n/2 ; i++){
            cout<<(2 + 2*i)<<" ";
        }
        for(long j=0 ; j< n/2; j++){
            cout<<(1 + 2*j)<<" ";
        }
    }
    else{
        if(n-2<2){
            cout<<"NO SOLUTION"<<endl;
            return ;
        }
        for(long i=0 ; i< (n-1)/2 ; i++){
            cout<<(2 + 2*i)<<" ";
        }
        for(long j=0 ; j<= (n-1)/2; j++){
            cout<<(1 + 2*j)<<" ";
        }
    }
    return ;
}

int main(){
    long n;
    cin>>n;
    create_permutation(n);
    return 0;
}