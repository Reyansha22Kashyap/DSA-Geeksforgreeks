class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
          int n=arr.size();
          sort(arr.begin(),arr.end());
          
          int ans=0;
          
          for(int i=0;i<n-1;i++){
              int left=i+1;
              int right=n-1;
              
              while(left<right){
                  int cal_sum=arr[i]+arr[left]+arr[right];
                  if(cal_sum<sum){
                    ans+=right-left;
                    left++;
                  }else{
                      right--;
                  }
              }
          } 
          
           return ans;
        
    }
};
