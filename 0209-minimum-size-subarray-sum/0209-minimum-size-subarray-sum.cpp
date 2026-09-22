class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i =0;
        int j = 0;
        int sum = 0;
        int minSize = INT_MAX;

        while(i < n){
            sum = sum +nums[i];

            while( i >= j && target <= sum){
                int size = i - j + 1;
                minSize = min(minSize , size);
            
                sum = sum - nums[j];
                j++;
            }
            i++;
        }

        if( minSize == INT_MAX){
            return 0;
        }
        return minSize;
    }
};