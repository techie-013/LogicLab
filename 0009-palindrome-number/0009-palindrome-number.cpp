class Solution {
public:
    bool isPalindrome(int x) {
        int original_number=x;
        int last_digit=0;
        long long new_number=0;
        if(x<0){
            return false;
        }
        for(;x>0;){
            last_digit=x%10;
            new_number=new_number*10+last_digit;
            x=x/10;
        }
        if(new_number==original_number){
            return true;
        }
        else{
            return false;
        }
    }
};