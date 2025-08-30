// 58. Length of Last Word
// Complete with 100% runtime and 66% memory
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int lengthOfLastWord(string s) {
    int count = 0;
    int curr = s.length() - 1;
    while (s[curr] == ' ') {
        curr--;
    }

    while (s[curr] != ' ') {
        count++;
        if (curr == 0) break;
        curr--;
    }

    return count;
}

int main() {
    string text = "   fly me   to   the moon  ";
    cout << lengthOfLastWord(text);
}