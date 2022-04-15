//----- (0000000140058420) ----------------------------------------------------
_BOOL8 __fastcall sub_140058420(__int64 a1, int a2)
{
	int v3; // r10d
	_DWORD* v4; // rax
	_DWORD* v5; // r11

	sub_1400580E0(a1, a2);
	v4 = sub_1400580E0(a1, v3);
	return v5 != dword_140A12138 && v4 != dword_140A12138 && v5[2] == v4[2] && (unsigned int)sub_14005F0D0(a1, v5, v4);
}
// 14005843A: variable 'v3' is possibly undefined
// 140058449: variable 'v5' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

