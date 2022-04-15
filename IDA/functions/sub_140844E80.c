#include "../winhttp.h"

//----- (0000000140844E80) ----------------------------------------------------
bool __fastcall sub_140844E80(float a1)
{
	float v1; // xmm7_4
	__int64 v2; // r8
	__int64 v3; // r9
	float v4; // xmm7_4
	float v5; // xmm7_4
	__int64 v6; // rbx
	__int64 i; // rdi
	float v8; // xmm6_4
	char v9; // al
	int v10; // eax
	int v12; // [rsp+68h] [rbp+10h] BYREF
	int v13; // [rsp+6Ch] [rbp+14h]

	v1 = *((float*)&qword_140C61B10 + 1);
	if (*((float*)&qword_140C61B10 + 1) >= 1.0
		|| (sub_140881810(dword_140C10F20, &v12), !v12)
		|| (float)((float)v13 / (float)v12) <= v1)
	{
		v4 = *((float*)&xmmword_140C61C90 + 1);
		if (*((float*)&xmmword_140C61C90 + 1) >= 1.0)
			return 1;
		sub_140881810(dword_140C10F28, &v12);
		if (!v12 || (float)((float)v13 / (float)v12) <= v4)
			return 1;
	}
	v5 = 101.0;
	v6 = qword_140C61F90;
	for (i = 0i64; v6; v6 = *(_QWORD*)(v6 + 24))
	{
		v8 = *(float*)(v6 + 388);
		if (v8 <= v5 && (*(_BYTE*)(v6 + 382) & 1) == 0)
		{
			v9 = *(_BYTE*)(v6 + 383);
			if ((v9 & 0x10) == 0 && (v9 & 0x40) == 0 && sub_14085F1F0(v6, 0))
			{
				i = v6;
				v5 = v8;
			}
		}
	}
	if (a1 > v5 && i)
	{
		sub_14085F2E0(i, 2, v2, v3);
		v10 = 1;
	}
	else
	{
		v10 = 2;
	}
	return v10 == 1;
}
// 140844FD5: variable 'v2' is possibly undefined
// 140844FD5: variable 'v3' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C10F20: using guessed type int dword_140C10F20;
// 140C10F28: using guessed type int dword_140C10F28;
// 140C61B10: using guessed type __int64 qword_140C61B10;
// 140C61C90: using guessed type __int128 xmmword_140C61C90;
// 140C61F90: using guessed type __int64 qword_140C61F90;

