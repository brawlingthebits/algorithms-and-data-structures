# https://youtu.be/9UtInBqnCgA
# given two strings s and t, return true if t is an anagrammm of s, and false otherwise. 

# Example 1:
# Input: s = "anagram", t = "nagaram"
# Output: true

# Example 2:
# Input: s = "rat", t = "car"
# Output: false

# We can start with hash maps. 
# We can create a hash map for each string and compare the two.
# If the two hash maps are the same, then we return true.
# If the two hash maps are not the same, then we return false.


class Solution:
  def isAnagram(self, s:str, t:str) -> bool:

  # return Counter(s) == Counter(t)
  # who is counter?
  # Counter is a dict subclass for counting hashable objects.
  # It is an unordered collection where elements are stored as dictionary keys and their counts are stored as dictionary values.
  # Counts are allowed to be any integer value including zero or negative counts.
  # The Counter class is similar to bags or multisets in other languages.
  # Elements are counted from an iterable or initialized from another mapping (or counter)
  # Counter objects have a dictionary interface except that they return a zero count for missing items instead of raising a KeyError.

    if len(s) != len(t):
      return False 
    
    countS, countT = {}, {}

    for i in range(len(s)):
      countS[s[i]] = 1 + countS.get(s[i],0)
      countT[t[i]] = 1 + countT.get(t[i],0)
    for c in countS:
      if countS[c] != countT.get(c,0):
        return False
      
    return True
  
print(Solution().isAnagram("anagram", "nagaram"))
print(Solution().isAnagram("rat", "car"))
print(Solution().isAnagram("a", "ab"))
print(Solution().isAnagram("ab", "a"))
print(Solution().isAnagram("ab", "ba"))
print(Solution().isAnagram("ab", "abc"))