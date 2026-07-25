int maxProfit(int* prices, int pricesSize) {
    int mini=prices[0];
    int profit=0;
    int cost;
    for(int i=0;i<pricesSize;i++){
        cost=prices[i]-mini;
        if(cost>profit){
            profit=cost;
        }
        if(prices[i]<mini){
            mini=prices[i];
        }
    }
    return profit;
}