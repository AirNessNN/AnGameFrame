#pragma once


namespace angraph{

	const int MAX_PIX = 1000;


	//���ӽṹ��
	struct Box
	{
		int width;
		int height;
		char screen_pix[MAX_PIX][MAX_PIX];
	}screen;

	//��Ļ��ߵĵ����ַ���
	char screen_mod[256];


	//��������߿򣬲���ʹ����̨�������ͱ߿�һ���Ĵ�С�����������ֵ��������
	void create_wall(int width,int height) {
		sprintf_s(screen_mod, "mode con cols=%d lines=%d", width*2, height);
		system(screen_mod);
		screen.width = width;
		screen.height = height;

		//����ͼ��

	}

	//������
	void create_box() {

	}


	//��ʼ����ͼ��
	void initialize() {

	}

	//����ͼ�δ���������Ҫֱ�ӵ��ô�������
	void create_graph(int x, int y, int mod) {


	}







}
