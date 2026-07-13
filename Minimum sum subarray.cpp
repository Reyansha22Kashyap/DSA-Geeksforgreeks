class Solution {
  public:
    int smallestSumSubarray(vector<int>& arr) {
        int i=0;
        int bestending=arr[0];
        int ans = arr[0];
        for(i=1;i<arr.size();i++){
            int v1=bestending+arr[i];
            int v2=arr[i];
            bestending=min(v1,v2);
            ans=min(ans,bestending);
        } 
          return ans;
        
    }
};
