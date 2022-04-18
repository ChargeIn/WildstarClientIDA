#include "../winhttp.h"

//----- (00000001406021E0) ----------------------------------------------------
__int64 __fastcall sub_1406021E0(_QWORD* a1, __int64 a2)
{
	unsigned int v3; // eax
	void* v4; // r9

	sub_140606D90(a1, (_QWORD*)a2);
	v3 = *(_DWORD*)(a2 + 12);
	v4 = &unk_1409F3C94;
	if (v3 < *(_DWORD*)(a2 + 16))
		v4 = *(void**)(168i64 * v3 + *(_QWORD*)(a2 + 24));
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "Group_Invited", byte_1409EA264, v4);
	return 0i64;
}
// 1409EA264: using guessed type _BYTE byte_1409EA264[88];
// 140C65898: using guessed type __int64 qword_140C65898;

