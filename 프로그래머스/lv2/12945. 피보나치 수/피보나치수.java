class Solution {
    public int solution(int n) {
        // n+1 크기의 배열 answer를 선언합니다.
        int answer[] = new int[n+1];

        // i가 0부터 n까지 반복하며 answer 배열을 채웁니다.
        for(int i = 0; i <=n; i++){
            // i가 0일 때, answer[0]에는 0을 저장합니다.
            if(i == 0){
                answer[i] = 0;
            }
            // i가 1일 때, answer[1]에는 1을 저장합니다.
            else if(i == 1){
                answer[i] = 1;
            }
            // i가 2 이상일 때, 피보나치 수열의 성질에 따라 이전 두 수를 더하여 answer[i]에 저장합니다.
            else{
                int sum = answer[i-2] + answer[i-1];
                answer[i] = sum % 1234567;
            }
        }

        // answer[n] 값을 반환합니다.
        return answer[n];
    }
}
