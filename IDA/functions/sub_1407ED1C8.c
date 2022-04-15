#include "../winhttp.h"

//----- (00000001407ED1C8) ----------------------------------------------------
__int64 __fastcall sub_1407ED1C8(WCHAR a1, __int16 a2)
{
	WORD v4; // ax
	BOOL StringTypeW; // eax
	WORD v6; // cx
	WCHAR SrcStr; // [rsp+30h] [rbp+8h] BYREF
	WORD CharType; // [rsp+40h] [rbp+18h] BYREF

	SrcStr = a1;
	if (a1 == 0xFFFF)
		return 0i64;
	if (a1 >= 0x100u)
	{
		StringTypeW = GetStringTypeW(1u, &SrcStr, 1, &CharType);
		v6 = 0;
		if (StringTypeW)
			v6 = CharType;
		v4 = v6;
	}
	else
	{
		v4 = *((_WORD*)off_140C10468 + a1);
	}
	return (unsigned __int16)(a2 & v4);
}
// 140C10468: using guessed type void *off_140C10468;

