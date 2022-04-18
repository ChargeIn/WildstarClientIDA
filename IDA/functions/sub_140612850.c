#include "../winhttp.h"

//----- (0000000140612850) ----------------------------------------------------
__int64 __fastcall sub_140612850(__int64 a1, unsigned int* a2)
{
	__int64 v2; // rax

	*(_DWORD*)(a1 + 31216) = 0;
	v2 = sub_140617410(a1, *a2);
	if (!v2 || !*(_QWORD*)(v2 + 152))
		return 1i64;
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "SoldierHoldoutDeath", L"#");
	return 0i64;
}
// 1409ED6A4: using guessed type wchar_t asc_1409ED6A4[2];
// 140C65898: using guessed type __int64 qword_140C65898;

