#include "../winhttp.h"

//----- (00000001407974A0) ----------------------------------------------------
__int64 __fastcall sub_1407974A0(__int64 a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	_DWORD* v4; // rbx
	__int64 v5; // rcx
	const char* v6; // r9
	const char* v7; // rax
	unsigned __int64 v8; // r8
	int v9; // eax
	__int64 v10; // rdx
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rbx
	unsigned __int64 v16; // r8
	__int64 v17; // rax
	unsigned int* v18; // r9
	__int64 v20; // [rsp+20h] [rbp-18h] BYREF
	int v21; // [rsp+28h] [rbp-10h]

	v1 = *(_DWORD**)(a1 + 24);
	v3 = *(_QWORD*)(a1 + 16);
	v4 = dword_140A12138;
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
		v7 = (const char*)sub_140058780(a1, (unsigned __int64*)"%s expected, got %s", aTable_0, v6);
		sub_140056570((_QWORD*)a1, 1u, v7);
	}
	v8 = *(_QWORD*)(a1 + 16);
	if (*(_QWORD*)(a1 + 24) < v8)
		v4 = *(_DWORD**)(a1 + 24);
	v9 = v4[2];
	if (v9 == 5 || v9 == 7)
		v10 = *(_QWORD*)(*(_QWORD*)v4 + 16i64);
	else
		v10 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64 * (int)v4[2] + 224);
	if (v10)
	{
		*(_QWORD*)v8 = v10;
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v11 = *(_QWORD*)(a1 + 16);
		v12 = sub_14005C1B0(a1, 0, 1);
		*(_DWORD*)(v11 + 8) = 5;
		*(_QWORD*)v11 = v12;
		*(_QWORD*)(a1 + 16) += 16i64;
		v13 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v13 = *(_QWORD*)(v13 - 16);
		*(_DWORD*)(v13 + 8) = *(_DWORD*)(v13 - 8);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_140058BF0(a1, 1);
	}
	v14 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v14 = *(_QWORD*)(a1 + 120);
	*(_DWORD*)(v14 + 8) = *(_DWORD*)(a1 + 128);
	*(_QWORD*)(a1 + 16) += 16i64;
	v15 = *(_QWORD*)(a1 + 16);
	v16 = -1i64;
	do
		++v16;
	while (aIndex_109[v16]);
	v17 = sub_140062650(a1, (unsigned __int64*)aIndex_109, v16);
	v18 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v20 = v17;
	v21 = 4;
	sub_14005EA50(a1, (__int64*)(v15 - 32), (int*)&v20, v18);
	*(_QWORD*)(a1 + 16) -= 16i64;
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

