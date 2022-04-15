//----- (00000001406CFF10) ----------------------------------------------------
__int64 __fastcall sub_1406CFF10(_QWORD* a1)
{
	__int64 v2; // rbx
	int v3; // esi
	int v4; // eax
	_DWORD* v5; // rcx
	__int64 v6; // rbp
	int v7; // eax
	char v8; // dl

	v2 = sub_1406CFB40(a1);
	if (v2)
	{
		v3 = sub_140056D60(a1, 2u);
		v4 = sub_140056D60(a1, 3u);
		v5 = (_DWORD*)(a1[3] + 48i64);
		v6 = v4;
		if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 56i64) <= 0)
			v7 = 0;
		else
			v7 = sub_140056D60(a1, 4u);
		if ((v3 < 15 || v3 == 15 && v7) && v6)
		{
			*(_DWORD*)(v2 + 2216) = v3;
			*(_DWORD*)(v2 + 2220) = v7;
			*(_QWORD*)(v2 + 2240) = v6;
			v8 = 1;
		}
		else
		{
			*(_QWORD*)(v2 + 2216) = 15i64;
			*(_QWORD*)(v2 + 2240) = 0i64;
			v8 = 0;
		}
		*(_QWORD*)(v2 + 2208) = 0i64;
		*(_QWORD*)(v2 + 2232) = 0i64;
		*(_DWORD*)(v2 + 2248) = 0;
		*(_DWORD*)(v2 + 2260) = 0;
		*(_DWORD*)(v2 + 2252) = 1;
		sub_1400D42F0(v2, v8, 0, 4.0);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

