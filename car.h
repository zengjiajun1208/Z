#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef struct car
{
    char num[12];
    int time;
    int money;
    int address;
}car;
car vehicle[50];
int car_count = 0;
void add();
void delete_vehicle(int address);
double  get_money(int time);
void search(int address);
void desplay_all();


void search(int address){
     for(int i = 0;i < car_count;i++){
         if(vehicle[i].address == address){
           printf("车牌号为：%s\n停车时间为：%d\n停车费用为：%.lf\n车位为：%d", vehicle[i].num, vehicle[i].time, get_money(vehicle[i].time), vehicle[i].address);
         }
         break;
     }
}

void delete_vehicle(int address)
{
        int i,j;
for(i=0;i<car_count;i++)
{
  if(vehicle[i].address==address)
        {
        for(j=i;j<car_count-1;j++)
                {
                vehicle[j]=vehicle[j+1];
                }
                car_count--;
                printf("第%d辆车已出库",address);
        }
}
}
void desplay_all()
{
        if(car_count==0)
        {
                printf("No vehicles in the parking lot\n");
                return ;
        }
printf("=====Parking Lot Vehicle Information=====\n");
printf("Parking Space No.\tLicense Plate\tParking Duration\tFee\n");
for(int i=0;i<car_count;i++)
{
        printf("%d\t%s\t%d\t%.2lf\n",vehicle[i].address,vehicle[i].num,vehicle[i].time,get_money(vehicle[i].time));
                        }
                        }


double get_money(int time) {
    if (time <= 0) return 0;
    return time * 5.0;
}

void add() {
    if (car_count >= 50) {
        printf("停车场已满！\n");
        return;
    }

    printf("请输入车牌号：\n");
    scanf("%s", vehicle[car_count].num);
    printf("请输入停车时间（小时）：\n");
    scanf("%d", &vehicle[car_count].time);
    printf("请输入停车位编号：\n" );
    scanf("%d", &vehicle[car_count].address);
    car_count++;
    printf("车辆入库成功！\n");
}
int main() {
    int choice;
    int address;

    while (1) {
        printf("\n======停车场管理系统======\n");
        printf("1. 添加车辆\n");
        printf("2. 搜索车辆\n");
        printf("3. 删除车辆\n");
        printf("4. 显示所有车辆\n");
        printf("5. 退出\n");
        printf("请选择操作：");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            add();
            break;
        case 2:
            printf("请输入要搜索的车位号：");
            scanf("%d", &address);
            search(address);
            break;
        case 3:
            printf("请输入要删除的车位号：");
            scanf("%d", &address);
            delete_vehicle(address);
            break;
        case 4:
            desplay_all();
            break;
        case 5:
            printf("谢谢使用！\n");
            return 0;
        default:
            printf("无效的选择！\n");
        }
    }

    return 0;
}
