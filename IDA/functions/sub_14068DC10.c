#include "../winhttp.h"

//----- (000000014068DC10) ----------------------------------------------------
__int64 __fastcall sub_14068DC10(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rax
	int* v11; // rax
	int v13; // [rsp+38h] [rbp+10h] BYREF

	if (!*(_QWORD*)(qword_140C65898 + 120))
		goto LABEL_15;
	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		goto LABEL_15;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		goto LABEL_15;
	v4 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
		qword_140C65980,
		**(unsigned int**)(*(_QWORD*)(v3 + 8) + 8i64),
		0i64);
	v5 = v4;
	if (!v4)
		goto LABEL_15;
	if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 40i64))(v4)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 104i64))(v5)
		&& (v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 40i64))(v5),
			(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 104i64))(v6))
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v7 = sub_140056AB0(a1, 1u)) != 0
		&& (v9 = *(_QWORD*)(v7 + 8)) != 0
		&& (v10 = *(_QWORD*)(v9 + 8)) != 0
		&& (v11 = (int*)sub_1403BA420(v8, 3, **(_DWORD**)(v10 + 8))) != 0i64
		&& (v13 = *v11) != 0)
	{
		sub_1403D3470(a1, &v13);
		return 1i64;
	}
	else
	{
	LABEL_15:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14068DCFE: variable 'v8' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

