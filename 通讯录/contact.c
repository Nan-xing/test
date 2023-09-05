#include "contact.h"

void InitContact(struct contact* ps)
{
	ps->date = (struct people*)malloc(Dynamic * sizeof(struct people));
	if (ps->date == NULL)
	{
		return;
	}
	ps->capacity = Dynamic;
	ps->size = 0;
	//加载通讯录
	LoadContact(ps);

}
void LoadContact(struct contact* ps)
{
	struct people tmp = { 0 };
	FILE* pfread = fopen("Contact.txt", "rb");
	if(pfread==NULL)
	{
		printf("LoadContact::%s\n", strerror(errno));
		return;
	}
	//读取通讯录
	while (fread(&tmp, sizeof(struct people), 1, pfread))
	{
		CheckCapacity(ps);
		ps->date[ps->size] = tmp;
		ps->size++;
	}

	fclose(pfread);
	pfread = NULL;
}

void CheckCapacity(struct contact* ps)
{
	if (ps->size == ps->capacity)
	{
		struct people* pstr = realloc(ps->date,(ps->capacity+1)*sizeof(struct people));
		if (pstr != NULL)
		{
			ps->date = pstr;
			ps->capacity = ps->capacity + 1;
		}
	}

}
void AddContact(struct contact* ps)
{
	CheckCapacity(ps);
	printf("请输入姓名:>");
	scanf("%s", ps->date[ps->size].name);
	printf("请输入年龄:>");
	scanf("%d", &ps->date[ps->size].age);
	printf("请输入性别:>");
	scanf("%s", ps->date[ps->size].sex);
	printf("请输入电话:>");
	scanf("%s", ps->date[ps->size].tel);
	printf("请输入地址:>");
	scanf("%s", ps->date[ps->size].addr);
	ps->size++;
	printf("添加成功!\n");
}
void ShowContact(const struct contact* ps)
{
	if (ps->size == 0)
		printf("通讯录为空!\a\n");
	else
	{	
		int i;
		printf("%-10s\t%-4s\t%-10s\t%-15s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-10s\t%-4d\t%-10s\t%-15s\t%-20s\n",
				ps->date[i].name,
				ps->date[i].age,
				ps->date[i].sex,
				ps->date[i].tel,
				ps->date[i].addr);
		}
	}
}

