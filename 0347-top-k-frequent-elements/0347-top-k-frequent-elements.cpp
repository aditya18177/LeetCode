class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> frq;
        for(int n:nums){
            frq[n]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for (auto& [num, count] : frq) {
            minHeap.push({count, num});
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
        vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return result;
    }
};