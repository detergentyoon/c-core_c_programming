# 포인터의 개념
**포인터(pointer)는 주소(address)를 저장하는 변수**로, 예를 들어 char형 변수에 저장된 값은 문자 코드이고, int형 변수에 저장된 값은 정수이다. 마찬가지로 포인터 변수에 저장된 값은 주소이다.

32bit 플랫폼에서는 32bit(4byte)의 주소 크기를 가진다.
+ 0x00000000 ~ 0xffffffff 번지

64bit 플랫폼에서는 64bit(8byte)의 주소 크기를 가진다.
+ 0x0000000000000000 ~ 0xffffffffffffffff

포인터는 주소를 이용해서 다른 변수에 접근할 수 있는, 즉 **다른 변수를 가리키는 변수**이다.

<br>

---
<br>

# 포인터의 선언 및 초기화
>## 포인터의 선언 형식
`data_type *vari_name`  
`data_type *vari_name = init_value`  
\* 기호는 포인터 수식어로, 다음으로 오는 변수를 포인터로 형변환시킨다. 포인터 변수는 간단히 포인터라고 칭한다.

```c
// ex
int *p;
double * pd;

int a = 10;
int *pa = &a;
char *pc = NULL;
```
**포인터를 선언할 때 지정하는 데이터형은 포인터가 가리키는 변수의 데이터형**이다. 포인터 수식어 `*`는 데이터형 쪽에 붙여 써도 되고 변수 쪽으로 붙여 써도 되지만 통상적으로 변수쪽에 붙여 써 주는 것이 직관적인 구분이 가능하게 한다. (Visual Studio 2019 에서는 포인터 코드 작성시 자동으로 데이터형 쪽에 `*`가 붙음)

>>### why?
포인터를 한 줄에 여러 개 선언하는 경우
```c
int *p1, *p2, *p3; // p1, p2, p3는 모두 포인터
```
아래 코드처럼 데이터형 쪽에 `*`가 붙어있으면 마치 `p2`, `p3`도 `int*`형이 되는 것처럼 혼동할 수 있다. 
```c
int* p1, p2, p3; // p1은 포인터, p2, p3는 int형 변수
int *p1, p2, p3; // p1만 포인터라는 것을 명확하게 파악하기 쉽다.
```

**포인터의 데이터형이 다르더라도 포인터의 크기는 항상 같다**. int 포인터와 double 포인터 모두 주소를 저장하기 때문이다. 포인터의 크기는 플랫폼에 의해서 결정된다. 즉, 32bit 플랫폼에서는 포인터가 항상 4byte, 64bit 플랫폼에서는 항상 8byte 크기다.
```c
printf("%d byte", sizeof(int*)); // 64bit 플랫폼 기준 int 포인터 크기
// 결과값 : 8 byte
```
<br>

>## 포인터의 초기화
포인터에 값을 초기화할 때는 **주소 구하기(address-of) 연산자**인 `&`를 사용하여 변수 a의 주소 값을 포인터 변수 p에 할당하여 포인터로 하여금 변수 a의 값에 직접적으로 개입할 수 있게 한다. 
```c
int a = 10;
int *p = &a;
```
<br>

---
<br>

# 포인터의 사용
포인터 앞에 `*`를 써서 포인터가 가리키는 변수의 값을 읽어 오거나 변경(참조)할 수 있고, 반대로 본래 변수의 값에서 포인터 값으로 역참조(간접 참조(indirection))할 수도 있다. 즉, **포인터에 변수의 주소를 할당하면 서로 같은 주소를 사용하게 되기 때문에 이후 변경되는 값 또한 양쪽 모두 똑같이 적용**된다.
```c
int a = 10;
int* p = &a; // a 와 *p 는 서로 같은 주소를 사용 = 값이 똑같이 적용

*p = 20;
printf("%d ", a); // 참조 결과값 : 20
a = 30;
printf("%d ", *p); // 역참조 결과값 : 30
```
<br>

---
<br>

# 포인터의 용도
포인터의 사용 시기 : 변수의 이름을 직접 사용할 수 없을 때
```c
void test(int a)
{
    a = 20;
} // test 함수가 return될 때 test 내의 a 값은 소멸하기 때문에

int main()
{
    int a = 10;
    test(a); // test 함수의 매개변수로 main 함수의 a 값을 사용해도 
    printf("a = %d", a); // 결과값 : 10
    // a의 값은 변경되지 않음
}
```
이렇게 변수의 이름을 직접 사용할 수 없는 경우 포인터를 사용하여 주소로 접근할 수 있다. main 함수의 a는 main 함수 내의 지역 변수이므로 다른 함수에서는 사용할 수 없지만, a의 주소를 넘겨주면 다른 함수에서 a의 주소를 이용해 main의 a값에 접근할 수 있다.
```c
void test(int *p) // p는 main 함수의 a의 주소로 초기화
{
    *p = 20; // p가 가리키는 main 함수의 a 값을 변경
}

int main()
{
	int a = 10;
	test(&a); // a의 주소 전달
	printf("a = %d", a); // 결과값 : 20
    // a의 값이 변경됨
}
```
test 함수의 매개변수 p는 main 함수 내의 a를 가리킨다. 따라서 포인터 p로 main의 a값을 끌어와서(역참조) 사용할 수  있다.

<br>

---
<br>

# 함수와 포인터
>## 값에 의한 전달(passing by value)
```c
double get_area(double radius)
{
    const double PI = 3.14159265359;
    return PI * radius * radius;
}

int main()
{
    double result = get_area(2.5);
    // 2.5를 매개변수 radius에 복사하여 전달
    printf("%f", result);
}
```
<br>

>## 포인터에 의한 전달(passing by pointer)
```c
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 5;
    int b = 3;

    swap(&a, &b);
    printf("a = %d\nb = %d", a, b);
}
```
<br>

>## 배열의 전달
```c
void print_arr(int arr[], int size);
// ==
void printf_arr(int *arr, int size);
```