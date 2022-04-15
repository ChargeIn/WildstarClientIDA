#include "../winhttp.h"

//----- (0000000140872C70) ----------------------------------------------------
__int64 __fastcall sub_140872C70(__int64 a1, __int64 a2, __int64* a3, int a4, __int64 a5)
{
	__int64 v5; // rdi
	__int64 v9; // rax
	__int64 v10; // rax

	*(_DWORD*)(a1 + 48) = a4;
	v5 = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_WORD*)(a1 + 44) = 0;
	*(_BYTE*)(a1 + 46) = 0;
	*(_QWORD*)(a1 + 16) = a5;
	v9 = (*(__int64(__fastcall**)(_QWORD, __int64(__fastcall***)()))(**(_QWORD**)(*a3 + 40) + 16i64))(
		*(_QWORD*)(*a3 + 40),
		&off_140C10F70);
	*(_QWORD*)(a1 + 32) = v9;
	if (!v9)
		return 2i64;
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(*a3 + 32);
	v10 = sub_1408819F0(dword_140C10F28, 48i64);
	if (v10)
		v5 = sub_140862010(v10, a5, a4);
	*(_QWORD*)(a1 + 24) = v5;
	if (!v5)
		return 2i64;
	sub_140857D10(*a3, *(_QWORD*)(a1 + 32), *(_QWORD*)(a5 + 176));
	return 1i64;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C10F70: using guessed type __int64 (__fastcall **off_140C10F70)();

