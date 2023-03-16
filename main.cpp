class Solution {
    int count_digits(int x) {
        int num = 0;
        while (x > 0) {
            num++;
            x /= 10;
        }
        return num;
    }
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for (int& x : nums) {
            cnt += count_digits(x) % 2 == 0;
        }
        return cnt;
    }
};
