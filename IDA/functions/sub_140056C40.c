#include "../winhttp.h"

//----- (0000000140056C40) ----------------------------------------------------
double __fastcall sub_140056C40(_QWORD* a1, unsigned int a2)
{
	__int64* v4; // rax
	int v5; // ecx
	double v6; // xmm6_8
	_DWORD* v7; // rax
	int v8; // ecx
	_DWORD* v9; // rax
	const char* v10; // r10
	__int64 v11; // rax
	const char* v12; // r9
	const char* v13; // rax
	__int64 v15; // [rsp+20h] [rbp-28h] BYREF
	int v16; // [rsp+28h] [rbp-20h]
	__int64 v17; // [rsp+60h] [rbp+18h] BYREF

	v4 = (__int64*)sub_1400580E0((__int64)a1, a2);
	v5 = *((_DWORD*)v4 + 2);
	if (v5 != 3)
	{
		if (v5 != 4 || !sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v17))
		{
			v6 = 0.0;
			goto LABEL_6;
		}
		v16 = 3;
		v4 = &v15;
		v15 = v17;
	}
	v6 = *(double*)v4;
	if (*(double*)v4 != 0.0)
		return *(double*)v4;
LABEL_6:
	v7 = sub_1400580E0((__int64)a1, a2);
	v8 = v7[2];
	if (v8 != 3 && (v8 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v7 + 32i64), (unsigned __int64*)&v17)))
	{
		v9 = sub_1400580E0((__int64)a1, a2);
		if (v9 == dword_140A12138 || (v11 = (int)v9[2], (_DWORD)v11 == -1))
			v12 = aNoValue;
		else
			v12 = off_140A123B0[v11];
		v13 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", v10, v12);
		sub_140056570(a1, a2, v13);
	}
	return v6;
}
// 140056D25: variable 'v10' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

