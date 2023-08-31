#include "main.h"

int square_root_helper(int n, int start, int end, int mid) {
    if (start > end) {
        return -1;
    }

     mid = start + (end - start) / 2;

    if (mid * mid == n) {
        return mid;
    } else if (mid * mid < n) {
        return square_root_helper(n, mid + 1, end);
    } else {
        return square_root_helper(n, start, mid - 1);
    }
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: inputed number
 * Return: If n doesn't a natural square root function returns -1
 */


int _sqrt_recursion(int n)
	{
    if (n < 0) {
        return -1;
    }

    return square_root_helper(n, 0, n);
}
