#include <iostream>
using namespace std;
int main() {
        double x = 2.00000; 
        int n = 10;
        if (n == 0) return 1.0;
        if (x == 1) return 1.0;
        if (x == 0) return 0.0;
        if (x == -1 && n%2 == 0) return 1.0;
        if (x == -1 && n%2 != 0) return -1.0;

        long BinForm = n;
        double ans = 1;
        if(n < 0){
            BinForm = - BinForm;
        } 
    
        while(BinForm > 0){
            if(BinForm % 2 == 1){
                ans *= x;
            }
            x *= x;
            BinForm /= 2;
        }
        
        if (n < 0) return (double)(1.0L / ans);
        return ans;
    };