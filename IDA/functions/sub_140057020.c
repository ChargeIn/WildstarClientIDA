#include "../winhttp.h"

//----- (0000000140057020) ----------------------------------------------------
void __fastcall sub_140057020(_QWORD* a1, char* a2, _QWORD* a3)
{
	_QWORD* v3; // rsi
	int v6; // edi
	_QWORD* i; // rax
	_DWORD* v8; // rax
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	_QWORD* v11; // rcx
	__int64 v12; // rax
	_DWORD* v13; // rax
	unsigned __int64 j; // r8
	__int64 v15; // rcx
	__int64* v16; // rax
	unsigned __int64* v17; // r10
	unsigned __int64 v18; // r8
	__int64* v19; // rdi
	__int64 v20; // rax
	unsigned int* v21; // r9
	__int64 v22; // [rsp+20h] [rbp-18h] BYREF
	int v23; // [rsp+28h] [rbp-10h]

	v3 = a3;
	if (a2)
	{
		v6 = 0;
		for (i = a3; *i; ++v6)
			i += 2;
		sub_140057390((__int64)a1, -10000, (unsigned __int64*)aLoaded_0, 1);
		sub_140058890((__int64)a1, -1);
		v8 = (_DWORD*)(a1[2] - 16i64);
		if (v8 == dword_140A12138 || v8[2] != 5)
		{
			a1[2] = v8;
			if (sub_140057390((__int64)a1, -10002, (unsigned __int64*)a2, v6))
				sub_140056830(a1, (unsigned __int64*)"name conflict for module '%s'", a2);
			v9 = a1[2];
			*(_QWORD*)v9 = *(_QWORD*)(v9 - 16);
			*(_DWORD*)(v9 + 8) = *(_DWORD*)(v9 - 8);
			a1[2] += 16i64;
			sub_140058A40((__int64)a1, -3);
		}
		v10 = a1[2];
		v11 = (_QWORD*)(v10 - 16);
		if (v10 - 16 < v10)
		{
			do
			{
				v12 = *v11;
				v11 += 2;
				*(v11 - 4) = v12;
				*((_DWORD*)v11 - 6) = *((_DWORD*)v11 - 2);
			} while ((unsigned __int64)v11 < a1[2]);
		}
		a1[2] -= 16i64;
		v13 = sub_1400580E0((__int64)a1, -1);
		for (j = a1[2]; j > (unsigned __int64)v13; j -= 16i64)
		{
			*(_QWORD*)j = *(_QWORD*)(j - 16);
			*(_DWORD*)(j + 8) = *(_DWORD*)(j - 8);
		}
		v15 = a1[2];
		*(_QWORD*)v13 = *(_QWORD*)v15;
		v13[2] = *(_DWORD*)(v15 + 8);
	}
	for (; *v3; v3 += 2)
	{
		sub_1400587D0(a1, v3[1], 0);
		v16 = (__int64*)sub_1400580E0((__int64)a1, -2);
		v18 = -1i64;
		v19 = v16;
		do
			++v18;
		while (*((_BYTE*)v17 + v18));
		v20 = sub_140062650((__int64)a1, v17, v18);
		v21 = (unsigned int*)(a1[2] - 16i64);
		v22 = v20;
		v23 = 4;
		sub_14005EA50((__int64)a1, v19, (int*)&v22, v21);
		a1[2] -= 16i64;
	}
}
// 1400571A9: variable 'v17' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

