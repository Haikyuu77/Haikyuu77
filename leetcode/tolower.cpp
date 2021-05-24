class Solution {
public:
    string toLowerCase(string s) {
        
        int l = s.size();
        int asci = 0;
        for(int i = 0;i<l;i++){
            
            if(isupper(s[i])){
                
                asci = int(s[i]);
                
                if(asci < 97){
                    
                    asci = asci+32;
                    
                }s[i] = char(asci);
                
            }
        }
        return s;
        
    }
};
