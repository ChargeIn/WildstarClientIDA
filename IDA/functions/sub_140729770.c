#include "../winhttp.h"

//----- (0000000140729770) ----------------------------------------------------
__int64 __fastcall sub_140729770(__int64 a1)
{
	__int64 v2; // rcx
	unsigned __int64 i; // rbx
	__int64 v4; // rdi
	__int64 v5; // rcx
	bool v6; // zf
	int v7; // eax
	__int64 v8; // rax
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]
	__int64 v12; // [rsp+30h] [rbp-18h]
	__int64 v13; // [rsp+38h] [rbp-10h]

	*(_DWORD*)(a1 + 1264) = 3;
	*(_DWORD*)(a1 + 1260) = 0;
	v2 = *(_QWORD*)(a1 + 1160);
	v10 = 1112i64;
	v11 = 1065353216i64;
	v12 = 0i64;
	v13 = 0i64;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v2 + 584i64))(v2, 0i64, &v10);
	*(_DWORD*)(a1 + 20) = 9;
	for (i = 0i64; i < 0x1C8; i += 152i64)
	{
		v4 = *(_QWORD*)(a1 + 1272);
		v5 = *(_QWORD*)(i + v4 + 136);
		if (v5)
		{
			v6 = *(_DWORD*)(i + v4 + 88) == 0;
			v7 = 1114;
			HIDWORD(v10) = 0;
			if (!v6)
				v7 = 6675;
			v11 = 1065353216i64;
			v12 = 0i64;
			v13 = 0i64;
			LODWORD(v10) = v7;
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v5 + 584i64))(v5, 0i64, &v10);
		}
		v8 = *(_QWORD*)(i + v4 + 24);
		*(_DWORD*)(i + v4 + 92) = 6;
		*(_BYTE*)(v8 + 1232) = 1;
	}
	Apollo_LUAEvent(*(_QWORD*)(a1 + 1424), "GameEnd", byte_1409F8DF4, 3i64);
	return 0i64;
}
// 1409F8DF4: using guessed type _BYTE byte_1409F8DF4[216];

