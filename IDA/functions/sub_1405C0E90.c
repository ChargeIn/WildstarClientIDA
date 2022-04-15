#include "../winhttp.h"

//----- (00000001405C0E90) ----------------------------------------------------
__int64 __fastcall sub_1405C0E90(__int64 a1, unsigned int* a2)
{
	__int16* v3; // rax

	*(_DWORD*)(a1 + 164) = 1;
	v3 = sub_14034BDD0(a1, 309340);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v3, 0, 0i64);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MatchingRoleCheckStarted", "b", *a2);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

