//----- (0000000140131630) ----------------------------------------------------
__int64 __fastcall sub_140131630(_QWORD* a1, unsigned int a2)
{
	__int64 result; // rax
	_DWORD* v5; // rax
	__int64 v6; // rax
	const char* v7; // r9
	const char* v8; // rax

	result = sub_1400D66A0(a1, a2);
	if (!result || (*(_BYTE*)(result + 432) & 2) == 0)
	{
		v5 = sub_1400580E0((__int64)a1, a2);
		if (v5 == dword_140A12138 || (v6 = (int)v5[2], (_DWORD)v6 == -1))
			v7 = aNoValue;
		else
			v7 = off_140A123B0[v6];
		v8 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", "Button", v7);
		sub_140056570(a1, a2, v8);
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

