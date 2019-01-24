// tenserflow.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "decodeMnist.h"


int _tmain(int argc, _TCHAR* argv[])
{
	decodeMnist decoder;

	decoder.MNISTtoImage();

	return 0;
}

