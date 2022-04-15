//----- (0000000140894030) ----------------------------------------------------
__int64 __fastcall sub_140894030(__int64 a1, int a2, int a3, __int64 a4)
{
	_DWORD* v4; // rax
	_DWORD* v5; // r11
	_DWORD* i; // r10
	__int64 result; // rax
	_DWORD* v12; // rbx
	_DWORD* v13; // rax
	__int64 v14; // rax
	__int64 v15; // rsi
	__int128 v16; // xmm0
	__int128 v17; // [rsp+20h] [rbp-38h] BYREF
	int v18; // [rsp+30h] [rbp-28h]

	v4 = *(_DWORD**)(a1 + 168);
	v5 = *(_DWORD**)(a1 + 176);
	for (i = v4; i != v5; i += 4)
	{
		if (*i == a2)
			break;
	}
	if (i != v5 && i != (_DWORD*)-8i64)
		return 1i64;
	for (; v4 != v5; v4 += 4)
	{
		if (*v4 == a2)
			break;
	}
	if (v4 == v5)
	{
		v12 = 0i64;
	}
	else
	{
		v12 = v4 + 2;
		if (v4 != (_DWORD*)-8i64)
			goto LABEL_17;
	}
	v13 = (_DWORD*)sub_1408458B0(a1 + 168);
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
	{
		sub_1408562A0(v14);
		*(_DWORD*)(v15 + 40) = 0;
	}
	else
	{
		v15 = 0i64;
	}
	*(_QWORD*)v12 = v15;
	if (v15)
	{
		v16 = *(_OWORD*)a4;
		v18 = *(_DWORD*)(a4 + 16);
		v17 = v16;
		sub_1408566F0(v15, a3, &v17);
		*(_DWORD*)(*(_QWORD*)v12 + 40i64) = *(_DWORD*)(a1 + 248);
	}
	else
	{
		sub_140894F00(a1 + 168, a2);
	}
	result = 1i64;
	if (!*(_QWORD*)v12)
		return 2i64;
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

