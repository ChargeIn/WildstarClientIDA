#include "../winhttp.h"

//----- (0000000140712E60) ----------------------------------------------------
unsigned __int64 __fastcall sub_140712E60(__int64 a1)
{
	__int64 v1; // rcx
	unsigned __int64 v2; // rcx

	v1 = *(_QWORD*)(a1 + 16);
	if (v1 && (v2 = *(_QWORD*)(v1 + 16)) != 0 && v2 <= qword_140C3FE70)
		return v2 + qword_140C3FE68;
	else
		return 0i64;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

