class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
		    set<char> se;        //使用set保存当前非重复的子串 
        int i=0,j=0,max=0,len=s.length();
        while(i<len&&j<len)
        {
        	if(se.find(s[j])==se.end()){
                max=j-i+1>max?j-i+1:max;
                se.insert(s[j]);
        		    j++;
        	} 
        	else{
        		se.erase(s[i]);
        		i++;
        	}
        }
        return max;
    }
};
