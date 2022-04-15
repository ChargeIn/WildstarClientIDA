#include "../winhttp.h"

//----- (0000000140036400) ----------------------------------------------------
__int64 __fastcall sub_140036400(__int64 a1, __int64* a2)
{
	double v3; // xmm0_8
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 result; // rax
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+28h] [rbp-20h]
	_BYTE v9[12]; // [rsp+30h] [rbp-18h]
	int v10; // [rsp+3Ch] [rbp-Ch]

	if (a2)
	{
		v3 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890);
		LODWORD(v7) = 150;
		v8 = 1065353216i64;
		*(_DWORD*)v9 = 0;
		HIDWORD(v7) = (int)(v3 * 65536.0);
		v4 = *a2;
		*(_QWORD*)&v9[4] = 2i64;
		v10 = 0;
		(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v4 + 584))(a2, 0i64, &v7);
		v5 = *a2;
		v8 = 0i64;
		v7 = 231i64;
		*(_QWORD*)v9 = 1065353216i64;
		*(_DWORD*)&v9[8] = 0;
		return (*(__int64(__fastcall**)(__int64*, _QWORD, __int64*))(v5 + 600))(a2, 0i64, &v7);
	}
	return result;
}
// 140C77890: using guessed type __int64 qword_140C77890;

