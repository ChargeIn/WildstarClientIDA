//----- (00000001406EF710) ----------------------------------------------------
__int64 __fastcall sub_1406EF710(_QWORD* a1)
{
	__int64 v2; // rdx
	_DWORD* v3; // rcx
	__int64 v5; // rax
	__int64 v6; // rdx
	unsigned int v7; // eax
	int v8; // ecx
	unsigned int v9; // eax
	__int64 v10; // rcx
	BOOL v11; // edx
	BOOL* v12; // rax

	if (!qword_140C65970)
		goto LABEL_11;
	if (!qword_140C65898)
		goto LABEL_11;
	v2 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v2 || *(_DWORD*)(v2 + 592))
		goto LABEL_11;
	if (*(_DWORD*)(qword_140C65970 + 8) != 3)
	{
		v3 = (_DWORD*)a1[2];
		*v3 = 0;
		v3[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	v5 = sub_14067B760(a1);
	v6 = v5;
	if (v5 && (v7 = *(_DWORD*)(**(_QWORD**)(v5 + 48) + 12i64), v7 <= 0x1B) && (v8 = 134250504, _bittest(&v8, v7)))
	{
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		v11 = (int)sub_14077CFC0(v10, v9) >= 0;
	}
	else
	{
	LABEL_11:
		v11 = 0;
	}
	v12 = (BOOL*)a1[2];
	v12[2] = 1;
	*v12 = v11;
	a1[2] += 16i64;
	return 1i64;
}
// 1406EF79E: variable 'v10' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

