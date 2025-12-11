#include<stdio.h>
void add ();
void delete(int address);
double  get_money(int time);
void search(int addresss){
     for(int i = 0;i < car_count;i++){
         if(car[i].address == address){
	   printf("%s\n%d\n%.lf\n%d", car[i].num, car[i].time, car[i].money, car[i].address);
	 }
	 break;
     }
}
void desplay_all();

