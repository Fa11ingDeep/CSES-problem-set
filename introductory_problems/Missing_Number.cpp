#include <iostream>
#include <vector>
#include <cmath>
//#include <>

using namespace std;

int main(){
    long num;
    cin>>num;
    vector<double> nums(num + 1, -1);
    for (long i = 0; i < num - 1; i++) {
        long input_num;
        cin >> input_num;
        nums[input_num]=input_num;
    }
    for (long j = 1; j<num+1; j++){
        if(nums[j] == -1){
            cout<<j;
            return 0;
        }
    }
}