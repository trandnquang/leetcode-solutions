// 28. Find the Index of the First Occurrence in a String
// Complete with 100% runtime and 57% memory
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int strStr(string haystack, string needle) {
    for (int i = 0; i < haystack.length(); i++) {
        if (haystack[i] == needle[0] && i + needle.length() <= haystack.length() && haystack.substr(i, needle.length()).compare(needle) == 0) {
            return i;
        }
    }
    return -1;
}