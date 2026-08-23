#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    char ch;
    int freq;
    struct Node *left, *right;
};

struct Node* newNode(char ch, int freq)
{
    struct Node *temp;

    temp = (struct Node*)malloc(sizeof(struct Node));

    temp->ch = ch;
    temp->freq = freq;
    temp->left = temp->right = NULL;

    return temp;
}

void printCodes(struct Node *root, int code[], int top)
{
    int i;

    if (root->left)
    {
        code[top] = 0;
        printCodes(root->left, code, top + 1);
    }

    if (root->right)
    {
        code[top] = 1;
        printCodes(root->right, code, top + 1);
    }

    if (root->left == NULL && root->right == NULL)
    {
        printf("%c : ", root->ch);

        for (i = 0; i < top; i++)
            printf("%d", code[i]);

        printf("\n");
    }
}

void main()
{
    struct Node *nodes[10], *left, *right, *newnode, *root;
    int n, i, j, min1, min2, code[10];
    char ch[10];
    int freq;

    printf("Enter number of characters: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter character and frequency: ");
        scanf(" %c%d", &ch[i], &freq);

        nodes[i] = newNode(ch[i], freq);
    }

    /* Build Huffman Tree */
    for (i = n; i > 1; i--)
    {
        min1 = 0;

        for (j = 1; j < i; j++)
        {
            if (nodes[j]->freq < nodes[min1]->freq)
                min1 = j;
        }

        left = nodes[min1];
        nodes[min1] = nodes[i - 1];

        min2 = 0;

        for (j = 1; j < i - 1; j++)
        {
            if (nodes[j]->freq < nodes[min2]->freq)
                min2 = j;
        }

        right = nodes[min2];

        newnode = newNode('$', left->freq + right->freq);

        newnode->left = left;
        newnode->right = right;

        nodes[min2] = newnode;
    }

    root = nodes[0];

    printf("\nHuffman Codes:\n");

    printCodes(root, code, 0);

    getch();
}