bool check_Palindrome(string s, int start, int end){
    while(start <= end){
        if(s[start] != s[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}

bool valid_Palindrome(string s, int start, int end){
    start = 0; 
    end = s.length() - 1;
    while(start < end){
        if(s[start] == s[end]){
            start++;
            end--;
        }
        else{
            bool answer = check_Palindrome(s, start+1, end);
            bool answer2 = check_Palindrome(s, start, end-1);
            return answer || answer2;
        }
    }
    return true;
}