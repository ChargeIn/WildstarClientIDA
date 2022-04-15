#include "../winhttp.h"

//----- (00000001407DFECC) ----------------------------------------------------
__int64 __fastcall sub_1407DFECC(unsigned __int8 a1)
{
	__int64 result; // rax
	__int64 v3; // [rsp+20h] [rbp-28h] BYREF
	__int64 v4; // [rsp+30h] [rbp-18h]
	char v5; // [rsp+38h] [rbp-10h]

	sub_1407DE348((__int64)&v3, 0i64);
	result = *(_WORD*)(*(_QWORD*)(v3 + 264) + 2i64 * a1) & 0x8000;
	if (v5)
		*(_DWORD*)(v4 + 200) &= ~2u;
	return result;
}

