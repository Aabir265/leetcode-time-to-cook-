class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time_taken = 0;
        for(int i = 0 ; i < tickets.size() ; i++){
            if(i <= k){
                time_taken += min(tickets[i] , tickets[k]);
            }
            else{
                time_taken += min(tickets[i] , tickets[k] -1);
        }
        
    }
    return time_taken;
    }
};
