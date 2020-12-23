#include<stdio.h>
#include<string.h>
int stack[100];
int count = -1;
void push();
void pop();
void size();
void empty();
void top();
int main()
{
	int N;
	char command[10];
	scanf("%d", &N);
	while (N--)
	{
		scanf("%s", command, sizeof(command));
		if (!strcmp(command, "push"))
			push();
		else if (!strcmp(command, "pop"))
			pop();
		else if (!strcmp(command, "size"))
			size();
		else if (!strcmp(command, "empty"))
			empty();
		else if (!strcmp(command, "top"))
			top();
	}
}
void push()
{
	int num;
	scanf("%d", &num);
	stack[++count] = num;
}
void pop()
{
	if (count == -1)
		printf("-1\n");
	else
		printf("%d\n",stack[count--]);
}
void size()
{
	printf("%d\n", count + 1);
}
void empty()
{
	printf("%d\n", (count == -1 ? 1 : 0));
}
void top()
{
	if (count == -1)
		printf("-1\n");
	else
		printf("%d\n", stack[count]);
}