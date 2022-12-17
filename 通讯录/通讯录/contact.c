#include"contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data,0,sizeof(ps->data));
	ps->size=0;//设置通讯录里最初只有0个元素
}

//为避免出现代码冗余（因为删除和修改联系人都需要先找到这个联系人） 封装一个查找函数
//static修饰函数能且只能在该.c文件中使用 不被暴露出去
static int FindByName(const struct Contact* ps,char name[MAX_NAME])
{
	int i=0;
	for(i=0;i<ps->size ;i++)
	{
		if(strcmp(ps->data[i].name,name)==0)
		{
			return i;//找到这个元素返回其下标
		}
	}
	return -1;//找不到这个元素返回-1
}

void AddContact(struct Contact*ps)
{
	if(ps->size>=MAX)
		printf("通讯录已满");
	else
	{
		printf("请输入名字：");
		scanf("%s",ps->data[ps->size].name);
		printf("请输入年龄：");
		scanf("%d",&(ps->data[ps->size].age));
		printf("请输入性别：");
		scanf("%s",ps->data[ps->size].sex);
		printf("请输入电话：");
		scanf("%s",ps->data[ps->size].tele);
		printf("请输入地址：");
		scanf("%s",ps->data[ps->size].addr);

		printf("添加成功\n");
	}
	ps->size ++;
}
void ShowContact(const struct Contact *ps)
{
	int i=0;
	if(ps->size==0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","名字","年龄","性别","电话","住址");
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
	printf("请输入要删除人的姓名");
	scanf("%s",name);
	ret=FindByName(ps,name);
	if(ret==-1)
		printf("要删除的人不存在");
	else//删除
	{
		int j=0;
		for(j=ret;j<(ps->size-1);j++)
		{
			ps->data[j]=ps->data[j+1];//将后面的元素向前覆盖
		}
		ps->size--;
	}
}

void SearchContact(const struct Contact* ps)
{
	int ret;
	char name[MAX_NAME];
	printf("请输入要查找的人的名字：");
	scanf("%s",name);
	ret=FindByName(ps,name);
	if(ret==-1)
		printf("要查找的人不存在");
	else//打印其信息
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","名字","年龄","性别","电话","住址");
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
	printf("请输入要修改的人名字：");
	scanf("%s",name);
	ret=FindByName(ps,name);
	if(ret==-1)
	{
		printf("要修改的人的信息不存在");
	}
	else
	{
		printf("请输入名字：");
		scanf("%s",ps->data[ps->size].name);
		printf("请输入年龄：");
		scanf("%d",&(ps->data[ps->size].age));
		printf("请输入性别：");
		scanf("%s",ps->data[ps->size].sex);
		printf("请输入电话：");
		scanf("%s",ps->data[ps->size].tele);
		printf("请输入地址：");
		scanf("%s",ps->data[ps->size].addr);

		printf("修改完成");
	}
}
