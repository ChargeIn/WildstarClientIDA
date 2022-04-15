#include "../winhttp.h"

//----- (0000000140873390) ----------------------------------------------------
__int64 __fastcall sub_140873390(__int64 a1, __int64 a2, __int64* a3, int a4, __int64 a5, __int64 a6)
{
	__int64 result; // rax
	__int64 v8; // rcx

	*(_QWORD*)(a1 + 56) = a2;
	*(_QWORD*)(a1 + 84) = 43i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_WORD*)(a1 + 96) = 0;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_DWORD*)(a1 + 112) = -1;
	*(_DWORD*)(a1 + 116) = 1065353216;
	*(_DWORD*)(a1 + 120) = -1;
	*(_DWORD*)(a1 + 124) = 1;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_WORD*)(a1 + 152) = 0;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 140) = 43i64;
	*(_DWORD*)(a1 + 168) = -1;
	*(_DWORD*)(a1 + 172) = 1065353216;
	*(_DWORD*)(a1 + 176) = -1;
	*(_DWORD*)(a1 + 180) = 1;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_DWORD*)(a1 + 200) = 1065353216;
	*(_QWORD*)(a1 + 204) = 1065353216i64;
	result = sub_140872C70(a1, a2, a3, a4, a5);
	if ((_DWORD)result == 1)
	{
		result = (*(__int64(__fastcall**)(_QWORD, __int64(__fastcall***)(), _QWORD, _QWORD, __int64, __int64))(**(_QWORD**)(a1 + 56) + 48i64))(
			*(_QWORD*)(a1 + 56),
			&off_140C10F70,
			*(_QWORD*)(a1 + 24),
			*(_QWORD*)(a1 + 32),
			a6,
			a6);
		if ((_DWORD)result == 1)
		{
			v8 = *(_QWORD*)(a1 + 56);
			*(_DWORD*)(a1 + 136) = *(_DWORD*)(a6 + 4) & 0x3FFFF;
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
		}
	}
	return result;
}
// 140C10F70: using guessed type __int64 (__fastcall **off_140C10F70)();

