#ifndef _SHAPEH
#define _SHAPEH
class CShape {
protected:
	float x, y;
public:
	CShape(float a, float b) :x(a), y(b) {}
	void Move(float, float);
	void Print();		//***** 줄 9
};
class CCircle :public CShape {
private:
	float Radius; //반지름
public:
	CCircle(float a, float b, float r) : CShape(a, b), Radius(r){ }
	void Print();
};
class CRect : public CShape{//직사각형
private:
	float Garo, Sero; //가로와 세로
public:
	CRect(float a, float b, float ga, float se)
		:CShape(a, b), Garo(ga), Sero(se) { }
	void Print();
};
#endif
