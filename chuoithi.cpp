#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void normText(const string& txt) {
    stringstream ss(txt);
    string line;
    string res;
    vector<string> sent;
    bool endSent = false;

    while (getline(ss, line)) {
        if (!line.empty()) {
            if (endSent && !line.empty() && res.back() != ' ') {
                res += ' ';
            }
            res += line;
            endSent = false;
            char lastChar = line.back();
            if (lastChar == '.' || lastChar == '!' || lastChar == '?') {
                endSent = true;
            }
        }
    }

    stringstream resStream(res);
    while (getline(resStream, line, '.')) {
        if (!line.empty()) {
            string s = line;
            while (s.find("  ") != string::npos) {
                s.replace(s.find("  "), 2, " ");
            }
            if (!s.empty() && islower(s[0])) {
                s[0] = toupper(s[0]);
            }
            sent.push_back(s);
        }
    }

    for (size_t i = 0; i < sent.size(); ++i) {
        if (i == sent.size() - 1) {
            cout << sent[i] << (endSent ? "" : ".") << endl;
        } else {
            cout << sent[i] << '.' << endl;
        }
    }
}

int main() {
    string txt;
    string line;

    while (getline(cin, line)) {
        txt += line + '\n';
    }

    normText(txt);

    return 0;
}
