int maxActiveSectionsAfterTrade(char* s) {
    int ans = 0, pre = -1000000, mx = 0;
    int n = strlen(s);

    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && s[j] == s[i])
            j++;

        int cnt = j - i;

        if (s[i] == '1')
            ans += cnt;
        else {
            if (pre + cnt > mx)
                mx = pre + cnt;
            pre = cnt;
        }

        i = j;
    }

    return ans + mx;
}