#include "../winhttp.h"

//----- (00000001406DB380) ----------------------------------------------------
int* __fastcall sub_1406DB380(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	__m128i* v8; // rdi
	__int64 v9; // rbp
	__int64 v10; // rax
	wchar_t* v11; // rax
	int* v12; // rbx
	__int64 v13; // rax
	bool v15; // [rsp+40h] [rbp-A8h] BYREF
	_OWORD v16[6]; // [rsp+50h] [rbp-98h] BYREF

	v8 = 0i64;
	sub_1400D45E0((__int64)v16, a1, a2, a5, 0i64);
	v9 = 0i64;
	v15 = 0;
	v10 = sub_1401A6B80(a5, L"ListItem");
	if (v10)
	{
		v11 = (wchar_t*)sub_1401A4F40(v10 + 32);
		sub_1401A52E0(v11, &v15);
		if (v15)
			v9 = 1i64;
	}
	v12 = sub_14018B280(1136i64, 0);
	if (v12)
	{
		sub_1400C5920((__int64)v12, a1, a2, 0i64, v16, a4, v9);
		*((_WORD*)v12 + 512) = 0;
		*((_BYTE*)v12 + 1026) = 0;
		*(_QWORD*)v12 = off_140B717B0;
		v12[257] = 300;
		v12[258] = -1;
		v12[259] = 0;
		sub_1401095E0((__int64)(v12 + 260));
		sub_1401095E0((__int64)(v12 + 272));
		*((_QWORD*)v12 + 54) |= 0x400000000ui64;
	}
	else
	{
		v12 = 0i64;
	}
	v13 = sub_1401A6B80(a5, L"SelectOverlay");
	if (v13)
		v8 = (__m128i*)sub_1401A4F40(v13 + 32);
	if (a1)
		sub_140109710((__int64*)v12 + 136, a1 + 240, v8, 0);
	return v12;
}
// 140B3D068: using guessed type wchar_t aSelectoverlay[14];
// 140B3D220: using guessed type wchar_t aListitem[9];
// 140B717B0: using guessed type __int64 (__fastcall *off_140B717B0[25])();
// 1406DB380: using guessed type _OWORD var_98[6];

