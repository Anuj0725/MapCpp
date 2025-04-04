class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0; 

        unordered_set<int> set(nums.begin(), nums.end()); 
        int maxl = 0;

        for(int num : set) {
            if(set.find(num - 1) == set.end()) {
                int currentNum = num;
                int length = 1;

                while(set.find(currentNum + 1) != set.end()) {
                    currentNum++;
                    length++;
                }

                maxl = max(maxl, length);
            }
        }

        return maxl;
    }
};
