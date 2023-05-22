import java.util.*;

class Solution {
    public int solution(int[] priorities, int location) {
        int answer = 0;
        int l = location;
        
        //큐를 생성한다.
        Queue<Integer> que = new LinkedList<Integer>();
        
        //piorities 배열의 각 요소를 추가
        for(int i : priorities){
            que.add(i);
        }
        
        //piorities 배열을 오름차순으로 정리
        Arrays.sort(priorities);
        int size = priorities.length-1;


        //큐가 비어있을 때까지 while문으로 반복한다.
        while(!que.isEmpty()){
            //큐에서 요소를 하나 꺼낸다.
            //poll : 큐 맨 앞에 있는 값 반환 후 삭제, 비어있을 경우 null 반환
            Integer i = que.poll();
            
             // 꺼내온 요소가 현재 우선순위 배열의 가장 큰 값인지 확인
            if(i == priorities[size - answer]){
                // 가장 큰 값이라면 작업 수행 횟수(answer)를 증가시키고, 위치(location)를 감소시킴
                answer++;
                l--;
                if(l <0)
                    break;
            }
            else{
                // 가장 큰 값이 아니라면 큐에 다시 추가하고, 위치(location)를 감소시킴
                que.add(i);
                l--;
                if(l<0)
                    l=que.size()-1;
            }
        }
        //작업 횟수 반환
        return answer;
    }
}