#include "../winhttp.h"

//----- (000000014083B560) ----------------------------------------------------
DWORD __fastcall sub_14083B560(__int64* a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // r8
	int v6; // ebx
	DWORD result; // eax

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
	v4 = *a1;
	LODWORD(v5) = 0;
	if (*a1)
	{
		do
		{
		LABEL_6:
			if (*(_QWORD*)(v4 + 64) == a2)
			{
				*(_QWORD*)(v4 + 56) = 0i64;
				*(_WORD*)(v4 + 72) = 0;
			}
			v4 = *(_QWORD*)(v4 + 80);
		} while (v4);
		while (1)
		{
			v5 = (unsigned int)(v5 + 1);
			if ((unsigned int)v5 >= 0x1F)
				break;
			v4 = a1[v5];
			if (v4)
				goto LABEL_6;
		}
	}
	else
	{
		while (1)
		{
			v5 = (unsigned int)(v5 + 1);
			if ((unsigned int)v5 >= 0x1F)
				break;
			v4 = a1[v5];
			if (v4)
				goto LABEL_6;
		}
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
	v6 = dword_140C62408;
	result = GetCurrentThreadId();
	if (v6 != result)
		return WaitForSingleObject((HANDLE)a1[37], 0xFFFFFFFF);
	return result;
}
// 14083B5A7: conditional instruction was optimized away because rax.8==0
// 14083B5DE: conditional instruction was optimized away because rax.8==0
// 140C62408: using guessed type int dword_140C62408;

