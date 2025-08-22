#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string s = "the sky is blue";
    stringstream ss(s);
    string w;
    vector<string> v;
    while (ss >> w) v.push_back(w);
    for (int i = v.size()-1; i >= 0; i--) {
        cout << v[i];
        if (i > 0) cout << " ";
    }
}
