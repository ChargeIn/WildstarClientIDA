//----- (0000000140835430) ----------------------------------------------------
_QWORD* __fastcall sub_140835430(__int64 a1, __int64 a2)
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
		v4 = (_QWORD*)sub_1408819F0(dword_140C10F20, 16i64);
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
	v9 = *(_QWORD*)(a1 + 8);
	++* (_DWORD*)(a1 + 32);
	result = (_QWORD*)(v9 + 8);
	*result = a2;
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

