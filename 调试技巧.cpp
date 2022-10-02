#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main() {
//	//下面是按照vs2019的语法来的，vs2022太奇怪了根本运行不了
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;//越界了
//		printf("haihaihai\n");//理论上应该是死循环，但是vs2022语法可能太严格了，一越界就不能运行到底
//		                    //运行到10还是可以的
//		                     //草，最新消息vscode的g++环境下是死循环，应该是1个字节(?)
//	}
//
//	return 0;
//}
// 用库函数字符串拷贝
//int main() {
//	char arr1[] = "xxxxxxxxxxxxx";
//	char arr2[] = "dyf";
//	strcpy(arr1, arr2);
////	strcpy(arr2, arr1);//报错类型是缓存区溢出，就是越界了(大数组放小数组，一直找大数组的\0撑死了)
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//模拟字符串拷贝函数
//未优化版：
void my_strlen1(char* dest, char* source) {
	while (*source != '\0') {
		*dest = *source;
		dest++;
		source++;
	}
	*dest = *source;//如果找到\0的话也赋给它
}
//优化一次版：
void my_strlen2(char* dest, char* source) {
	while (*source != '\0') {
		*dest++ = *source++;//缩减了
	}
	*dest = *source;//如果找到\0的话也赋给它
}
//优化二次版(绝妙版)：
void my_strlen3(char* dest, char* source) {
	while (*dest++ = *source++) {
		;//绝了，既把进行了copy，又能使循环停止，太牛b了
	}
}
int main() {
	char arr1[] = "xxxxxxxxxxxxx";
	char arr2[] = "dyf";
	my_strlen3(arr1, arr2);
	printf("%s\n", arr1);
   	printf("%s\n", arr2);
	return 0;
}