#include "../winhttp.h"

//----- (00000001404AF440) ----------------------------------------------------
unsigned __int64 __fastcall sub_1404AF440(__int64 a1, unsigned int a2)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	int v5; // eax
	unsigned __int64 v6; // rbx
	int v7; // ecx
	int v8; // esi
	__int64 v9; // rax
	int v10; // edi
	__int64 v11; // rax
	float v12; // xmm0_4
	unsigned __int64 v13; // rax
	float v14; // xmm1_4
	unsigned __int64 v15; // rdi
	__int64 v16; // rax

	v2 = sub_1402413C0(a2);
	v3 = v2;
	if (!v2 || !sub_14024B980(*(_DWORD*)(v2 + 24)))
		return 0i64;
	v5 = dword_140DC3120;
	v6 = 0i64;
	if ((dword_140DC3120 & 1) != 0)
	{
		v7 = dword_140DC312C;
	}
	else
	{
		v5 = dword_140DC3120 | 1;
		v7 = 0;
		dword_140DC312C = 0;
		dword_140DC3120 |= 1u;
	}
	if ((v5 & 2) == 0)
	{
		v5 |= 2u;
		dword_140DC3138 = 0;
		dword_140DC3120 = v5;
	}
	if ((v5 & 4) == 0)
	{
		dword_140DC3144 = 0;
		dword_140DC3120 = v5 | 4;
	}
	v8 = 0;
	if (*(_DWORD*)(v3 + 28) - 1 > 0)
		v8 = *(_DWORD*)(v3 + 28) - 1;
	if (v7)
	{
		v10 = dword_140DC3128;
	}
	else
	{
		dword_140DC312C = 1;
		v9 = sub_140200220(0x51Eu);
		if (v9)
		{
			v10 = *(_DWORD*)(v9 + 4);
			dword_140DC3128 = v10;
		}
		else
		{
			v10 = 0;
			dword_140DC3128 = 0;
		}
	}
	if (dword_140DC3144)
	{
		v12 = *(float*)&dword_140DC3140;
	}
	else
	{
		dword_140DC3144 = 1;
		v11 = sub_140200220(0x51Eu);
		if (v11)
		{
			v12 = *(float*)(v11 + 32);
			dword_140DC3140 = LODWORD(v12);
		}
		else
		{
			v12 = 0.0;
			dword_140DC3140 = 0;
		}
	}
	v13 = 0i64;
	v14 = (float)(v10 + v8) + (float)(v12 * 0.0);
	if (v14 >= 9.223372e18)
	{
		v14 = v14 - 9.223372e18;
		if (v14 < 9.223372e18)
			v13 = 0x8000000000000000ui64;
	}
	v15 = v13 + (unsigned int)(int)v14;
	if (dword_140DC3138)
	{
		v6 = qword_140DC3130;
	}
	else
	{
		dword_140DC3138 = 1;
		v16 = sub_140200220(0x51Eu);
		if (v16)
			v6 = *(unsigned int*)(v16 + 8);
		qword_140DC3130 = v6;
	}
	if (v15 < v6)
		return v15;
	return v6;
}
// 140DC3120: using guessed type int dword_140DC3120;
// 140DC3128: using guessed type int dword_140DC3128;
// 140DC312C: using guessed type int dword_140DC312C;
// 140DC3130: using guessed type __int64 qword_140DC3130;
// 140DC3138: using guessed type int dword_140DC3138;
// 140DC3140: using guessed type int dword_140DC3140;
// 140DC3144: using guessed type int dword_140DC3144;

