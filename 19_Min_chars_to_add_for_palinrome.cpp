vector<int> constructLps(string &s){
        int n = s.size();
        vector<int> lps(n);
        lps[0] = 0;
        int i = 1,len = 0;
        
        while(i < n){
            if(s[i] == s[len]){
                len++;
                lps[i] = len;
                i++;
            }
            else{
                if(len != 0) len = lps[len- 1];
                else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }
  
    int minChar(string& s) {
        string rev = s;
        int n = s.size();
        reverse(rev.begin(),rev.end());
        
        s = s + "$" + rev;
        
        vector<int> lps = constructLps(s);
        
        return (n - lps.back());
        
    }
