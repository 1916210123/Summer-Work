/*
����һ���Ѱ����������е���������,�ҵ�������ʹ���������֮�͵���Ŀ������
����Ӧ�÷����������±�ֵindex1��index2,����index1����С��index2

˵��:
���ص��±�ֵ��index1��index2�����Ǵ��㿪ʼ�ġ�
����Լ���ÿ������ֻ��ӦΨһ�Ĵ𰸣������㲻�����ظ�ʹ����ͬ��Ԫ�ء�
ʾ��:
����:numbers=[2,7,11,15],target=9
���:[1,2]
����:2��7֮�͵���Ŀ����9.���index1=1,index2=2
*/

#include<stdio.h>
int main(void)
{
    int target,sum,i,j,n,numbers[10000];
    int index[n];
    char ch;
    printf("numbers=[");
    n=0;
    for(i=0;i<10000;i++){
        scanf("%d",&numbers[i]);
        n=n+1;
        ch=getchar();
        if(ch==']') break;
    }
    index[n]=-1;     /*��Ϊ�±�ֵ������Ϊ������������index[n]=-1����33���ж�*/
    printf("target=");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(index[i]==-1) break;   /*�жϸ�Ԫ���Ƿ�ʹ�ù�*/
            sum=numbers[i]+numbers[j];
            if(sum==target){
                printf("[%d,",i+1);
                printf("%d]\n",j+1);  /*�涨�±�ֵ��1��ʼ����Ҫi+1*/
                index[i]=-1;
                index[j]=-1;          /*�����ظ�ʹ����ͬԪ��*/
            }
        }
    }
    return 0;
}

