#include "../winhttp.h"

//----- (00000001400FD3D0) ----------------------------------------------------
__int64 __fastcall sub_1400FD3D0(__int64 a1, unsigned int a2, unsigned int a3, _DWORD* a4)
{
	int v4; // r10d
	int v5; // eax
	unsigned int(__fastcall * v7)(_QWORD, _QWORD, __int64*, __int64); // rax
	__int64 v9; // [rsp+30h] [rbp+8h] BYREF

	v9 = a1;
	v4 = dword_140C3CB80;
	v5 = dword_140C3CB80;
	if (*(_DWORD*)qword_140C63750 < dword_140C3CB80)
		v5 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&off_140C3CB70 + v5 + 32) || !*(_QWORD*)(qword_140C63658 + 32) || !*(_DWORD*)(qword_140C63658 + 44))
		return 2147500037i64;
	if (*(_DWORD*)qword_140C63750 < dword_140C3CB80)
		v4 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&off_140C3CB70 + v4 + 32))
		return 2147500037i64;
	v7 = *(unsigned int(__fastcall**)(_QWORD, _QWORD, __int64*, __int64))(qword_140C63658 + 128);
	if (!v7 || v7(a2, a3, &v9, qword_140C63658))
		return 2147500037i64;
	*a4 = (unsigned __int8)v9;
	a4[1] = BYTE1(v9);
	a4[2] = BYTE2(v9);
	return 0i64;
}
// 140C3CB70: using guessed type __int64 (__fastcall *off_140C3CB70)();
// 140C3CB80: using guessed type int dword_140C3CB80;
// 140C63658: using guessed type __int64 qword_140C63658;
// 140C63750: using guessed type __int64 qword_140C63750;

