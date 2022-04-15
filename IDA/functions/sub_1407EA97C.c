#include "../winhttp.h"

//----- (00000001407EA97C) ----------------------------------------------------
__int64 __fastcall sub_1407EA97C(_DWORD* a1, unsigned __int16** a2)
{
	WCHAR v4; // bx

	do
	{
		++* a1;
		v4 = sub_1407F3700(a2);
	} while (v4 != 0xFFFF && (unsigned int)sub_1407ED1C8(v4, 8));
	return v4;
}

