#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int chengJi;
	printf("����ɼ�: ");
	scanf("%d",&chengJi);
	
	if(chengJi>=90)
	{
		printf("�ɼ��ȼ�ΪA");
	}
	else if(chengJi<89&&chengJi>80)
	{
		printf("�ɼ��ȼ�ΪB");
	}
	else if(chengJi<79&&chengJi>70)
	{
		printf("�ɼ��ȼ�ΪC");
	}
	else if(chengJi<69&&chengJi>60)
	{
		printf("�ɼ��ȼ�ΪD");
	}
	else 
	{
		printf("�ɼ��ȼ�ΪE");
	}
	return 0;
}

