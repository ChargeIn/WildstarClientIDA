//----- (0000000140687610) ----------------------------------------------------
__int64 __fastcall sub_140687610(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // rcx
	unsigned int v5; // edx
	__int64 v6; // rcx
	bool v7; // zf
	_DWORD* v8; // r11
	__int64 result; // rax
	_DWORD* v10; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(unsigned int**)(v3 + 8)) != 0i64
		&& (unsigned int)sub_14048D5A0((__int64)v4, *v4))
	{
		v7 = !sub_14048F880(v6, v5);
		v8[2] = 1;
		result = 1i64;
		*v8 = !v7;
		a1[2] += 16i64;
	}
	else
	{
		v10 = (_DWORD*)a1[2];
		*v10 = 0;
		v10[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 14068765E: variable 'v6' is possibly undefined
// 14068765E: variable 'v5' is possibly undefined
// 140687667: variable 'v8' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

