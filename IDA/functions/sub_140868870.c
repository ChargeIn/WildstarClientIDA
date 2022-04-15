#include "../winhttp.h"

//----- (0000000140868870) ----------------------------------------------------
void __fastcall sub_140868870(__int64 a1, unsigned int a2)
{
	__int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx

	EnterCriticalSection((LPCRITICAL_SECTION)a1);
	v4 = 0i64;
	v5 = a1 + 8i64 * (a2 % 0xC1);
	v6 = *(_QWORD*)(v5 + 40);
	if (v6)
	{
		while (*(_DWORD*)(v6 + 24) != a2)
		{
			v4 = v6;
			v6 = *(_QWORD*)(v6 + 16);
			if (!v6)
				goto LABEL_9;
		}
		v7 = *(_QWORD*)(v6 + 16);
		if (v4)
			*(_QWORD*)(v4 + 16) = v7;
		else
			*(_QWORD*)(v5 + 40) = v7;
		--* (_DWORD*)(a1 + 1584);
	}
LABEL_9:
	LeaveCriticalSection((LPCRITICAL_SECTION)a1);
}

