#include "../winhttp.h"

//----- (00000001401A8860) ----------------------------------------------------
void __fastcall sub_1401A8860(__int64 a1, _WORD* a2, char a3)
{
	bool v5; // zf

	v5 = *(_BYTE*)(a1 + 8) == 0;
	*(_DWORD*)(a1 + 132) = *(_DWORD*)(a1 + 128) - 1;
	if (!v5)
	{
		*(_BYTE*)(a1 + 8) = 0;
		sub_1401A8480(a1, (__int64)&unk_1409E2504);
	}
	if (a3)
		sub_1401A8480(a1, (__int64)L"<![CDATA[%s]]>", a2);
	else
		sub_1401A8580(a1, a2, 1);
}
// 140A453C0: using guessed type wchar_t aCdataS[15];

