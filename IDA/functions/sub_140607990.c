#include "../winhttp.h"

//----- (0000000140607990) ----------------------------------------------------
__int64 __fastcall sub_140607990(__int64 a1, unsigned int a2)
{
	char v3[64]; // [rsp+20h] [rbp-58h] BYREF

	sub_14034BF80(v3, 32i64, L"%d", a2);
	return sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "CountdownTick", L"S", v3);
}
// 1409EED2C: using guessed type wchar_t aS_56[2];
// 140B24364: using guessed type wchar_t aD_58[3];
// 140C65898: using guessed type __int64 qword_140C65898;

