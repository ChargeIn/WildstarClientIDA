//----- (0000000140893F60) ----------------------------------------------------
__int64 __fastcall sub_140893F60(__int64 a1, int a2)
{
	__int64 v2; // r14
	_DWORD* v4; // rax
	_DWORD* i; // rcx
	__int64* v6; // rbx
	_DWORD* v7; // rax
	__int64 v8; // rax
	__int64 v9; // rdi
	__int64 result; // rax

	v2 = a1 + 168;
	v4 = *(_DWORD**)(a1 + 168);
	for (i = *(_DWORD**)(a1 + 176); v4 != i; v4 += 4)
	{
		if (*v4 == a2)
			break;
	}
	if (v4 == i)
	{
		v6 = 0i64;
	}
	else
	{
		v6 = (__int64*)(v4 + 2);
		if (v4 != (_DWORD*)-8i64)
			goto LABEL_11;
	}
	v7 = (_DWORD*)sub_1408458B0(v2);
	if (v7)
	{
		*v7 = a2;
		v6 = (__int64*)(v7 + 2);
	}
	if (!v6)
		return 2i64;
LABEL_11:
	v8 = sub_1408819F0(dword_140C10F20, 48i64);
	v9 = v8;
	if (v8)
	{
		sub_1408562A0(v8);
		*(_DWORD*)(v9 + 40) = 0;
	}
	else
	{
		v9 = 0i64;
	}
	*v6 = v9;
	if (v9)
		sub_1408564B0(v9, a2);
	else
		sub_140894F00(v2, a2);
	result = 1i64;
	if (!*v6)
		return 2i64;
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

