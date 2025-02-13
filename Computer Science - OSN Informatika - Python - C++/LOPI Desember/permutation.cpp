#include <bits/stdc++.h>
using namespace std;

// Function to print permutations of the string
// This function takes two parameters:
// 1. String
// 2. Starting index of the string.
void permuteRec(string s, int idx)
{
    // Base case
    if (idx == s.size() - 1) {
        cout << s ;
        return;
    }

    for (int i = idx; i < s.size(); i++) {
      
        // Swapping 
        swap(s[idx], s[i]);

        // First idx+1 characters fixed
        permuteRec(s, idx + 1);

        // Backtrack
        swap(s[idx], s[i]);
    }
}

// Wrapper function
void permute(string s) {
    permuteRec(s, 0);
}

int main(){
    string s = "AKU";
    permute(s);
    cout<<s<<endl;
    return 0;
}