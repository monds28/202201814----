#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct specvc {  //구조체 사용
	char vcname[30]; //회사명
	char vctype[30]; // 백신 종류
	int age; //대상 나이
	int time; //사용간격


}; //백신의 특징

void rewrite(int x, int *y);

int main() {
	int namecode;
	int cold[10] = {885897, 18225460, 10731244, 3922968, 17634065, 9026281, 28917717, 22459362, 84706275, 26803867}; //배열
	double death[10] = {0.6, 0.1, 0.4, 1.1, 0.9, 0.3, 0.5, 0.8, 1.2, 0.5};
	double worldvc1[10] = {89.4, 87.8, 86.6, 86, 84.1, 82.2, 80.7, 78.4, 78, 76.9}; //백신현황 1회이상
	double worldvc2[10] = {87, 86.9, 81, 82.5, 79.4, 81, 78.4, 73.3, 66.8, 76.9}; //백신현황 접종완료 
	char wd; //수정
	int wvc; //백신 종류
	int (*loc) = NULL; //포인터 loc로 cold주소 받기 (포인터 활용)

	struct specvc a = { "화이자", "mRNA", 12, 21 };
	struct specvc b = { "모더나", "mRNA", 18, 28 };
	struct specvc c = { "얀센", "바이러스 벡터", 18, 0 };
	struct specvc d = { "아스트라제네카", "바이러스 벡터", 18, 96 };

	printf("코로나19 '세계 누적확진자 수와 사망률', '세계 백신 현황', '백신의 종류'에 대해 알려드립니다.\n");

	while (1) {
		printf("수정을 원하시면 y, 아니면 n을 입력해주십시오.\n");
		scanf("%c", &wd);
		if (wd == 'y') {
			loc = &cold;
			printf("어느나라의 확진자 수를 수정하겠습니까?\n국가코드는 다음과 같습니다.\n 0중국 1한국 2베트남 3캐나다 4이탈리아 5일본 6프랑스 7영국 8미국 9독일\n");
			scanf("%d", &namecode);
			rewrite(namecode, loc);

		}
		else if (wd == 'n') {
			printf("어느 나라의 통계를 원하십니까?\n국가코드를 입력해주세요.\n 국가코드는 다음과 같습니다. 0중국 1한국 2베트남 3캐나다 4이탈리아 5일본 6프랑스 7영국 8미국 9독일\n백신의 정보를 원한다면 10을 입력해주세요.\n");
			scanf("%d", &namecode);
			switch (namecode) {
			case 0:
				printf("중국\n 누적확진자 수: %d\n 사망률: %lf%\n 백신 현황: 1차- %lf 2차 - %lf\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 1:
				printf("한국\n 누적확진자 수: %d\n 사망률: %f%\n 백신 현황: 1차- %f 2차 - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 2:
				printf("베트남\n 누적확진자 수: %d\n 사망률: %f%\n 백신 현황: 1차- %f 2차 - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 3:
				printf("캐나다\n 누적확진자 수: %d\n 사망률: %f%\n 백신 현황: 1차- %f 2차 - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 4:
				printf("이탈리아\n 누적확진자 수: %d\n 사망률: %f%\n 백신 현황: 1차- %f 2차 - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 5:
				printf("일본\n 누적확진자 수: %d\n 사망률: %f%\n 백신 현황: 1차- %f 2차 - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 6:
				printf("프랑스\n 누적확진자 수: %d\n 사망률: %f%\n 백신 현황: 1차- %f 2차 - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 7:
				printf("영국\n 누적확진자 수: %d\n 사망률: %f%\n 백신 현황: 1차- %f 2차 - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 8:
				printf("미국\n 누적확진자 수: %d\n 사망률: %f%\n 백신 현황: 1차- %f 2차 - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 9:
				printf("독일\n 누적확진자 수: %d\n 사망률: %f%\n 백신 현황: 1차- %f 2차 - %f\n", cold[namecode], death[namecode], worldvc1[namecode], worldvc2[namecode]);
				break;
			case 10:
				printf("백신관련 정보를 알려드립니다. ");
				printf("어떤 백신을 원하십니까? 다음과 같이 입력해주세요.\n 화이자 - 1\n 모더나 - 2\n 얀센 - 3\n 아스트라제네카 - 4\n");
				scanf("%d", &wvc);
				switch (wvc) {
				case 1:
					printf("%s사의 백신은 %s이며, %d이상에게 접종할 수 있고, %d일이상 간격으로 사용해야합니다.\n", a.vcname, a.vctype, a.age, a.time);
				case 2:
					printf("%s사의 백신은 %s이며, %d이상에게 접종할 수 있고, %d일이상 간격으로 사용해야합니다.\n", b.vcname, b.vctype, b.age, b.time);
				case 3:
					printf("%s사의 백신은 %s이며, %d이상에게 접종할 수 있고, 재접종이 강제되지 않습니다.\n", c.vcname, c.vctype, c.age, c.time);
				case 4:
					printf("%s사의 백신은 %s이며, %d이상에게 접종할 수 있고, %d일이상 간격으로 사용해야합니다.\n", d.vcname, d.vctype, d.age, d.time);
				}
			}

		}
		else {
			printf("잘못된 값입니다.");
			continue;
		}

	}; //while문 괄호


	return 0;
}

void rewrite(int x, int *y) // 함수사용
{
	int fixnum;
	printf("수정할 값을 입력하세요.");
	scanf("%d", &fixnum);
	int* abc;
	abc = &fixnum;

	switch (x) {
	case 0:
		*y = fixnum; //포인터
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