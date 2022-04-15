//----- (000000014051EBD0) ----------------------------------------------------
__int64 __fastcall sub_14051EBD0(__int64 a1, _QWORD* a2)
{
	__int64 v2; // r9
	__int64 v3; // rbx
	unsigned __int64 v5; // rdx
	unsigned int v7; // r8d
	__int64 v8; // r9
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // r15
	_DWORD* v12; // rax
	_DWORD* v13; // rsi
	__int64** v14; // rax
	__int64** v15; // r14
	__int64* v16; // rcx
	int v17; // eax
	_DWORD* v18; // r8
	int v19; // edx
	__int64 v20; // rax
	int v21; // eax
	BOOL v22; // ecx
	__int64 v23; // rax
	int v24; // eax

	v2 = qword_140C63650;
	v3 = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	v5 = *(_QWORD*)(v2 + 768);
	v7 = 0;
	if (v5)
	{
		v8 = *(_QWORD*)(v2 + 760);
		v9 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v8 + 8 * v9) + 400i64) != a2)
		{
			v9 = ++v7;
			if (v7 >= v5)
				goto LABEL_5;
		}
		v10 = *(_QWORD*)(v8 + 8i64 * v7);
	}
	else
	{
	LABEL_5:
		v10 = 0i64;
	}
	v11 = v10 + 384;
	v12 = (_DWORD*)(a2[3] + 32i64);
	v13 = dword_140A12138;
	if ((unsigned __int64)v12 < a2[2] && v12 != dword_140A12138 && !*(_DWORD*)(a2[3] + 40i64)
		|| (v14 = (__int64**)sub_140056AB0(a2, 3u), (v15 = v14) == 0i64)
		|| (v16 = *v14) == 0i64
		|| !*v16
		|| !*((_DWORD*)v16 + 296)
		|| !v16[1])
	{
		sub_140056570(a2, 3u, "must be a valid item");
	}
	v17 = sub_1400F26A0(v11, 4);
	v18 = dword_140A12138;
	v19 = 1;
	*(_DWORD*)(a1 + 24) = v17 - 1;
	v20 = *(_QWORD*)(v11 + 16);
	if ((unsigned __int64)(*(_QWORD*)(v20 + 24) + 64i64) < *(_QWORD*)(v20 + 16))
		v18 = (_DWORD*)(*(_QWORD*)(v20 + 24) + 64i64);
	v21 = v18[2];
	v22 = v21 && (v21 != 1 || *v18);
	*(_DWORD*)(a1 + 28) = v22;
	v23 = *(_QWORD*)(v11 + 16);
	if ((unsigned __int64)(*(_QWORD*)(v23 + 24) + 80i64) < *(_QWORD*)(v23 + 16))
		v13 = (_DWORD*)(*(_QWORD*)(v23 + 24) + 80i64);
	v24 = v13[2];
	if (!v24 || v24 == 1 && !*v13)
		v19 = 0;
	*(_DWORD*)(a1 + 32) = v19 != 0;
	if (*v15)
		v3 = **v15;
	*(_QWORD*)(a1 + 16) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 48i64))(v3);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

