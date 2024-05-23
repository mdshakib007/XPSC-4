#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int freq[26] = {0};
    for (char c : s) {
        freq[c - 'A']++;
    }

    int oddCnt = 0, oddIdx = -1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            oddCnt++;
            oddIdx = i;
        }
    }
    
    if (oddCnt > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string firstHalf = "";
    char oddChar = '\0';

    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            oddChar = 'A' + i;
            freq[i]--;
        }
        firstHalf += string(freq[i] / 2, 'A' + i);
    }

    string secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());
    
    string result = firstHalf;
    if (oddChar != '\0') {
        result += oddChar;
    }
    result += secondHalf;

    cout << result << "\n";

    return 0;
}
