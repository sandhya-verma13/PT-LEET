class Solution {
    public int mySqrt(int x) {
        if (x < 2) return x;
        long sq = x / 2;
        while (sq * sq > x) {
            sq = (sq + x / sq) / 2;
        }
        return (int) sq;
    }
}
