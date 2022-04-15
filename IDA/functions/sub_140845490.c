#include "../winhttp.h"

//----- (0000000140845490) ----------------------------------------------------
void __fastcall sub_140845490(__int64 a1, int a2)
{
	_DWORD* v4; // rdi
	_DWORD* v5; // rax

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	v4 = *(_DWORD**)a1;
	v5 = *(_DWORD**)(a1 + 8);
	if (*(_DWORD**)a1 != v5)
	{
		do
		{
			if (*v4 == a2)
				break;
			v4 += 10;
		} while (v4 != v5);
		if (v4 != v5)
		{
			if (v4 < v5 - 10)
				qmemcpy(v4, v4 + 10, 40 * (((char*)(v5 - 10) - (char*)v4 - 1) / 0x28ui64 + 1));
			*(_QWORD*)(a1 + 8) -= 40i64;
		}
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}

