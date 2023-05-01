import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        ArrayList<Integer> answerList = new ArrayList<Integer>();
        
        int temp = -1;
        for(int i=0; i<arr.length; i++) {
            if(arr[i] != temp) {
                answerList.add(arr[i]);
                temp = arr[i];
            }
        }
        return answerList.stream().mapToInt(i->i).toArray();
    }
}