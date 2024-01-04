// Minimum number of operations required to make an array empty

int minOperations(vector<int> &nums)
{

    int size = nums.size();
    unordered_map<int, int> m;
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        m[nums[i]]++;
    }

    for (auto i : m)
    {
        int num = i.second;

        if (num < 2)
            return -1;
        if (num % 3 == 0)
        {
            ans += num / 3;
        }
        else
        {
            ans += num / 3 + 1;
        }
    }

    return ans;
}