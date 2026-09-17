class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int flips = 0;
        queue <int> q;
        for(int i = 0 ; i < nums.size() ; i++){
            if(!q.empty() && q.front() == i){
                q.pop();
            }
            if((nums[i] + q.size()) % 2 == 0){
                if(i + k > nums.size()){
                    return -1;
                }
                flips++;
                q.push(i+k);
            }
        }
        return flips;
    }
};