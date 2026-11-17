class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        int flag=1;
        int temp=x;
        if(x<0)
        {
            x=(-1)*x;
            flag=-1;
        }
        while(x!=0)
        {
            int rem= x%10;
            ans=ans*10 + rem;
            if(ans<=INT_MIN || ans>=INT_MAX)
            {
                return 0;
            }
            
            x=x/10;
        }
        if(temp<0)
        {
            return flag*ans;
        }
        return ans;
    }
};
