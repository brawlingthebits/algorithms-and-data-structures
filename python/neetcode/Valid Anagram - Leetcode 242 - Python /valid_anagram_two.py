# https://youtu.be/9UtInBqnCgA
# given two strings s and t, return true if t is an anagrammm of s, and false otherwise. 

# Example 1:
# Input: s = "anagram", t = "nagaram"
# Output: true

# Example 2:
# Input: s = "rat", t = "car"
# Output: false

# Different from the first solution, this one does not have the problem of
# time limit exceeded.

class Solution:
  def isAnagram(self, s:str, t:str) -> bool:
    return sorted(s) == sorted(t)

print(Solution().isAnagram("anagram", "nagaram"))
print(Solution().isAnagram("rat", "car"))
print(Solution().isAnagram("a", "ab"))
print(Solution().isAnagram("ab", "a"))
print(Solution().isAnagram("ab", "ba"))
print(Solution().isAnagram("ab", "abc"))