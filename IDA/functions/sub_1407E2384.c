#include "../winhttp.h"

//----- (00000001407E2384) ----------------------------------------------------
void sub_1407E2384()
{
	__int64 v0; // rdi
	LPCRITICAL_SECTION* v1; // rbx
	__int64 v2; // rbp
	LPCRITICAL_SECTION v3; // rsi
	_DWORD* v4; // rbx
	struct _RTL_CRITICAL_SECTION* v5; // rcx

	v0 = 36i64;
	v1 = (LPCRITICAL_SECTION*)qword_140C0F7D0;
	v2 = 36i64;
	do
	{
		v3 = *v1;
		if (*v1 && *((_DWORD*)v1 + 2) != 1)
		{
			DeleteCriticalSection(*v1);
			sub_1407E14C0(v3);
			*v1 = 0i64;
		}
		v1 += 2;
		--v2;
	} while (v2);
	v4 = &unk_140C0F7D8;
	do
	{
		v5 = (struct _RTL_CRITICAL_SECTION*)*((_QWORD*)v4 - 1);
		if (v5)
		{
			if (*v4 == 1)
				DeleteCriticalSection(v5);
		}
		v4 += 4;
		--v0;
	} while (v0);
}
// 140C0F7D0: using guessed type _QWORD qword_140C0F7D0[1];

