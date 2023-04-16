//포인터 배열 문제

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

//int main()
//{
//
//	//다음 코드 실행의 예상되는 결과는? **			// 출력 : I like C
//	{
//		char str[50] = "I like C programming";
//		str[8] = '\0';
//		cout << str << endl;
//	}
//
//
//	//다음 코드 실행의 예상되는 결과는? **			// 출력 : 33
//	{
//		int arr[3] = { 11, 22, 33 };
//		int* ptr = arr;
//		cout << *(ptr + 2);
//	}
//
//	//다음 코드의 실행 결과를 쓰시오. *			// 출력 : HW
//	{
//		char arr2[] = "Hello World";
//		char* str = arr2;
//		cout << arr2[0] << *(str + 6) << endl;
//	}
//
//	//아래의 포인터 배열을 for 문을 이용해 출력하는 코드를 작성하세요. *		//
//	{
//		const char* str[] = { "seoul","paris","london" };
//		for (int i = 0; i < sizeof(str); i++)
//		{
//			cout << str[i] << " ";
//		}
//	}
//
//	// 결과는?			// 출력 : 0
//	char str_a[] = "abc";
//	char str_b[] = "abc";
//	printf("%d", str_a == str_b); 
//
//	return 0;
//}



//1. 다음과 같은 다차원 배열을 바르게 선언한 것은?   // 답 : 2번
	//1	2	3	4
	//5	6	7	8

 //  (1) int Array[2][2];
 //  (2) int Array[2][4];
 //  (3) int Array[4][2];
 //  (4) int Array[4][4];


//2. 다음 코드의 실행 후 예상되는 결과는? *		// 출력 : 6

  /*int main(void)
  {
	int Array[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	cout << Array[1][2] << endl;
  }*/

  //3. ( )안에 들어갈 적당한 것을 고르시오  **		// 답 : 4번

	 //int arr[10];      //arr의 포인터형은 ( int * )
	 //int * parr[20];  //parr의 포인터형은 (        )

	 //(1) int
	 //(2) int[]
	 //(3) int *
	 //(4) int **

  //4. 2차원 배열의 연산에 관한 코드입니다. 예상되는 출력은 얼마입니까? *		// 출력 : 3 

//int main(void)
//{
//	/*{
//		int arr[3][2] = { { 1,2 }, { 3, 4 }, { 5, 6 } };
//		cout << **(arr + 1) << endl;
//		return 0;
//
//		int arr2[3] = { 1,5,3 };
//		int* parr = arr2;
//		cout << *parr + 1;
//	}*/
//
//	//{
//	//	int arr[2] = { 1,2 };
//	//	cout << arr << endl;
//	//	cout << &arr[0];
//	//}
//
//}

////5. 함수로 배열을 전달하기 위해서는 배열의 주소값을 전달하는 방식을 취한다. **			// 답 : 4번
//   다음 중 A, B 자리에 들어갈 값으로 적당한 것은?
//
//	void SimpleFunc(  A  )
//	{
//		printf(“%d %d”, param[0], param[1]);
//	}
//
//	int main(void)
//	{
//		int arr[3] = {1, 2, 3};
//		SimpleFunc(  B  );
//	}
//
//   (1) int param, &arr
//   (2) int param, arr
//   (3) int *param, &arr
//   (4) int *param, arr
//
//
////6. Call-by-value 는 값을 전달하는 형태의 함수호출,
//  Call-by-reference 는 주소 값을 전달하는 형태의 함수호출을 뜻합니다.			// 답 : Call by Value
//  다음 코드는 어떤 방식인가요?
//
//	int Add(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//
//	int main(void)
//	{
//		int num1 = 2, num2 = 3;
//		int sum = Add(num1, num2);
//	}
//
////7. 다음 중 A, B 자리에 들어갈 값으로 적당한 것은?			// 답 : 3번
//
//	int num;
//	scanf(“%d”,   A   );
//	char str[10];
//	scanf(%s,  B   );
//
//   (1) num, str
//   (2) num, &str
//   (3) &num, str
//   (4) &num, &str
//
////8. 다음 코드에 필요한 두 변수의 값을 교환하는 swap 함수를 작성해 보세요. *

//void swap(int* a, int* b)
//{
//	int tmp;
//	int* ptmp = &tmp;
//	*ptmp = *a;
//	*a = *b;
//	*b = *ptmp;
//}
//	int main()
//	{
//		int num1 = 1;
//		int num2 = 2;
//		swap( &num1, &num2);
//		cout << num1 << num2;
//	}

