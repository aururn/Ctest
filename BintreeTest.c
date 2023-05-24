#include <stdio.h>
#include "Member.h"
#include "BinTree.h"

typedef enum{
    TERMINATE, ADD, REMOVE, SEARCH, PRINT
} Menu;

Menu SelectMenu()
{
    int ch;
    do{
        printf("\n(1)挿入 (2)削除 (3)探索 (4)表示 (0)終了 :"); scanf("%d",&ch);
    }while(ch < TERMINATE || ch > PRINT);

    return (Menu)ch;
}

int main()
{
    Menu menu;
    BinNode *root = NULL;

    do{
        Member x;
        BinNode *temp;

        switch (menu = SelectMenu())
        {
        case ADD:
                x = ScanMember("挿入",MEMBER_NO | MEMBER_NAME);
                root = Add(root,&x);
                break;
        case REMOVE:
                x = ScanMember("削除",MEMBER_NO | MEMBER_NAME);
                Remove(&root, &x);
                break;
        case SEARCH:
                x = ScanMember("探索",MEMBER_NO | MEMBER_NAME);
                if((temp = Search(root,&x)) != NULL)
                    PrintLnMember(&temp->data);
                break;
        case PRINT:
                puts("一覧表");
                PrintTree(root);
                break;

        }
    }while (menu!= TERMINATE);

    FreeTree(root);

    return 0;
}
