#include <bits/stdc++.h>
struct Element {
    int value;
    int index;
};

bool cmp(const Element& a, const Element& b) {
    return a.value < b.value;
}

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals) {
    int n = intervals.size();
    Element elements[n];
    for(int i = 0; i < n; i++) {
        elements[i].value = intervals[i][0];
        elements[i].index = intervals[i][1];
    }
    sort(elements, elements+n, cmp);
    vector<vector<int>> ans;
    int s = elements[0].value, e = elements[0].index;
    for(int i = 1; i < intervals.size(); i++){
        if(elements[i].value <= e){
            e = max(elements[i].index, e);
        } else {
            ans.push_back({s,e});
            s = elements[i].value;
            e = elements[i].index;
        }
    }
    ans.push_back({s,e});
    return ans;
}

 // leetcode solution
 class Solution {
public:
   vector<vector<int>> merge(vector<vector<int>>& intervals) {
      int n= intervals.size();
      if(n==0) return intervals;
      sort(intervals.begin(), intervals.end());
      vector<vector<int>>output;
      int s,e;
      for(int i=0;i<n;i++){
          s=intervals[i][0];
          e=intervals[i][1];
          while(i<n-1 and intervals[i+1][0]<=e) {
              e=max(e,intervals[i+1][1]);
               i++;
          }
        output.push_back({s,e});
      }  
      return output;
    }
};

/*
int main(void){
    int n,m; cin>>n>>m;
    vector<vector<int> > intervals;
    int val;
    for(int i = 0; i < n; i++){
        vector<int> temp;
        for(int j = 0; j < m; j++){
            cin >> val;
            temp.push_back(val);
        }
        intervals.push_back(temp);
        temp.clear();
    }
    vector<vector<int>>output=merge(intervals);
    for(int i=0;i<output.size();i++) {
        for(int j=0;j<output[i].size();j++) {
            cout<<output[i][j]<<" ";
        }
    }
    return (0);
}
*/