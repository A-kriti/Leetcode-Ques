
#include <bits/stdc++.h>

using namespace std;

int knapsack(vector<int>val,vector<int>wt,int W,int n){
    
    if(n==0 || W==0)return 0;
    
    if(wt[n-1]<=W){
        
        return max((val[n-1]+knapsack(val,wt,W-wt[n-1],n-1)),knapsack(val,wt,W,n-1));
    }
    
    else if(wt[n-1]>W)return knapsack(val,wt,W,n-1);
    
    return 0;
}

int main()
{
    // int n=4;
    // vector<int>val={1,3,4,5};
    // vector<int>wt={1,4,5,7};
    // int W=7;
    int n=3;
    vector<int>val={60, 100, 120};
    vector<int>wt={10, 20, 30};
    int W=50;
    
    cout<<knapsack(val,wt,W,n);

    return 0;
}
