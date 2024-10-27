#include ".assignment/test.h"
struct Result
{
    int min;
    int mid;
    int max;
};

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    // 在这里完成你的代码
    if (a <= b && a <= c) {
        result.min = a;
    }
    else if (b <= a && b <= c) {
        result.min = b;
    }
    else {
        result.min = c;
    }

   
    if (a >= b && a >= c) {
        result.max = a;
    }
    else if (b >= a && b >= c) {
        result.max = b;
    }
    else {
        result.max = c;
    }

    
    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        result.mid = a;
    }
    else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        result.mid = b;
    }
    else {
        result.mid = c;
    }

    }

   
   
   
    
