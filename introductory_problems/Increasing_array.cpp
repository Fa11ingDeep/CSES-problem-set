#include <iostream>
#include <vector>
using namespace std;
long increasing_array(long n, vector <long> nums){
    long steps=0;
    for(long i=0; i<n-1; i++){
        if(nums[i]>nums[i+1]){
            long diff=(nums[i]-nums[i+1]);
            steps+=diff;
            nums[i+1]+=diff;
        }
    }
    return steps;
}

int main(){
    long n;
    cin>>n;
    vector <long> nums (n);
    for (long i = 0; i<n; i++){
        cin>>nums[i];
    }
    cout<<increasing_array(n, nums)<<endl;
}
