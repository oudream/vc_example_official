// StlClrLibrary.h

#pragma once

using namespace System;

namespace StlClrLibrary {

	public ref class Tools
	{
		// TODO: �ڴ˴���Ӵ���ķ�����
			
	public:
		void Shuffle(System::Collections::Generic::IList<System::String^>^ list);
		void BubbleSort(System::Collections::Generic::IList<System::String^>^ list);
		void BubbleSortNative(System::Collections::Generic::IList<System::String^>^ list);
		void BubbleStep(System::Collections::Generic::IList<System::String^>^ list);
	private:
	};
}
