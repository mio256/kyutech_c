#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char name[15];
	int age;
	int high;
} Data;

void sort(Data *data);

int main (void) {
	Data *data;
	data = (Data*)malloc(sizeof(Data));
	int i = 0;
	while(i < 3){
		printf("%d番目の名前、年齢、身長を入力:",i+1);
		scanf("%s %d %d",data[i].name ,&data[i].age ,&data[i].high);
		i++;
	}
    sort(data);
	free(data);
}

void sort(Data *data){
	int i,j,tmp;
	for(i = 0; i < 3; i++) {
		for(j = i + 1; j < 3; j++) {
			if(data[i].high < data[j].high) {
				tmp = data[i].high;
				data[i].high = data[j].high;
				data[j].high = tmp;
			}
		}
	}
	printf("3人の身長の高い順\n");
	for(i = 0; i < 3; i++){
		printf("%s %d %d\n",data[i].name ,data[i].age ,data[i].high);
	}
}