#include "../winhttp.h"

//----- (00000001405CCA00) ----------------------------------------------------
void __fastcall sub_1405CCA00(__int64 a1, __int64 a2, __int64 a3, double a4)
{
	int v4; // ebx
	__int64 v6; // rcx
	__int64 v7; // rdx
	__int64 v8; // r8
	unsigned __int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rcx
	int v12; // edx
	__int64 v13; // rdi
	__int64 i; // rbx
	__int64 v15; // rcx
	_QWORD* v16; // rcx
	int v17; // [rsp+20h] [rbp-28h] BYREF
	__int64 v18; // [rsp+28h] [rbp-20h]
	void(__fastcall * v19)(_QWORD**, __int64, double, double); // [rsp+30h] [rbp-18h]
	__int64 v20; // [rsp+38h] [rbp-10h]

	v4 = *(_DWORD*)(a1 + 56);
	sub_140195D70(a1 + 480);
	sub_14053B9C0(v6, v4);
	*(_DWORD*)(a1 + 24) = dword_140C636A8;
	*(_DWORD*)(a1 + 124) = 0;
	sub_1405CD070(a1, v7, v8, a4);
	v9 = 0i64;
	for (*(_DWORD*)(a1 + 124) = 1; v9 < *(_QWORD*)(a1 + 624); ++v9)
	{
		v10 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(*(_QWORD*)(a1 + 616) + 4 * v9));
		if (v10)
		{
			v11 = *(_QWORD*)(v10 + 5864);
			if (v11)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v11 + 296i64))(v11, 1i64);
		}
	}
	v12 = *(_DWORD*)(a1 + 16);
	if (v12)
	{
		v17 = 0;
		v18 = a1;
		v19 = sub_1405CD150;
		v20 = 0i64;
		sub_140195960(a1 + 264, v12, (__int64)&v17, 4);
	}
	v13 = qword_140C65898;
	for (i = *(_QWORD*)(qword_140C65898 + 28464); i; i = *(_QWORD*)(i + 96))
	{
		v15 = *(_QWORD*)(i + 6320);
		if (v15)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 936i64))(v15);
	}
	v16 = *(_QWORD**)(v13 + 27728);
	if (v16)
		sub_1406016C0(v16, 0);
}
// 1405CCA1E: variable 'v6' is possibly undefined
// 1405CCA36: variable 'v7' is possibly undefined
// 1405CCA36: variable 'v8' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

