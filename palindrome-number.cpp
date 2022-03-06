class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        double reverse = 0, original;
        original = x;
        while (x != 0)
        {
            reverse = reverse * 10 + (x % 10);
            x = x / 10;
        }

        if (reverse == original)
            return true;
        return false;
    }
};