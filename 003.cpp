// NUmber of Laser Beams in a Bank

int countBeams(string s)
{
    int n = s.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
    }
    return count;
}

int numberOfBeams(vector<string> &bank)
{

    int s = bank.size();
    int prev = 0;
    int ans = 0;

    for (int i = 0; i < s; i++)
    {
        int count = countBeams(bank[i]);
        if (count != 0)
        {
            ans += prev * count;
            prev = count;
        }
    }

    return ans;
}