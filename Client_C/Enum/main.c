#pragma warning (disable : 4996)
#include <stdio.h>

// FSM ( Finite State Machine )
// ���� ���� �ӽ�
enum JumpState {
	Idle,
	PrepareToJump,
	InFight,
	Falling,
	OnGroound,
};

// enum : ������, ��������� �ڷ����� �����ϱ����� Ű����
enum PlayerState {
	Idle,
	Walk,
	Run,
	Attack,
	Jump,
	Hurt,
};

// �÷��̾� ����
// 0 = �ƹ��͵� ���� �ʴ»���
// 1 = �ȱ�
// 2 = �޸���
// 3 = �����ϱ�
// 4 = �����ϱ�
// 5 = �ǰݴ��ϱ�


int playerState;
int main() {

	enum PlayerState playerState = 0;
	playerState = Jump;

	while (1)
	{


		scanf("%d", &playerState);
		switch (playerState)
		{
		case Idle:
			printf("�ƹ��͵� �����ʴ� ����");
			break;
		case Walk:
			printf("�ȱ�");
			break;
		case Run:
			printf("�޸���");
			break;
		case Attack:
			printf("�����ϱ�");
			break;
		case Jump:
			printf("�����ϱ�");
			break;
		case Hurt:
			printf("�ǰݴ��ϱ�");
			break;

		default:
			printf("���� �������� �𸣰ھ�� �Ф�");
			break;
		}
	}

}