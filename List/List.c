#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define INIT_SIZE 10
#define INCREMENT_SIZE 5

typedef int Status;
typedef int Elemtype;

typedef struct List{
	Elemtype *elem;
	int length;
	int size;
}SqList;
Status InitList(SqList *L){
	L->elem = (Elemtype *)malloc(sizeof(Elemtype)*INIT_SIZE);
	if(!L->elem){
		return ERROR;
	}
	L->length=0;
	L->size=INIT_SIZE;
	return OK;
}
Status PopList(SqList L,Elemtype e){
	Elemtype *temp;
	if(L.length==L.size){
		temp = (Elemtype *)realloc(L.elem,(L.size+INCREMENT_SIZE)*sizeof(Elemtype));	
		if(!temp){
			return ERROR;
		}
		L.elem = temp;
		L.size += INCREMENT_SIZE;	
	}	
	L.elem[L.length]=e;
	L.length ++;
}
Status PushList(SqList *L,Elemtype e){

}




int main(){
	return 0;
}
