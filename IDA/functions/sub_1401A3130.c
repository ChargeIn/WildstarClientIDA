#include "../winhttp.h"

//----- (00000001401A3130) ----------------------------------------------------
__int64 sub_1401A3130(int a1, int a2, _QWORD* a3, ...)
{
	int v6; // eax
	int v7; // eax
	__int64 v8; // rcx
	char v10[8190]; // [rsp+20h] [rbp-2028h] BYREF
	__int16 v11; // [rsp+201Eh] [rbp-2Ah]
	va_list va; // [rsp+2068h] [rbp+20h] BYREF

	va_start(va, a3);
	if (a2 < 0)
		return 0i64;
	if (!dword_140C674A0)
	{
		OutputDebugStringA("WARNING! Log called before CRT startup");
	LABEL_4:
		v6 = -1;
		goto LABEL_5;
	}
	if ((unsigned int)a1 > 0x82)
		goto LABEL_4;
	v6 = dword_140C674A8[a1];
LABEL_5:
	if (a2 > v6)
		return 0i64;
	v7 = sub_1407DDA14(v10, 0xFFFui64, (unsigned __int16*)(*a3 - 19899968i64), (__int64)va);
	if (v7 < 0 || (unsigned __int64)v7 >= 0xFFF)
		v11 = 0;
	sub_1401A2460(v8, a1, a2, (__int64)v10);
	return 1i64;
}
// 1401A31C9: variable 'v8' is possibly undefined
// 140C674A0: using guessed type int dword_140C674A0;
// 140C674A8: using guessed type _DWORD dword_140C674A8[77];

