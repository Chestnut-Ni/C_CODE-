#include <stdio.h>
#include<windows.h>



	//�����ýṹ�����������Ӷ���  �ṹ���Ǵ��������һ������
	//e.g����һ����
//����һ���ṹ�����ͣ�
	struct Book//struct-�ṹ��ؼ���
	{
		char name[20];//����һ������Ϊ20���ַ�������
		short prize;
	};//�˷ֺűز����ٱ�ʾ����һ�����Ͷ���
	//���ýṹ�����ʹ���һ�������͵Ľṹ�������
	int main()
{
	//�ṹ��ĳ�ʼ����
	struct Book b1={"C���Գ������",55};//��ӡ�ṹ����Ϣ
	//ȡb1�ĵ�ַ��
	struct Book* gh=&b1;
	//����*gh���b1��
	printf("%s\n",(*gh).name);
	printf("%d\n",(*gh).prize);
	//����ʹ��->��
	printf("%s\n",gh->name);
	//�ṹ�������.���ʳ�Ա    �ṹ��ָ����->���ʳ�Ա

	//printf("������%s\n",b1.name);//���������ַ�������������%s���
	//printf("�۸�%dԪ\n",b1.prize);//��  .  Ϊ�ṹ�����ͷ��ʲ�������
	////��������ʱҲ�ɶԲ��������޸���:
	//b1.prize=15;
	//printf("�޸ĺ�ļ۸�%dԪ\n",b1.prize);






	/*double d=18;
	double* sd=&d;
	printf("%d\n",sizeof(sd));*/
	//printf("%d\n",sizeof(short*));//4
	//printf("%d\n",sizeof(char*));//4
	//printf("%d\n",sizeof(double*));//4
	//printf("%d\n",sizeof(int*));//4
	//��ַ��Ϊһ���������С�ǹ̶��Ĳ�������double int short....
	//32λ�����µ�ַ��СΪ4���ֽ�(32������λ) 64λ�����µ�ַ��СΪ8���ֽڣ�64������λ��




return 0;
}