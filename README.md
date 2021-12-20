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