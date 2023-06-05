class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lastInc = -1;
        int i=1;
        int n=prices.size();
        int minSoFar=prices[0]; int mx=0;
        while (i < n)
        { 
            if (prices[i] > prices[i - 1])
                lastInc = i;
            i += 1;
        }
        if(lastInc == -1)return 0;

        else {
            for(int i=0; i<n;i++){
                minSoFar =min(prices[i],minSoFar);
                mx=max(mx,prices[i]-minSoFar);
            }
        }
        return mx;
    }
};