class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }

        string zz;
        int cycle = 2 * numRows - 2;

        for (int row = 0; row < numRows; row++) {
            for (int j = row; j < s.size(); j += cycle) {
                zz.push_back(s[j]);

                if (row != 0 && row != numRows - 1) {
                    int diagonal = j + cycle - 2 * row;

                    if (diagonal < s.size()) {
                        zz.push_back(s[diagonal]);
                    }
                }
            }
        }

        return zz;
    }
};