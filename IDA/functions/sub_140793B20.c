//----- (0000000140793B20) ----------------------------------------------------
__int64 __fastcall sub_140793B20(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 v4; // rcx
	int v6; // edx
	int v7; // edx
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	unsigned __int64 v10; // rdx
	_DWORD* v11; // rdi
	_DWORD* v12; // rcx
	unsigned __int64 v13; // rdx
	_DWORD* v14; // rcx

	v4 = *(_QWORD*)(a1 + 16);
	if (((v4 - *(_QWORD*)(a1 + 24)) >> 4) + 2 > 8000)
		sub_140056830((_QWORD*)a1, (unsigned __int64*)"stack overflow (%s)", aTooManyNestedF);
	if (*(_QWORD*)(a1 + 56) - v4 <= 32)
	{
		v6 = *(_DWORD*)(a1 + 88);
		if (v6 < 2)
			v7 = v6 + 2;
		else
			v7 = 2 * v6;
		sub_140061210(a1, v7);
	}
	v8 = *(_QWORD*)(a1 + 40);
	v9 = *(_QWORD*)(a1 + 16) + 32i64;
	if (*(_QWORD*)(v8 + 16) < v9)
		*(_QWORD*)(v8 + 16) = v9;
	v10 = *(_QWORD*)(a1 + 16);
	v11 = dword_140A12138;
	v12 = dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < v10)
		v12 = *(_DWORD**)(a1 + 24);
	*(_QWORD*)v10 = *(_QWORD*)v12;
	*(_DWORD*)(v10 + 8) = v12[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_140061D30(a1, (char*)(*(_QWORD*)(a1 + 16) - 16i64), 1);
	v13 = *(_QWORD*)(a1 + 16);
	v14 = (_DWORD*)(v13 - 16);
	if ((_DWORD*)(v13 - 16) == dword_140A12138)
		goto LABEL_20;
	if (!v14[2])
	{
		*a3 = 0i64;
		return 0i64;
	}
	if (v14 == dword_140A12138 || (unsigned int)(v14[2] - 3) > 1)
		LABEL_20:
	sub_140056830((_QWORD*)a1, (unsigned __int64*)aReaderFunction);
	if (*(_QWORD*)(a1 + 24) + 32i64 < v13)
		v11 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 32i64);
	*(_QWORD*)v11 = *(_QWORD*)v14;
	v11[2] = v14[2];
	*(_QWORD*)(a1 + 16) -= 16i64;
	return sub_140058540(a1, 3, a3);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

