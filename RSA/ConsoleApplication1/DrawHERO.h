#pragma once
#using <mscorlib.dll>
using namespace System::Drawing;
using namespace System::Windows::Forms;
using namespace std;

ref class DrawHERO
{
private:
	/*int defRadius = 30, fontSize = 14;

	Graphics ^g;
	Color defBG;*/

public:
	
	/*DrawHERO(Panel ^_p)
	{
		p = _p;
		g = p->CreateGraphics();
		defBG = p->BackColor;

		clear();
	}*/

	/*void DrawCircle(int value, int x, int y, Color color)
	{
		SolidBrush ^b = gcnew SolidBrush(color);
		g->FillEllipse(b, x, y, defRadius, defRadius);
		Font ^f = gcnew Font("Arial", 14);

		int textPadding = (defRadius - fontSize) / 4;
		g->DrawString(value.ToString(), f, Brushes::Black, (float)x + textPadding, (float)y + textPadding);
	}*/
	
	/*void clear()
	{
		SolidBrush ^b = gcnew SolidBrush(defBG);
		g->FillRectangle(b, 0, 0, p->Width, p->Height);
	}*/
};

