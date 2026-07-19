char* longestPalindrome(char* s) {
    int n = strlen(s), start = 0, max = 1;

    for (int i = 0; i < n; i++) {
        for (int l = i, r = i; l >= 0 && r < n && s[l] == s[r]; l--, r++)
            if (r - l + 1 > max) max = r - l + 1, start = l;

        for (int l = i, r = i + 1; l >= 0 && r < n && s[l] == s[r]; l--, r++)
            if (r - l + 1 > max) max = r - l + 1, start = l;
    }

    char *ans = (char*)malloc(max + 1);
    strncpy(ans, s + start, max);
    ans[max] = '\0';
    return ans;
}