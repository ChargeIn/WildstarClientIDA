#include "../winhttp.h"

//----- (0000000140453960) ----------------------------------------------------
float __fastcall sub_140453960(__int64 a1, __int64 a2)
{
	int v2; // eax

	if (a2 && (v2 = *(_DWORD*)(a2 + 344)) != 0 && v2 < *(_DWORD*)(qword_140C658F0 + 360))
		return *(float*)(*(_QWORD*)(qword_140C658F0 + 352) + 4i64 * *(int*)(a2 + 344));
	else
		return 1.0;
}
// 140C658F0: using guessed type __int64 qword_140C658F0;

