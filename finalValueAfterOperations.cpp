class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int negative=0;
        int positive=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="--X" || operations[i]=="X--")negative++;
            else {
                positive++;
            }
            
        }
        return positive-negative;
    }
};
