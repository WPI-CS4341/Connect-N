#include "tools.h"

using namespace std;

void Tools::error(string s) {
    cerr << s << endl;
}

void Tools::error(string format, int number) {
    fprintf(stderr, format.c_str(), number);
}

// Integer to string implementation by Bazzy at
// http://www.cplusplus.com/articles/D9j2Nwbp/
string Tools::itos(int i) {
    ostringstream converter;
    converter << i;
    return converter.str();
}

void Tools::log(string s) {
    ofstream ofs;
    ofs.open ("debug.log", ios::app);
    ofs << time(NULL) << ": " << s << endl;
    ofs.close();
}

void Tools::println() {
    cout << endl;
}

void Tools::println(string t) {
    cout << t << endl;
}

// String splitting based on implementation by patchouli found at
// http://code.runnable.com/VHb0hWMZp-ws1gAr/splitting-a-string-into-a-vector-for-c
vector<string> Tools::split(const string &str, char delimiter) {
    vector<string> internal;
    stringstream ss(str);
    string tok;
    while(getline(ss, tok, delimiter)) {
        internal.push_back(tok);
    }
    return internal;
}
