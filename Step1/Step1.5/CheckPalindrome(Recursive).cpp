bool checkPalindrome(string s, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (s[start] != s[end]) {
        return false;
    }
    return checkPalindrome(s, start + 1, end - 1);
}
bool isPalindrome(string &str) {
    return checkPalindrome(str, 0, str.length() - 1);
}
