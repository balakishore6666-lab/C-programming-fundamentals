class Solution {
public:
    bool isHappy(int n) {
        int s=n;
        int f=n;
        while(true)
        {
            s=nextNum(s);
            f=nextNum(nextNum(f));
            if(s==f)
            break;
        }
        return s=1;
    }
    int nextNum(int x)
    {
    int sum=0;
    while(x>0)
    {
        int d=x%10;
        sum+=d*d;
        x=x/10;
    }
      return sum;
    }
      
};
