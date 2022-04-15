#include "../winhttp.h"

//----- (0000000140708EA0) ----------------------------------------------------
__int64 __fastcall sub_140708EA0(__int64 a1)
{
	int v1; // eax
	unsigned int v2; // ebx
	int v4; // edx
	__int64 v5; // rax
	unsigned int v6; // edi
	__int64 v7; // rbp
	__int64 v8; // rax
	int v9; // ebx
	int v10; // eax
	__int64 v11; // rcx
	int v12; // ebx
	__int64 result; // rax

	v1 = dword_140DC4C9C;
	v2 = 0;
	if ((dword_140DC4C9C & 1) != 0)
	{
		v4 = dword_140DC4CA4;
	}
	else
	{
		v1 = dword_140DC4C9C | 1;
		v4 = 0;
		dword_140DC4CA4 = 0;
		dword_140DC4C9C |= 1u;
	}
	if ((v1 & 2) == 0)
	{
		dword_140DC4CAC = 0;
		dword_140DC4C9C = v1 | 2;
	}
	if (v4)
	{
		v6 = dword_140DC4CA0;
	}
	else
	{
		dword_140DC4CA4 = 1;
		v5 = sub_140200220(0x942u);
		if (v5)
		{
			v6 = *(_DWORD*)(v5 + 4);
			dword_140DC4CA0 = v6;
		}
		else
		{
			v6 = 0;
			dword_140DC4CA0 = 0;
		}
	}
	v7 = qword_140C65898;
	if (dword_140DC4CAC)
	{
		v2 = dword_140DC4CA8;
	}
	else
	{
		dword_140DC4CAC = 1;
		v8 = sub_140200220(0x942u);
		if (v8)
			v2 = *(_DWORD*)(v8 + 8);
		dword_140DC4CA8 = v2;
	}
	v9 = sub_1403AC840(qword_140C65898 + 160, 1799, v2);
	v10 = sub_1403AC840(v7 + 160, 1799, v6);
	v11 = *(_QWORD*)(a1 + 16);
	v12 = v10 + v9;
	*(_DWORD*)(v11 + 8) = 3;
	result = 1i64;
	*(double*)v11 = (double)v12;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4C9C: using guessed type int dword_140DC4C9C;
// 140DC4CA0: using guessed type int dword_140DC4CA0;
// 140DC4CA4: using guessed type int dword_140DC4CA4;
// 140DC4CA8: using guessed type int dword_140DC4CA8;
// 140DC4CAC: using guessed type int dword_140DC4CAC;

