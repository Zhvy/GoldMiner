#pragma once
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <graphics.h>

#define WIDTH 850
#define HEIGHT 700
#define PI 3.1415926

void startup();					//���������ݳ�ʼ��
void updateWithoutInput();		//���û������޹صĸ���
void updateWithInput();			//���û������йصĸ���
void gameover();				//����

void logIn();					//��¼����
void gameUI();					//��Ϸ����

void mouse(int left, int top, int right, int bottom);	//�������
void day1();					//��һ�ؽ������
void day2();					//�ڶ��ؽ������
void hook();					//���Ӱڶ�������
void victory(int flag);			//��Ϸʤ������