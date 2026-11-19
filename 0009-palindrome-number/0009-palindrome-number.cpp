class Solution {
public:
    bool isPalindrome(int x) {
       int original_number=x;
       int last_digit=0;
       long long temp_number=0;
       if(x<0){
        return false;
       }
       for(;x>0;){
        last_digit=x%10;
        x=x/10;
        temp_number=temp_number*10+last_digit;
       }
       if(original_number==temp_number){
        return true;
       }
       else{
        return false;
       }
    }
};