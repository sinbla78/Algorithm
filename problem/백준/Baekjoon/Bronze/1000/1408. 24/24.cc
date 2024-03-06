#include <iostream>
using namespace std;

int main() {
    int a[3], b[3], t[3];
    scanf("%d:%d:%d", &a[0], &a[1], &a[2]);
    scanf("%d:%d:%d", &b[0], &b[1], &b[2]);

    if(b[2]>=a[2]) t[2]=b[2]-a[2];
    else if(b[2]<a[2]){
        t[2]=60+b[2]-a[2];
        b[1]--;
    }

    if(b[1]>=a[1]) t[1]=b[1]-a[1];
    else if(b[1]<a[1]){
        t[1]=60+b[1]-a[1];
        b[0]--;
    }

    if(b[0]>=a[0]) t[0]=b[0]-a[0];
    else if(b[0]<a[0]){
        t[0]=24+b[0]-a[0];
    }
    
    if(t[0]==0 && t[1]==0 && t[2]==0) t[0]=24;
  
    printf("%02d:%02d:%02d\n", t[0], t[1], t[2]);
return 0;
}


