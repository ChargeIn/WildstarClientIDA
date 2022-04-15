#include "../winhttp.h"

//----- (000000014038D310) ----------------------------------------------------
void __fastcall sub_14038D310(__int64 a1, int a2)
{
	if (*(_DWORD*)(a1 + 192) != a2)
	{
		*(_DWORD*)(a1 + 192) = a2;
		sub_1407C2990((__int64**)(a1 + 200), (__int64*)(*(_QWORD*)(a1 + 16) + 5568i64), dword_140B65CF8[a2]);
	}
}
// 140B65CF8: using guessed type _DWORD dword_140B65CF8[6];

