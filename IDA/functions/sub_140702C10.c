//----- (0000000140702C10) ----------------------------------------------------
__int64 __fastcall sub_140702C10(__int64 a1)
{
	int v2; // eax
	_DWORD* v3; // r11
	bool v4; // zf
	__int64 result; // rax

	v2 = sub_14055A260((_DWORD*)(qword_140C65898 + 29488));
	v3[2] = 1;
	v4 = v2 == 0;
	result = 1i64;
	*v3 = !v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140702C32: variable 'v3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

