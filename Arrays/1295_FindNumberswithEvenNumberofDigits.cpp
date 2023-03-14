class Solution
{
public:
    int count_digits(int num)
    {

        int count = 0;
        while (num != 0)
        {
            count++;
            num = num / 10;
        }

        return count;
    }

    int findNumbers(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int digits = count_digits(nums[i]);
            if (digits % 2 == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};