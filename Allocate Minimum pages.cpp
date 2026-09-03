class Solution {
  public:
  
   bool fun(vector<int>& books,int n,long long limit,int stud){
      int k=1;
      long long page=0;
      for(int i=0;i<n;i++){
          if(page+books[i]<=limit){
              page=page+books[i];
          }else{
              k++;
              page=books[i];
              if(k>stud)
                 return false;
          } 
      } 
            return true;
  }
    int findPages(vector<int> &books, int stud) {
        // code here
        int n=books.size();
        if(n<stud)
        return -1;
        long long low=0,high=0;
        for(int i=0;i<n;i++){
            low=max(low,(long long)books[i]);
            high+=books[i];
        } 
        long long res=-1;
        while(low<=high){
            long long guess=(low+high)/2;
            if(fun(books,n,guess,stud)){
                res=guess;
                high=guess-1;
            }else{
                low=guess+1;
            }
        } 
              return res;
    }
};
