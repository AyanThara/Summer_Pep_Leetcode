class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy=prices[0];//start the 0th element as best buy
        int n=prices.size();//run till sizes of the arrray
        int maxprofit=0;//start maxprofit with 0
        for(int i=0;i<n;i++){//run till n 
            if(prices[i]>bestbuy){//chance of profit
                maxprofit=max(maxprofit,prices[i]-bestbuy);//calculate maxprofit
            }else{
                if(bestbuy>prices[i])//if bestbuy is bigger than current element that bestbuy should be replaced
                bestbuy=min(prices[i],bestbuy);
            }
        }
       return maxprofit;//return maxprofit
    }
};
