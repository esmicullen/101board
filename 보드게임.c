/*
*�������
* �� 40ĭ
* �÷����� �Ӽ�
*	1. �� : 2,000 (���� : �鸸)
*	2. ������ġ : 0���� ����
*	3. Ȳ�ݿ��� 
			���ϴ� ��ġ �̵� 
			���� �����ϰ� �� ( +- 5��)
			T0D0 : ���� ����

*	4. �ֻ��� : 1~6

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	//�÷��̾��� ��ġ (0���� ����)
	int position = 0;
	int dice;
	//���� 2����� ���� �� ���� �ݾ��� ������� long long ���
	long long money = 200000000;

	srand(time(0));
	printf("������ġ : %d, ���۱ݾ� : %lld \n\n ", position,money);

	
	while (1)
	{
		//����Ű�� ������ �����Ŵ.
		getchar();

		//�ֻ����� 1 ~ 6 ���� ������ ����
		dice = rand() % 6 + 1;
		printf("�ֻ����� ���� %d�� ���Խ��ϴ�\n\n", dice);

		//���� �ֻ������� ������ġ�� ����
		position += dice;
		printf("������ġ : %d\n\n", position);

		if (position == 20)
		{
			printf("���õ��  - 20�� ��ġ�� ������ ����� 20%�� ����մϴ�");
			money = (long long)(money * 0.8);
			printf("������ġ : %d, ����ݾ� : %lld \n\n ", position, money);
		}

		if (position > 60)
		{
			printf("�����մϴ�. �������� �����ϼ̽��ϴ�.");
		}
	}

}