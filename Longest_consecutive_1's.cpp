class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        // code here
        int maxx = 0;
        int ans = 0;
        while(N!=0){
            if(N&1 == 1){
                maxx++;
            }
            else{
                maxx = 0;
            }
            ans = max(ans,maxx);
            N = N>>1;
        }
    }
};
