#include "../winhttp.h"

//----- (0000000140792A20) ----------------------------------------------------
__int64 __fastcall sub_140792A20(_QWORD* a1)
{
	_DWORD* v1; // rax
	_DWORD* v3; // rdi
	unsigned __int64 v4; // rdx
	int v5; // esi
	__int64 v6; // rcx
	const char* v7; // r9
	const char* v8; // rax
	unsigned __int64 v9; // r8
	int v10; // eax
	__int64 v11; // rdx

	v1 = (_DWORD*)a1[3];
	v3 = dword_140A12138;
	v4 = a1[2];
	if ((unsigned __int64)(v1 + 4) >= v4 || v1 + 4 == dword_140A12138)
		v5 = -1;
	else
		v5 = v1[6];
	if ((unsigned __int64)v1 >= v4)
		goto LABEL_12;
	if (v1 == dword_140A12138 || v1[2] != 5)
	{
		if ((unsigned __int64)v1 < v4 && v1 != dword_140A12138)
		{
			v6 = (int)v1[2];
			if ((_DWORD)v6 != -1)
			{
				v7 = off_140A123B0[v6];
				goto LABEL_13;
			}
		}
	LABEL_12:
		v7 = aNoValue;
	LABEL_13:
		v8 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aTable_0, v7);
		sub_140056570(a1, 1u, v8);
	}
	if (v5 && v5 != 5)
		sub_140056570(a1, 2u, aNilOrTableExpe_0);
	v9 = a1[2];
	if (a1[3] < v9)
		v3 = (_DWORD*)a1[3];
	v10 = v3[2];
	if (v10 == 5 || v10 == 7)
		v11 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
	else
		v11 = *(_QWORD*)(a1[4] + 8i64 * (int)v3[2] + 224);
	if (v11)
	{
		*(_QWORD*)v9 = v11;
		*(_DWORD*)(v9 + 8) = 5;
		a1[2] += 16i64;
		if ((unsigned int)sub_140056EB0((__int64)a1, (unsigned __int64*)aMetatable_0))
			sub_140056830(a1, (unsigned __int64*)aCannotChangeAP);
	}
	for (; a1[2] < (unsigned __int64)(a1[3] + 32i64); a1[2] += 16i64)
		*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] = a1[3] + 32i64;
	sub_140058BF0((__int64)a1, 1);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

