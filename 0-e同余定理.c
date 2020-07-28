//0-e 同余定理

//记法:a≡ b(mod d)
//解释:许多的数被数d去除有相同的余数,d称为模
//对于同余有三种说法都是等价的,分别为:(1)a和b是模d同余的  (2)存在某个整数n,使得a=b+nd  (3)d整除a-b.


#include<stdio.h>
int main(void)
{
    int a,b,d;
    printf("a,b,d分别为：");
    scanf("%d %d %d",&a,&b,&d);

    if(a%d==b%d) printf("%d和%d是模%d同余的\n",a,b,d);
        else printf("两数在模%d不同余\n",d);
    return 0;
}
