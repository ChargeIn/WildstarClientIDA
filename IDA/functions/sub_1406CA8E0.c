#include "../winhttp.h"

//----- (00000001406CA8E0) ----------------------------------------------------
__int64 __fastcall sub_1406CA8E0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rdx
	unsigned __int64 i; // rcx
	__int64 v4; // r10
	__int64 v5; // r10

	v1 = sub_1406CA0C0(a1);
	if (v1)
	{
		v2 = 0i64;
		for (i = 0i64; aAbar[i]; ++i)
			;
		v4 = *(_QWORD*)(v1 + 1472);
		if ((*(_QWORD*)(v1 + 1480) - v4) >> 1 == i)
		{
			if (i)
			{
				v5 = v4 - (_QWORD)L"ABar";
				while (*(wchar_t*)((char*)&aAbar[v2] + v5) == aAbar[v2])
				{
					if (++v2 >= i)
						goto LABEL_11;
				}
			}
			else
			{
			LABEL_11:
				*(_DWORD*)(v1 + 1496) = (*(_DWORD*)(v1 + 1496) + 36) % 0x30u;
			}
		}
	}
	return 0i64;
}
// 1406CA96F: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140B39778: using guessed type wchar_t aAbar[5];

