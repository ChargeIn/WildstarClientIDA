//----- (00000001406F9C40) ----------------------------------------------------
__int64 __fastcall sub_1406F9C40(__int64 a1)
{
	int v1; // r10d
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rdx
	__int64 v7; // rdx
	_DWORD* v8; // r8
	_DWORD* v9; // rcx
	int v10; // eax
	BOOL v11; // eax
	BOOL v12; // edi
	_DWORD* v13; // rcx
	int v14; // eax
	BOOL v15; // eax
	BOOL v16; // ebx
	_DWORD* v17; // rcx
	int v18; // eax
	BOOL v19; // eax
	BOOL v20; // r11d
	int v21; // eax
	BOOL v22; // eax

	v1 = 0;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = *(_QWORD*)(v6 + 400);
	v8 = dword_140A12138;
	v9 = dword_140A12138;
	if (*(_QWORD*)(v7 + 24) < *(_QWORD*)(v7 + 16))
		v9 = *(_DWORD**)(v7 + 24);
	v10 = v9[2];
	v11 = v10 && (v10 != 1 || *v9);
	v12 = v11;
	v13 = dword_140A12138;
	if ((unsigned __int64)(*(_QWORD*)(v7 + 24) + 16i64) < *(_QWORD*)(v7 + 16))
		v13 = (_DWORD*)(*(_QWORD*)(v7 + 24) + 16i64);
	v14 = v13[2];
	v15 = v14 && (v14 != 1 || *v13);
	v16 = v15;
	v17 = dword_140A12138;
	if ((unsigned __int64)(*(_QWORD*)(v7 + 24) + 32i64) < *(_QWORD*)(v7 + 16))
		v17 = (_DWORD*)(*(_QWORD*)(v7 + 24) + 32i64);
	v18 = v17[2];
	v19 = v18 && (v18 != 1 || *v17);
	v20 = v19;
	if ((unsigned __int64)(*(_QWORD*)(v7 + 24) + 48i64) < *(_QWORD*)(v7 + 16))
		v8 = (_DWORD*)(*(_QWORD*)(v7 + 24) + 48i64);
	v21 = v8[2];
	v22 = v21 && (v21 != 1 || *v8);
	LOBYTE(v1) = !v12;
	sub_1403CC480(v22, v1, !v16, !v20, v22);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

