#include "../winhttp.h"

//----- (00000001404845C0) ----------------------------------------------------
__int64 __fastcall sub_1404845C0(__int64 a1, int a2)
{
	__int64 v3; // rax
	int* v4; // rax

	v3 = sub_1404835C0(a1, a2);
	if (!v3 || !*(_DWORD*)(v3 + 348))
		return 0i64;
	v4 = sub_140484600(a1 + 80, (int*)(v3 + 348));
	return sub_1404846C0((__int64)v4);
}

