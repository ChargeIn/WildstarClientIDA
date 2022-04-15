#include "../winhttp.h"

//----- (0000000140707EB0) ----------------------------------------------------
__int64 __fastcall sub_140707EB0(_QWORD* a1)
{
	__int64 v2; // rax
	int* v3; // rax
	__int64 v4; // rcx
	int v5; // eax
	__int64 result; // rax
	__int64 v7; // rax
	unsigned int** v8; // rax
	unsigned int v9; // ecx
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rax
	unsigned int v15; // ecx
	__int64 v16; // rax
	__int64 v17; // rdi
	_DWORD* v18; // rcx
	int v19; // edx
	__int64 v20; // rcx
	int* v21; // rax
	__int64 v22; // rax
	__int64 v23; // rbx
	__int64 v24; // rcx
	int v25; // eax

	v2 = sub_140527CB0((__int64)a1, 1);
	if (v2)
	{
		v3 = *(int**)(v2 + 8);
		if (v3)
		{
			v4 = qword_140C65898;
			v5 = *v3;
			*(_DWORD*)(qword_140C65898 + 32544) = 7;
		LABEL_4:
			*(_DWORD*)(v4 + 32548) = v5;
			result = 0i64;
			*(_DWORD*)(v4 + 32552) = 0;
			return result;
		}
	}
	v7 = sub_1405278C0((__int64)a1, 1);
	if (v7)
	{
		v8 = *(unsigned int***)(v7 + 8);
		if (v8)
		{
			v9 = **v8;
			v10 = qword_140C65898;
			*(_DWORD*)(qword_140C65898 + 32544) = 0;
			*(_QWORD*)(v10 + 32548) = v9;
			return 0i64;
		}
	}
	v11 = sub_140527A10((__int64)a1, 1);
	if (v11)
	{
		v12 = *(_QWORD*)(v11 + 8);
		if (v12)
		{
			v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 32i64))(v12);
			v4 = qword_140C65898;
			*(_DWORD*)(qword_140C65898 + 32544) = 3;
			goto LABEL_4;
		}
	}
	v13 = sub_140527B60((__int64)a1, 1);
	if (v13)
	{
		v14 = *(_QWORD*)(v13 + 8);
		if (v14)
		{
			v15 = **(_DWORD**)(v14 + 8);
			v16 = qword_140C65898;
			*(_DWORD*)(qword_140C65898 + 32544) = 4;
			*(_QWORD*)(v16 + 32548) = v15;
			return 0i64;
		}
	}
	v17 = sub_140512120((__int64)a1, 1);
	if (!v17)
	{
		v21 = (int*)sub_1406622C0((__int64)a1, 1);
		if (v21 && (v22 = sub_1403D90D0(qword_140C65898, *v21), (v23 = v22) != 0))
		{
			if (sub_1403B48B0(v22)
				&& sub_1403B48B0(*(_QWORD*)(qword_140C65898 + 120))
				&& !(unsigned int)sub_14045A950(*(_QWORD*)(qword_140C65898 + 120), *(_DWORD*)(v23 + 8)))
			{
				return 0i64;
			}
			v24 = qword_140C65898;
			v25 = *(_DWORD*)(v23 + 8);
			*(_DWORD*)(qword_140C65898 + 32544) = 6;
			*(_DWORD*)(v24 + 32548) = v25;
		}
		else
		{
			v24 = qword_140C65898;
			if ((_mm_movemask_ps(_mm_cmpneq_ps(*(__m128*)(qword_140C65898 + 32480), (__m128)0i64)) & 7) != 0)
			{
				*(_QWORD*)(qword_140C65898 + 32544) = 8i64;
			}
			else if (*(_DWORD*)(qword_140C65898 + 32532))
			{
				*(_QWORD*)(qword_140C65898 + 32544) = 9i64;
			}
			else
			{
				*(_QWORD*)(qword_140C65898 + 32544) = 10i64;
			}
		}
		*(_DWORD*)(v24 + 32552) = 0;
		return 0i64;
	}
	v18 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v18 >= a1[2] || v18 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v19 = -1;
	else
		v19 = sub_140056D60(a1, 2u);
	v20 = qword_140C65898;
	*(_DWORD*)(qword_140C65898 + 32548) = **(_DWORD**)(*(_QWORD*)v17 + 8i64);
	*(_DWORD*)(v20 + 32544) = 1;
	*(_DWORD*)(v20 + 32552) = v19;
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

