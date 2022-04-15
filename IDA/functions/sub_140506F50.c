//----- (0000000140506F50) ----------------------------------------------------
__int64 __fastcall sub_140506F50(_QWORD* a1)
{
	__int64 v2; // rbx
	unsigned int v3; // eax
	_DWORD* v4; // rcx
	unsigned int v5; // r14d
	unsigned int v6; // ebp
	__int64* v7; // rax
	__int64 v8; // rax
	unsigned int v9; // esi
	_DWORD* v10; // rax
	unsigned int v11; // eax
	bool v12; // al
	__int64 v13; // rax

	v2 = sub_140506EA0(a1);
	if (v2)
	{
		v3 = sub_140056D60(a1, 2u);
		v4 = (_DWORD*)(a1[3] + 32i64);
		v5 = v3;
		if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
			v6 = 0;
		else
			v6 = sub_140056D60(a1, 3u);
		v7 = (__int64*)sub_140417660((__int64)a1, 4);
		if (v7 && (v8 = *v7) != 0 && *(_DWORD*)(v8 + 1184) && *(_QWORD*)(v8 + 8))
		{
			if (*(_DWORD*)(v8 + 1184))
				v9 = **(_DWORD**)(v8 + 8);
			else
				v9 = MEMORY[0];
		}
		else
		{
			v9 = 0;
		}
		v10 = (_DWORD*)(a1[3] + 64i64);
		if ((unsigned __int64)v10 >= a1[2] || v10 == dword_140A12138 || *(int*)(a1[3] + 72i64) <= 0)
			v11 = 0;
		else
			v11 = sub_140056D60(a1, 5u);
		sub_140505BB0(v2, v5, v6, v9, v11, 0);
		v12 = *(_QWORD*)(v2 + 1312) != 0i64;
		*(_QWORD*)(v2 + 1312) = 0i64;
		if (v12)
		{
			*(_QWORD*)(v2 + 1336) = *(_QWORD*)(v2 + 1328);
			*(_BYTE*)(v2 + 1076) = 0;
			*(_DWORD*)(v2 + 1072) = 0;
		}
		v13 = *(_QWORD*)(v2 + 1312);
		*(_QWORD*)(v2 + 1328) = v13;
		*(_QWORD*)(v2 + 1336) = v13;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 568i64))(v2);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

