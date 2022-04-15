#include "../winhttp.h"

//----- (0000000140579600) ----------------------------------------------------
__int64 __fastcall sub_140579600(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v4; // r13
	unsigned __int64 v6; // rdi
	__int64 v7; // rbx
	unsigned int v8; // r15d
	unsigned __int64 i; // rbx
	__int64 v10; // rax
	__int64 j; // rdi
	_QWORD* v12; // rcx
	__int64 v13; // rcx
	_QWORD* v14; // rcx
	__int64 v15; // rcx
	int v16; // edx
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rbp
	int** v20; // rbx
	int** v21; // rax
	int v22; // r14d
	__int64 v23; // rcx
	int* v24; // rbx
	__int64 v25; // rax
	unsigned int v26; // edx
	__int128 v28; // [rsp+60h] [rbp-48h] BYREF
	__int64 v29; // [rsp+B0h] [rbp+8h] BYREF

	v29 = a1;
	v4 = qword_140C65B78;
	v6 = 0i64;
	if (*(_QWORD*)(a2 + 1440))
	{
		v7 = 0i64;
		do
		{
			sub_140577660(v4, (_DWORD*)(v7 + *(_QWORD*)(a2 + 1432)));
			++v6;
			v7 += 36i64;
		} while (v6 < *(_QWORD*)(a2 + 1440));
	}
	v8 = *(_DWORD*)(a2 + 8);
	for (i = 0i64; i < *(_QWORD*)(a2 + 1456); ++i)
	{
		v10 = *(_QWORD*)(a2 + 1448);
		v28 = 0i64;
		sub_1405787D0((__int64)&v28, 0, v8, a4, *(_QWORD*)(v10 + 8 * i), 0i64, 0i64, 0, (_QWORD*)(a2 + 1424), &v28, 0);
	}
	for (j = *(_QWORD*)(a2 + 1464); j; j = *(_QWORD*)(a2 + 1464))
	{
		v12 = *(_QWORD**)(j + 16);
		if (v12)
			*v12 = *(_QWORD*)(j + 24);
		v13 = *(_QWORD*)(j + 24);
		if (v13)
			*(_QWORD*)(v13 + 16) = *(_QWORD*)(j + 16);
		v14 = *(_QWORD**)(j + 48);
		*(_QWORD*)(j + 16) = 0i64;
		*(_QWORD*)(j + 24) = 0i64;
		if (v14)
			*v14 = *(_QWORD*)(j + 56);
		v15 = *(_QWORD*)(j + 56);
		if (v15)
			*(_QWORD*)(v15 + 48) = *(_QWORD*)(j + 48);
		v16 = *(_DWORD*)(j + 8);
		*(_QWORD*)(j + 48) = 0i64;
		*(_QWORD*)(j + 56) = 0i64;
		v17 = sub_140561C30(qword_140C65B70, v16);
		v19 = v17;
		if (v17)
		{
			v20 = (int**)(v17 + 536);
			v21 = (int**)(v17 + 544);
		}
		else
		{
			v20 = 0i64;
			v21 = 0i64;
		}
		v22 = *(_DWORD*)(j + 12);
		if ((int)sub_140578460(v18, v22, v8, *(int**)j, *(_DWORD*)(j + 8), v20, v21) >= 0
			&& v19
			&& (unsigned int)(v22 - 5) <= 1)
		{
			v24 = *v20;
			sub_1403F9C60(v23, v19);
			(*(void(__fastcall**)(int*))(*(_QWORD*)v24 + 88i64))(v24);
		}
		*(_QWORD*)j = 0i64;
		sub_140453F90((__int64*)j);
		sub_14018B900(j, 0);
	}
	v25 = *(_QWORD*)(a2 + 24);
	if (v25)
	{
		v26 = *(_DWORD*)(v25 + 360);
		if (v26)
			sub_140578F30(v4, v26, v8);
	}
	*(_QWORD*)(a2 + 1440) = 0i64;
	*(_QWORD*)(a2 + 1456) = 0i64;
	LODWORD(v29) = *(_DWORD*)(a2 + 8);
	return sub_1400EE810(v4 + 16, &v29);
}
// 1405796BE: variable 'a4' is possibly undefined
// 140579790: variable 'v18' is possibly undefined
// 1405797AD: variable 'v23' is possibly undefined
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C65B78: using guessed type __int64 qword_140C65B78;

