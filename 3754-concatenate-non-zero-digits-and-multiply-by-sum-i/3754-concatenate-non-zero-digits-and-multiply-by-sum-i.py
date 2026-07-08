class Solution:
    def sumAndMultiply(self, n: int) -> int:
        
        x = 0
        string11 = ""

        for letter in str(n):
            if letter != "0":
                string11 += letter
                x += int(letter)

        if string11 == "": return 0

        return int(string11) * x