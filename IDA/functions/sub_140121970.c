#include "../winhttp.h"

//----- (0000000140121970) ----------------------------------------------------
__int64 __fastcall sub_140121970(_QWORD* a1)
{
	char* v2; // rax
	unsigned __int64 v3; // r8
	unsigned int v4; // ecx
	__int64 v5; // rdx
	__int64 v6; // rax
	__int64 v7; // rbx
	int* v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rcx
	__int64 v12; // [rsp+40h] [rbp-58h] BYREF
	int* v13; // [rsp+48h] [rbp-50h]
	unsigned int v14[4]; // [rsp+60h] [rbp-38h] BYREF
	int* v15; // [rsp+70h] [rbp-28h]
	int* v16; // [rsp+78h] [rbp-20h]
	int* v17; // [rsp+80h] [rbp-18h]

	v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	if (v2)
	{
		sub_14018F2D0(&v12, v2);
		v3 = *(_QWORD*)(qword_140C63650 + 768);
		v4 = 0;
		if (v3)
		{
			v5 = *(_QWORD*)(qword_140C63650 + 760);
			v6 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
			{
				v6 = ++v4;
				if (v4 >= v3)
					goto LABEL_6;
			}
			v7 = *(_QWORD*)(v5 + 8i64 * v4);
		}
		else
		{
		LABEL_6:
			v7 = 0i64;
		}
		v8 = sub_14018B280(16i64, 0);
		v15 = v8;
		v16 = v8;
		v17 = v8 + 4;
		if (v8)
			*(_WORD*)v8 = 0;
		sub_14010AEB0((__int64)v14, v7, v13);
		v9 = (__int64)v15;
		if ((v14[0] & 0x80000000) == 0)
		{
			v10 = *(_QWORD*)(qword_140C63650 + 1832);
			if (v10)
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v10 + 16i64))(
					v10,
					v14[0],
					0i64,
					0i64,
					0i64,
					0i64,
					0i64);
		}
		else if (v15 != v16)
		{
			sub_1400E2370(qword_140C63650, (__int64)v15);
		}
		if (v9)
			sub_14018B900(v9, 0);
		if (v13)
			sub_14018B900((__int64)v13, 0);
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140121970: using guessed type unsigned int var_38[4];

