#include "../winhttp.h"

//----- (0000000140728AC0) ----------------------------------------------------
__int64 __fastcall sub_140728AC0(__int64 a1)
{
	unsigned int(__fastcall * **v2)(_QWORD, __int128*); // rcx
	_DWORD* v3; // rax
	int v4; // ecx
	float v5; // xmm2_4
	__int64 v6; // rcx
	__int128 v8; // [rsp+60h] [rbp-48h] BYREF
	__int64 v9; // [rsp+70h] [rbp-38h] BYREF
	float v10; // [rsp+80h] [rbp-28h]
	float v11; // [rsp+84h] [rbp-24h]

	v8 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v8);
	v2 = *(unsigned int(__fastcall****)(_QWORD, __int128*))(a1 + 1168);
	LODWORD(v8) = 0;
	if ((**v2)(v2, &v8))
	{
		v3 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 16i64))(qword_140C65670);
		v4 = v3[1];
		LODWORD(v3) = *v3;
		v9 = 0i64;
		v5 = (float)v4;
		v6 = *(_QWORD*)(a1 + 1144);
		v10 = (float)(int)v3;
		v11 = v5;
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64, int, int, int, _QWORD, __int64*, int, _DWORD))(*(_QWORD*)v6 + 128i64))(
			v6,
			a1 + 1008,
			a1 + 1136,
			a1 + 96,
			1,
			3,
			-16777216,
			0i64,
			&v9,
			1065353216,
			0);
	}
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;

