#include "../winhttp.h"

//----- (00000001404FAD60) ----------------------------------------------------
__int64 __fastcall sub_1404FAD60(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64* v5; // r14
	int v6; // r15d
	unsigned int v7; // edx
	unsigned __int64 v8; // r8
	unsigned __int64 v9; // rcx
	_DWORD* v10; // rax
	__int64 v11; // r8
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rdi
	int v15; // ebp
	_DWORD* v16; // rcx
	__int64 v17; // [rsp+48h] [rbp+10h]

	result = sub_1404F87C0(a1, 1u);
	v3 = result;
	if (result)
	{
		v4 = *(_QWORD*)(result + 2328);
		if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
		v5 = *(__int64**)(v3 + 2168);
		if (!v5)
			return 0i64;
		v6 = 0;
		v7 = sub_140056D60(a1, 2u);
		v8 = *(_QWORD*)(qword_140C63600 + 40);
		v9 = 0i64;
		if (v8)
		{
			v10 = *(_DWORD**)(qword_140C63600 + 32);
			while (*v10 != v7)
			{
				++v9;
				++v10;
				if (v9 >= v8)
					goto LABEL_11;
			}
			v14 = v3 + 2336;
			sub_14002EAF0((_DWORD*)(v3 + 2336), *(_DWORD*)(v3 + 7304));
			sub_14002EBD0(v3 + 2336, *(_DWORD*)(v3 + 7308));
			sub_14002F5D0(v3 + 2336, *(__int64**)(v3 + 2168), *(_QWORD*)(v3 + 2160));
			sub_14002FE90(v3 + 2336, *(_QWORD*)(v3 + 2168));
			sub_140030080(v3 + 2336, *(_QWORD*)(v3 + 2168));
			sub_1404FEE90(v3);
			v15 = 1;
		}
		else
		{
		LABEL_11:
			v11 = *(_QWORD*)(v3 + 7248);
			v12 = v11;
			v13 = *(_QWORD*)(v11 + 8);
			while (v13)
			{
				if (*(_DWORD*)(v13 + 32) < v7)
				{
					v13 = *(_QWORD*)(v13 + 24);
				}
				else
				{
					v12 = v13;
					v13 = *(_QWORD*)(v13 + 16);
				}
			}
			if (v12 == v11 || (v17 = v12, v7 < *(_DWORD*)(v12 + 32)))
				v17 = *(_QWORD*)(v3 + 7248);
			v14 = v3 + 2336;
			v15 = sub_14002EC40(v3 + 2336, v7, *(_DWORD*)(v17 + 36));
			if (!v15)
				goto LABEL_22;
		}
		sub_14002F5D0(v14, v5, *(_QWORD*)(v3 + 2160));
		sub_14002FE90(v14, (__int64)v5);
		sub_140030080(v14, (__int64)v5);
	LABEL_22:
		v16 = (_DWORD*)a1[2];
		v16[2] = 1;
		LOBYTE(v6) = v15 != 0;
		result = 1i64;
		*v16 = v6;
		a1[2] += 16i64;
	}
	return result;
}
// 140C63600: using guessed type __int64 qword_140C63600;

