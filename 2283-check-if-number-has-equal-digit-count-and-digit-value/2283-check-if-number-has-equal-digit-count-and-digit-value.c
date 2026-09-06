
bool digitCount(char* num) {
    int n = strlen(num);
    int a[10] = {0};
    for (int i = 0; i < n; i++) {
        a[num[i] - '0']++;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != (num[i] - '0')) {
            return false;
        }
    }
    return true;
}