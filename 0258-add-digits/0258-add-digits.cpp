class Solution {
public:
    int addDigits(int num) {
        int last_digit;
        long long sum=0;
        while(num>9){
            sum=0;
        for(;num>0;){
            last_digit=num%10;
            sum=sum+last_digit;
            num=num/10;
        }
        num=sum;}
        return num;
        
    }
};