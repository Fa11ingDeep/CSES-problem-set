#include <iostream>
#include <string>
using namespace std;
long unsigned int cnt_max_repetions(string DNA){
    long unsigned int max_len=0;
    long unsigned int actual_len=0;

    for(long unsigned int i=0; i<DNA.size(); i++){   
        if (DNA[i]==DNA[i+1]){
            actual_len+=1;
        }
        else{
            if (actual_len+1 > max_len){
                max_len=actual_len+1;
            }
            actual_len=0;
        }
    }
    
    return max_len;
}

int main(){
    string DNA;
    cin>>DNA;
    cout<<cnt_max_repetions(DNA);
}