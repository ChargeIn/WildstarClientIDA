#include "../winhttp.h"

//----- (00000001408896B0) ----------------------------------------------------
__int64 __fastcall sub_1408896B0(
	__int64 a1,
	unsigned int a2,
	unsigned __int64 a3,
	unsigned int a4,
	unsigned int a5,
	char a6,
	unsigned int* a7,
	__int64* a8)
{
	__int64 v8; // r15
	__int64 result; // rax
	__int64 v13; // rbp
	__int64 v14; // r14
	int v15; // r9d
	int v16; // r8d
	__int64 v17; // rdx
	__int64 v18; // r12
	__int64 v19; // rcx
	unsigned int v20; // eax
	__int64 v21; // rbx
	unsigned int v22; // edi
	unsigned int v23; // r9d

	v8 = a4;
	*a8 = 0i64;
	if (*(_DWORD*)(a1 + 76) == *(_DWORD*)(a1 + 24))
		return 0i64;
	v13 = *(_QWORD*)(a1 + 48);
	v14 = *(_QWORD*)(a1 + 16);
	v15 = 0;
	v16 = ((*(_QWORD*)(a1 + 56) - v13) >> 1) - 1;
	LODWORD(v17) = v16 / 2;
	while (1)
	{
		v18 = (unsigned int)v17;
		v17 = (unsigned int)(v15 + (v16 - v15) / 2);
		v19 = v14 + 40i64 * *(unsigned __int16*)(v13 + 2 * v17);
		v20 = *(_DWORD*)(v19 + 28);
		if (a2 < v20)
		{
		LABEL_9:
			v16 = v17 - 1;
			goto LABEL_10;
		}
		if (a2 <= v20)
		{
			if (a3 > *(_QWORD*)v19)
				goto LABEL_9;
			if (a3 >= *(_QWORD*)v19)
				break;
		}
		v15 = v17 + 1;
	LABEL_10:
		if (v15 > v16)
			goto LABEL_11;
	}
	v21 = v14 + 40i64 * *(unsigned __int16*)(v13 + 2 * v17);
	if (v21)
	{
		if (a3 > *(_QWORD*)v21 + (unsigned __int64)*a7 - v8)
			return 0i64;
	}
	else
	{
	LABEL_11:
		v21 = v14 + 40i64 * *(unsigned __int16*)(v13 + 2 * v18);
		if (a2 != *(_DWORD*)(v21 + 28)
			|| a3 < *(_QWORD*)v21
			|| a3 > *(_QWORD*)v21 + (unsigned __int64)*(unsigned int*)(v21 + 24) - v8)
		{
			return 0i64;
		}
	}
	v22 = a3 - *(_DWORD*)v21;
	v23 = *(_DWORD*)(v21 + 24) - v22;
	if (v23 > *a7
		|| v23 % a5 && (!a6 || v23 != *a7)
		|| ((unsigned __int64)v22 + *(_QWORD*)(v21 + 8)) % a5
		|| v23 < (unsigned int)v8)
	{
		return 0i64;
	}
	*a7 = v23;
	if (!*(_WORD*)(v21 + 32))
	{
		sub_140889BB0(a1 + 24, v21);
		*(_QWORD*)(v21 + 16) = 0i64;
	}
	++* (_WORD*)(v21 + 32);
	--* (_DWORD*)(a1 + 76);
	result = v22;
	*a8 = v21;
	return result;
}

