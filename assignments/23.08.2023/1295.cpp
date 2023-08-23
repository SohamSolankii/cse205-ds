// class Solution {
// public:
//     int findNumbers(vector<int>& nums) {
//         int cnt = 0;
//         for(int i = 0 ; i < nums.size(); i++){
//             string s = to_string(nums[i]);
//             if(s.size()%2 ==0 ) cnt++;
//         }
// 	   return cnt;
//     }
// };

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int num : nums) {
            int numDigits = floor(log10(num)) + 1;
            if(numDigits%2==0) ++count;
        }
        return count;
    }
};