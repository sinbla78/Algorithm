#include <iostream>

using namespace std;

int main(void)
{
    char arr1[1000],arr2[1000];
    int cnt1 = 0, cnt2 = 0;
    cin >> arr1>>arr2;
    for (int i = 0; arr1[i] != 'h'; i++)
    {
        cnt1++;
    }
    for (int i = 0; arr2[i] != 'h'; i++)
    {
        cnt2++;
    }

    if (cnt1 >= cnt2)
        printf("go");
    else
        printf("no");
        

    return 0;
}