class Solution {
    public int solution(int n) {
        int sum = 0;
        for(int i=0; i<n; i++) {
            if(n%(i+1) == 0) {
            sum += (i+1);
        }
    }
    return sum;
    }
}