#include "../winhttp.h"

//----- (000000014078C910) ----------------------------------------------------
__int64 __fastcall sub_14078C910(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	_DWORD* v4; // rsi
	int v5; // edi
	_QWORD* v6; // rsi
	int v7; // r14d
	_DWORD* v8; // rax
	__int64 v9; // r12
	_DWORD* v10; // rax
	_DWORD* v11; // rax
	const char* v12; // r10
	__int64 v13; // rax
	const char* v14; // r9
	const char* v15; // rax
	_DWORD* v16; // rax
	int v17; // ebp
	unsigned __int64(__fastcall * v18)(__int64, int*); // r15
	int v19; // edi
	__int64 i; // rdx
	__int64 v21; // rax
	_DWORD* v22; // rax
	__int64 v23; // rdx

	v1 = (_DWORD*)a1[3];
	v3 = a1[2];
	if ((unsigned __int64)v1 >= v3 || v1 == dword_140A12138 || v1[2] != 8)
	{
		v5 = 0;
		v6 = a1;
	}
	else
	{
		v4 = dword_140A12138;
		v5 = 1;
		if ((unsigned __int64)v1 < v3)
			v4 = v1;
		if (v4[2] == 8)
			v6 = *(_QWORD**)v4;
		else
			v6 = 0i64;
	}
	v7 = v5 + 1;
	v8 = sub_1400580E0((__int64)a1, v5 + 1);
	if (v8 == dword_140A12138 || (int)v8[2] <= 0)
	{
		if (v7 < 0)
		{
			a1[2] += 16i64 * (v5 + 2);
		}
		else
		{
			for (i = 16i64 * v7; a1[2] < (unsigned __int64)(i + a1[3]); a1[2] += 16i64)
				*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] = i + a1[3];
		}
		v18 = 0i64;
		v19 = 0;
		v17 = 0;
	}
	else
	{
		v9 = sub_140056BB0(a1, v5 + 2, 0i64);
		v10 = sub_1400580E0((__int64)a1, v7);
		if (v10 == dword_140A12138 || v10[2] != 6)
		{
			v11 = sub_1400580E0((__int64)a1, v7);
			if (v11 == dword_140A12138 || (v13 = (int)v11[2], (_DWORD)v13 == -1))
				v14 = aNoValue;
			else
				v14 = off_140A123B0[v13];
			v15 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", v12, v14);
			sub_140056570(a1, v7, v15);
		}
		v16 = sub_1400580E0((__int64)a1, v5 + 3);
		if (v16 == dword_140A12138 || (int)v16[2] <= 0)
			v17 = 0;
		else
			v17 = sub_140056D60(a1, v5 + 3);
		v18 = sub_14078C700;
		v19 = sub_1407DE0B4(v9, 0x63u) != 0i64;
		if (sub_1407DE0B4(v9, 0x72u))
			v19 |= 2u;
		if (sub_1407DE0B4(v9, 0x6Cu))
			v19 |= 4u;
		if (v17 > 0)
			v19 |= 8u;
	}
	sub_14078C820((__int64)a1);
	v21 = a1[2];
	*(_QWORD*)v21 = v6;
	*(_DWORD*)(v21 + 8) = 2;
	a1[2] += 16i64;
	v22 = sub_1400580E0((__int64)a1, v7);
	v23 = a1[2];
	*(_QWORD*)v23 = *(_QWORD*)v22;
	*(_DWORD*)(v23 + 8) = v22[2];
	a1[2] += 16i64;
	sub_140058AB0((__int64)a1, -3);
	a1[2] -= 16i64;
	if (!v18 || !v19)
	{
		LOBYTE(v19) = 0;
		v18 = 0i64;
	}
	v6[14] = v18;
	*((_DWORD*)v6 + 26) = v17;
	*((_DWORD*)v6 + 27) = v17;
	*((_BYTE*)v6 + 100) = v19;
	return 0i64;
}
// 14078CA00: variable 'v12' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

