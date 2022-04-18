#include "../winhttp.h"

//----- (00000001405C4140) ----------------------------------------------------
__int64 __fastcall sub_1405C4140(__int64 a1, _DWORD* a2)
{
	__int64 v2; // rbx
	__int64 v3; // rcx
	__int64 v4; // rax

	v2 = qword_140C65B98;
	v3 = qword_140C65898;
	*(_DWORD*)(qword_140C65B98 + 264) = *a2;
	Apollo_LUAEvent(*(_QWORD*)(v3 + 29504), "MatchJoined", &unk_1409D12A1);
	v4 = qword_140C65898;
	*(_DWORD*)(v2 + 164) = 0;
	*(_DWORD*)(v4 + 1368) = 1;
	*(_QWORD*)(v2 + 176) = 0i64;
	*(_DWORD*)(v2 + 184) = 0;
	*(_QWORD*)(v2 + 168) = 16i64;
	sub_140195D70(v2 + 192);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

