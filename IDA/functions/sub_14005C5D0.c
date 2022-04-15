//----- (000000014005C5D0) ----------------------------------------------------
_QWORD* __fastcall sub_14005C5D0(__int64 a1, __int64 a2, int a3)
{
	_QWORD* result; // rax
	int v5; // r10d
	__int64 v6; // r11
	double v7; // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+28h] [rbp-10h]

	result = sub_14005C3C0(a2, a3);
	if (result == (_QWORD*)dword_140A12138)
	{
		v8 = 3;
		v7 = (double)v5;
		return (_QWORD*)sub_14005C260(a1, v6, &v7);
	}
	return result;
}
// 14005C612: variable 'v5' is possibly undefined
// 14005C618: variable 'v6' is possibly undefined
// 14005C260: using guessed type __int64 __fastcall sub_14005C260(_QWORD, _QWORD, _QWORD);
// 140A12138: using guessed type _DWORD dword_140A12138[4];

