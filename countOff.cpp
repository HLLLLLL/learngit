/**
*标号1-n的n个人首尾相接，1到3报数，报到3的退出，求最后一个人的标号
*/

#include <stdio.h>
#include <string.h>
int main()
{
    int a[100];
    memset(a, 1, sizeof(a));
    int n = 7;          //假设n=7
    int cnt = 0;
    int left = n;
    for(int i=0; i<n; i=(i+1+1+n)%n-1){
        if(a[i] != 0){
            cnt++;
            if(cnt == 3){
                cnt=0;
                a[i]=0;
                left--;
            }
            if(left == 0){
                printf("最后一个退出的是第%d号",i+1);
                break;
            }
        }
    }
}
