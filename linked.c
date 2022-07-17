#include <stdio.h>
#include <stdlib.h>

/*structre of a node */
struct node
{
	int data; //Data

	struct node *next;  //address
} *head;

/*
 * Functions to create and display list
*/

void createList(int n);
void traverseList();

int main()
{
	int n;

	printf("Enter the total number of node: ");
	scanf("%d", &n);

	createList(n);

	printf("\nData in the list \n");
	traverseList();

	return (0);
}

/*
 * create a list of n nodes
 */

void createList(int n)
{
	int data, j;
	struct node *new, *temp;

	head = (struct node *)malloc(sizeof(struct node));

	/* terminate if memory not allocated */

	if (!head)
	{
		printf("Memmory unallocated");
		exit(0);
	}

	/*input data of node from user */

	printf("Enter the data of node 1: ");
	scanf("%d", &data);

	head->data

