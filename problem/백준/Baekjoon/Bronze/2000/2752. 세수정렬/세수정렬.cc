#include <stdio.h>

int main() {
  int a, b, c, max, min, mid;
  scanf("%d %d %d", &a, &b, &c);
  
  //max 찾기
  max = a;
  if(max<b){
    max = b;
  }
  if(max<c){
    max = c;
  }
  
  //min 찾기
  min = a;
  if(min>b){
    min = b;
  }
  if(min>c){
    min = c;
  }
  
  //mid 찾기 (max도 min도 아닌걸 찾아서 mid로 한다)
  if(a!=max && a!=min){
    mid = a;
  }
  else if(b!=max && b!=min){
    mid = b;
  }
  else{
    mid = c;
  }

  printf("%d %d %d", min, mid, max);
  return 0;
}