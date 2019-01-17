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
            printf("suoyoucheliangruxia:\n");
            
            for(int i = 0; i < index; i++)
            {
                printf("di%dgecheliangdeweizhiwei(%d,%d)\n",i+1,arr[i].x,arr[i].y);
            }
            printf("dianjihuichejixu\n");
             char m;
                scanf("%c", &m);
                scanf("%c", &m);
            
        }
        if (code == 4)
        {
            printf("qingshurudangqianzuobiao:\n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);
            double min= 100000;
            int carID=0;
            
            for(int i = 0; i < index; i++)
            {
                int dx=arr[i].x;
                int dy=arr[i].y;
                double l=sqrt(dx*dx+dy*dy);
                if(min>l){
                    min=l;
                    carID=i;
                }
            }
            printf("yonghudangqianweizhiyudi%dgechejvliwei%lf,shizuixiaojvli\n",carID+1,min);
             char m;
                scanf("%c", &m);
                scanf("%c", &m);
            
            
        }
        if (code == 5)
        {
        }
    }
    return 0;
}