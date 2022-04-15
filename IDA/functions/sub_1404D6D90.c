#include "../winhttp.h"

//----- (00000001404D6D90) ----------------------------------------------------
__int64 __fastcall sub_1404D6D90(__int64 a1, int a2, int a3)
{
	int v6; // edi
	int v7; // ebx
	int** v8; // rsi
	__int64 v9; // rax
	wchar_t* v10; // rdx
	__int64 result; // rax

	v6 = 0;
	v7 = 1;
	v8 = (int**)off_140B0A750;
	do
	{
		if ((v7 & a3) != 0)
		{
			v9 = sub_1401A6C70(a1, *v8);
			v10 = L"False";
			if ((v7 & a2) != 0)
				v10 = L"True";
			sub_1401A4C50(v9 + 32, (int*)v10);
		}
		v7 = __ROL4__(v7, 1);
		++v6;
		++v8;
		result = v6;
	} while ((unsigned __int64)v6 < 0xD);
	return result;
}
// 140B0A4C8: using guessed type wchar_t aFalse_3[6];
// 140B0A5B8: using guessed type wchar_t aTrue_3[5];
// 140B0A750: using guessed type wchar_t *off_140B0A750[13];

