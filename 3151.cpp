/*
Time 0(n)
Space 0(1)
*/
class Solution
{
public:
    bool isArraySpecial(vector<int> &nums)
    {
        int size = nums.size();
        bool match = true;
        for (int i = 1; i < size; i++)
        {
            if ((nums[i] % 2 == 0 && nums[i - 1] % 2 == 0) || (nums[i] % 2 == 1 && nums[i - 1] % 2 == 1))
            {
                match = false;
                break;
            }
        }
        if (size == 1)
            return true;
        return match;
    }
};