#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#define MAX 256

int main()
{
	char word[MAX];
	char check_word;
	int count = 0;

	start1:
	printf("word: ");
	scanf_s("%s", word, sizeof(word));

	if (strlen(word) < 3)
	{
		printf("too short, try again\n");
		goto start1;
	}

	check_word = word[strlen(word) - 1];
	count++;

	while (1)
	{
	start2:
		printf("word: ");
		scanf_s("%s", word, sizeof(word));

		if (strlen(word) < 3)
		{
			printf("too short, try again\n");
			goto start2;
		}
		else if (word[0] != check_word)
		{
			printf("WRONG WORD!!! YOU FAILED!!!\n");
			printf("count: %d", count);
			break;
		}
		check_word = word[strlen(word) - 1];
		count++;
	}
	return 0;
}