#include "../winhttp.h"

//----- (000000014083B2F0) ----------------------------------------------------
void __fastcall sub_14083B2F0(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax

	if (a2)
	{
		EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
		v4 = *(_QWORD*)(a1 + 8i64 * (a2 % 0x1F));
		if (v4)
		{
			while (*(_DWORD*)(v4 + 48) != a2)
			{
				v4 = *(_QWORD*)(v4 + 80);
				if (!v4)
					goto LABEL_7;
			}
			++* (_DWORD*)(v4 + 4);
		}
	LABEL_7:
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	}
}
// 14083B355: conditional instruction was optimized away because rax.8!=0

