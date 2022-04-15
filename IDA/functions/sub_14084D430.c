#include "../winhttp.h"

//----- (000000014084D430) ----------------------------------------------------
__int64 __fastcall sub_14084D430(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 120))
		return 1i64;
	*(_BYTE*)(a1 + 91) |= 0x10u;
	v2 = sub_1408819F0(dword_140C10F20, 104i64);
	v3 = v2;
	if (!v2)
		return 52i64;
	sub_140873B10(v2);
	result = 1i64;
	*(_QWORD*)v3 = &off_1409A3280;
	*(_DWORD*)(v3 + 88) = 0;
	*(_QWORD*)(v3 + 96) = 0i64;
	*(_DWORD*)(v3 + 8) = *(_DWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 120) = v3;
	return result;
}
// 1409A3280: using guessed type __int64 (__fastcall *off_1409A3280)();
// 140C10F20: using guessed type int dword_140C10F20;

