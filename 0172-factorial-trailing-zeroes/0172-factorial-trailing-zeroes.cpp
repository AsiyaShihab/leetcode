class Solution {
public:
    int trailingZeroes(int n) {
        int fact =1;
        int count=0;
        for(int i=1;i<=n;i++)
        fact*=i;

    while(fact%10==0){
    count++;
    fact/=10;
    }
    return count;
}};