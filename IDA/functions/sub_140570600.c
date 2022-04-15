#include "../winhttp.h"

//----- (0000000140570600) ----------------------------------------------------
const wchar_t* __fastcall sub_140570600(int a1)
{
	int v1; // edx
	int v2; // eax

	if ((dword_140DC3448 & 1) != 0)
	{
		v2 = dword_140DC3454;
		v1 = dword_140DC3450;
	}
	else
	{
		v1 = 0;
		dword_140DC3448 |= 1u;
		v2 = 4;
		dword_140DC3450 = 0;
		dword_140DC3454 = 4;
	}
	if (a1 < v1 || a1 >= v2)
		return L"nopath";
	else
		return off_140C39018[a1];
}
// 140B1EC60: using guessed type wchar_t aNopath[7];
// 140C39018: using guessed type wchar_t *off_140C39018[4];
// 140DC3448: using guessed type int dword_140DC3448;
// 140DC3450: using guessed type int dword_140DC3450;
// 140DC3454: using guessed type int dword_140DC3454;

