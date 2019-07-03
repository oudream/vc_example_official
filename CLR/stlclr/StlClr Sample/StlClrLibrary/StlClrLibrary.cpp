// ������ DLL �ļ���

#include <cliext\adapter>
#include <cliext\algorithm>
#include <cliext\vector>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include "MyAlgorithm.h"
#include "StlClrLibrary.h"
#include "native.h"

void StlClrLibrary::Tools::Shuffle(System::Collections::Generic::IList<System::String^>^ list)
{
	// ���б��Ƶ�����ʸ��
	cliext::vector<System::String^> v(list);
	
	// �������
	cliext::random_shuffle(v.begin(), v.end());

	// ���ͻ��б�
	int i = 0;
	for each(System::String^ str in v)
	{
		list[i]=str;
		i++;
	}
}

void StlClrLibrary::Tools::BubbleSort(System::Collections::Generic::IList<System::String^>^ list)
{
	//�����贴����ʱʸ������������ʹ�ü���������
	cliext::collection_adapter<System::Collections::Generic::IList<System::String^>> adapter(list);
	MyAlgor::BubbleSort(adapter.begin(),adapter.end());
}

void StlClrLibrary::Tools::BubbleStep(System::Collections::Generic::IList<System::String^>^ list)
{
	//�����贴����ʱʸ������������ʹ�ü���������
	typedef cliext::collection_adapter<System::Collections::Generic::IList<System::String^>> MyCont;
	MyCont adapter(list);
	
	// �ⲻ��ȫ��ð�����򷨣������о�һ��������������Ҳ������˼��
	MyCont::iterator prev, current; 
	prev = current = adapter.begin();
	current++;
	for( ; current < adapter.end(); prev=current, ++current)
	{
		// ���н���ʱ�˳��˺���
		if (MyAlgor::BubbleStep(prev, current))
			break;
	}
}

// �� BubbleSort() ��ͬ�������Ǳ����汾
void StlClrLibrary::Tools::BubbleSortNative(System::Collections::Generic::IList<System::String^>^ list)
{
	// ���ȷ��͵������ı���ʸ��
	std::vector<std::string> native_vec;
	for each(System::String^ str in list)
	{
		native_vec.push_back(msclr::interop::marshal_as<std::string>(str));
	}

	// ���ý�ִ����������ı�������
	Native::BubbleSort(native_vec);
	
	// ���ͻ��б�
	int i = 0;
	for each(std::string str in native_vec)
	{
		list[i]=msclr::interop::marshal_as<System::String^>(str);
		i++;
	}
}

