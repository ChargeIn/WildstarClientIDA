//----- (00000001406B6F30) ----------------------------------------------------
__int64 __fastcall sub_1406B6F30(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rax
	__int64 v5; // rsi
	_DWORD* v6; // rax
	unsigned int v7; // r9d
	BOOL v8; // eax
	BOOL* v9; // rcx
	_DWORD* v11; // rax
	_DWORD* v12; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
	{
		v4 = sub_140056AB0(a1, 2u);
		if (v4
			&& (v5 = *(_QWORD*)(v4 + 8)) != 0
			&& (v6 = (_DWORD*)(a1[3] + 32i64), (unsigned __int64)v6 < a1[2])
			&& v6 != dword_140A12138
			&& *(int*)(a1[3] + 40i64) > 0
			&& (v7 = sub_140056D60(a1, 3u), v7 < 4))
		{
			v8 = sub_1403A9770(qword_140C65898, *(_DWORD*)(v3 + 8), *(_DWORD*)(v3 + 12), v7, **(_DWORD**)(v5 + 8));
			v9 = (BOOL*)a1[2];
			v9[2] = 1;
			*v9 = v8;
		}
		else
		{
			v11 = (_DWORD*)a1[2];
			*v11 = 0;
			v11[2] = 1;
		}
	}
	else
	{
		v12 = (_DWORD*)a1[2];
		*v12 = 0;
		v12[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

