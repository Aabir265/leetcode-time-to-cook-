class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack <int> st1;
        int j = 0;
        for(int i = 0 ; i < pushed.size() ; i++){
             st1.push(pushed[i]);
            while(!st1.empty() && st1.top() == popped[j]){
                st1.pop();
                j++;
            }
            }




        return st1.empty();
        
    }
};