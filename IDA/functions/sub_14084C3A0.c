//----- (000000014084C3A0) ----------------------------------------------------
__int64 __fastcall sub_14084C3A0(__int64* a1, __int64 a2)
{
	__int64 v2; // rbx
	int v3; // ebp
	char v5; // di
	__int64 v6; // rax
	__int64 v7; // rax
	__int64* v9; // rcx
	_QWORD* v10; // rax
	_QWORD* v11; // rcx
	__int64 v12; // rax
	_QWORD* v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // [rsp+40h] [rbp+8h]

	v2 = *a1;
	v3 = *(_DWORD*)(a2 + 24);
	v5 = (*(_BYTE*)(a2 + 91) & 2) != 0;
	LODWORD(v15) = v3;
	BYTE4(v15) = v5;
	if (!*a1)
	{
		v6 = sub_1408819F0(dword_140C10F20, 48i64);
		*a1 = v6;
		if (!v6)
			return 2i64;
		*(_QWORD*)(v6 + 24) = 0i64;
		*(_DWORD*)(v6 + 32) = 0;
		v7 = *a1;
		if (!*a1)
			return 2i64;
		*(_DWORD*)(v7 + 32) = 0;
		*(_DWORD*)(v7 + 28) = -1;
		*(_QWORD*)(v7 + 16) = 0i64;
		*(_QWORD*)(v7 + 40) = 0i64;
		*(_QWORD*)v7 = 0i64;
		*(_QWORD*)(v7 + 8) = 0i64;
		v2 = *a1;
		if (!*a1)
			return 2i64;
	}
	v9 = *(__int64**)v2;
	if (!*(_QWORD*)v2)
		goto LABEL_12;
	while (v3 != *((_DWORD*)v9 + 2) || v5 != *((_BYTE*)v9 + 12))
	{
		v9 = (__int64*)*v9;
		if (!v9)
			goto LABEL_12;
	}
	if (v9 == (__int64*)-8i64)
	{
	LABEL_12:
		if (!*(_QWORD*)(v2 + 16))
		{
			if (*(_DWORD*)(v2 + 32) >= *(_DWORD*)(v2 + 28))
				return 2i64;
			v10 = (_QWORD*)sub_1408819F0(dword_140C10F20, 16i64);
			if (!v10)
				return 2i64;
			*v10 = *(_QWORD*)(v2 + 16);
			*(_QWORD*)(v2 + 16) = v10;
		}
		v11 = *(_QWORD**)(v2 + 8);
		v12 = *(_QWORD*)(v2 + 16);
		if (v11)
			*v11 = v12;
		else
			*(_QWORD*)v2 = v12;
		v13 = *(_QWORD**)(v2 + 16);
		*(_QWORD*)(v2 + 8) = v13;
		*(_QWORD*)(v2 + 16) = *v13;
		*v13 = 0i64;
		v14 = *(_QWORD*)(v2 + 8);
		++* (_DWORD*)(v2 + 32);
		*(_QWORD*)(v14 + 8) = v15;
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

