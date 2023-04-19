bool isPalindrome(char* s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return false;
        }
    }
    return true;
}

bool isStrictlyPalindromic(int n) {
    char numStr[32];
    for (int base = 2; base <= n - 2; base++) {
        int num = n;
        int idx = 0;
        while (num > 0) {
            int rem = num % base;
            num /= base;
            numStr[idx++] = rem < 10 ? rem + '0' : rem - 10 + 'a';
        }
        numStr[idx] = '\0';
        if (!isPalindrome(numStr)) {
            return false;
        }
    }
    return true;
}

//medium