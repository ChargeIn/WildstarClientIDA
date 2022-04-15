#include "../winhttp.h"

//----- (000000014084BBA0) ----------------------------------------------------
__int64 __fastcall sub_14084BBA0(__int64 a1, __int64 a2)
{
	unsigned int v2; // r12d
	__int64 v3; // rbp
	unsigned int v4; // r14d
	unsigned int* v6; // rsi
	unsigned int v7; // edi
	struct _RTL_CRITICAL_SECTION* v8; // r15
	__int64 v9; // rbx

	v2 = *(_DWORD*)(a2 + 4);
	v3 = 0i64;
	v4 = 0;
	v6 = (unsigned int*)(a2 + 8);
	if (!v2)
		return 1i64;
	while (1)
	{
		v7 = *v6++;
		if (!v7)
			return 14i64;
		v8 = (LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 6368);
		EnterCriticalSection((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 6368));
		v9 = *((_QWORD*)&v8[1].DebugInfo + v7 % 0xC1);
		if (!v9)
		{
		LABEL_6:
			LeaveCriticalSection(v8);
			return 2i64;
		}
		while (*(_DWORD*)(v9 + 24) != v7)
		{
			v9 = *(_QWORD*)(v9 + 16);
			if (!v9)
				goto LABEL_6;
		}
		++* (_DWORD*)(v9 + 8);
		LeaveCriticalSection(v8);
		*(_QWORD*)(v9 + 32) = 0i64;
		if (v3)
			*(_QWORD*)(v3 + 32) = v9;
		else
			*(_QWORD*)(a1 + 32) = v9;
		++v4;
		v3 = v9;
		if (v4 >= v2)
			return 1i64;
	}
}
// 14084BC5E: conditional instruction was optimized away because rbx.8!=0

