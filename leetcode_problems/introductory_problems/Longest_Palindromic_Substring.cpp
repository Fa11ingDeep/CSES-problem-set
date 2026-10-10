class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int maxLength = 1;

        for (int i = 0; i < s.size(); i++) {
            // impar
            int left = i;
            int right = i;

            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                int length = right - left + 1;

                if (length > maxLength) {
                    maxLength = length;
                    start = left;
                }

                left--;
                right++;
            }

            // par
            left = i;
            right = i + 1;

            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                int length = right - left + 1;

                if (length > maxLength) {
                    maxLength = length;
                    start = left;
                }

                left--;
                right++;
            }
        }

        return s.substr(start, maxLength);
    }
};