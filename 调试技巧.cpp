#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main() {
//	//�����ǰ���vs2019���﷨���ģ�vs2022̫����˸������в���
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;//Խ����
//		printf("haihaihai\n");//������Ӧ������ѭ��������vs2022�﷨����̫�ϸ��ˣ�һԽ��Ͳ������е���
//		                    //���е�10���ǿ��Ե�
//		                     //�ݣ�������Ϣvscode��g++����������ѭ����Ӧ����1���ֽ�(?)
//	}
//
//	return 0;
//}
// �ÿ⺯���ַ�������
//int main() {
//	char arr1[] = "xxxxxxxxxxxxx";
//	char arr2[] = "dyf";
//	strcpy(arr1, arr2);
////	strcpy(arr2, arr1);//���������ǻ��������������Խ����(�������С���飬һֱ�Ҵ������\0������)
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//ģ���ַ�����������
//δ�Ż��棺
void my_strlen1(char* dest, char* source) {
	while (*source != '\0') {
		*dest = *source;
		dest++;
		source++;
	}
	*dest = *source;//����ҵ�\0�Ļ�Ҳ������
}
//�Ż�һ�ΰ棺
void my_strlen2(char* dest, char* source) {
	while (*source != '\0') {
		*dest++ = *source++;//������
	}
	*dest = *source;//����ҵ�\0�Ļ�Ҳ������
}
//�Ż����ΰ�(�����)��
void my_strlen3(char* dest, char* source) {
	while (*dest++ = *source++) {
		;//���ˣ��Ȱѽ�����copy������ʹѭ��ֹͣ��̫ţb��
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