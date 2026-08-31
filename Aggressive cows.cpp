class Solution {
  public:
  bool fun(vector<int>& stalls,int n,int k,int guess){
      int cow=1;
      int i;
      int pos=stalls[i];
      for(int i=1;i<n;i++){
          int dist=stalls[i]-pos;
          if(dist<guess){
              continue;
          }
          cow++;
          pos=stalls[i];
      } 
      if(cow>=k){
          return true;
      }else{
          return false;
      }
  }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int low=1,high=stalls[n-1]-stalls[0],res=-1;
        while(low<=high){
            int guess=(low+high)/2;
            if(fun(stalls,n,k,guess)){
                res=guess;
                low=guess+1;
            }else{
                high=guess-1;
            }
        } 
          return res;
        
    }
};
