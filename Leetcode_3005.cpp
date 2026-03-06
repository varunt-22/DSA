// LeetCode: Count Elements With Maximum Frequency
// Difficulty: Easy
// Date: 06-03-2026
// Learned: Using hashmap for O(n)
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq(101,0);

        for(auto it:nums)
        {
            freq[it]+=1;
        }

        int maxFreq=0;
        for(int i=0;i<=100;i++)
        {
            maxFreq=max(maxFreq, freq[i]);
        }
        int ans=0;
        for(int i=0;i<=100;i++)
        {
            if(maxFreq==freq[i])
            {
                ans+=freq[i];
            }
        }
        return ans;
    }
};