static int FindName(const struct contact* ps, const char* name)
{
	int i;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->date[i].name, name))
		{
			break;
		}
	}
	if (i == ps->size)
	{
		return -1;
	}
	return i;
}
void DecreaseCapacity(struct contact* ps)
{
	struct people* pstr = realloc(ps->date, (ps->capacity - 1) * sizeof(struct people));
	if (pstr != NULL)
	{
		ps->date = pstr;
		ps->capacity = ps->capacity - 1;
	}
}
void DelContact(struct contact* ps)
{
	char name[MAX_NAME];
	printf("请输入需要删除的联系人名字:>");
	scanf("%s",name);
	//查找需要删除的联系人
	int pos = FindName(ps, name);
	//删除
	if (pos == -1)
	{
		printf("该联系人不存在!\a\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;
		printf("删除成功!\n");
	}
	DecreaseCapacity(ps);
}

void SerContact(const struct contact* ps)
{
	char name[MAX_NAME];
	printf("请输入需要查询的联系人名字:>");
	scanf("%s", name);
	//查找需要查询的联系人
	int pos=FindName(ps, name);
	//删除
	if (pos == -1)
	{
		printf("该联系人不存在!\a\n");
	}
	else
	{
		printf("%-10s\t%-4s\t%-10s\t%-15s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-10s\t%-4d\t%-10s\t%-15s\t%-20s\n",
			ps->date[pos].name,
			ps->date[pos].age,
			ps->date[pos].sex,
			ps->date[pos].tel,
			ps->date[pos].addr);
	}
}

void ReviseContact(struct contact* ps)
{
	char name[MAX_NAME];
	printf("请输入需要修改的联系人名字:>");
	scanf("%s", name);
	//查找需要修改的联系人
	int pos = FindName(ps, name);
	//删除
	if (pos == -1)
	{
		printf("该联系人不存在!\a\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", ps->date[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &ps->date[pos].age);
		printf("请输入性别:>");
		scanf("%s", ps->date[pos].sex);
		printf("请输入电话:>");
		scanf("%s", ps->date[pos].tel);
		printf("请输入地址:>");
		scanf("%s", ps->date[pos].addr);
		printf("修改成功!\n");
	}
}
void DestroyedContact(struct contact* ps)
{
	free(ps->date);
	ps->date = NULL;
}
void SaveContact(struct contact* ps)
{
	FILE* pf = fopen("Contact.txt", "wb");
	if (pf == NULL)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	//写文件
	int i;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&ps->date[i], sizeof(struct people), 1, pf);
	}
	fclose(pf);
	pf = NULL;
	printf("保存成功！\n");
}
void SortMenu()
{
	printf("*************************************************\n");
	printf("********   1.Name(姓名)   2.Age(年龄)    ********\n");
	printf("********   3.Tel(电话)    4.Sex(性别)      ********\n");
	printf("********   5.Address(地址)                    ********\n");
	printf("*************************************************\n");
}
void SortName(struct contact* ps)
{
	struct people tmp = { 0 };
	int i, j;
	for (i = 0; i < ps->size - 1; i++)
	{
		for (j = 0; j < ps->size - i - 1; j++)
		{
			if (strcmp(ps->date[j].name,ps->date[j+1].name)>0)
			{
				tmp = ps->date[j];
				ps->date[j] = ps->date[j + 1];
				ps->date[j + 1] = tmp;
			}
		}
	}	
}
void SortAge(struct contact* ps)
{
	struct people tmp = { 0 };
	int i, j;
	for (i = 0; i < ps->size - 1; i++)
	{
		for (j = 0; j < ps->size - i - 1; j++)
		{
			if (ps->date[j].age > ps->date[j + 1].age)
			{
				tmp = ps->date[j];
				ps->date[j] = ps->date[j + 1];
				ps->date[j + 1] = tmp;
			}
		}
	}
}
void SortTel(struct contact* ps)
{
	struct people tmp = { 0 };
	int i, j;
	for (i = 0; i < ps->size - 1; i++)
	{
		for (j = 0; j < ps->size - i - 1; j++)
		{
			if (strcmp(ps->date[j].tel, ps->date[j + 1].tel) > 0)
			{
				tmp = ps->date[j];
				ps->date[j] = ps->date[j + 1];
				ps->date[j + 1] = tmp;
			}
		}
	}
}
void SortSex(struct contact* ps)
{
	struct people tmp = { 0 };
	int i, j;
	for (i = 0; i < ps->size - 1; i++)
	{
		for (j = 0; j < ps->size - i - 1; j++)
		{
			if (strcmp(ps->date[j].sex, ps->date[j + 1].sex) > 0)
			{
				tmp = ps->date[j];
				ps->date[j] = ps->date[j + 1];
				ps->date[j + 1] = tmp;
			}
		}
	}
}
void SortAddress(struct contact* ps)
{
	struct people tmp = { 0 };
	int i, j;
	for (i = 0; i < ps->size - 1; i++)
	{
		for (j = 0; j < ps->size - i - 1; j++)
		{
			if (strcmp(ps->date[j].addr, ps->date[j + 1].addr) > 0)
			{
				tmp = ps->date[j];
				ps->date[j] = ps->date[j + 1];
				ps->date[j + 1] = tmp;
			}
		}
	}
}
void SortContact(struct contact* ps)
{
	int input = 0;
	do
	{
		SortMenu();
		printf("请选择排序方式:>");
		scanf("%d", &input);
		switch (input)
		{
		case NAME:
			SortName(ps);
			break;
		case AGE:
			SortAge(ps);
			break;
		case TEL:
			SortTel(ps);
			break;
		case SEX:
			SortSex(ps);
			break;
		case ADDRESS:
			SortAddress(ps);
			break;
		default:
			printf("选择错误，没有这个排序方式！\n");
			break;
		}
	} while (!(input == 1 || input == 2 || input == 3 || input == 4 || input == 5));
	printf("排序完成！\n");
}
