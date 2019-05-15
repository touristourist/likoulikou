class Solution {
public:
    //dp[i]表示一定要打劫第i家（前i-1家任意定但不能选第i-1家） 的最大值
    //类比核电站题或者最大上升子序列的思想
    int dp[1000];
    int rob(vector<int>& nums) {
        memset(dp,0,sizeof(dp));
        int max=-10000;
        int len=nums.size();
        if(len==0) return 0;
        for(int i=0;i<len;i++)
            dp[i]=nums[i];
        
        for(int i=0;i<len;i++){
            int ma=-1000;
            for(int j=0;j<i-1;j++){
                ma=ma>(dp[j]+nums[i])?ma:(dp[j]+nums[i]);
                // cout<<ma<<endl;
            }
            dp[i]=ma>dp[i]?ma:dp[i];
            max=max>dp[i]?max:dp[i];
            // cout<<"max "<<max<<endl;
        }
        return max;
    }
};
