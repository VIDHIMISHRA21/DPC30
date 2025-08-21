#include <bits/stdc++.h>
using namespace std;


int largestRectangleArea(vector<int>& heights) {
    stack<int> st; 
    int maxArea = 0;
    int n = heights.size();

    for (int i = 0; i <= n; i++) {
        int h = (i == n) ? 0 : heights[i]; // Treat beyond last as 0 height
        while (!st.empty() && h < heights[st.top()]) {
            int height = heights[st.top()];
            st.pop();
            int width = (st.empty()) ? i : (i - st.top() - 1);
            maxArea = max(maxArea, height * width);
        }
        st.push(i);
    }
    return maxArea;
}

int main() {
        vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}
;
    cout << "Largest Rectangle Area: " << largestRectangleArea(height) << endl;
    return 0;
}
