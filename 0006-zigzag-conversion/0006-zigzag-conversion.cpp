
class Solution {
public:
    string convert(string s, int numRows) {
        
        // Special case: sirf ek row hai
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        // Har row ke liye alag string
        vector<string> rows(numRows);

        int currentRow = 0;
        int direction = 1;

        // Har character ko sahi row mein daalo
        for (int i = 0; i < s.length(); i++) {
            rows[currentRow] += s[i];

            // Pehli row par neeche jaana hai
            if (currentRow == 0) {
                direction = 1;
            }
            // Last row par upar jaana hai
            else if (currentRow == numRows - 1) {
                direction = -1;
            }

            currentRow += direction;
        }

        // Saari rows ko jodkar final answer banao
        string result = "";

        for (int i = 0; i < numRows; i++) {
            result += rows[i];
        }

        return result;
    }
};
