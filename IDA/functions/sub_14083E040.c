//----- (000000014083E040) ----------------------------------------------------
_QWORD* __fastcall sub_14083E040(__int64 a1, _QWORD* a2)
{
	_QWORD* v4; // rax
	_QWORD* v5; // rcx
	__int64 v6; // rax
	_QWORD* result; // rax
	_QWORD* v8; // rcx
	__int64 v9; // rax

	if (!*(_QWORD*)(a1 + 16))
	{
		if (*(_DWORD*)(a1 + 32) >= *(_DWORD*)(a1 + 28))
			return 0i64;
		v4 = (_QWORD*)sub_1408819F0(dword_140C10F20, 64i64);
		if (!v4)
			return 0i64;
		*v4 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)(a1 + 16) = v4;
	}
	v5 = *(_QWORD**)(a1 + 8);
	v6 = *(_QWORD*)(a1 + 16);
	if (v5)
		*v5 = v6;
	else
		*(_QWORD*)a1 = v6;
	v8 = *(_QWORD**)(a1 + 16);
	*(_QWORD*)(a1 + 8) = v8;
	*(_QWORD*)(a1 + 16) = *v8;
	*v8 = 0i64;
	++* (_DWORD*)(a1 + 32);
	v9 = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(v9 + 8) = *a2;
	result = (_QWORD*)(v9 + 8);
	result[1] = a2[1];
	result[2] = a2[2];
	result[3] = a2[3];
	result[4] = a2[4];
	result[5] = a2[5];
	result[6] = a2[6];
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

