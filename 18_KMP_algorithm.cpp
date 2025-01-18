  void makeLps(string &pat,vector<int> &lps){
        int len = 0;
        lps[0] = 0;
        int i = 1;
        int n = pat.size();
        while(i < n){
            if(pat[i] == pat[len]){
                len++;
                lps[i] = len;
                i++;
            }
            else{
                if(len != 0) len = lps[len-1];
                else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
    
    vector<int> search(string& pat, string& txt) {
        int m = txt.size();
        int n = pat.size();
        
        vector<int> lps(n);
        vector<int> result;
        
        makeLps(pat,lps);
        
        int i = 0,j = 0;
        
        while(i < m){
            if(pat[j] == txt[i]){
                i++;
                j++;
                if(j == n){
                    result.push_back(i-j);
                    j = lps[j - 1];
                }
            }
            else{
                if(j !=0) j = lps[j - 1];
                else i++;
            }
        }
        return result;
    }
