class Solution {
public:
    double myPow(double x, int n) {
        bool positive = true;
        long long N=n;
        if(N<0) {
            positive=false;
            //n=-n;
             N=-N;
        };
        if(N==0) return 1;
        if(positive){
            if(N%2==0){
                double ans = myPow(x,N/2);
                return ans*ans;
            }else{
                double ans=myPow(x,N/2);
                return x*ans*ans;
            }
        }else{
            if(N%2==0){
                double ans=myPow(x,N/2);
                return 1.0/(ans*ans);
            }else{
                double ans=myPow(x,N/2);
                return (1.0/(ans*ans*x));
            }
        }
        return 1.0;

    }
};