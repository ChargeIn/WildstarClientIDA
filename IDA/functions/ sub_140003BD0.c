#include "../winhttp.h"

//----- (0000000140003BD0) ----------------------------------------------------
__int64 __fastcall sub_140003BD0(__int64 a1)
{
	__int64 result; // rax

	*(_DWORD*)a1 = 0;
	*(_QWORD*)(a1 + 200) = 0i64;
	sub_1407E4830((int*)(a1 + 208), 0i64, 0x98ui64);
	*(_DWORD*)(a1 + 360) = 0;
	sub_140005A90((_QWORD*)a1);
	sub_1400075F0((__int64*)(a1 + 104));
	sub_1400075F0((__int64*)(a1 + 120));
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_QWORD*)(a1 + 384) = 0i64;
	*(_QWORD*)(a1 + 392) = 0i64;
	sub_140195D70(a1 + 400);
	*(_BYTE*)(a1 + 520) = 0;
	result = 0i64;
	*(_QWORD*)(a1 + 488) = 0i64;
	*(_QWORD*)(a1 + 496) = 0i64;
	*(_QWORD*)(a1 + 504) = 0i64;
	*(_QWORD*)(a1 + 512) = 0i64;
	return result;
}

