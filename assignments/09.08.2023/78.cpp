class Solution {
public:
    //vector<vector<int>> ans;
    void sub(vector<int>& nums, int i,int j, vector<int> tem){
        if(nums[i]=='\0'){
            tem[j] ='\0';

            if(tem[0]=='\0'){
                //ans.push_back();
            }
           // ans.push_back(tem);
        }

        // including
        tem[j] = nums[i];
        sub(nums,i+1,j+1,tem);

        // excluding
        sub(nums,i+1,j,tem);
        
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> tem;
        sub(nums,0,0,tem);
        //return ans;   
    }
};