#include <iostream>
#include <list>
#include <string>
using namespace std;
long weird_algo(long num){
    if (num == 1){
        cout<<num;
        return 1;
    }
    else if(num % 2 ==0){
        cout<< num<<" ";
        return weird_algo(num / 2);
    }
    else{
        cout<< num <<" ";
        return weird_algo(3*num+1);
    }
}

int main(){
    long num;
    cin>>num;
    weird_algo(num);
    return 0;
}