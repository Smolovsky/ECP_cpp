#include "stdafx.h"
#include "MyForm.h"
#using <mscorlib.dll>

using namespace ConsoleApplication1;
using namespace System::Threading;

//создать форму
void openForm()
{
	MyForm ^ m = gcnew MyForm();
	m->ShowDialog();
}


int main(int argc, _TCHAR* argv[])
{
	FreeConsole(); //убрать консольное окно
	
	//запустить в новом потоке форму
	Thread ^t = gcnew Thread(gcnew ThreadStart(openForm));
	t->Start();

	//ждать пока форма не закроется
	while (t->IsAlive)
	{
		Sleep(1000);
	}

	return 0;
}


