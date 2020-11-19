#ifndef shiyan1_h
#define shiyan1_h

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef int dataType;
typedef struct node{
	dataType data;
	struct node *next;
}node, LinkList;


//创建链表
LinkList* CreateList ()   


//求链表元素个数	
int Size(LinkList* 1);


//在链表1的第k个位置插入元素x
void Insert(LinkList *l,int k,dataType x);

//删除链表1的第k个元素
void Delete(LinkList *l,int k);
	

//判断链表是否为空
int Empty(LinkList *l);


//求链表的第k个元素的值
dataType GetData(LinkList *l, int k) ;


//在链表里查找值为x的t元素
node* Find(LinkList *l, dataType x);


//输出链表
void Print(LinkList *l);


//清空链表
void ClearList(LinkList *l);



#endif


