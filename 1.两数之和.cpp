//hashmap   （unordered_map in c++11)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mapp;
        int len=nums.size();
        for (int i=0;i<len;i++)
        {
            unordered_map<int,int>::iterator it;
            it=mapp.find(target-nums[i]);
            if(it!=mapp.end()&&it->second!=i){
                return (vector<int>({it->second,i}));
            }
            mapp[nums[i]]=i;  //没找到，将该位置的数加入到hashmap中
        }
        return {};
    }
};
