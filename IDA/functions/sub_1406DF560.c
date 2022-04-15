//----- (00000001406DF560) ----------------------------------------------------
__int64 __fastcall sub_1406DF560(_QWORD* a1)
{
	__int64 v2; // rbp
	unsigned int v3; // eax
	_DWORD* v4; // rcx
	unsigned int v5; // edi
	unsigned int v6; // r15d
	unsigned int v7; // r14d
	__int64* v8; // rax
	__int64 v9; // rax
	unsigned int v10; // esi
	_DWORD* v11; // rax

	v2 = sub_1406DF190(a1);
	if ((*(_BYTE*)(v2 + 28) & 1) != 0)
	{
		v3 = sub_140056D60(a1, 2u);
		v4 = (_DWORD*)(a1[3] + 32i64);
		v5 = 0;
		v6 = v3;
		if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
			v7 = 0;
		else
			v7 = sub_140056D60(a1, 3u);
		v8 = (__int64*)sub_140417660((__int64)a1, 4);
		if (v8 && (v9 = *v8) != 0 && *(_DWORD*)(v9 + 1184) && *(_QWORD*)(v9 + 8))
		{
			if (*(_DWORD*)(v9 + 1184))
				v10 = **(_DWORD**)(v9 + 8);
			else
				v10 = MEMORY[0];
		}
		else
		{
			v10 = 0;
		}
		v11 = (_DWORD*)(a1[3] + 64i64);
		if ((unsigned __int64)v11 < a1[2] && v11 != dword_140A12138 && *(int*)(a1[3] + 72i64) > 0)
			v5 = sub_140056D60(a1, 5u);
		sub_1406DE010(v2, v6, v7, v10, v5);
		sub_1406DE650(v2, 0i64);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

