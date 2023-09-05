#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//#define MAX 1000

#define MAX_NAME 20//����
#define MAX_SEX 4//�Ա�
#define MAX_TEL 15//�绰
#define MAX_ADDR 20//��ַ

#define Dynamic 2

//���֣��Ա𣬵绰��סַ������
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
//��ʼ��ͨѶ¼
void InitContact(struct contact* ps);
//����ͨѶ¼��ϵ��
void AddContact(struct contact* ps);
//չʾͨѶ¼������ϵ��
void ShowContact(const struct contact* ps);
//ɾ��ͨѶ¼��ϵ��
void DelContact(struct contact* ps);
//����ͨѶ¼��ϵ��
void SerContact(const struct contact* ps);
//�޸�ͨѶ¼��ϵ��
void ReviseContact(struct contact* ps);
//����ͨѶ¼��ռ�ڴ�
void DestroyedContact(struct contact* ps);
//��ͨѶ¼����
void SortContact(struct contact* ps);
//�洢ͨѶ¼
void SaveContact(struct contact* ps);
//����ͨѶ¼
void LoadContact(struct contact* ps);
//����ͨѶ¼
void CheckCapacity(struct contact* ps);