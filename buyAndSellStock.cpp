//  https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 int buy=prices[0];
        int sell=0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]<buy)
            {
                buy=prices[i];
            }
            if(prices[i]-buy>sell)
            {
                sell=prices[i]-buy;
            }
        }
        return sell;
