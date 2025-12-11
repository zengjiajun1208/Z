#include<stdio.h>
void add ();
void delete(int address)
double  get_money(int time);
void search(int addresss);
void desplay_all();


void search(int addresss){
     for(int i = 0;i < car_count;i++){
         if(car[i].address == address){
           printf("车牌号为：%s\n停车时间为：%d\n停车费用为：%.lf\n车位为：%d", car[i].num, car[i].time, get_money(car[i].time), car[i].address);
         }
         break;
     }
}

void delete(int address)
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



