#include<iostream>
#include<queue>
#include<string> // Include string header

using namespace std;

void FirstNonRepeat(string str) {
    queue<char> q;
    int freq[26] = {0}; // Frequency array to count occurrences of characters

    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];
        q.push(ch);
        freq[ch - 'a']++;

        // Pop from queue until front is not repeated
        while (!q.empty() && freq[q.front() - 'a'] > 1) {
            q.pop();
        }

        // If queue is empty, no non-repeating character
        if (q.empty()) {
            cout << "-1 ";
        } else {
            cout << q.front() << " ";
        }
    }
    cout << endl; // To ensure output ends with a new line
}

int main() {
    string str = "aabccxb";
    FirstNonRepeat(str);
    return 0;
}
