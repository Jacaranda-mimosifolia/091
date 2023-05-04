#include<stdio.h>
int main()
{
	//sizeof是计算变量在内存的占空间的大小，单位是字节 byte 
	printf("sizeof(0)=%d\n",sizeof(0));
	printf("sizeof('a')=%d\n",sizeof('a'));
	printf("sizeof(int)=%d\n",sizeof(int));
	printf("sizeof(char)=%d\n",sizeof(char));
	return 0;
}
//字符集（Character set）如：ASCII,Unicode
//字节（Byte）是计算机信息技术用于计量存储容量的一种计量单位
//字符指类字形单位或符号，包括字母、数字、运算符号、标点符号和其他符号，以及一些功能性符号

//（二进制）
//1 byte(B)=8 bits(b) 一个字节=八个二进制位  
//1 Kilobyte(K/KB)=2^10 bytes=1,024 bytes 千字节 
//1 Megabyte(M/MB)=2^20 bytes=1,048,576 bytes 兆字节 
//1 Gigabyte(G/GB)=2^30 bytes=1,073,741,824 bytes 千兆字节 
//1 Terabyte(T/TB)=2^40 bytes=1,099,511,627,776 bytes 吉字节 

//（十进制）
//1 byte(B)=8 bits(b) B,byte字节(八个二进制), b,bit比特(0,1)
//1 Kilobyte(K/KB)=10^3 bytes=1,000 bytes
//1 Megabyte(M/MB)=10^6 bytes=1,000,000 bytes
//1 Gigabyte(G/GB)=10^9 bytes=1,000,000,000 bytes
//1 Terabyte(T/TB)=10^12 bytes=1,000,000,000,000 bytes

//1.字符是文字或符号的统称 
//2.字符与字节没有必然的联系 
//3.在不同的编码方式下，一个字符占的字节可能不一样 
// ASCII编码，一个英文为一个字节，一个中文为两个字节。
// UTF-8编码，一个英文为一个字节，一个中文为三个字节。
// Unicode编码，一个英文为一个字节，一个中文为两个字节。

