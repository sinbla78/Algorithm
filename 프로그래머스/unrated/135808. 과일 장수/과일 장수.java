import java.util.*;

class Solution {
    public int solution(int k, int m, int[] score) {
        int answer = 0;
        
        //오름차순으로 정렬
        Arrays.sort(score);
        
        // score 배열의 길이부터 시작하여 m보다 큰 값까지 m만큼 간격을 두며 반복
        for (int i = score.length; i >= m; i -= m) {
        // answer에 score[i - m]과 m을 곱한 값을 더함
            answer += score[i - m] * m;
        }

        return answer;
    }
}