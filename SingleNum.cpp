#include <iostream>
using namespace std;

// Single Number
int main() {
  int nums[] = {4,1,2,1,2};
        int ans = 0;
        for (int val : nums){
            ans ^= val;
        }
        cout << ans << endl;
        return ans;
}

