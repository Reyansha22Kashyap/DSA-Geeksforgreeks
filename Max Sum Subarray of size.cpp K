class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int low=0;
        int high=k-1;
        int res=0;
        int sum=0;
        for(int i=0;i<=high;i++){
            sum=sum+arr[i];
        }
        while(high<arr.size()){
            res=max(res,sum);
            low++;
            high++;
            sum=sum-arr[low-1];
         if(high==arr.size()){
            break;
        }
        sum=sum+arr[high];
        }
        return res;
        
        
    }
};
