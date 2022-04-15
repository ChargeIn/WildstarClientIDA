#include "../winhttp.h"

//----- (00000001403E01C0) ----------------------------------------------------
__int64 __fastcall sub_1403E01C0(__int64 a1, unsigned int a2)
{
	int v2; // eax
	__int64 v3; // rbx
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // rcx
	__int64 v8; // rax
	float v9; // xmm1_4
	__int64 v10; // rax

	v2 = dword_140DC2374;
	v3 = a2;
	if ((dword_140DC2374 & 1) != 0)
	{
		v7 = qword_140DC2378;
	}
	else
	{
		dword_140DC2374 |= 1u;
		v5 = sub_140200220(0x419u);
		if (v5)
			v6 = *(_DWORD*)(v5 + 4);
		else
			v6 = 100;
		v7 = v6;
		v2 = dword_140DC2374;
		qword_140DC2378 = v7;
	}
	if ((v2 & 2) != 0)
	{
		v9 = *(float*)&dword_140DC2380;
	}
	else
	{
		dword_140DC2374 = v2 | 2;
		v8 = sub_140200220(0x419u);
		if (v8)
		{
			v9 = *(float*)(v8 + 24);
			v7 = qword_140DC2378;
			dword_140DC2380 = LODWORD(v9);
		}
		else
		{
			v9 = 0.25;
			v7 = qword_140DC2378;
			dword_140DC2380 = 1048576000;
		}
	}
	v10 = (unsigned int)(int)(float)((float)(int)*(_QWORD*)(a1 + 88) * v9);
	if (v10 < v7)
		v10 = v7;
	return v3 * v10;
}
// 140DC2374: using guessed type int dword_140DC2374;
// 140DC2378: using guessed type __int64 qword_140DC2378;
// 140DC2380: using guessed type int dword_140DC2380;

