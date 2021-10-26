import java.io.*;
import java.util.*;
import java.lang.Math;

public class Solution {
    static long get(long x, long y) {
        return (y - x + 1) * (y + x) / 2;
    }
    public static void main(String[] args) {
        Scanner fi = new Scanner(System.in);
        long x = fi.nextLong();
        long y = fi.nextLong();
        long l = x, r = y, mid;
        while (l < r) {
            mid = (l+r) / 2;
            if (get(x, mid) < get(mid+1, y)) l = mid + 1; else r = mid;
        }
        if (x < l && Math.abs(get(x, l) - get(l+1, y)) > Math.abs(get(x, l-1) - get(l, y))) --l;
        System.out.print(l);
    }
}
    
