#include <stdio.h>
#include <stdlib.h>

struct item{
	int data;
	struct item *next;
};

void push(struct item *item, int data){
	item -> data = data;
	struct item *tmp;
	tmp = malloc(sizeof(struct item));
	tmp -> next = NULL;
	item -> next = tmp;
}
int pop(struct item *start, int *num){
	struct item *tmp = start;
	int size;
	for(size = 0 ;tmp != NULL;tmp = tmp -> next, size++);
	*num = tmp -> data;
	free(tmp);
	return size;

}


int main(){
	struct item *start;
	push(start, 10);
	int *num;
	printf("%d    %d", pop(start, num), *num);
	return 0;
}
