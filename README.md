# libft  
My library aims to code a C library  
  
## Libfttest  
> https://github.com/jtoty/Libftest  
폴더 들어가서 ```bash grademe.sh```  

## libftTester  
> https://github.com/Tripouille/libftTester  
폴더 들어가서 ```make a```   

## libft-unit-tester  
> https://github.com/alelievr/libft-unit-test  
폴더 들어가서 ```make f```  
-> 가장 현재까지 update된 repo, crash된 이유를 말해줌.   

## Makefile
  
1. all : ```make```  
보너스파트 제외 모두 컴파일하고 libft.a만듬.  

2. bonus : ```make bonus```  
only make bonus part  

3. clean : ```make clean```    
delete obj files    

4. fclean : ```make fclean```   
delete obj files and libft.a  

5. re : ```make re```  
flean and make  
  
## Usage
0. ```git clone ...```   
1. ```make```  
2. ```gcc libft.a main.c```  

* size_t는  unsigned int

### ft_memset : 메모리 초기화
메모리 영역 ```b```의 ```len``` byte까지를 ```c```로 초기화

### ft_memmove : 곂치는거 뒤에서부터 시작
메모리 공간이 겹친 경우에는 복사/이동을 수행하는 과정에서 src의 값 자체가 변경이 될 수 있는데, 이러한 문제를 메모리의 위치를 비교해서 앞에서부터 복사를 수행할지 뒤에서부터 수행할지 선택하는걸로 피할 수 있습니다. 원본 memmove에서는 임시 버퍼를 사용하지만 libft의 memmove는 malloc을 사용할 수 없고, 배열을 사용하는 방식으로 한다면 stack메모리 영역 내부로 한정되기 때문에 크기를 비교해서 복사를 앞에서부터 진행하거나 뒤에서부터 진행하는 방식을 사용하는것이 더 안전한게 아닐까 생각하고 있어요.

### ft_strchr
단어찾기

### ft_strrchr
마지막 단어 찾기.

### ft_strnstr
문자열 haystack에서 길이 len내에 needle이 있는지 검사를 하는 함수이다. 만약 찾았다면 찾은 지점의 포인터를 반환하고 만약 못 찾았다면 NULL을 반환한다. 그리고 또 우리가 찾아야 할 문자열이 빈 문자열이라면("\0") haystack을 그대로 반환해 준다.

### ft_calloc
size크기의 변수를 count개 만큼 저장할 수 있는 메모리 공간을 할당.
할당된 메모리 공간을 0으로 초기화

### ft_strdup
strdup() 함수는 문자 s 를 복사하고 복사된 문자열을 가리키는 포인터를 반환한다.

### ft_substr
s문자열에서 start부터 len길이만큼 복사해줌

### ft_strtrim
문자열 ```s1```의 앞 뒤로 ```set```에 들어 있는 문자들을 제거. 새로운 문자열로 반환.  
if (!(ft_strchr(set, *s1)))에서 set에서 s1문자 한개를 찾는다.

### ft_strmapi
문자열 ```s```를 순회하면서 각각의 문자에 ```f```함수를 적용(mapping) 시켜준 뒤, 새로운 문자열로 반환.
```s```는 문자열, ```f```의 ```unsigned int```는  index , ```char```는  index에 해당하는 문자

