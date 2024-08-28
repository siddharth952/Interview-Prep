import Foundation

/*
408. Valid Word Abbreviation
Description
A string can be abbreviated by replacing any number of non-adjacent, non-empty substrings with their lengths. The lengths should not have leading zeros.

"s10n" ("s ubstitutio n")
"sub4u4" ("sub stit u tion")
"12" ("substitution")
"su3i1u2on" ("su bst i t u ti on")
"substitution" (no substrings replaced)
The following are not valid abbreviations:

"s55n" ("s ubsti tutio n", the replaced substrings are adjacent)
"s010n" (has leading zeros)
"s0ubstitution" (replaces an empty substring)
Given a string word and an abbreviation abbr, return whether the string matches the given abbreviation.

A substring is a contiguous non-empty sequence of characters within a string.


Example 1:

Input: word = "internationalization", abbr = "i12iz4n"
Output: true
Explanation: The word "internationalization" can be abbreviated as "i12iz4n" ("i nternational iz atio n").
Example 2:

Input: word = "apple", abbr = "a2e"
Output: false
Explanation: The word "apple" cannot be abbreviated as "a2e".
 

Constraints:

1 <= word.length <= 20
word consists of only lowercase English letters.
1 <= abbr.length <= 10
abbr consists of lowercase English letters and digits.
All the integers in abbr will fit in a 32-bit integer.
*/


// word = "internationalization", abbr = "i12iz4n"
// We will use two pointers at word start and abbr start
// When we see char we just compare 
// When we see a digit we loop till we get to the end of that digit then we move the word ptr
// At the end we just look at the if both ptrs are at there corresponding ends
// For the digit we can just mult by 10 each time
// 12 -> 1 + 2 * 10 
func checkAbre(_ word: String, _ abbr: String) -> Bool {
  var (i,j) = (0,0)
  let wordArr = Array(word)
  let abbrArr = Array(abbr)

  while i < word.count && j < abbr.count {
    
    if wordArr[i] == abbrArr[j] {
      i += 1
      j += 1
      continue
    } else if abbrArr[j].isNumber {
      var currNum = 0
      while j < abbrArr.count && abbrArr[j].isNumber {
        // Edge case for leading 0
        if abbrArr[j]  == "0" && currNum == 0 {
          return false
        }
        currNum = currNum * 10 + Int(String(abbrArr[j]))! 
        j += 1
      }
      // Increase the i count with the currNum we just got
      i += currNum
    } else {
      return false
    }
  }

  return (i == word.count && j == abbr.count)
}

print(checkAbre("apple", "ap2eeeee"))
