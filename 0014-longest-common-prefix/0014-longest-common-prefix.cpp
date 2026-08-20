class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        sort(strs.begin(), strs.end()); //Sort the array
        string first = strs[0]; //First element
        string last = strs[strs.size() - 1]; //Last element
        for(int i = 0; i < first.length(); i ++) {
            if (first[i] != last[i])
                break;
            result += first[i];
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna