class Solution {
public:
    int maxArea(vector<int>& height) {
    int n = height.size();
    long long ans = 0;
    int i = 0, j = n - 1;
    while (i < j) {
        int width = j - i;
        int h = min(height[i], height[j]);
        ans = max(ans, (long long)width * (long long)h);
        if (height[i] < height[j]) {
            i++;
        } else {
            j--;
        }
    }
    return ans;

    }
};
