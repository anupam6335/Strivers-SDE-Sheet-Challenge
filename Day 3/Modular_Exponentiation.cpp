#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	long ans=1;
	long xx=x;

	while(n>0) {
		if(n%2!=0) {
			ans=((ans)%m*(xx)%m)%m;
		}
		xx=((xx)%m*(xx)%m)%m;
		n=n>>1;
	}

	return (int)(ans%m);

}

// leetcode solution

class Solution {
    double pow(double x, int n) {
        
        if(n == 0) return 1;
        
        if(n == 1) return x;
        
        
        
        double ans = pow(x,n/2);
        
        if(n&1) return x*ans*ans;
        else return ans*ans;
    }
public:
    double myPow(double x, int n) {
        
        if(n < 0) return 1/pow(x,n);
        return pow(x,n);
    }
};