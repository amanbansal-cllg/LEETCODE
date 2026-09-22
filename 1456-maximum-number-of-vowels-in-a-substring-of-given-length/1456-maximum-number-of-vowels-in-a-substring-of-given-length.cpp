class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u';
    }
    
    int maxVowels(string s, int k) {
        int maxi = INT_MAX;
        int count = 0;

        for (int i =0;i<k;i++){
            if (isVowel(s[i])){
            count++;
            }
        }
        maxi = count;


        for (int j = k;j<s.size();j++){
            if (isVowel(s[j-k])){
                count--;
            }
            if (isVowel(s[j])){
                count++;
            }
            maxi = max(count,maxi);
        }
        return maxi;

    }
};