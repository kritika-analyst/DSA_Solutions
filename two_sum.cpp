#include <iostream>
#include <vector>
using namespace std;

// Two Sum
int main(){
    vector<int> nums = {2,7,11,15};  //Brute force approach ,Time - O(n^2), space - O(1)
    int target = 22;
    
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] + nums[j] == target) {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    cout << "No pair found" << endl;
    return 0;
}