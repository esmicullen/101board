/*
*보드게임
* 총 40칸
* 플레이의 속성
*	1. 돈 : 2,000 (단위 : 백만)
*	2. 현재위치 : 0부터 시작
*	3. 황금열쇠 
			원하는 위치 이동 
			돈을 랜덤하게 줌 ( +- 5억)
			T0D0 : 돈을 뺏음

*	4. 주사위 : 1~6

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	//플레이어의 위치 (0부터 시작)
	int position = 0;
	int dice;

	srand(time(0));
	printf("현재위치 : %d\n", position);

	//주사위는 1 ~ 6 까지 나오게 설정
	dice = rand() %6 +1;
	printf("주사위를 던져 %d가 나왔습니다\n", dice);
	
	//던진 주사위값은 현재위치에 적용
	position += dice;
	printf("현재위치 : %d\n", position);
}