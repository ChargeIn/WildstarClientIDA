//----- (0000000140417B50) ----------------------------------------------------
__int64 __fastcall sub_140417B50(_QWORD* a1, unsigned int a2)
{
	__int64* v4; // rax
	__int64 v5; // rax
	_DWORD* v7; // rax

	v4 = (__int64*)sub_140417660((__int64)a1, a2);
	if (v4 && (v5 = *v4) != 0 && *(_DWORD*)(v5 + 1184) && *(_QWORD*)(v5 + 8))
	{
		if (*(_DWORD*)(v5 + 1184))
			return **(unsigned int**)(v5 + 8);
		else
			return MEMORY[0];
	}
	else
	{
		v7 = sub_1400580E0((__int64)a1, a2);
		if (v7 == dword_140A12138 || (int)v7[2] <= 0)
			return 0i64;
		else
			return sub_140056D60(a1, a2);
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

