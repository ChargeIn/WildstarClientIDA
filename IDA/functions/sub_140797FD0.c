#include "../winhttp.h"

//----- (0000000140797FD0) ----------------------------------------------------
__int64 __fastcall sub_140797FD0(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	const char* v4; // rdi
	__int64 v5; // rcx
	const char* v6; // r9
	const char* v7; // rax
	unsigned __int64 v8; // rcx
	_DWORD* v9; // rax
	__int64 v10; // rcx
	const char* v11; // rax
	unsigned __int64 v12; // r8
	__int64* v13; // rdx
	unsigned __int64 v14; // rdx
	_DWORD* v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rax

	v1 = (_DWORD*)a1[3];
	v3 = a1[2];
	v4 = aNoValue;
	if ((unsigned __int64)v1 >= v3)
		goto LABEL_8;
	if (v1 == dword_140A12138 || v1[2] != 5)
	{
		if ((unsigned __int64)v1 < v3 && v1 != dword_140A12138)
		{
			v5 = (int)v1[2];
			if ((_DWORD)v5 != -1)
			{
				v6 = off_140A123B0[v5];
				goto LABEL_9;
			}
		}
	LABEL_8:
		v6 = aNoValue;
	LABEL_9:
		v7 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aTable_0, v6);
		sub_140056570(a1, 1u, v7);
	}
	v8 = a1[2];
	v9 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v9 >= v8)
	{
	LABEL_17:
		v11 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aFunction_3, v4);
		sub_140056570(a1, 2u, v11);
	}
	if (v9 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64) != 6)
	{
		if ((unsigned __int64)v9 < v8 && v9 != dword_140A12138)
		{
			v10 = *(int*)(a1[3] + 24i64);
			if ((_DWORD)v10 != -1)
				v4 = off_140A123B0[v10];
		}
		goto LABEL_17;
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	for (a1[2] += 16i64; ; a1[2] = v18 - 32)
	{
		v12 = a1[2];
		v13 = (__int64*)dword_140A12138;
		if (a1[3] < v12)
			v13 = (__int64*)a1[3];
		if (!(unsigned int)sub_14005BA70((__int64)a1, *v13, v12 - 16))
			break;
		a1[2] += 16i64;
		v14 = a1[2];
		v15 = dword_140A12138;
		if (a1[3] + 16i64 < v14)
			v15 = (_DWORD*)(a1[3] + 16i64);
		*(_QWORD*)v14 = *(_QWORD*)v15;
		*(_DWORD*)(v14 + 8) = v15[2];
		a1[2] += 16i64;
		v16 = a1[2];
		*(_QWORD*)v16 = *(_QWORD*)(v16 - 48);
		*(_DWORD*)(v16 + 8) = *(_DWORD*)(v16 - 40);
		a1[2] += 16i64;
		v17 = a1[2];
		*(_QWORD*)v17 = *(_QWORD*)(v17 - 48);
		*(_DWORD*)(v17 + 8) = *(_DWORD*)(v17 - 40);
		a1[2] += 16i64;
		sub_140061D30((__int64)a1, (char*)(a1[2] - 48i64), 1);
		v18 = a1[2];
		if ((_DWORD*)(v18 - 16) == dword_140A12138 || *(_DWORD*)(v18 - 16 + 8))
			return 1i64;
	}
	a1[2] -= 16i64;
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

