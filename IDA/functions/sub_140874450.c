#include "../winhttp.h"

//----- (0000000140874450) ----------------------------------------------------
__int64 __fastcall sub_140874450(__int64 a1, unsigned __int64 a2)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	unsigned __int64 v4; // rdi
	unsigned int v5; // eax
	unsigned __int64 v6; // rcx

	v2 = a1 + 192;
	v3 = sub_140834F40((__int64*)(a1 + 192), a2);
	v4 = v3;
	if (!v3)
		return 1i64;
	v5 = *(_DWORD*)(v3 + 8);
	if (v5 > 1)
	{
		*(_DWORD*)(v4 + 8) = v5 - 1;
		return 1i64;
	}
	sub_140866000(*(_QWORD*)v4);
	v6 = *(_QWORD*)(v2 + 8) - 16i64;
	if (v4 < v6)
		qmemcpy(
			(void*)v4,
			(const void*)(v4 + 16),
			8 * (((((v6 - v4 - 1) >> 3) & 0xFFFFFFFFFFFFFFFEui64) + 2) & 0x1FFFFFFFFFFFFFFEi64));
	*(_QWORD*)(v2 + 8) -= 16i64;
	return 1i64;
}
// 140866000: using guessed type __int64 __fastcall sub_140866000(_QWORD);

