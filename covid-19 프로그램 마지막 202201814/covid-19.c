#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct specvc {  //����ü ���
	char vcname[30]; //ȸ���
	char vctype[30]; // ��� ����
	int age; //��� ����
	int time; //��밣��


}; //����� Ư¡

void rewrite(int x, int *y);

int main() {
	int namecode;
	int cold[10] = {885897, 18225460, 10731244, 3922968, 17634065, 9026281, 28917717, 22459362, 84706275, 26803867}; //�迭
	double death[10] = {0.6, 0.1, 0.4, 1.1, 0.9, 0.3, 0.5, 0.8, 1.2, 0.5};
	double worldvc1[10] = {89.4, 87.8, 86.6, 86, 84.1, 82.2, 80.7, 78.4, 78, 76.9}; //�����Ȳ 1ȸ�̻�
	double worldvc2[10] = {87, 86.9, 81, 82.5, 79.4, 81, 78.4, 73.3, 66.8, 76.9}; //�����Ȳ �����Ϸ� 
	char wd; //����
	int wvc; //��� ����
	int (*loc) = NULL; //������ loc�� cold�ּ� �ޱ� (������ Ȱ��)

	struct specvc a = { "ȭ����", "mRNA", 12, 21 };
	struct specvc b = { "�����", "mRNA", 18, 28 };
	struct specvc c = { "�Ἶ", "���̷��� ����", 18, 0 };
	struct specvc d = { "�ƽ�Ʈ������ī", "���̷��� ����", 18, 96 };

	printf("�ڷγ�19 '���� ����Ȯ���� ���� �����', '���� ��� ��Ȳ', '����� ����'�� ���� �˷��帳�ϴ�.\n");

	while (1) {
		printf("������ ���Ͻø� y, �ƴϸ� n�� �Է����ֽʽÿ�.\n");
		scanf("%c", &wd);
		if (wd == 'y') {
			loc = &cold;
			printf("��������� Ȯ���� ���� �����ϰڽ��ϱ�?\n�����ڵ�� ������ �����ϴ�.\n 0�߱� 1�ѱ� 2��Ʈ�� 3ĳ���� 4��Ż���� 5�Ϻ� 6������ 7���� 8�̱� 9����\n");
			scanf("%d", &namecode);
			rewrite(namecode, loc);

		}
		else if (wd == 'n') {
			printf("��� ������ ��踦 ���Ͻʴϱ�?\n�����ڵ带 �Է����ּ���.\n �����ڵ�� ������ �����ϴ�. 0�߱� 1�ѱ� 2��Ʈ�� 3ĳ���� 4��Ż���� 5�Ϻ� 6������ 7���� 8�̱� 9����\n����� ������ ���Ѵٸ� 10�� �Է����ּ���.\n");
			scanf("%d", &namecode);
			switch (namecode) {
			case 0:
				printf("�߱�\n ����Ȯ���� ��: %d\n �����: %lf%\n ��� ��Ȳ: 1��- %lf 2�� - %lf\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 1:
				printf("�ѱ�\n ����Ȯ���� ��: %d\n �����: %f%\n ��� ��Ȳ: 1��- %f 2�� - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 2:
				printf("��Ʈ��\n ����Ȯ���� ��: %d\n �����: %f%\n ��� ��Ȳ: 1��- %f 2�� - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 3:
				printf("ĳ����\n ����Ȯ���� ��: %d\n �����: %f%\n ��� ��Ȳ: 1��- %f 2�� - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 4:
				printf("��Ż����\n ����Ȯ���� ��: %d\n �����: %f%\n ��� ��Ȳ: 1��- %f 2�� - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 5:
				printf("�Ϻ�\n ����Ȯ���� ��: %d\n �����: %f%\n ��� ��Ȳ: 1��- %f 2�� - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 6:
				printf("������\n ����Ȯ���� ��: %d\n �����: %f%\n ��� ��Ȳ: 1��- %f 2�� - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 7:
				printf("����\n ����Ȯ���� ��: %d\n �����: %f%\n ��� ��Ȳ: 1��- %f 2�� - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 8:
				printf("�̱�\n ����Ȯ���� ��: %d\n �����: %f%\n ��� ��Ȳ: 1��- %f 2�� - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 9:
				printf("����\n ����Ȯ���� ��: %d\n �����: %f%\n ��� ��Ȳ: 1��- %f 2�� - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 10:
				printf("��Ű��� ������ �˷��帳�ϴ�. ");
				printf("� ����� ���Ͻʴϱ�? ������ ���� �Է����ּ���.\n ȭ���� - 1\n ����� - 2\n �Ἶ - 3\n �ƽ�Ʈ������ī - 4\n");
				scanf("%d", &wvc);
				switch (wvc) {
				case 1:
					printf("%s���� ����� %s�̸�, %d�̻󿡰� ������ �� �ְ�, %d���̻� �������� ����ؾ��մϴ�.\n", a.vcname, a.vctype, a.age, a.time);
				case 2:
					printf("%s���� ����� %s�̸�, %d�̻󿡰� ������ �� �ְ�, %d���̻� �������� ����ؾ��մϴ�.\n", b.vcname, b.vctype, b.age, b.time);
				case 3:
					printf("%s���� ����� %s�̸�, %d�̻󿡰� ������ �� �ְ�, �������� �������� �ʽ��ϴ�.\n", c.vcname, c.vctype, c.age, c.time);
				case 4:
					printf("%s���� ����� %s�̸�, %d�̻󿡰� ������ �� �ְ�, %d���̻� �������� ����ؾ��մϴ�.\n", d.vcname, d.vctype, d.age, d.time);
				}
			}

		}
		else {
			printf("�߸��� ���Դϴ�.");
			continue;
		}

	}; //while�� ��ȣ


	return 0;
}

void rewrite(int x, int *y) // �Լ����
{
	int fixnum;
	printf("������ ���� �Է��ϼ���.");
	scanf("%d", &fixnum);
	int* abc;
	abc = &fixnum;

	switch (x) {
	case 0:
		*y = fixnum; //������
	case 1:
		*y = fixnum;
	case 2:
		*y = fixnum;
	case 3:
		*y = fixnum;
	case 4:
		*y = fixnum;
	case 5:
		*y = fixnum;
	case 6:
		*y = fixnum;
	case 7:
		*y = fixnum;
	case 8:
		*y = fixnum;
	case 9:
		*y = fixnum;
	}
	
}