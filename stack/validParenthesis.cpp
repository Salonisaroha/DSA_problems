#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool isValid(string str) {
    stack<char> s;
    for(int i = 0; i < str.size(); i++) {
        char ch = str[i];

        // Push the opening brackets
        if(ch == '(' || ch == '[' || ch == '{') {
            s.push(ch);
        }
        else {
            // If stack is empty or the top doesn't match the closing bracket
            if(s.empty()) {
                return false;
            }

            char top = s.top();
            if((top == '(' && ch == ')') || (top == '[' && ch == ']') || (top == '{' && ch == '}')) {
                s.pop();
            } else {
                return false;
            }
        }
    }
    
    // In the end, stack should be empty if all brackets matched
    return s.empty();
}

int main() {
    string str = "([}])";
    string str1 = "([{}])";
    
    cout << isValid(str) << endl;  // Output: 0 (false)
    cout << isValid(str1) << endl; // Output: 1 (true)

    return 0;
}
