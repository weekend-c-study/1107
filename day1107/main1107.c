#include<stdio.h>

int main() {

	int n;
	scanf_s("%d", &n);
	return 0;
}

/*
#include<stdio.h>
//main a b�ٲܷ���?
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
//�ΰ��� ������ Ű���带 ���� �Է¹�������
//�Էµ� ���� �Լ��� �����ؼ� ���߿� ū���� �Ǵ��� ����
//��� ���
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
	printf("����2�� �����ؼ� �Է�( ex>10 20 )");
	scanf_s("%d %d", &a, &b);
	//printf("%d %d\n", a, b);
	int result = max(a, b);
	printf("���߿� ū�� : %d\n", result);
}
//*/
/*
#include<stdio.h>
#include"calcu.h" //����ڰ� ���� �������

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
	printf("���� �Է� : ");
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
//������Ÿ�� �Լ��̸�()
//{
	//return value;
//}
//void �Լ��̸�() {}
//void �Լ��̸�(�Ķ���� ����) {}
//����Ÿ�� �Լ��̸�(�Ķ���� ����) {}
//����Ÿ�� �Լ��̸�() {}

//�Լ��� ����

#include<stdio.h>

//�Լ��� ����
void display();
void disp(int n);
void add(int , int );

int main()
{
	//�Լ��� ȣ��
	display();
	disp(10); //n = 10;

	add(20,30);
	add(100, 300);
	add(1, 2);
	return 0;
}
//�Լ��� ����
void display()
{
	printf("�ȳ��ϼ���\n");
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
	//�����ͺ����� �޸� �ּ� ���尡��
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
	//�迭�� �����Ͱ����
	// arr[i] == *(arr+i)


	int arr[3] = { 10,20,30 };
	//�迭�̸��� �ᱹ�� �����Ϳ���
	//�迭��ü�� ù��°�ּҰ�==ù��°������ �ּ�
	printf("%d\n", *(arr+0));
	printf("%d\n", *(arr+1));
	//int* �޸𸮿��� +1�� 4byte����
	printf("%d\n", *(arr+2));

	double a[3] = { 1.0,2.5,3.4 };
	printf("%.1f\n", *(a + 0));
	printf("%.1f\n", *(a + 1));
	//int* �޸𸮿��� +1�� 8byte����
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
	puts("�����Է�");
	scanf_s("%d", &n);


	printf("%d\n", n);

	printf("%p\n", &n);

	int* ptr=&n;

	printf("%d", *ptr);
	//*ptr : ptr�� ����� �޸��ּ��̵��ؼ� �����ŭ �����͸� �о��.

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

	printf("��\n");

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
	//������ value�� ���� : ���������� �ʱ�ȭ�ϰ�
	//�������� default(0)���� �ʱ�ȭ
	int c[3] = { 1,2,3};
	//���� �ʱ�ȭdata �� ��ġ ����������..�ʱ�ȭ
	//�迭���� : �ڵ� ������ ������ش�
	//�迭�̸�[�ε�����ȣ] : �ε�����ȣ 0~
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