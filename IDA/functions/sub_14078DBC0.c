//----- (000000014078DBC0) ----------------------------------------------------
__int64 __fastcall sub_14078DBC0(_QWORD* a1, unsigned int a2, int* a3)
{
	int v6; // edi
	_DWORD* v7; // rax
	int v8; // ebx

	v6 = sub_140056D60(a1, a2);
	v7 = sub_1400580E0((__int64)a1, a2 + 1);
	if (v7 == dword_140A12138 || (int)v7[2] <= 0)
		v8 = 1;
	else
		v8 = sub_140056D60(a1, a2 + 1);
	if (v6 < 0)
		sub_140056570(a1, a2, aFieldCannotBeN);
	if (v8 <= 0)
		sub_140056570(a1, a2 + 1, aWidthMustBePos);
	if (v8 + v6 > 32)
		sub_140056830(a1, (unsigned __int64*)aTryingToAccess);
	*a3 = v8;
	return (unsigned int)v6;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

