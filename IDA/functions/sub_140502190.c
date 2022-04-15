//----- (0000000140502190) ----------------------------------------------------
__int64 __fastcall sub_140502190(_QWORD* a1)
{
	__int64 v2; // rbx
	_DWORD* v3; // rax
	__int64* v4; // rax
	__int64 v5; // rax
	int v6; // eax

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v3 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64))
			v4 = (__int64*)sub_140056AB0(a1, 2u);
		else
			v4 = 0i64;
		*(_QWORD*)(v2 + 8) = 15i64;
		if (v4 && (v5 = *v4) != 0 && *(_DWORD*)(v5 + 1184) && *(_QWORD*)(v5 + 8))
		{
			if (*(_DWORD*)(v5 + 1184))
				v6 = **(_DWORD**)(v5 + 8);
			else
				v6 = MEMORY[0];
		}
		else
		{
			v6 = 0;
		}
		*(_DWORD*)(v2 + 16) = v6;
		*(_DWORD*)(v2 + 20) = 0;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

