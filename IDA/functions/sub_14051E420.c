//----- (000000014051E420) ----------------------------------------------------
__int64 __fastcall sub_14051E420(__int64 a1, _QWORD* a2)
{
	__int64 v2; // r9
	__int64 v3; // rdi
	unsigned __int64 v5; // rdx
	unsigned int v7; // r8d
	__int64 v8; // r9
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // r14
	_DWORD* v12; // rax
	__int64** v13; // rax
	__int64** v14; // rsi
	__int64* v15; // rdx
	int v16; // eax

	v2 = qword_140C63650;
	v3 = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	v5 = *(_QWORD*)(v2 + 768);
	v7 = 0;
	if (v5)
	{
		v8 = *(_QWORD*)(v2 + 760);
		v9 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v8 + 8 * v9) + 400i64) != a2)
		{
			v9 = ++v7;
			if (v7 >= v5)
				goto LABEL_5;
		}
		v10 = *(_QWORD*)(v8 + 8i64 * v7);
	}
	else
	{
	LABEL_5:
		v10 = 0i64;
	}
	v11 = v10 + 384;
	v12 = (_DWORD*)(a2[3] + 32i64);
	if ((unsigned __int64)v12 < a2[2] && v12 != dword_140A12138 && !*(_DWORD*)(a2[3] + 40i64)
		|| (v13 = (__int64**)sub_140056AB0(a2, 3u), (v14 = v13) == 0i64)
		|| (v15 = *v13) == 0i64
		|| !*v15
		|| !*((_DWORD*)v15 + 296)
		|| !v15[1])
	{
		sub_140056570(a2, 3u, "must be a valid item");
	}
	*(_DWORD*)(a1 + 24) = sub_1400F26A0(v11, 4) - 1;
	v16 = sub_1400F26A0(v11, 5);
	*(_DWORD*)(a1 + 28) = v16;
	if ((unsigned __int8)(sub_14040F320(v16) - 1) > 5u)
		*(_DWORD*)(a1 + 28) = 0;
	if (*v14)
		v3 = **v14;
	*(_QWORD*)(a1 + 16) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 48i64))(v3);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

