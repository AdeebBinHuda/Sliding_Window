class Solution {
public:
    int maxVowels(string s, int k) {
    
        int max_vowel= 0;
       int count=0;
        for(int i=0;i<k;i++){
               if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
               max_vowel+=1;
        }

          count = max_vowel;
          int i=0;
         int j=k-1;
         while(j<s.length()-1){
             if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')count--;
              if(s[j+1]=='a'|| s[j+1]=='e'|| s[j+1]=='i'|| s[j+1]=='o'|| s[j+1]=='u') count++;

              max_vowel= max(count, max_vowel);
              i++;
              j++;
         }
        
        return max_vowel;
    }
       
};