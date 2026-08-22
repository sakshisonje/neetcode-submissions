class Solution {
public:
    bool isPalindrome(string& s) {

        int write = 0;

        // Remove non-alphanumeric characters
        // and convert uppercase to lowercase
        for (int read = 0; read < s.length(); read++) {

            if (isAlphaNumeric(s[read])) {
                s[write] = toLower(s[read]);
                write++;
            }
        }

        // Check palindrome
        int left = 0;
        int right = write - 1;

        while (left < right) {

            if (s[left] != s[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

private:
    bool isAlphaNumeric(char c) {
        return (c >= 'a' && c <= 'z') ||
               (c >= 'A' && c <= 'Z') ||
               (c >= '0' && c <= '9');
    }

    char toLower(char c) {
        if (c >= 'A' && c <= 'Z') {
            return c + ('a' - 'A');
        }
        return c;
    }
};