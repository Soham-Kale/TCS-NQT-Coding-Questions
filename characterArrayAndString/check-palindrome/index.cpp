class Solution {
private:

// check if the character is valid or not
bool validCharacter(char ch) {
    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') ) {
        return 1;
    }
    return 0;
}

// convert uppercase to lowercase
char toLowerCase(char ch) {
    if( (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') ) {
        return ch;
    } else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

// check if the string is palindrome or not
bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s < e) {
        if(a[s] != a[e]) {
            return false;
        } else {
            s++;
            e--;
        }
    }
    return true;
}

public:
    bool isPalindrome(string s) {
        // faltu charcter hatado
        string temp;

        for(int j=0; j<=s.length(); j++) {
            if(validCharacter(s[j])) {
                temp.push_back(s[j]);
            }
        } 

        for(int j=0; j<temp.length(); j++) {
            temp[j] = toLowerCase(temp[j] );
        }

        return checkPalindrome(temp);
    }
};