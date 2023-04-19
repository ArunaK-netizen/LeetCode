bool isPalindrome(char *s) {
    int len = strlen(s);
    int i = 0, j = len - 1;
    while (i < j) {
        s[i] = tolower(s[i]);
        s[j] = tolower(s[j]);

        if (!isalnum(s[i])) {
            i++;
            continue;
        }
        if (!isalnum(s[j])) {
            j--;
            continue;
        }
        if (s[i] != s[j]) {
            return false;
        }

        i++;
        j--;
    }
    return true;
}

//medium