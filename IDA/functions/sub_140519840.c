//----- (0000000140519840) ----------------------------------------------------
__int64 __fastcall sub_140519840(__int64 a1, _QWORD* a2)
{
	__int64 v2; // r9
	int v3; // ebx
	unsigned __int64 v5; // rdx
	unsigned int v7; // r8d
	__int64 v8; // r9
	__int64 v9; // rax
	__int64 v10; // r15
	__int64 v11; // rax
	_DWORD* v12; // r14
	int v13; // ebp
	_DWORD* v14; // rdx
	int v15; // eax
	BOOL v16; // ecx
	__int64 v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	__int64 v20; // rax
	int v21; // eax

	v2 = qword_140C63650;
	v3 = 0;
	*(_QWORD*)(a1 + 24) = 0i64;
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
	v11 = *(_QWORD*)(v10 + 400);
	v12 = dword_140A12138;
	v13 = 1;
	v14 = dword_140A12138;
	if ((unsigned __int64)(*(_QWORD*)(v11 + 24) + 32i64) < *(_QWORD*)(v11 + 16))
		v14 = (_DWORD*)(*(_QWORD*)(v11 + 24) + 32i64);
	v15 = v14[2];
	v16 = v15 && (v15 != 1 || *v14);
	*(_DWORD*)(a1 + 16) = v16;
	v17 = sub_140056AB0(a2, 4u);
	if (v17)
	{
		if (*(_DWORD*)(v17 + 8) != 1)
			sub_140056570(a2, 4u, "must be in credits");
		if (*(__int64*)v17 < 1)
			sub_140056570(a2, 4u, "must be greater than zero");
		v18 = *(_QWORD*)(a1 + 24);
		if (*(_DWORD*)(a1 + 16))
		{
			v19 = ((unsigned __int64)(5 * v18) * (unsigned __int128)0x47AE147AE147AE15ui64) >> 64;
			if (v18 + ((v19 + ((unsigned __int64)(5 * v18 - v19) >> 1)) >> 6) > *(_QWORD*)(qword_140C65898 + 5624))
				sub_140056570(a2, 4u, "not enough credits");
		}
		*(_QWORD*)(a1 + 24) = *(_QWORD*)v17;
		*(_DWORD*)(a1 + 32) = *(_DWORD*)(v17 + 8);
		*(_DWORD*)(a1 + 36) = *(_DWORD*)(v17 + 12);
		v20 = *(_QWORD*)(v10 + 400);
		if ((unsigned __int64)(*(_QWORD*)(v20 + 24) + 64i64) < *(_QWORD*)(v20 + 16))
			v12 = (_DWORD*)(*(_QWORD*)(v20 + 24) + 64i64);
		v21 = v12[2];
		if (!v21 || v21 == 1 && !*v12)
			v13 = 0;
		LOBYTE(v3) = v13 != 0;
		*(_DWORD*)(a1 + 20) = v3;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

