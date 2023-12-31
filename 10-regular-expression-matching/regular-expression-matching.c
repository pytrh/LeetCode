bool isMatch(char* s, char* p) {
    if (*p == '\0') return *s == '\0';
    bool first_match = *s && (*s == *p || *p == '.');
    if (*(p+1) == '*') {
        return isMatch(s, p+2) || (first_match && isMatch(++s, p));
    } else {
        return first_match && isMatch(++s, ++p);
    }
}