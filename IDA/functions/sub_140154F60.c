#include "../winhttp.h"

//----- (0000000140154F60) ----------------------------------------------------
__int64 __fastcall sub_140154F60(_QWORD* a1)
{
	_DWORD* v2; // rax
	int v3; // ecx
	__int64 v4; // rax
	int* v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r9
	__int64 v12; // rbx
	__int64 v13; // rax
	char v14; // al
	_DWORD* v15; // rax
	int v16; // ecx
	_DWORD* v18; // rax
	__int64 v19; // r10
	unsigned __int64 v20; // rdx
	__int64 v21; // rbx
	unsigned int v22; // ecx
	__int64 v23; // r8
	__int64 v24; // rax
	__int64 v25; // rsi
	char* v26; // rax
	int* v27; // rdi
	__int64 v28; // [rsp+20h] [rbp-28h] BYREF
	int* v29; // [rsp+28h] [rbp-20h]

	v2 = sub_1400580E0((__int64)a1, 1);
	v3 = v2[2];
	if (v3 == 2)
	{
		v4 = *(_QWORD*)v2;
	}
	else
	{
		if (v3 != 7)
			goto LABEL_17;
		v4 = *(_QWORD*)v2 + 48i64;
	}
	if (v4)
	{
		v5 = (int*)sub_1400580E0((__int64)a1, 1);
		v6 = v5[2];
		if ((_DWORD)v6 == 5 || (_DWORD)v6 == 7)
			v7 = *(_QWORD*)(*(_QWORD*)v5 + 16i64);
		else
			v7 = *(_QWORD*)(a1[4] + 8 * v6 + 224);
		if (v7)
		{
			v8 = a1[2];
			*(_QWORD*)v8 = v7;
			*(_DWORD*)(v8 + 8) = 5;
			a1[2] += 16i64;
			v9 = a1[4];
			v10 = sub_140062650((__int64)a1, (unsigned __int64*)"Apollo.ApolloCursor", 0x13ui64);
			v11 = a1[2];
			v28 = v10;
			LODWORD(v29) = 4;
			sub_14005E8E0((__int64)a1, v9 + 160, (int*)&v28, v11);
			a1[2] += 16i64;
			v12 = sub_1400586A0((__int64)a1, -1);
			v13 = sub_1400586A0((__int64)a1, -2);
			v14 = sub_1400E2100(qword_140C63650, v13, v12);
			a1[2] -= 32i64;
			if (v14)
			{
				v15 = sub_1400580E0((__int64)a1, 1);
				v16 = v15[2];
				if (v16 == 2)
					return **(_QWORD**)v15;
				if (v16 == 7)
					return *(_QWORD*)(*(_QWORD*)v15 + 48i64);
				return MEMORY[0];
			}
		}
	}
LABEL_17:
	v18 = sub_1400580E0((__int64)a1, 1);
	if (v18 == dword_140A12138 || (unsigned int)(v18[2] - 3) > 1)
		return 0i64;
	v20 = *(_QWORD*)(v19 + 768);
	v21 = 0i64;
	v22 = 0;
	if (!v20)
		return 0i64;
	v23 = *(_QWORD*)(v19 + 760);
	v24 = 0i64;
	while (*(_QWORD**)(*(_QWORD*)(v23 + 8 * v24) + 400i64) != a1)
	{
		v24 = ++v22;
		if (v22 >= v20)
			return 0i64;
	}
	v25 = *(_QWORD*)(v23 + 8i64 * v22);
	if (!v25)
		return 0i64;
	v26 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v28, v26);
	v27 = v29;
	if (v29)
	{
		v21 = sub_1401545C0(*(_QWORD*)(v25 + 360), v29);
		sub_14018B900((__int64)v27, 0);
	}
	return v21;
}
// 1401550E9: variable 'v19' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

