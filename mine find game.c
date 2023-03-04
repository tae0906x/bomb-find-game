//#include<stdio.h> //지뢰찾기
//#include<stdlib.h>
//#include<time.h>
//struct random {
//	int rand1, rand2;
//};
//struct arrxy {
//	int arrx[38];
//	int arrz[38];
//};
//int user[6][7] = { 0, };
//int arry[6][7] = { 0, }; //전역 배열
//
//void print_user(int arry[6][7]);
//void boom_check(int x, int y);
//int main()
//{
//	struct random List[4];
//	struct arrxy List2[42];
//	int x = 0;
//	int y = 0;
//	int i = 0;
//	int j = 0;;
//	int cnt = 0;
//	int cnt2 = 0;
//	int cnt3 = 0;
//	int boom_num = 4;
//	srand(time(NULL));
//	while (1) { //단순 값비교를 통해 중복값 없애주는 코드
//		List[i].rand1 = rand() % 6;
//		List[i].rand2 = rand() % 7;
//		if (arry[List[i].rand1][List[i].rand2] == -1) {
//			continue;
//		}
//		else cnt++;
//		arry[List[i].rand1][List[i].rand2] = -1;
//		if (cnt == boom_num) {
//			break;
//		}
//	}
//
//	for (i = 0; i < 6; i++) {
//		for (j = 0; j < 7; j++) {
//			if (arry[i][j] == -1) { //폭탄 주변에 1을 넣어주는 코드
//				if (arry[i + 1][j] != -1) {
//					if (i + 1 <= 5) {
//						arry[i + 1][j] += 1;
//					}
//				}
//				if (arry[i - 1][j] != -1) {
//					if (i - 1 >= 0) {
//						arry[i - 1][j] += 1;
//					}
//				}
//				if (arry[i][j + 1] != -1) {
//					if (j + 1 <= 6) {
//						arry[i][j + 1] += 1;
//					}
//				}
//				if (arry[i][j - 1] != -1) {
//					if (j - 1 >= 0) {
//						arry[i][j - 1] += 1;
//					}
//				}
//				if (arry[i + 1][j + 1] != -1) {
//					if (i + 1 <= 5 && j + 1 <= 6) {
//						arry[i + 1][j + 1] += 1;
//					}
//				}
//				if (arry[i - 1][j + 1] != -1) {
//					if (i - 1 >= 0 && j + 1 <= 6) {
//						arry[i - 1][j + 1] += 1;
//					}
//				}
//				if (arry[i + 1][j - 1] != -1) {
//					if (i + 1 <= 5 && j - 1 >= 0) {
//						arry[i + 1][j - 1] += 1;
//					}
//				}
//				if (arry[i - 1][j - 1] != -1) {
//					if (i - 1 >= 0 && j - 1 >= 0) {
//						arry[i - 1][j - 1] += 1;
//					}
//				}
//			}
//		}
//	}
//	while (1) {
//		print_user(user);
//		printf("좌표를 입력하세요 : ");
//		scanf(" %d %d", &x, &y);
//		List2[i].arrx == x;
//		List2[i].arrz == y;
//		for (i = 0; i < 38; i++) {
//			if (List2[i].arrx == (List2[i].arrx - i) && List2[i].arrz == (List2[i].arrz - i)) {
//				cnt++;
//			}
//		}
//		if (x >= 6 || y >= 7) {
//			break;
//		}
//		//for (int i = 0; i < 6; i++) {
//		// for (int j = 0; j < 7; j++) {
//		// printf("%d ", user[i][j]);
//		// }
//		// printf("\n");
//		//}
//
//
//		printf("\n");
//		if (cnt2 == 0) {
//			boom_check(x, y);
//			cnt2++;
//		}
//
//		//printf("\n");
//		//for (int i = 0; i < 6; i++) {
//		// for (int j = 0; j < 7; j++) {
//		// printf("%d ", user[i][j]);
//		// }
//		// printf("\n");
//		//}
//
//		if (arry[x][y] == -1) {
//			printf("game over");
//			break;
//		}
//		else {
//			/*printf("사용자님이 고른 좌표는 %d입니다\n", arry[x][y]);*/
//			user[x][y] = 1;
//		}
//	}
//}
//void print_user(int user[6][7]) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 6; i++) {
//		for (j = 0; j < 7; j++) {
//			/*printf("%2d", user[i][j]);*/
//			if (user[i][j] == 0) {
//				printf("■"); //arry[i][j]기억
//			}
//			else if (user[i][j] == 1) {
//				printf("%2d", arry[i][j]);
//				/* int a, b;*/
//				/* for (a = i - 1; a <= i + 1; a++) {
//				for (b = j - 1; b <= j + 1; b++) {
//				user[a][b] = 1;
//				}
//				}*/
//			}
//			/* else {
//			printf("@");
//			}*/
//
//		}
//		printf("\n");
//	}
//}
//
//void boom_check(int x, int y) { //처음 시작 시 입력 좌표 포함 주변 8칸을 보여주는 코드(지뢰라면 보여주지않음)
//	if (arry[x][y] != -1) {
//		if (arry[x + 1][y] != -1) {
//			if (x + 1 <= 5) {
//				user[x + 1][y] = 1;
//			}
//		}
//		if (arry[x - 1][y] != -1) {
//			if (x - 1 >= 0) {
//				user[x - 1][y] = 1;
//			}
//		}
//		if (arry[x][y + 1] != -1) {
//			if (y + 1 <= 6) {
//				user[x][y + 1] = 1;
//			}
//		}
//		if (arry[x][y - 1] != -1) {
//			if (y - 1 >= 0) {
//				user[x][y - 1] = 1;
//			}
//		}
//		if (arry[x + 1][y + 1] != -1) {
//			if (x + 1 <= 5 && y + 1 <= 6) {
//				arry[x + 1][y + 1] += 1;
//				user[x + 1][y + 1] = 1;
//			}
//		}
//		if (arry[x - 1][y + 1] != -1) {
//			if (x - 1 >= 0 && y + 1 <= 6) {
//				user[x - 1][y + 1] = 1;
//			}
//		}
//		if (arry[x + 1][y - 1] != -1) {
//			if (x + 1 <= 5 && y - 1 >= 0) {
//				user[x + 1][y - 1] = 1;
//			}
//		}
//		if (arry[x - 1][y - 1] != -1) {
//			if (x - 1 >= 0 && y - 1 >= 0) {
//				user[x - 1][y - 1] = 1;
//			}
//		}
//	}
