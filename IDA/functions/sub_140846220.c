#include "../winhttp.h"

//----- (0000000140846220) ----------------------------------------------------
char __fastcall sub_140846220(__int64 a1, int a2, int a3)
{
	unsigned int v3; // edi
	int v5; // ebx
	__int64* v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rcx

	v3 = 0;
	v5 = a2 | (a3 << 16);
	if (!*(_BYTE*)(a1 + 137))
		return 0;
	while (1)
	{
		v6 = (__int64*)(a1 + 24 * (v3 + 1i64));
		v7 = *v6;
		v8 = v6[1];
		if (v7 != v8)
		{
			do
			{
				if (*(_DWORD*)v7 == v5)
					break;
				v7 += 16i64;
			} while (v7 != v8);
			if (v7 != v8
				&& v7 != -8
				&& (*(unsigned __int8(__fastcall**)(_QWORD))(**(_QWORD**)(v7 + 8) + 112i64))(*(_QWORD*)(v7 + 8)))
			{
				break;
			}
		}
		if (++v3 >= *(unsigned __int8*)(a1 + 137))
			return 0;
	}
	return 1;
}

