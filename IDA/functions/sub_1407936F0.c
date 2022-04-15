#include "../winhttp.h"

//----- (00000001407936F0) ----------------------------------------------------
__int64 __fastcall sub_1407936F0(_QWORD* a1)
{
	int v2; // eax
	_DWORD* v3; // rdx
	unsigned __int64 v4; // rcx
	int v5; // edi
	__int64 v6; // rax
	const char* v7; // r9
	const char* v8; // rax
	__int64 v9; // rax
	__int64* v10; // rcx
	_QWORD* v11; // rax
	__int64 v12; // r10
	_DWORD* v13; // rax
	int v14; // eax

	v2 = sub_140056D60(a1, 2u);
	v3 = (_DWORD*)a1[3];
	v4 = a1[2];
	v5 = v2;
	if ((unsigned __int64)v3 >= v4)
		goto LABEL_8;
	if (v3 == dword_140A12138 || v3[2] != 5)
	{
		if ((unsigned __int64)v3 < v4 && v3 != dword_140A12138)
		{
			v6 = (int)v3[2];
			if ((_DWORD)v6 != -1)
			{
				v7 = off_140A123B0[v6];
				goto LABEL_9;
			}
		}
	LABEL_8:
		v7 = aNoValue;
	LABEL_9:
		v8 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aTable_0, v7);
		sub_140056570(a1, 1u, v8);
	}
	v9 = a1[2];
	v10 = (__int64*)dword_140A12138;
	*(_DWORD*)(v9 + 8) = 3;
	*(double*)v9 = (double)(v5 + 1);
	a1[2] += 16i64;
	if (a1[3] < a1[2])
		v10 = (__int64*)a1[3];
	v11 = sub_14005C3C0(*v10, v5 + 1);
	*(_QWORD*)v12 = *v11;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
	a1[2] += 16i64;
	v13 = (_DWORD*)(a1[2] - 16i64);
	if (v13 == dword_140A12138)
		v14 = -1;
	else
		v14 = v13[2];
	return v14 != 0 ? 2 : 0;
}
// 1407937B5: variable 'v12' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

