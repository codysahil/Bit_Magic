class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
    int xorResult = m ^ n;

    if (xorResult == 0) {
        return -1;
    }

    int position = 1;
    while ((xorResult & 1) == 0) {
        xorResult = xorResult >> 1;
        position++;
    }

    return position;

           }
};
