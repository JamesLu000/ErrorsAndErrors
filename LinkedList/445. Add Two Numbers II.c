#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data; //堆疊資料的宣告 
	struct Node *next;  //堆疊中用來指向下一個節點 
};
typedef struct Node Stack_Node; //定義堆疊中節點的新形態
typedef Stack_Node *Linked_Stack;  //定義串列堆疊的新形態
Linked_Stack fst = NULL; //指向堆疊頂端的指標 
Linked_Stack sec = NULL;
int isEmpty(Linked_Stack*);
void push(int, Linked_Stack*); 
int pop(Linked_Stack*);
 
int main(int argc, char *argv[]) {
	int a[3] = {2,4,3};
	int b[3] = {5,6,4};
	// int a[10] = {1,2,3,4,5,6,7,8,9,0};
	// int b[5] = {1,2,3,4,5};
	long ans = 0;
	for(int i=0;i<3;i++){
		push(a[i],&fst);
	}
	for(int j=0; j<3; j++){
		push(b[j],&sec);
	}
	int carry = 0;
	long mult = 1;
	int times = 0;
	printf("====================\n");
	while(!isEmpty(&fst) || !isEmpty(&sec)){
		times+=1;
		ans += ((long)pop(&fst))*mult + ((long)pop(&sec))*mult;
		mult *= 10;
		// printf("堆疊彈出的順序為:%d\n",pop(&fst)); 
	}
	pop(&fst);
	printf("%ld",ans);
	return 0;
}
/*判斷是否為空堆疊*/
int isEmpty(Linked_Stack* stack){
	if(*stack==NULL){
		return 1; 
	}else{
		return 0;
	}
} 
/*將指定的資料存入堆疊*/
void push(int data, Linked_Stack* stack){
	Linked_Stack new_add_node;  //新加入節點的指標
	/*配置新節點的記憶體*/
	new_add_node=(Linked_Stack)malloc(sizeof(Stack_Node));
	new_add_node->data=data;  //將傳入的值設為節點的內容 
	new_add_node->next=*stack;   //將新節點指向堆疊的點端 
	*stack=new_add_node;  //新節點成為堆疊的頂端 
} 
/*從堆疊取出資料*/
int pop(Linked_Stack* stack){
	Linked_Stack ptr;  //指向堆疊頂端的指標
	int temp;
	if(isEmpty(stack)){
		printf("堆疊為空\n");
		return 0;
	}else{
		ptr=*stack;  //指向堆疊的頂端
		temp=ptr->data; //取出堆疊資料
		*stack=(*stack)->next; //將堆疊頂端的指標指向下一個節點 
		free(ptr); //將節點占用的記憶體釋放
		return temp; 
	}
}