    char nonRepeatingChar(string &s) {
        vector<int>characters(26,0);
        int n = s.size();
        for(int i = 0;i < n;i++){
            characters[s[i] - 'a']++;
        }
        for(int i = 0;i < n;i++){
            if(characters[s[i] - 'a'] == 1) return s[i]; 
        }
        return '$';
    }
