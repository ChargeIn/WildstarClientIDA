#include "../winhttp.h"

//----- (000000014051A590) ----------------------------------------------------
__int64 __fastcall sub_14051A590(__int64 a1, _QWORD* a2)
{
	__int64 v3; // rdx
	unsigned __int64 v5; // rcx
	__int64 v6; // r8
	__int64 v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rbp
	__int64 v10; // rax
	__int64 v11; // rsi
	__int64 v12; // rax
	_DWORD* v13; // rdx
	_DWORD* v14; // r8
	int v15; // eax
	BOOL v16; // ecx
	int v17; // eax
	__int64 v18; // rax
	int v19; // eax
	unsigned __int64 v21; // [rsp+30h] [rbp+8h] BYREF

	v3 = qword_140C63650;
	*(_QWORD*)(a1 + 40) = 0i64;
	v5 = *(_QWORD*)(v3 + 768);
	v6 = 0i64;
	if (v5)
	{
		v7 = *(_QWORD*)(v3 + 760);
		v8 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v7 + 8 * v8) + 400i64) != a2)
		{
			v6 = (unsigned int)(v6 + 1);
			v8 = (unsigned int)v6;
			if ((unsigned int)v6 >= v5)
				goto LABEL_5;
		}
		v9 = *(_QWORD*)(v7 + 8 * v6);
	}
	else
	{
	LABEL_5:
		v9 = 0i64;
	}
	v10 = sub_140056AB0(a2, 3u);
	if (v10)
		v11 = *(_QWORD*)(v10 + 8);
	else
		v11 = 0i64;
	if (*(_QWORD*)(v11 + 16) == *(_QWORD*)(qword_140C635F0 + 5792))
		sub_140056570(a2, 3u, "cannot bid on your own order");
	v12 = *(_QWORD*)(v9 + 400);
	v13 = dword_140A12138;
	v14 = dword_140A12138;
	if ((unsigned __int64)(*(_QWORD*)(v12 + 24) + 48i64) < *(_QWORD*)(v12 + 16))
		v14 = (_DWORD*)(*(_QWORD*)(v12 + 24) + 48i64);
	v15 = v14[2];
	v16 = v15 && (v15 != 1 || *v14);
	*(_DWORD*)(a1 + 48) = v16;
	if (!v16)
	{
		if ((unsigned __int64)(a2[3] + 64i64) < a2[2])
			v13 = (_DWORD*)(a2[3] + 64i64);
		v17 = v13[2];
		if (v17 == 3 || v17 == 4 && sub_14005AC80((char*)(*(_QWORD*)v13 + 32i64), &v21))
		{
			v19 = sub_140056D60(a2, 5u);
			*(_QWORD*)(a1 + 24) = 1i64;
			*(_QWORD*)(a1 + 16) = v19;
		}
		else
		{
			v18 = sub_140056AB0(a2, 5u);
			if (*(_DWORD*)(v18 + 8) != 1)
				sub_140056570(a2, 5u, "bid must be in credits");
			*(_QWORD*)(a1 + 16) = *(_QWORD*)v18;
			*(_DWORD*)(a1 + 24) = *(_DWORD*)(v18 + 8);
			*(_DWORD*)(a1 + 28) = *(_DWORD*)(v18 + 12);
		}
	}
	*(_QWORD*)(a1 + 40) = v11;
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63650: using guessed type __int64 qword_140C63650;

