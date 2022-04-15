#include "../winhttp.h"

//----- (000000014049A860) ----------------------------------------------------
__int64 __fastcall sub_14049A860(__int64 a1, unsigned int* a2)
{
	unsigned int v2; // ecx
	__int64 v4; // r9
	__int64 v5; // rbp
	__int64 v6; // rax
	__int64 v7; // r8
	int* v8; // rbx
	__int64 v9; // r8
	__int64 v10; // rdx
	__int64 v11; // rax
	__int64 v12; // rdi
	int* v13; // rax
	int v14; // eax
	_QWORD v16[2]; // [rsp+20h] [rbp-38h] BYREF
	char v17[40]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v18; // [rsp+60h] [rbp+8h]
	__int64 v19; // [rsp+60h] [rbp+8h]

	v2 = *a2;
	v4 = *(_QWORD*)(qword_140C65990 + 16);
	v5 = qword_140C65990 + 8;
	v6 = *(_QWORD*)(v4 + 8);
	v7 = v4;
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < v2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v7 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v7 == v4 || (v18 = v7, v2 < *(_DWORD*)(v7 + 32)))
		v18 = *(_QWORD*)(qword_140C65990 + 16);
	v8 = 0i64;
	if (v18 != *(_QWORD*)(qword_140C65990 + 16))
		v8 = *(int**)(v18 + 40);
	if (v8)
		goto LABEL_26;
	v9 = *(_QWORD*)(qword_140C65998 + 16);
	v10 = v9;
	v11 = *(_QWORD*)(v9 + 8);
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < v2)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v10 = v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (v10 == v9 || (v19 = v10, v2 < *(_DWORD*)(v10 + 32)))
		v19 = *(_QWORD*)(qword_140C65998 + 16);
	if (v19 != v9)
	{
		v12 = *(_QWORD*)(v19 + 40);
		if (v12)
		{
			v13 = sub_14018B280(32i64, 0);
			v8 = v13;
			if (v13)
			{
				*((_QWORD*)v13 + 1) = 0i64;
				*((_QWORD*)v13 + 2) = 0i64;
				*((_QWORD*)v13 + 3) = 0i64;
				*(_QWORD*)v13 = off_140B67610;
			}
			else
			{
				v8 = 0i64;
			}
			(*(void(__fastcall**)(int*, __int64))(*(_QWORD*)v8 + 8i64))(v8, v12);
			v14 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v8 + 16i64))(v8);
			v16[1] = v8;
			LODWORD(v16[0]) = v14;
			sub_140055F80(v5, (__int64)v17, v16);
		LABEL_26:
			v8[5] = a2[2];
			sub_140499A20((__int64)v8, a2[1]);
			return 0i64;
		}
	}
	return 1i64;
}
// 140B67610: using guessed type __int64 (__fastcall *off_140B67610[16])();
// 140C65990: using guessed type __int64 qword_140C65990;
// 140C65998: using guessed type __int64 qword_140C65998;
// 14049A860: using guessed type char var_28[40];