////9. 다음 코드에 필요한 두 변수의 값을 교환하는 swap 함수를 작성해 보세요. **

//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
// }
//
// 
//	int main()
//	{
//		int num1 = 1;
//		int num2 = 2;
//		swap(num1, num2);
//		cout << num1 << num2;
//	}

////10. 절대값을 구하는 함수 작성하기  //참조, 포인터 두가지 사용
//int abs(int* a)
//{
//	if (*a < 0)
//		return *a *= -1;
//	else
//		return *a;
//}
//
//int abs2(int& a)
//{
//	if (a < 0)
//		return a *= -1;
//	else
//		return a;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << abs(&n) ;
//}

////-----------------------------------------------------------------
////11. 배열을 함수의 인자로 전달하여 출력하는 함수를 만들어 보세요.
//
//#include <stdio.h>
//

//void ShowArray(int* p , int a)
//{
//	for (int i = 0; i < a; i++)
//	{
//		cout << p[i] << " ";
//	}
//}
//
//int main(void)
//{
//	int arr[3] = { 1, 2, 3 };
//	int len = sizeof(arr) / sizeof(int);
//	ShowArray(arr, len);		//출력 함수 작성해 보자
//	return 0;
//}


////12. 포인터의 배열 //arr1 을 이용해서, 변수의 값을 아래와 같이 출력하세요.
//	//10 20 30 40
//
	//int main()
	//{
	//	int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
	//	int* arr1[4] = { &num1, &num2, &num3, &num4 };   // 포인터 배열

	//	for (int i = 0; i < 4; i++)
	//	{
	//		cout << *arr1[i] << " ";
	//	}

	//}


//
////13. 배열의 포인터 //아래와 같이 출력하세요.
//	//1 2 3 4
//	//5 6 7 8
	
	//int main()
	//{
	//	int arr2d[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	//	int(*parr)[4] = arr2d;							 // 배열 포인터
	//	
	//	for (int i = 0; i < 2; i++)
	//	{
	//		for (int j = 0; j < 4; j++)
	//		{
	//			cout << parr[i][j] << " ";
	//		}
	//		cout << endl;
	//	}
	//}

//
////14. 이중 포인터 //출력하는 함수를 만들어 보세요.
//
//	#include <iostream>
//	using namespace std;
//
	//void PrintStr(const char** a)
	//{
	//	for (int i = 0; i < 3; i++)
	//	{
	//		cout << a[i] << " ";
	//	}
	//}

	//int main(void)
	//{
	//	const char* strArr[3] = { "Simple", "String", "Array" };

	//	//printf("%s \n", strArr[0]); //const char * 형 주소
	//	//printf("%s \n", strArr[2]);
	//	//printf("%d \n", sizeof(strArr[0]));

	//	PrintStr(strArr);		//출력하세요.
	//}
//
//
//
////15. 함수포인터 //함수를 함수포인터로 선언해서 사용해 보세요.
//
	//void ShowString(const char * str)
	//{
	//	printf("%s \n", str);
	//}

	//int main()
	//{
	//	const char* str = "JASON";

	//	void (*p)(const char*) = ShowString;
	//	p(str);
	//}
//
//
//
////16. MyCompare 함수를 작성하세요. (void*, 콜백)
//
	//int MyCompare(const void* pa, const void* pb)
	//{
	//	if ((*(int*)pa) > *(int*)pb)
	//		return 1;
	//	else if ((*(int*)pa) < *(int*)pb)
	//		return -1;
	//	return 0;
	//}
	//
	//int main(void)
	//{
	//	int aList[5] = { 30, 10, 40, 50, 20 };
	//	int i = 0;

	//	qsort(aList, 5, sizeof(int), MyCompare);

	//	for (i = 0; i < 5; ++i)
	//		printf("%d\t", aList[i]);
	//	return 0;
	//}

//
////17. 문자열의 길이를 구하는 함수를 만드세요.
//
//	#include <stdio.h>
//
//int str_length(char* str)
//{
//	int a = strlen(str);
//	return a;
//	}
//
//	int main()
//	{
//		char str[] = { "What is your name?" };
//		printf("이 문자열의 길이 : %d \n", str_length(str));
//		return 0;
//	}

