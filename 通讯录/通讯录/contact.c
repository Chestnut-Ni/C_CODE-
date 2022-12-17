#include"contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data,0,sizeof(ps->data));
	ps->size=0;//����ͨѶ¼�����ֻ��0��Ԫ��
}

//Ϊ������ִ������ࣨ��Ϊɾ�����޸���ϵ�˶���Ҫ���ҵ������ϵ�ˣ� ��װһ�����Һ���
//static���κ�������ֻ���ڸ�.c�ļ���ʹ�� ������¶��ȥ
static int FindByName(const struct Contact* ps,char name[MAX_NAME])
{
	int i=0;
	for(i=0;i<ps->size ;i++)
	{
		if(strcmp(ps->data[i].name,name)==0)
		{
			return i;//�ҵ����Ԫ�ط������±�
		}
	}
	return -1;//�Ҳ������Ԫ�ط���-1
}

void AddContact(struct Contact*ps)
{
	if(ps->size>=MAX)
		printf("ͨѶ¼����");
	else
	{
		printf("���������֣�");
		scanf("%s",ps->data[ps->size].name);
		printf("���������䣺");
		scanf("%d",&(ps->data[ps->size].age));
		printf("�������Ա�");
		scanf("%s",ps->data[ps->size].sex);
		printf("������绰��");
		scanf("%s",ps->data[ps->size].tele);
		printf("�������ַ��");
		scanf("%s",ps->data[ps->size].addr);

		printf("��ӳɹ�\n");
	}
	ps->size ++;
}
void ShowContact(const struct Contact *ps)
{
	int i=0;
	if(ps->size==0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","����","����","�Ա�","�绰","סַ");
		for(i=0;i<ps->size;i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps-> data[i].name,
				ps-> data[i].age,
				ps-> data[i].sex,
				ps-> data[i].tele,
				ps-> data[i].addr);	
		}
	}
}

void DelContact(struct Contact*ps)
{
	int ret;
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����");
	scanf("%s",name);
	ret=FindByName(ps,name);
	if(ret==-1)
		printf("Ҫɾ�����˲�����");
	else//ɾ��
	{
		int j=0;
		for(j=ret;j<(ps->size-1);j++)
		{
			ps->data[j]=ps->data[j+1];//�������Ԫ����ǰ����
		}
		ps->size--;
	}
}

void SearchContact(const struct Contact* ps)
{
	int ret;
	char name[MAX_NAME];
	printf("������Ҫ���ҵ��˵����֣�");
	scanf("%s",name);
	ret=FindByName(ps,name);
	if(ret==-1)
		printf("Ҫ���ҵ��˲�����");
	else//��ӡ����Ϣ
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","����","����","�Ա�","�绰","סַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps-> data[ret].name,
				ps-> data[ret].age,
				ps-> data[ret].sex,
				ps-> data[ret].tele,
				ps-> data[ret].addr);	
	}
}

void ModifyContact(struct Contact* ps)
{
	int ret;
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ������֣�");
	scanf("%s",name);
	ret=FindByName(ps,name);
	if(ret==-1)
	{
		printf("Ҫ�޸ĵ��˵���Ϣ������");
	}
	else
	{
		printf("���������֣�");
		scanf("%s",ps->data[ps->size].name);
		printf("���������䣺");
		scanf("%d",&(ps->data[ps->size].age));
		printf("�������Ա�");
		scanf("%s",ps->data[ps->size].sex);
		printf("������绰��");
		scanf("%s",ps->data[ps->size].tele);
		printf("�������ַ��");
		scanf("%s",ps->data[ps->size].addr);

		printf("�޸����");
	}
}
