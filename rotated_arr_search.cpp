#include <iostream>
#include <vector>
using namespace std;

// Search in a Rotated Sorted Array, Time O(log n), Space O(1)
int main(){
    int  nums []= {4,5,6,7,0,1,2};
    int target  = 0;
    int st = 0, end = sizeof(nums) / sizeof(nums[0]) - 1;

    while(st <= end) {
        int mid = st + (end - st) / 2;
        if(nums[mid] == target){
            cout << mid << endl;      // 4
            return 0;         
        }

        if(nums[st] <= nums[mid]){ //left sorted
            if(nums[st] <= target && target <= nums[mid]) {
             end = mid - 1;
            } else {
             st = mid + 1;
            }
        } 
        else { //right sorted
            if(nums[mid] <= target && target <= nums[end]) {
             st = mid + 1; 
            } else {
              end = mid - 1;
            }
        }
    } return 0;

}