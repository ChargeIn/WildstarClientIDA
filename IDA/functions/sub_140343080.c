#include "../winhttp.h"

//----- (0000000140343080) ----------------------------------------------------
__int64 __fastcall sub_140343080(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5)
{
	__int64 v9; // rbx
	unsigned int v10; // eax

	if (!a3)
		return 2147942487i64;
	v9 = *(_QWORD*)qword_140C65858;
	v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 48i64))(a3);
	return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int, int))(v9 + 224))(
		qword_140C65858,
		*(_QWORD*)(a1 + 40),
		a2,
		v10,
		a4,
		a5);
}
// 140C65858: using guessed type __int64 qword_140C65858;

