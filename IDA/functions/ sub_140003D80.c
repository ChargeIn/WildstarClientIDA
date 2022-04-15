#include "../winhttp.h"

//----- (0000000140003D80) ----------------------------------------------------
__int64 __fastcall sub_140003D80(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	unsigned int v5; // ecx
	__int64 v6; // rax
	unsigned int v7; // edx
	_QWORD* v8; // rbx
	int* v9; // rax
	_QWORD* v10; // rax
	__int64 v11; // r10
	__int64 v12; // rdx
	int v13; // r11d
	float v14; // xmm6_4
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	__int64 v18; // rbx
	unsigned __int64* v19; // rdx
	unsigned __int64 v20; // r8
	__int64 v21; // rax
	__int64* v22; // rax
	__int64 result; // rax
	__int64 v24; // [rsp+20h] [rbp-38h] BYREF
	__int64 v25; // [rsp+28h] [rbp-30h]
	struct _FILETIME SystemTimeAsFileTime; // [rsp+60h] [rbp+8h] BYREF

	if ((dword_140C8B184 & 1) == 0)
	{
		dword_140C8B184 |= 1u;
		goto LABEL_4;
	}
	if (!dword_140C8B18C)
	{
	LABEL_4:
		dword_140C8B18C = 1;
		v4 = sub_140200220(0x932u);
		if (v4)
		{
			v5 = *(_DWORD*)(v4 + 4);
			dword_140C8B188 = v5;
		}
		else
		{
			v5 = 0;
			dword_140C8B188 = 0;
		}
		goto LABEL_8;
	}
	v5 = dword_140C8B188;
LABEL_8:
	v6 = sub_1401E8C20(v5);
	if (v6)
		v7 = *(_DWORD*)(v6 + 8);
	else
		v7 = 0;
	v8 = *(_QWORD**)(a2 + 16);
	v9 = sub_1400B5DF0(qword_140C658F0, v7, 0i64);
	if ((unsigned int)sub_140415C70(v8, (__int64)v9))
	{
		sub_1400FB540(a2);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v12 = *(_QWORD*)(v11 + 16);
	*(_QWORD*)v12 = *v10;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v10 + 2);
	*(_QWORD*)(v11 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v12, L"ePremiumKeyStatus", v13);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	v14 = (float)(int)((*(_QWORD*)(a1 + 472) - *(_QWORD*)&SystemTimeAsFileTime) / 0x989680ui64);
	v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v17 = *(_QWORD*)(v16 + 16);
	*(_QWORD*)v17 = *v15;
	*(_DWORD*)(v17 + 8) = *((_DWORD*)v15 + 2);
	*(_QWORD*)(v16 + 16) += 16i64;
	v18 = *(_QWORD*)(a2 + 16);
	v19 = (unsigned __int64*)sub_14018F0E0(&v24, L"fSecondsUntilNextKey")[1];
	if (v19)
	{
		v20 = -1i64;
		do
			++v20;
		while (*((_BYTE*)v19 + v20));
		sub_140058710(v18, v19, v20);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v18 + 16) + 8i64) = 0;
		*(_QWORD*)(v18 + 16) += 16i64;
	}
	if (v25)
		sub_14018B900(v25, 0);
	v21 = *(_QWORD*)(v18 + 16);
	*(_DWORD*)(v21 + 8) = 3;
	*(double*)v21 = v14;
	*(_QWORD*)(v18 + 16) += 16i64;
	v22 = (__int64*)sub_1400580E0(v18, -3);
	sub_14005EA50(v18, v22, (int*)(*(_QWORD*)(v18 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v18 + 16) - 16i64));
	*(_QWORD*)(v18 + 16) -= 32i64;
	result = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(result + 16) -= 16i64;
	return result;
}
// 140003E55: variable 'v11' is possibly undefined
// 140003E78: variable 'v13' is possibly undefined
// 140003EDA: variable 'v16' is possibly undefined
// 1409D6768: using guessed type wchar_t aEpremiumkeysta[18];
// 1409D6790: using guessed type wchar_t aFsecondsuntiln[21];
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C8B184: using guessed type int dword_140C8B184;
// 140C8B188: using guessed type int dword_140C8B188;
// 140C8B18C: using guessed type int dword_140C8B18C;

