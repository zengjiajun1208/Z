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
desplay_all()
{
	if(car_count==0)
	{
		printf("No vehicles in the parking lot\n");
	        return ;
	}
printf("=====Parking Lot Vehicle Information=====\n");	
printf("Parking Space No.\tLicense Plate\tParking Duration\tFee\n");
for(int i=0;i<car_count:i++)
{
	printf("%d\t%s\t%d\t%.2lf\n",vehicle[i].address,vehicle[i].num,vehicle[i].time,get_money(vehicle[i].time);
			}
			}
