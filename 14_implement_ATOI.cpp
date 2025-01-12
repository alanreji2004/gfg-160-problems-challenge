    int myAtoi(char *s) {
        int sign = 1,result = 0,index = 0;
        while(s[index] == ' '){
            index++;
        }
        
        if(s[index] == '+' || s[index] == '-'){
            if(s[index] == '-') sign = -1;
            index++;
        }
        
        while(s[index] >= '0' && s[index] <= '9'){
            if(result > INT_MAX / 10 || (result < INT_MIN / 10 && s[index] - '0' > 7)){
                return sign == 1?INT_MAX:INT_MIN;
            }
            result = result * 10 + (s[index] - '0');
            index++;
        }
        
        result = result * sign;
        return result;
    }
