#include "../winhttp.h"

//----- (00000001401E0030) ----------------------------------------------------
void* __fastcall sub_1401E0030(__int64 a1, int a2)
{
	__int64 v2; // rax

	if ((unsigned __int64)a2 >= 0x48)
		v2 = 0i64;
	else
		v2 = *(_QWORD*)(a1 + 8i64 * a2 + 328);
	if (v2)
		return (void*)(v2 + 24);
	else
		return &unk_140C79A60;
}

