/*You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
*/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        int t=0;
        for(int i=0;i<m;i++){
            int s=0;
            for(int j=0;j<n;j++){
                s+=accounts[i][j];
                if(s>t){
                    t=s;
            }
            }
        }
        return t;
        
}
};
