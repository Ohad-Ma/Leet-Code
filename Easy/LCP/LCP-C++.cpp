#include <vector>
#include <algorithm>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string ans = "";
        // First sort the vector
        sort(strs.begin(),strs.end());

        // First location
        std::string a = strs[0];
        // End location
        std::string b = strs[strs.size()-1]; 

        // Find the smaller string to compare the strings
        int smaller = a.size() < b.size() ? a.size() : b.size(); 
        
        // Check for strings equality
        for (int i = 0; i < smaller; i++)
        {
            if (a[i] == b[i])
            {
                ans += a[i];
            }
            
        }
        
        return ans;
    }
    
};