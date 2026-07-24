class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy=prices[0];
        int n=prices.size();
        int maxprofit=0;
        for(int i=0;i<n;i++){
            if(prices[i]>bestbuy){
                maxprofit=max(maxprofit,prices[i]-bestbuy);//chance of profit
            }else{
                if(bestbuy>prices[i])
                bestbuy=min(prices[i],bestbuy);
            }
        }
    return maxprofit;
    }
};