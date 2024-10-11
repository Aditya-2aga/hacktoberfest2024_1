#include <bits/stdc++.h>
using namespace std;

vector<int> search(string& pat, string& txt) {
    int n = txt.length(), m = pat.length();
  
    string sortedpat = pat;
    sort(sortedpat.begin(), sortedpat.end());
  
    vector<int> res;  
  
    for (int i = 0; i <= n - m; i++) {
      
        // renamed from temp to curr
        string curr = "";  
        for (int k = i; k < m + i; k++)
            curr.push_back(txt[k]);
        sort(curr.begin(), curr.end());
      
        /* checking if sorted versions are equal */
        if (sortedpat == curr)
            res.push_back(i);
    }
    return res;
}

int main() {
    string txt = "BACDGABCDA";
    string pat = "ABCD";
    vector<int> result = search(pat, txt);
  
    for (int idx : result)
        cout << idx << " ";
  
    return 0;
}
