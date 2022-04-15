#include "../winhttp.h"

//----- (00000001404CF010) ----------------------------------------------------
__int64 __fastcall sub_1404CF010(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
	__int64 v4; // rdi
	__int64 v5; // rbp
	__int64 result; // rax
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rax
	unsigned int** v12; // rdx
	__int64 v13; // rbx
	__int64 v14; // rax
	__int64 i; // rax
	__int64 j; // rax
	unsigned int v17; // ecx
	unsigned int v18; // r8d
	__int64 v19; // [rsp+40h] [rbp+8h]

	v4 = qword_140C65A20;
	v5 = (int)a2;
	if (a2 > 6)
		return 2147942487i64;
	v9 = *(_QWORD*)(qword_140C65A20 + 56);
	v10 = v9;
	v11 = *(_QWORD*)(v9 + 8);
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < a3)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v10 = v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (v10 == v9 || (v19 = v10, a3 < *(_DWORD*)(v10 + 32)))
		v19 = *(_QWORD*)(qword_140C65A20 + 56);
	if (v19 == v9)
	{
		v13 = *(_QWORD*)(v9 + 16);
		if (v13 == v9)
			return 2147500037i64;
		while (!(unsigned int)sub_1403C9450(v10, a3, *(_DWORD*)(v13 + 32)))
		{
			v14 = *(_QWORD*)(v13 + 24);
			if (v14)
			{
				v13 = *(_QWORD*)(v13 + 24);
				for (i = *(_QWORD*)(v14 + 16); i; i = *(_QWORD*)(i + 16))
					v13 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v13 + 8); v13 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v13 = j;
				if (*(_QWORD*)(v13 + 24) != j)
					v13 = j;
			}
			if (v13 == *(_QWORD*)(v4 + 56))
				return 2147500037i64;
		}
		v12 = *(unsigned int***)(v13 + 40);
	}
	else
	{
		v12 = *(unsigned int***)(v19 + 40);
	}
	if (!v12)
		return 2147500037i64;
	v17 = *((_DWORD*)v12 + v5 + 2);
	v18 = (*v12)[v5 + 3];
	result = 1i64;
	if (v17 < v18)
	{
		if (v18 == v17)
			LODWORD(result) = 0;
		*((_DWORD*)v12 + v5 + 2) = v17 + result;
		if (a4)
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ZoneCompletionUpdated", L"i", **v12);
		++* (_DWORD*)(v4 + 136);
		return 0i64;
	}
	return result;
}
// 1404CF0B7: variable 'v10' is possibly undefined
// 1409EF504: using guessed type wchar_t aI_39[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A20: using guessed type __int64 qword_140C65A20;

