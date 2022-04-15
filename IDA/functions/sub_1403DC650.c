#include "../winhttp.h"

//----- (00000001403DC650) ----------------------------------------------------
__int64 __fastcall sub_1403DC650(__int64 a1, int* a2)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // r8
	unsigned int* v7; // rcx
	unsigned int v8; // r12d
	__int64 v9; // r13
	unsigned __int64 v10; // rdi
	__int64 v11; // r14
	__int64 v12; // r15
	__int64 v13; // rsi
	unsigned __int64 v14; // rcx
	_QWORD* v15; // rax
	unsigned __int64 v16; // rcx
	_QWORD* v17; // rax
	unsigned __int64 v18; // rcx
	_QWORD* v19; // rax
	bool v20; // zf
	__int64 v22; // [rsp+30h] [rbp-38h] BYREF
	__int64 v23; // [rsp+38h] [rbp-30h]
	__int64 v24; // [rsp+40h] [rbp-28h]
	unsigned __int64 v25; // [rsp+48h] [rbp-20h]

	v2 = sub_1403D90D0(a1, *a2);
	v3 = v2;
	if (!v2)
		return 0i64;
	v4 = *(_QWORD*)(v2 + 248);
	if (!v4)
		return 0i64;
	v5 = *(_QWORD*)(v4 + 336);
	if (!v5)
		return 0i64;
	v6 = *(unsigned int*)(v5 + 16);
	if ((_DWORD)v6)
	{
		if (!(*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				0i64,
				v6,
				0i64,
				0i64,
				0))
			return 0i64;
	}
	if (*(_DWORD*)(v3 + 592) || *(_DWORD*)(v3 + 596))
		return 0i64;
	v7 = *(unsigned int**)(*(_QWORD*)(v3 + 248) + 336i64);
	v8 = *v7;
	v9 = qword_140C65918;
	sub_140482A00(
		(__int64)&v22,
		*v7,
		*(_DWORD*)(v3 + 684) != 0,
		5u,
		*(_QWORD*)(qword_140C65918 + 64),
		*(unsigned int*)(qword_140C65918 + 72));
	v10 = v25;
	v11 = v22;
	v12 = v23;
	v13 = v24;
	v14 = 0i64;
	if (v25)
	{
		v15 = (_QWORD*)(v24 + 32);
		do
		{
			if (*((_DWORD*)v15 - 5))
				break;
			if (*v15)
				goto LABEL_24;
			++v14;
			v15 += 6;
		} while (v14 < v25);
	}
	sub_140482A00((__int64)&v22, v8, 2u, 5u, *(_QWORD*)(v9 + 64), *(unsigned int*)(v9 + 72));
	v10 = v25;
	v11 = v22;
	v12 = v23;
	v13 = v24;
	v16 = 0i64;
	if (v25)
	{
		v17 = (_QWORD*)(v24 + 32);
		do
		{
			if (*((_DWORD*)v17 - 5))
				break;
			if (*v17)
				goto LABEL_24;
			++v16;
			v17 += 6;
		} while (v16 < v25);
	}
	sub_140482A00((__int64)&v22, v8, *(_DWORD*)(v3 + 684) != 0, 6u, *(_QWORD*)(v9 + 64), *(unsigned int*)(v9 + 72));
	v10 = v25;
	v11 = v22;
	v12 = v23;
	v13 = v24;
	v18 = 0i64;
	if (v25)
	{
		v19 = (_QWORD*)(v24 + 32);
		do
		{
			if (*((_DWORD*)v19 - 5))
				break;
			if (*v19)
				goto LABEL_24;
			++v18;
			v19 += 6;
		} while (v18 < v25);
	}
	sub_140482A00((__int64)&v22, v8, 2u, 6u, *(_QWORD*)(v9 + 64), *(unsigned int*)(v9 + 72));
	v11 = v22;
	v12 = v23;
	v13 = v24;
	v10 = v25;
LABEL_24:
	if (!*(_QWORD*)(v3 + 5344)
		|| (_DWORD)v11 != *(_DWORD*)(v3 + 5320)
		|| __PAIR64__(v12, HIDWORD(v11)) != *(_QWORD*)(v3 + 5324))
	{
		sub_140195D70(v3 + 5440);
		sub_140195D70(v3 + 5368);
		v20 = *(_QWORD*)(v3 + 1424) == 0i64;
		*(_QWORD*)(v3 + 5320) = v11;
		*(_QWORD*)(v3 + 5328) = v12;
		*(_QWORD*)(v3 + 5336) = v13;
		*(_DWORD*)(v3 + 5316) = 0;
		*(_QWORD*)(v3 + 5344) = v10;
		if (!v20)
		{
			do
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 1424) + 32i64))(*(_QWORD*)(v3 + 1424));
			while (*(_QWORD*)(v3 + 1424));
		}
		sub_14047CAB0(v3);
	}
	return 0i64;
}
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C659A0: using guessed type __int64 qword_140C659A0;

