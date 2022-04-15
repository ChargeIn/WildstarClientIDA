#include "../winhttp.h"

//----- (000000014004E250) ----------------------------------------------------
__int64 __fastcall sub_14004E250(_QWORD* a1)
{
	_DWORD* v1; // rax
	int v3; // r12d
	__int64* v4; // rax
	__int64 v5; // r14
	_DWORD* v6; // rax
	signed int v7; // edi
	int* v8; // rax
	__int64* v9; // rbp
	_DWORD* v10; // rax
	int v11; // r15d
	_DWORD* v12; // rax
	int v13; // ebx
	_DWORD* v14; // rax
	int v15; // eax
	__int64 v17; // r8
	__int64 v18; // rdx
	__int64 v19; // rcx
	__int64 v20; // rax
	__int64 v21; // rbx
	int* v22; // rax
	__int64 v23; // rdi
	_QWORD v24[2]; // [rsp+30h] [rbp-48h] BYREF
	__int64 v25; // [rsp+88h] [rbp+10h] BYREF
	int* v26; // [rsp+90h] [rbp+18h] BYREF

	v1 = (_DWORD*)a1[3];
	v3 = 1;
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v4 = (__int64*)sub_140056AB0(a1, 1u)) != 0i64)
	{
		v5 = *v4;
	}
	else
	{
		v5 = 0i64;
	}
	v6 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v7 = 0;
	else
		v7 = sub_140056D60(a1, 2u);
	if (!v5 || !v7 || !*(_QWORD*)(v5 + 392))
		return 0i64;
	v8 = sub_14018B280(5200i64, 8u);
	if (v8)
		v9 = (__int64*)sub_140048490((__int64)v8, v5);
	else
		v9 = 0i64;
	v10 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v10 >= a1[2] || v10 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		v11 = 0;
	else
		v11 = sub_140056D60(a1, 3u);
	v12 = (_DWORD*)(a1[3] + 48i64);
	if ((unsigned __int64)v12 >= a1[2] || v12 == dword_140A12138 || *(int*)(a1[3] + 56i64) <= 0)
		v13 = 0;
	else
		v13 = sub_140056D60(a1, 4u);
	v14 = (_DWORD*)(a1[3] + 64i64);
	if ((unsigned __int64)v14 >= a1[2]
		|| v14 == dword_140A12138
		|| *(int*)(a1[3] + 72i64) <= 0
		|| (v15 = sub_140056D60(a1, 5u), v15 != 1) && (unsigned int)(v15 - 10) > 2)
	{
		v3 = 0;
	}
	if ((int)sub_1400488D0((__int64)v9, *(__int64**)(v5 + 392), v11, v13, v3, v7) >= 0)
	{
		v17 = *(_QWORD*)(v5 + 416);
		v18 = v17;
		v19 = *(_QWORD*)(v17 + 8);
		v20 = v19;
		while (v20)
		{
			if (*(_DWORD*)(v20 + 32) < v7)
			{
				v20 = *(_QWORD*)(v20 + 24);
			}
			else
			{
				v18 = v20;
				v20 = *(_QWORD*)(v20 + 16);
			}
		}
		if (v18 == v17 || (v25 = v18, v7 < *(_DWORD*)(v18 + 32)))
			v25 = v17;
		v21 = v25;
		if (v25 == v17)
		{
			v22 = (int*)v17;
			while (v19)
			{
				if (*(_DWORD*)(v19 + 32) < v7)
				{
					v19 = *(_QWORD*)(v19 + 24);
				}
				else
				{
					v22 = (int*)v19;
					v19 = *(_QWORD*)(v19 + 16);
				}
			}
			if (v22 == (int*)v17 || v7 < v22[8])
			{
				LODWORD(v24[0]) = v7;
				v24[1] = 0i64;
				v25 = (__int64)v22;
				sub_14004F0D0(v5 + 408, &v26, &v25, v24);
				v22 = v26;
			}
			*((_QWORD*)v22 + 5) = v9;
			return sub_140049EA0((__int64)v9, a1);
		}
		else
		{
			v23 = *(_QWORD*)(v25 + 40);
			if (v23)
			{
				sub_1400485E0(*(__int64**)(v25 + 40));
				sub_14018B900(v23, 0);
			}
			*(_QWORD*)(v21 + 40) = v9;
			return sub_140049EA0((__int64)v9, a1);
		}
	}
	else
	{
		if (v9)
		{
			sub_1400485E0(v9);
			sub_14018B900((__int64)v9, 0);
		}
		return 0i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

