#include "../winhttp.h"

//----- (0000000140486160) ----------------------------------------------------
__int64 __fastcall sub_140486160(__int64 a1)
{
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // [rsp+20h] [rbp-28h] BYREF
	int v6; // [rsp+28h] [rbp-20h]
	__int64 v7; // [rsp+2Ch] [rbp-1Ch]
	__int64 v8; // [rsp+34h] [rbp-14h]
	int v9; // [rsp+3Ch] [rbp-Ch]

	if (*(_DWORD*)(a1 + 96))
		return 1i64;
	v3 = *(_QWORD*)(a1 + 80);
	if (v3 || *(_QWORD*)(a1 + 88))
		(*(void(__fastcall**)(__int64, __int64, __int64))(a1 + 88))(v3, a1, 1i64);
	*(_DWORD*)(a1 + 96) = 1;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	v4 = *(_QWORD*)(a1 + 40);
	v6 = 1065353216;
	v5 = 165i64;
	v7 = 0i64;
	v8 = 0i64;
	v9 = 0;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v4 + 584i64))(v4, 0i64, &v5);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HintArrowDistanceUpdate", byte_1409E9E64, 0xBFF0000000000000ui64);
	return 0i64;
}
// 1409E9E64: using guessed type _BYTE byte_1409E9E64[48];
// 140C65898: using guessed type __int64 qword_140C65898;

