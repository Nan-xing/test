#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//#define MAX 1000

#define MAX_NAME 20//姓名
#define MAX_SEX 4//性别
#define MAX_TEL 15//电话
#define MAX_ADDR 20//地址

#define Dynamic 2

//名字，性别，电话，住址，年龄
struct people {
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
};

struct contact {
	struct people *date;
	int size;
	int capacity;
};

enum menu
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	REVISE,
	SHOW,
	SAVE,
	SORT
};
enum SortMenu
{

	NAME=1,
	AGE,
	TEL,
	SEX,
	ADDRESS
};
//初始化通讯录
void InitContact(struct contact* ps);
//增加通讯录联系人
void AddContact(struct contact* ps);
//展示通讯录所有联系人
void ShowContact(const struct contact* ps);
//删除通讯录联系人
void DelContact(struct contact* ps);
//查找通讯录联系人
void SerContact(const struct contact* ps);
//修改通讯录联系人
void ReviseContact(struct contact* ps);
//销毁通讯录所占内存
void DestroyedContact(struct contact* ps);
//对通讯录排序
void SortContact(struct contact* ps);
//存储通讯录
void SaveContact(struct contact* ps);
//加载通讯录
void LoadContact(struct contact* ps);
//扩容通讯录
void CheckCapacity(struct contact* ps);