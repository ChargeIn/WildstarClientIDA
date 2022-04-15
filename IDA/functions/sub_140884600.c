#include "../winhttp.h"

//----- (0000000140884600) ----------------------------------------------------
void __fastcall sub_140884600(__int64 a1, __int64 a2)
{
	unsigned int v4; // ecx
	__int64** v5; // rax
	__int64 v6; // rdx
	__int64 v7; // rcx

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	v4 = *(unsigned __int8*)(a1 + 192);
	*(_QWORD*)(a1 + 128) = a2;
	if (v4 >= *(_DWORD*)(a1 + 168))
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 72i64))(a1, a2);
		v7 = a1;
	LABEL_8:
		sub_140885F10(v7);
		goto LABEL_9;
	}
	v5 = *(__int64***)(a1 + 176);
	if (v4)
	{
		v6 = v4;
		do
		{
			v5 = (__int64**)*v5;
			--v6;
		} while (v6);
	}
	v7 = a1;
	if (*v5[1] + *((unsigned int*)v5 + 4) == a2)
		goto LABEL_8;
	sub_1408843E0(a1);
LABEL_9:
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
}

