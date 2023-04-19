class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        else{
           long long int temp = 0;
           int a = x;
            while(a!=0){
                int rem = a % 10;
                temp = temp * 10 + rem;
                a = a/10;
            }
            if(temp == x){
                return 1;
            }
            

        }
        return 0;
    }
};

//easy