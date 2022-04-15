//----- (00000001406CFBE0) ----------------------------------------------------
__int64 __fastcall sub_1406CFBE0(_QWORD* a1)
{
	__int64 v2; // rbx
	_DWORD* v3; // rax
	int v4; // eax

	v2 = sub_1406CFB40(a1);
	if (v2)
	{
		v3 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v4 = 1;
		else
			v4 = sub_140056D60(a1, 2u);
		*(_QWORD*)(v2 + 2216) = 15i64;
		*(_DWORD*)(v2 + 2252) = 1;
		*(_QWORD*)(v2 + 2208) = 0i64;
		*(_QWORD*)(v2 + 2232) = 0i64;
		*(_QWORD*)(v2 + 2240) = 0i64;
		*(_DWORD*)(v2 + 2248) = 0;
		*(_DWORD*)(v2 + 2260) = 0;
		if (v4)
			sub_1400D42F0(v2, 0, 0, 4.0);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

