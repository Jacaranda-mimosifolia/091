#include<stdio.h>
int main()
{
	//sizeof�Ǽ���������ڴ��ռ�ռ�Ĵ�С����λ���ֽ� byte 
	printf("sizeof(0)=%d\n",sizeof(0));
	printf("sizeof('a')=%d\n",sizeof('a'));
	printf("sizeof(int)=%d\n",sizeof(int));
	printf("sizeof(char)=%d\n",sizeof(char));
	return 0;
}
//�ַ�����Character set���磺ASCII,Unicode
//�ֽڣ�Byte���Ǽ������Ϣ�������ڼ����洢������һ�ּ�����λ
//�ַ�ָ�����ε�λ����ţ�������ĸ�����֡�������š������ź��������ţ��Լ�һЩ�����Է���

//�������ƣ�
//1 byte(B)=8 bits(b) һ���ֽ�=�˸�������λ  
//1 Kilobyte(K/KB)=2^10 bytes=1,024 bytes ǧ�ֽ� 
//1 Megabyte(M/MB)=2^20 bytes=1,048,576 bytes ���ֽ� 
//1 Gigabyte(G/GB)=2^30 bytes=1,073,741,824 bytes ǧ���ֽ� 
//1 Terabyte(T/TB)=2^40 bytes=1,099,511,627,776 bytes ���ֽ� 

//��ʮ���ƣ�
//1 byte(B)=8 bits(b) B,byte�ֽ�(�˸�������), b,bit����(0,1)
//1 Kilobyte(K/KB)=10^3 bytes=1,000 bytes
//1 Megabyte(M/MB)=10^6 bytes=1,000,000 bytes
//1 Gigabyte(G/GB)=10^9 bytes=1,000,000,000 bytes
//1 Terabyte(T/TB)=10^12 bytes=1,000,000,000,000 bytes

//1.�ַ������ֻ���ŵ�ͳ�� 
//2.�ַ����ֽ�û�б�Ȼ����ϵ 
//3.�ڲ�ͬ�ı��뷽ʽ�£�һ���ַ�ռ���ֽڿ��ܲ�һ�� 
// ASCII���룬һ��Ӣ��Ϊһ���ֽڣ�һ������Ϊ�����ֽڡ�
// UTF-8���룬һ��Ӣ��Ϊһ���ֽڣ�һ������Ϊ�����ֽڡ�
// Unicode���룬һ��Ӣ��Ϊһ���ֽڣ�һ������Ϊ�����ֽڡ�

