class Solution {
public:
    string st;
    string convertToTitle(int n) {
        if(n>26){
            if( n % 26 == 0){
                convertToTitle(n/26 -1);
                st +=char(((n%26 == 0)? 26 : n%26) +64);
            }
            else{
                convertToTitle(n/26);
                st +=char(((n%26 == 0)? 26 : n%26) +64);
            }
        }
        else
            st +=char(((n%26 == 0)? 26: n%26)+64);
        
        return st;
    }
};
