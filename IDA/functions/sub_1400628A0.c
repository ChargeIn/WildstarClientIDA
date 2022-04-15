#include "../winhttp.h"

//----- (00000001400628A0) ----------------------------------------------------
__int64 __fastcall sub_1400628A0(__int64 a1)
{
	unsigned __int8* v2; // rax
	unsigned __int8* v3; // rdx
	__int64 v4; // rcx
	__int64 result; // rax
	__int64 v6; // [rsp+30h] [rbp+8h] BYREF

	v2 = (unsigned __int8*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(a1 + 16))(
		*(_QWORD*)(a1 + 32),
		*(_QWORD*)(a1 + 24),
		&v6);
	v3 = v2;
	if (!v2 || !v6)
		return 0xFFFFFFFFi64;
	v4 = v6 - 1;
	*(_QWORD*)(a1 + 8) = v2;
	*(_QWORD*)a1 = v4;
	result = *v2;
	*(_QWORD*)(a1 + 8) = v3 + 1;
	return result;
}

