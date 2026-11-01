#include <iostream>
using namespace std;

int main() {
        int nums[] = {2,2,1,1,1,2,2};
        int n = sizeof(nums)/sizeof(nums[0]);

        for (int val : nums){
            int freq = 0;
            for(int el : nums){
                if(el == val){
                 freq++;
                }
            }
            if(freq > n/2){
                cout << val << endl;
               return val;
            }    
        }
        return -1;
}