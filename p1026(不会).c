//Viayou专属

#include<stdlib.h>
#include<stdio.h>

int main(){
    int n;
    while(scanf("%d",&n)!=EOF)
    {
	
    int count = 0;
    while(n>0){
        count = count + n / 5;
        n = n / 5;
    }
    printf("%d\n",count);
}
    return 0;
}
//没事翻翻github没想到我校2022新更了一个，来水一发
//ac代码
