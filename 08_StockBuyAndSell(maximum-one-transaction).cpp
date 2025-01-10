    int maximumProfit(vector<int> &prices) {
        int tempMin=prices[0],profit =0;
        for(int i = 0;i < prices.size();i++){
           tempMin = min(tempMin,prices[i]);
           profit = max(profit,prices[i] - tempMin);
        }
        return profit;
    }

