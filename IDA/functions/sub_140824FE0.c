#include "../winhttp.h"

//----- (0000000140824FE0) ----------------------------------------------------
WCHAR* __fastcall sub_140824FE0(_WORD* a1)
{
	__int64 v1; // rcx
	_WORD* v2; // rdi
	bool v3; // zf
	__int64 v5; // rcx
	_WORD* v6; // rdi
	unsigned int i; // [rsp+20h] [rbp-28h]
	WCHAR* lpBuffer; // [rsp+28h] [rbp-20h]
	UINT uSize; // [rsp+30h] [rbp-18h]
	UINT uSizea; // [rsp+30h] [rbp-18h]

	lpBuffer = 0i64;
	if (a1)
	{
		uSize = GetSystemDirectoryW(0i64, 0);
		v1 = -1i64;
		v2 = a1;
		do
		{
			if (!v1)
				break;
			v3 = *v2++ == 0;
			--v1;
		} while (!v3);
		lpBuffer = (WCHAR*)LocalAlloc(0x40u, 2 * (-v1 - 2 + uSize + 1));
		if (!lpBuffer)
			return 0i64;
		uSizea = GetSystemDirectoryW(lpBuffer, uSize);
		if (lpBuffer[uSizea - 1] != 92)
			lpBuffer[uSizea++] = 92;
		for (i = 0; ; ++i)
		{
			v5 = -1i64;
			v6 = a1;
			do
			{
				if (!v5)
					break;
				v3 = *v6++ == 0;
				--v5;
			} while (!v3);
			if (i >= (unsigned __int64)(-v5 - 2))
				break;
			lpBuffer[i + uSizea] = a1[i];
		}
	}
	return lpBuffer;
}

