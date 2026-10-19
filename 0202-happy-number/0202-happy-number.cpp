class Solution {
public:
    bool isHappy(int n) {
        long long original_number=n;
        long long sum = 0;
        long long last_digit=0;
        while(n != 1 && n!=4){
            sum=0;
            for(;n>0;){
            last_digit=n%10;
            sum=sum + (pow(last_digit,2));
            n=n/10;}
            n=sum;   
        }
        if(n==1){
            return true;
        }
        else{
            return false;
        }
        
    }
};