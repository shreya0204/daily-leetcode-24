// Assign Cookies

int findContentChildren(vector<int> &g, vector<int> &s)
{

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int gsize = g.size();
    int ssize = s.size();

    if (ssize == 0)
        return 0;

    int i = 0;
    int j = 0;
    int ans = 0;

    while (i < gsize && j < ssize)
    {
        if (g[i] <= s[j])
        {
            ans++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}