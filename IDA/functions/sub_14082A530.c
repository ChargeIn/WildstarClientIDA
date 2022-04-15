//----- (000000014082A530) ----------------------------------------------------
__int64 __fastcall sub_14082A530(__int64 a1, __int64 a2, int a3)
{
	_QWORD* v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rax
	__int64 result; // rax
	_QWORD* v9; // rdx
	__int64 v10; // rdx
	__int64 v11; // [rsp+28h] [rbp-10h]

	if (!a2)
		return 31i64;
	LODWORD(v11) = a3;
	if (!*(_QWORD*)(a1 + 40))
	{
		if (*(_DWORD*)(a1 + 56) >= *(_DWORD*)(a1 + 52))
			return 2i64;
		v5 = (_QWORD*)sub_1408819F0(dword_140C10F20, 24i64);
		if (!v5)
			return 2i64;
		*v5 = *(_QWORD*)(a1 + 40);
		*(_QWORD*)(a1 + 40) = v5;
	}
	v6 = *(_QWORD**)(a1 + 32);
	v7 = *(_QWORD*)(a1 + 40);
	if (v6)
		*v6 = v7;
	else
		*(_QWORD*)(a1 + 24) = v7;
	v9 = *(_QWORD**)(a1 + 40);
	result = 1i64;
	*(_QWORD*)(a1 + 32) = v9;
	*(_QWORD*)(a1 + 40) = *v9;
	*v9 = 0i64;
	v10 = *(_QWORD*)(a1 + 32);
	++* (_DWORD*)(a1 + 56);
	*(_QWORD*)(v10 + 8) = a2;
	*(_QWORD*)(v10 + 16) = v11;
	return result;
}
// 14082A5D1: variable 'v11' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;

