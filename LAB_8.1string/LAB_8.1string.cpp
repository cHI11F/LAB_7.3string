#include <iostream>
#include <string>
using namespace std;

int Count(const string& str)
{
    return count(str.begin(), str.end(), '+') +
        count(str.begin(), str.end(), '-') +
        count(str.begin(), str.end(), '=');
}

string Change(const string& str)
{
    string modified = str;
    size_t pos = 0;
    while ((pos = modified.find_first_of("+-=", pos)) != string::npos) {
        modified.replace(pos, 1, "**");
        pos += 2; 
    }
    return modified;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "String contained " << Count(str) << " groups of '+ - ='" << endl;
    string modified = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << modified << endl;
    return 0;
}
