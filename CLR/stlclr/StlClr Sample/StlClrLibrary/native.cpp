// ������ļ�ʱδʹ�� /clr ѡ��

#include <vector>
#include <string>
#include "MyAlgorithm.h"
#include "native.h"

namespace Native
{
	void BubbleSort(std::vector<std::string>& v)
	{
		MyAlgor::BubbleSort(v.begin(),v.end());
	}
}