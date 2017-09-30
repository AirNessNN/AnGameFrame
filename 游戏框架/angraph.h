#pragma once


namespace angraph{

	const int MAX_PIX = 1000;


	//箱子结构体
	struct Box
	{
		int width;
		int height;
		char screen_pix[MAX_PIX][MAX_PIX];
	}screen;

	//屏幕宽高的调整字符串
	char screen_mod[256];


	//建立界面边框，并且使控制台调整到和边框一样的大小（宽度是输入值的两倍）
	void create_wall(int width,int height) {
		sprintf_s(screen_mod, "mode con cols=%d lines=%d", width*2, height);
		system(screen_mod);
		screen.width = width;
		screen.height = height;

		//创建图形

	}

	//建立框
	void create_box() {

	}


	//初始化绘图器
	void initialize() {

	}

	//基础图形创建器（不要直接调用创建器）
	void create_graph(int x, int y, int mod) {


	}







}
