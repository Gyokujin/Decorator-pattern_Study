#include <iostream>
using namespace std;

// �θ� : ��Ű(�а���, ����)
// �ڽ�(���) : ��ũ ��Ű(����), ���� ��Ű(����)
// �ڽ�(���� ���) : �Ƹ�� ���� ��Ű(�Ƹ��), ��ī�ٹ̾� ��Ű(��ī�ٹ̾�)

class Cookie // ��Ű(�а��� + ����)
{
private:
	int flour;
	int sugar;

public:
	Cookie(int _flour, int _sugar)
	{
		cout << "��Ű ����" << endl;
		flour = _flour;
		sugar = _sugar;
	}

	~Cookie()
	{
		cout << "��Ű �ı�" << endl;
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
		cout << "�а��� : " << GetFlour() << "  ";
		cout << "���� : " << GetSugar() << endl;
	}
};

class MilkCookie : public Cookie // ��ũ ��Ű(�а��� + ���� + ����)
{
private:
	int milk;

public:
	MilkCookie(int _flour, int _sugar, int _milk) : Cookie(_flour, _sugar)
	{
		cout << "��ũ ��Ű ����" << endl;
		milk = _milk;
	}

	~MilkCookie()
	{
		cout << "��ũ ��Ű �ı�" << endl;
	}

	int GetMilke()
	{
		return milk;
	}

	void ShowRecipe()
	{
		cout << "�а��� : " << GetFlour() << "  ";
		cout << "���� : " << GetSugar() << "  ";
		cout << "���� : " << GetMilke() << endl;
	}
};

class ChocoCookie : public Cookie // ���� ��Ű(�а��� + ���� + ����)
{
private:
	int choco;

public:
	ChocoCookie(int _flour, int _sugar, int _choco) : Cookie(_flour, _sugar)
	{
		cout << "���� ��Ű ����" << endl;
		choco = _choco;
	}

	~ChocoCookie()
	{
		cout << "���� ��Ű �ı�" << endl;
	}

	int GetChoco()
	{
		return choco;
	}

	void ShowRecipe()
	{
		cout << "�а��� : " << GetFlour() << "  ";
		cout << "���� : " << GetSugar() << "  ";
		cout << "���� : " << GetChoco() << endl;
	}
};

class AmondChocoCookie : ChocoCookie // �Ƹ�� ���� ��Ű(�а��� + ���� + ���� + �Ƹ��)
{
private:
	int amond;

public:
	AmondChocoCookie(int _flour, int _sugar, int _choco, int _amond) : ChocoCookie(_flour, _sugar, _choco)
	{
		cout << "�Ƹ�� ���� ��Ű ����" << endl;
		amond = _amond;
	}

	~AmondChocoCookie()
	{
		cout << "�Ƹ�� ���� ��Ű �ı�" << endl;
	}

	int GetAmond()
	{
		return amond;
	}

	void ShowRecipe()
	{
		cout << "�а��� : " << GetFlour() << "  ";
		cout << "���� : " << GetSugar() << "  ";
		cout << "���� : " << GetChoco() << "  ";
		cout << "�Ƹ�� : " << GetAmond() << endl;
	}
};

class MacadamiaCookie : ChocoCookie // �Ƹ�� ���� ��Ű(�а��� + ���� + ���� + ��ī�ٹ̾�)
{
private:
	int macadamia;

public:
	MacadamiaCookie(int _flour, int _sugar, int _choco, int _macadamia) : ChocoCookie(_flour, _sugar, _choco)
	{
		cout << "��ī�ٹ̾� ��Ű ����" << endl;
		macadamia = _macadamia;
	}

	~MacadamiaCookie()
	{
		cout << "��ī�ٹ̾� ��Ű �ı�" << endl;
	}

	int GetMacadamia()
	{
		return macadamia;
	}

	void ShowRecipe()
	{
		cout << "�а��� : " << GetFlour() << "  ";
		cout << "���� : " << GetSugar() << "  ";
		cout << "���� : " << GetChoco() << "  ";
		cout << "��ī�ٹ̾� : " << GetMacadamia() << endl;
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
	macadamiaCookie2.ShowRecipe(); // ��ü�� ���� �Ҵ��ϴ� �� ���ÿ� �޸𸮸� �Ҵ��ϰ� �ȴ�. (������ �Ҹ��ڰ� �������� ����Ǵ� �����̴�. �������� ���� ��ü���� ������ ����. ���Լ���)

	return 0;
}