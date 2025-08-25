#include <bits/stdc++.h>
using namespace std;

vector<string> permuteUnique(string s) {
    vector<string> result;
    sort(s.begin(), s.end());
    do {
        result.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    return result;
}

int main() {
    string s = "abc";
    vector<string> permutations = permuteUnique(s);

    cout << "[ ";
    for (int i = 0; i < permutations.size(); i++) {
        cout << "\"" << permutations[i] << "\"";
        if (i != permutations.size() - 1) cout << ", ";
    }
    cout << " ]" << endl;

    return 0;
}
