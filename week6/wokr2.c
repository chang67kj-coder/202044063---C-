void insertionSortDescending(int arr[], int n) {
    // 두 번째 요소부터 시작하여 그 앞의 정렬된 부분과 비교
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // 현재 삽입할 값을 임시 저장
        int j = i - 1;

        // 정렬된 배열 부분을 뒤에서부터 탐색
        // 내림차순이므로 key보다 작은 값들은 오른쪽으로 한 칸씩 이동
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        // 탐색이 끝난 빈자리에 key 값을 삽입
        arr[j + 1] = key;
    }
}