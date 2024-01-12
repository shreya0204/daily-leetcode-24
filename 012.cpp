// Determine if String Halves Are Alike
bool isVowel(char &c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

bool halvesAreAlike(string s)
{

    int n = s.size();
    int left = 0;
    int right = n - 1;
    int c1 = 0;
    int c2 = 0;

    while (left <= right)
    {
        if (isVowel(s[left]))
            c1++;
        if (isVowel(s[right]))
            c2++;
        left++;
        right--;
    }

    return c1 == c2;
}