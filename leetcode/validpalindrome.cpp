class Solution {
public:
    bool isPalindrome(string s) 
    {
        string y;
        int i =0,k=s.length()-1;
        //function to remove unwanted symbols and spaces
        for(char x:s)
        {
            if(isalpha(x) || isdigit(x))
            {
                s[i] = x;
                i++;
            }
        }
        int l = i;//lenght of filtered string
        transform(s.begin(), s.end(), s.begin(), ::tolower);//to lower case
        //function to check for palindrome
        for(i=0;i<l/2;i++)
        {
            if(s[i]!=s[l-i-1])
                break;
        }
        if(i==l/2)
            return true;
        else
            return false;
    }
};
