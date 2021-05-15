#include<iostream>
#include<vector>
#include<string>
using namespace std;

int findPartitions(string s) {
    vector<int> charCount(26,0);
    int uniqueChars = 0;
    for(char c : s) {
        if(charCount[c-'a'] == 0) {
            uniqueChars++;
        }
        charCount[c-'a']++;
    }
    
    vector<int> visitedCount(26,0);
    
    int partitions = 0;
    
    int uniqueVisitedChars = 0;
    
    for(int i=0;i<s.size();i++) {
        if(visitedCount[s[i]-'a'] == 0) {
            uniqueVisitedChars++;
        }
        visitedCount[s[i]-'a']++;
        charCount[s[i]-'a']--;
        
        if(charCount[s[i]-'a'] == 0) {
            uniqueChars--;
        }
  
        if(uniqueChars == uniqueVisitedChars) {
            partitions++;
        }
    }
    return partitions; 
}


int main() {
  string s = "[-1, 3, -1, 8, 5 4]";
  cout << findPartitions(s);
  return 0;
}