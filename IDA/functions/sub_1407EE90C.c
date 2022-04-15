#include "../winhttp.h"

//----- (00000001407EE90C) ----------------------------------------------------
__int64 sub_1407EE90C()
{
	__int64 v0; // rbx
	int i; // edi
	__int64 v2; // rcx
	char* v3; // rcx

	v0 = 0i64;
	sub_1407E2340(1);
	for (i = 0; i < dword_140DC5330; ++i)
	{
		v2 = *((_QWORD*)lpMem + i);
		if (!v2)
		{
			v3 = (char*)sub_1407E2C30(0x58ui64);
			*((_QWORD*)lpMem + i) = v3;
			if (v3)
			{
				InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(v3 + 48), 0xFA0u);
				EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD*)lpMem + i) + 48i64));
				v0 = *((_QWORD*)lpMem + i);
				*(_DWORD*)(v0 + 24) = 0;
			}
			break;
		}
		if ((*(_BYTE*)(v2 + 24) & 0x83) == 0 && (*(_DWORD*)(v2 + 24) & 0x8000) == 0)
		{
			if ((unsigned int)(i - 3) <= 0x10 && !(unsigned int)sub_1407E240C(i + 16))
				break;
			sub_1407DE010(i, *((_QWORD*)lpMem + i));
			if ((*(_BYTE*)(*((_QWORD*)lpMem + i) + 24i64) & 0x83) == 0)
			{
				v0 = *((_QWORD*)lpMem + i);
				break;
			}
			sub_1407DE094(i, *((_QWORD*)lpMem + i));
		}
	}
	if (v0)
	{
		*(_DWORD*)(v0 + 24) &= 0x8000u;
		*(_DWORD*)(v0 + 8) = 0;
		*(_QWORD*)(v0 + 16) = 0i64;
		*(_QWORD*)v0 = 0i64;
		*(_QWORD*)(v0 + 40) = 0i64;
		*(_DWORD*)(v0 + 28) = -1;
	}
	sub_1407E2528(1);
	return v0;
}
// 140DC5330: using guessed type int dword_140DC5330;

