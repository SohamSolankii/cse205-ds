class Solution {
public:

    bool pow(int n){
        if(n == 1){ return 1;}

        if(n%2 != 0){
            return false;
        }

        return pow(n/2);
        // return false;
    }
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        return pow(n);
        
        // return (n & (n - 1)) == 0;
    }
};