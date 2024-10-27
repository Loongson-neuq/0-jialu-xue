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
    int arr[] = { a, b, c };
    std::sort(arr, arr + 3);

   
    result.min = arr[0];
    result.mid = arr[1];
    result.max = arr[2];
}
