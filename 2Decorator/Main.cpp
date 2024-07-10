#include <iostream>
using namespace std;

// 부모 : 쿠키(밀가루, 설탕)
// 자식(상속) : 밀크 쿠키(우유), 초코 쿠키(초코)
// 자식(계층 상속) : 아몬드 초코 쿠키(아몬드), 마카다미아 쿠키(마카다미아)

class Cookie // 쿠키(밀가루 + 설탕)
{
private:
	int flour;
	int sugar;

public:
	Cookie(int _flour, int _sugar)
	{
		cout << "쿠키 생성" << endl;
		flour = _flour;
		sugar = _sugar;
	}

	~Cookie()
	{
		cout << "쿠키 파괴" << endl;
	}

	int GetFlour()
	{
		return flour;
	}

	int GetSugar()
	{
		return sugar;
	}

	void ShowRecipe()
	{
		cout << "밀가루 : " << GetFlour() << "  ";
		cout << "설탕 : " << GetSugar() << endl;
	}
};

class MilkCookie : public Cookie // 밀크 쿠키(밀가루 + 설탕 + 우유)
{
private:
	int milk;

public:
	MilkCookie(int _flour, int _sugar, int _milk) : Cookie(_flour, _sugar)
	{
		cout << "밀크 쿠키 생성" << endl;
		milk = _milk;
	}

	~MilkCookie()
	{
		cout << "밀크 쿠키 파괴" << endl;
	}

	int GetMilke()
	{
		return milk;
	}

	void ShowRecipe()
	{
		cout << "밀가루 : " << GetFlour() << "  ";
		cout << "설탕 : " << GetSugar() << "  ";
		cout << "우유 : " << GetMilke() << endl;
	}
};

class ChocoCookie : public Cookie // 초코 쿠키(밀가루 + 설탕 + 초코)
{
private:
	int choco;

public:
	ChocoCookie(int _flour, int _sugar, int _choco) : Cookie(_flour, _sugar)
	{
		cout << "초코 쿠키 생성" << endl;
		choco = _choco;
	}

	~ChocoCookie()
	{
		cout << "초코 쿠키 파괴" << endl;
	}

	int GetChoco()
	{
		return choco;
	}

	void ShowRecipe()
	{
		cout << "밀가루 : " << GetFlour() << "  ";
		cout << "설탕 : " << GetSugar() << "  ";
		cout << "초코 : " << GetChoco() << endl;
	}
};

class AmondChocoCookie : ChocoCookie // 아몬드 초코 쿠키(밀가루 + 설탕 + 초코 + 아몬드)
{
private:
	int amond;

public:
	AmondChocoCookie(int _flour, int _sugar, int _choco, int _amond) : ChocoCookie(_flour, _sugar, _choco)
	{
		cout << "아몬드 초코 쿠키 생성" << endl;
		amond = _amond;
	}

	~AmondChocoCookie()
	{
		cout << "아몬드 초코 쿠키 파괴" << endl;
	}

	int GetAmond()
	{
		return amond;
	}

	void ShowRecipe()
	{
		cout << "밀가루 : " << GetFlour() << "  ";
		cout << "설탕 : " << GetSugar() << "  ";
		cout << "초코 : " << GetChoco() << "  ";
		cout << "아몬드 : " << GetAmond() << endl;
	}
};

class MacadamiaCookie : ChocoCookie // 아몬드 초코 쿠키(밀가루 + 설탕 + 초코 + 마카다미아)
{
private:
	int macadamia;

public:
	MacadamiaCookie(int _flour, int _sugar, int _choco, int _macadamia) : ChocoCookie(_flour, _sugar, _choco)
	{
		cout << "마카다미아 쿠키 생성" << endl;
		macadamia = _macadamia;
	}

	~MacadamiaCookie()
	{
		cout << "마카다미아 쿠키 파괴" << endl;
	}

	int GetMacadamia()
	{
		return macadamia;
	}

	void ShowRecipe()
	{
		cout << "밀가루 : " << GetFlour() << "  ";
		cout << "설탕 : " << GetSugar() << "  ";
		cout << "초코 : " << GetChoco() << "  ";
		cout << "마카다미아 : " << GetMacadamia() << endl;
	}
};

int main()
{
	Cookie cookie1(10, 20);
	cookie1.ShowRecipe();

	Cookie cookie2(8, 14);
	cookie2.ShowRecipe();

	MilkCookie milkCookie1(15, 20, 10);
	milkCookie1.ShowRecipe();

	MilkCookie milkCookie2(12, 16, 8);
	milkCookie2.ShowRecipe();

	ChocoCookie chocoCookie1(10, 20, 15);
	chocoCookie1.ShowRecipe();

	AmondChocoCookie amondChocoCookie1(8, 12, 14, 16);
	amondChocoCookie1.ShowRecipe();

	MacadamiaCookie macadamiaCookie1(12, 8, 10, 17);
	macadamiaCookie1.ShowRecipe();

	MacadamiaCookie macadamiaCookie2(14, 10, 16, 7);
	macadamiaCookie2.ShowRecipe(); // 객체에 정적 할당하는 건 스택에 메모리를 할당하게 된다. (때문에 소멸자가 역순으로 재생되는 이유이다. 마지막에 만든 객체부터 꺼내기 때문. 후입선출)

	return 0;
}