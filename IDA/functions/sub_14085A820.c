#include "../winhttp.h"

//----- (000000014085A820) ----------------------------------------------------
void __fastcall sub_14085A820(_QWORD* a1, unsigned int a2, __int64* a3)
{
	__int64 v4; // r8
	__int64 v5; // rdi
	unsigned int v7; // edx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rcx

	v4 = a1[6];
	v5 = a2;
	if (v4)
	{
		v7 = *(_DWORD*)(v4 + 8i64 * a2 + 4);
		if (v7)
		{
			if (*(_BYTE*)(v4 + 8 * v5 + 1))
				v8 = sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 14328), v7);
			else
				v8 = sub_14083EDE0(qword_140C61BA8 + 398, v7);
			v9 = *a3;
			*a3 = v8;
		}
		else
		{
			v9 = *a3;
			*a3 = 0i64;
		}
		if (v9)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
		*((_BYTE*)a3 + 8) = sub_14085A670(a1, v5);
	}
	else
	{
		v10 = *a3;
		*a3 = 0i64;
		if (v10)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 16i64))(v10);
		*((_BYTE*)a3 + 8) = 0;
	}
}

