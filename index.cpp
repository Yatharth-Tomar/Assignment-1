#include <iostream>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s) {
   
    unordered_map<char, int> charFreq;


    for (char c : s) {
        charFreq[c]++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (charFreq[s[i]] == 1) {
            return i;
        }

    return -1;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int result = firstUniqChar(input);
    cout << "Index of the first unique character: " << result << endl;

    return 0;
}
