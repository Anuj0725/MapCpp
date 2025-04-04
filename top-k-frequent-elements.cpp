class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        for(int n : nums){
            freq[n]++;
        }
        
        priority_queue<pair<int, int>> max;  

        for (auto& pair : freq) {
            max.push({pair.second, pair.first});  
        }

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(max.top().second);
            max.pop();
        }

        return result;
    }
};
