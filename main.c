#include <stdio.h>

struct Point
{
    int x;
    int y;
};

int main()
{
    int index = 0;
    struct Point arr[100];
    printf("huanyingjinrucheliangguanlixitong!\n");
    while (1)
    {
        printf("1---tianjiacheliang\n");
        printf("2---shanchucheliang\n");
        printf("3---xianshisuoyoucheliang\n");
        printf("4---fanhuiliwozuijindecheliang\n");
        printf("5---tuichu\n");
        printf("qingshuruxiangyingdegongnengbianhao:\n");
        int code;
        scanf("%d", &code);
        if (code == 1)
        {
            printf("qingshuruyaotianjiacheliangdexzuobiaoheyzuobiao:\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);

            arr[index].x = x;
            arr[index].y = y;

            index++;

            printf("tianjiachenggong,dianjihuichejixu\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
        }
        if (code == 2)
        {
            if (index > 0)
            {
                index--;
                printf("shanchuchenggong,dianjihuichejixu\n");
                char m;
                scanf("%c", &m);
                scanf("%c", &m);
            }
            else
            {
                printf("weizhaodaocheliang,shanchushibai,dianjihuichejixu\n");
                char m;
                scanf("%c", &m);
                scanf("%c", &m);
            }
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
        }
    }
    return 0;
}