void selectionSortDescending(int arr[], int n) {
    // 배열의 처음부터 끝-1 까지 반복
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i; // 현재 범위에서 가장 큰 값의 인덱스를 저장할 변수
        
        // 정렬되지 않은 나머지 부분에서 최댓값 탐색
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j; // 더 큰 값을 찾으면 인덱스 갱신
            }
        }
        
        // 찾은 최댓값을 정렬되지 않은 부분의 맨 앞(i 위치)과 교환
        if (max_idx != i) {
            int temp = arr[max_idx];
            arr[max_idx] = arr[i];
            arr[i] = temp;
        }
    }
}