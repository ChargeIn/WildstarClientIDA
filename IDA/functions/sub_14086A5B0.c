#include "../winhttp.h"

//----- (000000014086A5B0) ----------------------------------------------------
__int64 __fastcall sub_14086A5B0(_QWORD* a1, __int64 a2)
{
	__int64* v4; // rax
	__int64 j; // r8
	__int64* v6; // rax
	__int64 i; // rcx

	if (*(_DWORD*)a2)
	{
		if (*(_DWORD*)a2 == 1)
		{
			v6 = (__int64*)a1[45];
			for (i = *(_QWORD*)(a2 + 16); v6; v6 = (__int64*)*v6)
			{
				if ((!i || i == v6[5]) && *((_DWORD*)v6 + 30) != 1)
					*((_DWORD*)v6 + 30) = 1;
			}
		}
		else if (*(_DWORD*)a2 == 2)
		{
			v4 = (__int64*)a1[45];
			for (j = *(_QWORD*)(a2 + 16); v4; v4 = (__int64*)*v4)
			{
				if (!j || j == v4[5])
				{
					if (*((_DWORD*)v4 + 30))
						*((_DWORD*)v4 + 30) = 0;
				}
			}
		}
	}
	else
	{
		sub_14086BB50((__int64)a1, *(_QWORD*)(a2 + 16), 0);
	}
	return sub_140869520(a1, a2);
}

