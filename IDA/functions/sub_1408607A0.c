#include "../winhttp.h"

//----- (00000001408607A0) ----------------------------------------------------
__int64 __fastcall sub_1408607A0(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // rax
	__int64 v3; // rcx
	int v4; // [rsp+20h] [rbp-38h] BYREF
	__int64 v5; // [rsp+28h] [rbp-30h]
	__int64 v6; // [rsp+30h] [rbp-28h]
	__int64 v7; // [rsp+38h] [rbp-20h]
	int v8; // [rsp+40h] [rbp-18h]
	__int16 v9; // [rsp+44h] [rbp-14h]

	result = *(unsigned __int8*)(a1 + 383);
	if ((result & 0x40) == 0)
	{
		*(_BYTE*)(a1 + 383) = result | 0x40;
		++dword_140C61F80;
		v2 = *(_QWORD*)(a1 + 176);
		v4 = 0;
		v3 = *(_QWORD*)(a1 + 160);
		v6 = 0i64;
		v7 = 0i64;
		v8 = 3;
		v9 = 256;
		v5 = v2;
		return (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 288i64))(v3, &v4);
	}
	return result;
}
// 140C61F80: using guessed type int dword_140C61F80;

