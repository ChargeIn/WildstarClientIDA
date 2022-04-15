#include "../winhttp.h"

//----- (00000001407F0C28) ----------------------------------------------------
__int64 __fastcall sub_1407F0C28(WCHAR* a1, WCHAR* a2)
{
	WCHAR* v2; // r9
	signed __int64 v4; // r10
	unsigned __int16 v5; // dx
	WCHAR v6; // cx

	v2 = a2;
	if (dword_140C5F560)
		return sub_1407F0CAC(a1, a2, 0i64);
	if (a1 && a2)
	{
		v4 = (char*)a1 - (char*)a2;
		do
		{
			v5 = *(WCHAR*)((char*)v2 + v4);
			if ((unsigned __int16)(v5 - 65) <= 0x19u)
				v5 += 32;
			v6 = *v2;
			if ((unsigned __int16)(*v2 - 65) <= 0x19u)
				v6 += 32;
			++v2;
		} while (v5 && v5 == v6);
		return v5 - (unsigned int)v6;
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0x7FFFFFFFi64;
	}
}
// 140C5F560: using guessed type int dword_140C5F560;

