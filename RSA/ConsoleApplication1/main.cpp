#include "stdafx.h"
#include "MyForm.h"
#using <mscorlib.dll>

using namespace ConsoleApplication1;
using namespace System::Threading;

//������� �����
void openForm()
{
	MyForm ^ m = gcnew MyForm();
	m->ShowDialog();
}


int main(int argc, _TCHAR* argv[])
{
	FreeConsole(); //������ ���������� ����
	
	//��������� � ����� ������ �����
	Thread ^t = gcnew Thread(gcnew ThreadStart(openForm));
	t->Start();

	//����� ���� ����� �� ���������
	while (t->IsAlive)
	{
		Sleep(1000);
	}

	return 0;
}


