//My soln 
class Solution
{
   public:
    int findSum(int A[], int N)
    {
        int max=A[1],min=A[1];
        for(int i=0;i<N;i++){
            if(A[i]<min){
                min=A[i];
            }
            if(A[i]>max){
                max=A[i];
            }
        }
        return min+max;
    }
  

};

//Opt Soln
class Solution
{
   public:
    int findSum(int A[], int N)
    {
        int maxima = INT_MIN;
        int minima = INT_MAX;
        for(int i=0; i<N; i++) {
            maxima = max(maxima,A[i]);
            minima = min(minima,A[i]);
        }
        return maxima+minima;
    }

};
