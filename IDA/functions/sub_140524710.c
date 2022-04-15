#include "../winhttp.h"

//----- (0000000140524710) ----------------------------------------------------
char __fastcall sub_140524710(__int64 a1)
{
	int v3; // [rsp+20h] [rbp-18h]

	v3 = sub_1404B87B0(a1, *(_QWORD*)(a1 + 16), *(_DWORD*)(a1 + 24));
	return sub_1400D4040(*(_QWORD*)(a1 + 8), "CommunityRenameResult", *(char**)(a1 + 8), L"i", v3);
}
// 140B6B8F8: using guessed type wchar_t aI_12[2];

