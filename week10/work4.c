#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 50;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("값 %d를 인덱스 %d에서 찾았습니다.\n", target, result);
    }
    else {
        printf("값을 찾을 수 없습니다.\n");
    }

    return 0;
}