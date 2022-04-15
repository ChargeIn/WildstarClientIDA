//----- (000000014086F350) ----------------------------------------------------
__int64 __fastcall sub_14086F350(__int64 a1, int a2, __int16 a3, __int16 a4)
{
	__int64 v4; // r14
	_DWORD* v7; // rax
	_DWORD* v8; // r10
	_DWORD* i; // rcx
	__int64 result; // rax
	_DWORD* v12; // rbx
	_DWORD* v13; // rax
	__int64 v14; // rax
	__int64 v15; // rsi

	v4 = a1 + 168;
	v7 = *(_DWORD**)(a1 + 168);
	v8 = *(_DWORD**)(a1 + 176);
	for (i = v7; i != v8; i += 4)
	{
		if (*i == a2)
			break;
	}
	if (i != v8 && i != (_DWORD*)-8i64)
		return 1i64;
	for (; v7 != v8; v7 += 4)
	{
		if (*v7 == a2)
			break;
	}
	if (v7 == v8)
	{
		v12 = 0i64;
	}
	else
	{
		v12 = v7 + 2;
		if (v7 != (_DWORD*)-8i64)
			goto LABEL_17;
	}
	v13 = (_DWORD*)sub_1408458B0(v4);
	if (v13)
	{
		*v13 = a2;
		v12 = v13 + 2;
	}
	if (!v12)
		return 2i64;
LABEL_17:
	v14 = sub_1408819F0(dword_140C10F20, 48i64);
	v15 = v14;
	if (v14)
		sub_1408562A0(v14);
	else
		v15 = 0i64;
	*(_QWORD*)v12 = v15;
	if (v15)
	{
		sub_1408564B0(v15, a2);
		*(_WORD*)(*(_QWORD*)v12 + 40i64) = a3;
		*(_WORD*)(*(_QWORD*)v12 + 42i64) = a4;
		*(_DWORD*)(*(_QWORD*)v12 + 44i64) = 0;
	}
	else
	{
		sub_140894F00(v4, a2);
	}
	result = 1i64;
	if (!*(_QWORD*)v12)
		return 2i64;
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

