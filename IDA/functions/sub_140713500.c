#include "../winhttp.h"

//----- (0000000140713500) ----------------------------------------------------
void* __fastcall sub_140713500(__int64 a1)
{
	__int64 v1; // rcx
	unsigned __int64 v2; // rcx

	v1 = *(_QWORD*)(a1 + 16);
	if (!v1)
		return &unk_1409F8BDC;
	v2 = *(_QWORD*)(v1 + 16);
	if (v2 && v2 <= qword_140C3FE70)
		return (void*)(v2 + qword_140C3FE68);
	else
		return 0i64;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

