// ques - https://leetcode.com/problems/reverse-words-in-a-string-iii/submissions/

class Solution:
    def reverseWords(self, s: str) -> str:
        
        l=s.split(" ")
        
        t=""
        
        for i in range(len(l)):
            for j in range(len(l[i])):
                t+=l[i][len(l[i])-j-1]
            t+=" "
            
        
        t=t[:len(t)-1]
        
        return t
