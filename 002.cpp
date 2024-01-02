// Covert an Array into a 2D array with conditions

vector<vector<int>> findMatrix(vector<int> &nums)
{

    unordered_map<int, int> m;
    vector<vector<int>> ans;
    int size = nums.size();

    for (auto i : nums)
        m[i]++;

    while (!m.empty())
    {
        vector<int> temp;
        for (auto it = m.begin(); it != m.end();)
        {
            temp.push_back(it->first);
            it->second--;
            if (it->second == 0)
            {
                it = m.erase(it);
            }
            else
            {
                ++it;
            }
        }
        ans.push_back(temp);
    }
    return ans;
}