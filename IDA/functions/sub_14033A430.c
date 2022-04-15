#include "../winhttp.h"

//----- (000000014033A430) ----------------------------------------------------
int* __fastcall sub_14033A430(__int64 a1, int** a2)
{
	unsigned int v4; // ebx
	int* v5; // rdi
	_QWORD** v6; // rcx
	unsigned int v7; // edx
	_QWORD* i; // rax
	__int64 v9; // rcx
	__int64 v10; // rax
	_QWORD* v11; // rdx
	_QWORD** v12; // rcx
	_QWORD* j; // rax
	_QWORD* v14; // rdx
	__int64 v15; // rcx
	int* result; // rax
	const wchar_t* v17; // [rsp+20h] [rbp-28h] BYREF
	__int64 v18; // [rsp+28h] [rbp-20h]
	__int64 v19; // [rsp+30h] [rbp-18h]

	v4 = 0;
	v5 = sub_14018B280(48i64, 0);
	if (v5)
	{
		*(_QWORD*)v5 = off_140B64A10;
		v5[2] = 1;
		*((_QWORD*)v5 + 3) = 0i64;
		*((_QWORD*)v5 + 4) = 0i64;
		*((_QWORD*)v5 + 5) = 0i64;
	}
	else
	{
		v5 = 0i64;
	}
	sub_14033A7E0((_QWORD*)v5 + 2, 2ui64);
	v6 = *(_QWORD***)(a1 + 32);
	v7 = 0;
	for (i = *v6; i != v6; ++v7)
		i = (_QWORD*)*i;
	if (v7 > *(_DWORD*)(a1 + 40))
		*(_DWORD*)(a1 + 40) = v7;
	v9 = *(unsigned int*)(a1 + 40);
	v10 = v7;
	v11 = (_QWORD*)*((_QWORD*)v5 + 4);
	v18 = v10;
	v19 = v9;
	v17 = L"sockets";
	if (v11 == *((_QWORD**)v5 + 5))
	{
		sub_14033A9D0((_QWORD*)v5 + 2, v11, &v17);
	}
	else
	{
		if (v11)
		{
			*v11 = L"sockets";
			v11[1] = v10;
			v11[2] = v9;
		}
		*((_QWORD*)v5 + 4) += 24i64;
	}
	v12 = *(_QWORD***)(a1 + 16);
	for (j = *v12; j != v12; ++v4)
		j = (_QWORD*)*j;
	if (v4 > *(_DWORD*)(a1 + 44))
		*(_DWORD*)(a1 + 44) = v4;
	v14 = (_QWORD*)*((_QWORD*)v5 + 4);
	v15 = *(unsigned int*)(a1 + 44);
	result = (int*)v4;
	v17 = L"results";
	v19 = v15;
	v18 = v4;
	if (v14 == *((_QWORD**)v5 + 5))
	{
		result = sub_14033A9D0((_QWORD*)v5 + 2, v14, &v17);
	}
	else
	{
		if (v14)
		{
			*v14 = L"results";
			v14[1] = v4;
			v14[2] = v15;
		}
		*((_QWORD*)v5 + 4) += 24i64;
	}
	*a2 = v5;
	return result;
}
// 140AF2BE8: using guessed type wchar_t aSockets[8];
// 140AF2D08: using guessed type wchar_t aResults[8];
// 140B64A10: using guessed type __int64 (__fastcall *off_140B64A10[23])();

