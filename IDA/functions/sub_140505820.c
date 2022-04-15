#include "../winhttp.h"

//----- (0000000140505820) ----------------------------------------------------
unsigned __int64 __fastcall sub_140505820(unsigned int a1)
{
	__int64 v1; // rax
	unsigned __int64 v2; // rcx

	v1 = sub_1401E87E0(a1);
	if (v1 && (v2 = *(_QWORD*)(v1 + 8)) != 0 && v2 <= qword_140C3FE70)
		return v2 + qword_140C3FE68;
	else
		return 0i64;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

