class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();
        if(n == 1) return A[0]; //single element array
        
        int st = 0, end = n-1;
        while(st <= end) {
           int mid = st + (end - st) / 2;

           if(mid == 0 && A[mid] != A[mid + 1]) return A[mid];  //start single element 
           if(mid == n-1 && A[mid] != A[mid-1]) return A[mid];  //end single element
        
           if(A[mid - 1] != A[mid] && A[mid] != A[mid + 1]) return A[mid]; //mid is single element

           if(mid % 2 == 0) { // even
              if(A[mid] == A[mid-1]) { //left search
               end = mid - 1;
              } else {  //right search
                st = mid + 1;
              }
           }
           else {  // odd
              if(A[mid] == A[mid-1]) { //right search
                st = mid + 1;
              } else {  //left search
                end = mid - 1;
              }
           } 
        }
        return -1;
    }
};
