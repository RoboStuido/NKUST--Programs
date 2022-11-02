#include <stdio.h>
#include <stdlib.h>

void gameLoop(int range_min, int range_max, int chances) {
	int usr_num, sys_num=78;
	int hit = 0;
	
	while(chances>0) {
		printf("�п�J���� %d ~ %d ��������(�t) / �٦� %d �����| > ", range_min, range_max, chances);
		scanf("%d", &usr_num);
		chances--;
	
		if(usr_num < sys_num && usr_num > range_min) {
			if (chances > 0) printf("�A���@�I\n");
			range_min = usr_num;
		}	else if (usr_num > sys_num && usr_num < range_max) {
			if (chances > 0) printf("�A�C�@�I\n");
			range_max = usr_num;
		}	else if (usr_num == sys_num)	{
			printf("���ߧA�q���F!\n");
			hit = 1;
			chances = 0;
		}	else {
			printf("�W�X�d��\n");
			chances++;
		}
	}
	
	if(chances==0 && hit == 0) {
		printf("\n�ӥi���F! �~�M�S�q��C���׬O %d", sys_num);
	}
}

int main() {
	int min=0, max=100, chances=5;
	gameLoop(min, max, chances);
}
