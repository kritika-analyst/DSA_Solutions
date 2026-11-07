#include <iostream>
#include <vector>
using namespace std;

// Peak index in a mountain array, TC- O(log n) (binary search)
int main() {
    vector<int> arr = {0,10,5,2};
    int st = 1, end = arr.size() - 2;
    while(st <= end) {
        int mid = st + (end - st) / 2;

        if(arr[mid - 1] < arr[mid] && arr[mid] >arr[mid + 1]) {
            cout << mid << endl;
            break;
        } else if(arr[mid - 1] < arr[mid]) { //increasing slope
            st = mid + 1;
        } else { // decreasing slope
            end = mid - 1;
        }
    }
    return 0;
}
