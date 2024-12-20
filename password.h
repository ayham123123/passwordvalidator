#ifndef PASSWORD_H
#define PASSWORD_H

#include <string>
using namespace std;

struct Password {
    string getKey() const { return user1; }
    void setKey(string newKey) { user1 = newKey; }

    int hash(const string& str) const {
        int val = 0;
        for (size_t i = 0; i < str.length(); i++) {
            val += str[i];
        }
        return val;
    }

    string user1;
    string pass1;
};

#endif // PASSWORD_H
