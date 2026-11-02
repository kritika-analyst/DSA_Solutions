#include <iostream>
#include <vector>
using namespace std;

// Brute force: TC O(n^2), SC O(1) extra
vector<int> bruteForce(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) ans[i] *= nums[j];
        }
    }
    return ans;
}

// Optimal: TC O(n), SC O(1) extra (output array not counted)
vector<int> optimal(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);

    int prefix = 1;
    for (int i = 0; i < n; i++) {
        ans[i] = prefix;      // product of everything to the left
        prefix *= nums[i];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;     // multiply product of everything to the right
        suffix *= nums[i];
    }
    return ans;
}

int main() {
    vector<int> nums = {-1, 1, 0, -3, 3};

    vector<int> a = bruteForce(nums);
    vector<int> b = optimal(nums);

    cout << "Brute force: ";
    for (int x : a) cout << x << " ";
    cout << endl;

    cout << "Optimal: ";
    for (int x : b) cout << x << " ";
    cout << endl;
    return 0;
}