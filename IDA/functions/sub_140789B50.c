#include "../winhttp.h"

//----- (0000000140789B50) ----------------------------------------------------
__int64 __fastcall sub_140789B50(__int64 a1)
{
	__int64 v1; // rcx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 24);
	if (!*(_DWORD*)(v1 + 1360))
		return Apollo_LUAEvent(*(_QWORD*)(v1 + 1424), "ShinyTooltip", L"b", 1i64);
	return result;
}
// 1409FA07C: using guessed type wchar_t aB_26[2];

