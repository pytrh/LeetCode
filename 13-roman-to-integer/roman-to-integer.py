class Solution:
    def romanToInt(self, s: str) -> int:
        a = 0;
        i = 0
        while i < len(s):
                if (s[i] == 'I') :
                    if i != len(s)-1:
                        if s[i+1] =='V':
                            a+= 4
                            i += 1
                        elif s[i+1] =='X':
                            a+= 9
                            i += 1
                        else: a+= 1
                    else: a+= 1
                    i += 1
                elif s[i] == 'V':
                        a+= 5
                        i += 1
                elif s[i] == 'X':
                     if i != len(s)-1:
                        if s[i+1] =='L':
                            a+= 40
                            i += 1
                        elif s[i+1] =='C':
                            a+= 90
                            i += 1
                        else: a+= 10
                     else: a+= 10
                     i += 1
                elif s[i] == 'L':
                        a+= 50
                        i += 1
                elif s[i] == 'C':
                     if i != len(s)-1:
                        if s[i+1] =='D':
                            a+= 400
                            i += 1
                        elif s[i+1] =='M':
                            a+= 900
                            i += 1
                        else: a+= 100
                     else: a+= 100
                     i += 1
                elif s[i] == 'D':
                        a+= 500
                        i += 1
                elif s[i] == 'M':
                        a+= 1000
                        i += 1
        return a