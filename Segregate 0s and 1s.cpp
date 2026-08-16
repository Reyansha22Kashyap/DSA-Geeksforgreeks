class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<high){
            if(arr[low]==0){
                low++;
            }else if(arr[low]==1){
                swap(arr[low],arr[high]);
                high--;
            }
        }
    }
};
