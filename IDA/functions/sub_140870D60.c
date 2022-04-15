#include "../winhttp.h"

//----- (0000000140870D60) ----------------------------------------------------
void __fastcall sub_140870D60(_BYTE* a1, unsigned __int8 a2, int a3, _QWORD* a4, _QWORD* a5)
{
	unsigned int v5; // r10d
	unsigned int v6; // r11d
	_DWORD* v7; // rax
	__int64* v8; // rbx
	__int64 v9; // rcx

	v5 = 0;
	*a4 = 0i64;
	*a5 = 0i64;
	if (a2 < a1[24])
	{
		v6 = (unsigned __int8)a1[25];
		if (a1[25])
		{
			v7 = (_DWORD*)(*(_QWORD*)a1 + 16i64);
			do
			{
				if (*v7 == a3)
					break;
				++v5;
				v7 += 6;
			} while (v5 < v6);
		}
		if (v5 != v6)
		{
			v8 = (__int64*)(*(_QWORD*)a1 + 24i64 * (v5 + v6 * a2));
			if (*v8)
				sub_140862F00(*v8, a4);
			v9 = v8[1];
			if (v9)
				sub_140862F00(v9, a5);
		}
	}
}

