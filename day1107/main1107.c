#include<stdio.h>

int main() {

	int n;
	scanf_s("%d", &n);
	return 0;
}

/*
#include<stdio.h>
//main a b바꿀려면?
void changeNum(int* p1, int* p2) {
	int temp = *p1;// *p1==10
	*p1 = *p2;
	*p2 = temp;
}

int main() {

	int a = 10, b = 20;

	changeNum(&a, &b);

	printf("%d %d\n", a, b);

	return 0;
}
//*/

/*
#include<stdio.h>
void increment(int n) 
{//int n = 10;
	n++;
	printf("%d\n", n);
}
int main() 
{
	int num = 10;

	increment(num);//11
	increment(num);

	printf("%d\n", num);

	return 0;
}
//*/

/*
#include<stdio.h>
//두개의 정수를 키보드를 통해 입력받으세요
//입력된 값을 함수에 전달해서 둘중에 큰수를 판단후 리턴
//결과 출력
int max(int x, int y) 
{
	//return x>y? x: y;
	int result;
	if (x > y) {
		result = x;
	}
	else {
		result = y;
	}

	return result;
}
int main() {
	int a, b;
	printf("정수2개 연속해서 입력( ex>10 20 )");
	scanf_s("%d %d", &a, &b);
	//printf("%d %d\n", a, b);
	int result = max(a, b);
	printf("둘중에 큰수 : %d\n", result);
}
//*/
/*
#include<stdio.h>
#include"calcu.h" //사용자가 만든 헤더파일

int main()
{
	//printf("%d\n", add(10, 20) );
	disp();
	return 0;
}
//*/

/*
#include<stdio.h>

int inputData(void) {
	int n;
	printf("정수 입력 : ");
	scanf_s("%d", &n);

	return n;
}


int main()
{
	int result=inputData(1000);
	printf("%d\n", result);

	return 0;
}
//*/

/*
#include<stdio.h>

int plus(int a, int b)
{
	int result = a + b;
	return result;
}

double div(int a, int b)
{
	double result=(double)a / b;
	return result;
}


int  main() {

	int r = plus(10, 20);

	printf("%d\n", r);
	printf("%d\n", plus(100,200) );

	printf("%.2f\n", div(10,2));
	printf("%.2f\n", div(3, 2));

	return 0;
}
//*/
/*
//리턴형타입 함수이름()
//{
	//return value;
//}
//void 함수이름() {}
//void 함수이름(파라미터 존재) {}
//리턴타입 함수이름(파라미터 존재) {}
//리턴타입 함수이름() {}

//함수의 정의

#include<stdio.h>

//함수의 선언
void display();
void disp(int n);
void add(int , int );

int main()
{
	//함수의 호출
	display();
	disp(10); //n = 10;

	add(20,30);
	add(100, 300);
	add(1, 2);
	return 0;
}
//함수의 정의
void display()
{
	printf("안녕하세요\n");
}
void disp(int n) {
	printf("n = %d\n", n);
}

void add(int a, int b) {
	printf("%d + %d = %d\n", a, b, a + b);
}
//*/

/*
#include<stdio.h>
int main() {

	int n=10;
	//포인터변수에 메모리 주소 저장가능
	int* ptr=&n;

	printf("%d\n", *ptr);

	*ptr = *ptr+100;

	printf("%d\n", *ptr);

	printf("%d\n", n);

	//n = n+100;
	//printf("%d\n", n);

	return 0;
}
//*/

/*
#include<stdio.h>
void display(int* ptr) {
	for (int i = 0; i < 3; i++) {
		printf("%d %d\n", *(ptr+i), ptr[i] );
	}
}
//arr[0] == *(arr+0)
//int _a=10, int _b=20
void disp(int _a, int _b) {
	printf("a+b= %d\n", _a + _b);
}
int main() {

	int arr[30000] = { 10,20,30 };
	
	int a=10, b=20;
	display(arr);
	disp(a, b);
	disp(100, 200);
	
	return 0;
}
//*/


/*
#include<stdio.h>

int main() {
	//배열과 포인터관계는
	// arr[i] == *(arr+i)


	int arr[3] = { 10,20,30 };
	//배열이름은 결국은 포인터에요
	//배열전체의 첫번째주소값==첫번째변수의 주소
	printf("%d\n", *(arr+0));
	printf("%d\n", *(arr+1));
	//int* 메모리연산 +1당 4byte증가
	printf("%d\n", *(arr+2));

	double a[3] = { 1.0,2.5,3.4 };
	printf("%.1f\n", *(a + 0));
	printf("%.1f\n", *(a + 1));
	//int* 메모리연산 +1당 8byte증가
	printf("%.1f\n", *(a + 2));

	//printf("%p %d\n", &arr[0], *(&arr[0]));
	//printf("%p %d\n", &arr[1], *(&arr[1]));
	//printf("%p %d\n", &arr[2], *(&arr[2]));
	return 0;
}
//*/

/*
#include<stdio.h>
int main() {
	//int n = 10;
	//int*ptr = &n;
	//printf("%d", *ptr);

	int arr[3] = {0,1,2};
	// arr[0], arr[1], arr[2]

	printf("%d : %p : %d\n", arr[0], &arr[0], &arr[0]);
	printf("%d : %p : %d\n", arr[1], &arr[1], &arr[1]);
	printf("%d : %p : %d\n", arr[2], &arr[2], &arr[2]);

	double a[3];
	printf("%d\n", &a[0]);
	printf("%d\n", &a[1]);
	printf("%d\n", &a[2]);
	return 0;
}
//*/
/*
#include<stdio.h>
int main() {

	int n;
	puts("숫자입력");
	scanf_s("%d", &n);


	printf("%d\n", n);

	printf("%p\n", &n);

	int* ptr=&n;

	printf("%d", *ptr);
	//*ptr : ptr에 저장된 메모리주소이동해서 사이즈만큼 데이터를 읽어라.

	return 0;
}
//*/
/*
#include<stdio.h>
int main() {

	char ch[4] = {'a', 'b', 'c', 'd'};

	for (int i = 0; i < 4; i++) {
		printf("%c : %d\n", *(ch+i), ch[i]);
	}

	printf("끝\n");

	printf("%s\n", ch);

	return 0;
}
*/

/*
#include<stdio.h>

int main() 
{
	int a;
	int b[10] = {1};
	//공간과 value가 개수 : 순착적으로 초기화하고
	//나머지는 default(0)으로 초기화
	int c[3] = { 1,2,3};
	//공간 초기화data 가 일치 순차적으로..초기화
	//배열선언 : 자동 변수를 만들어준다
	//배열이름[인덱스번호] : 인덱스번호 0~
	// b[0], b[1], b[2] ~ b[9]
	for (int i=0;i<10;i++) {
		printf("%d\n", b[i]);
	}
	
	return 0;
}

void aaa() 
{
	int a;
}
*/