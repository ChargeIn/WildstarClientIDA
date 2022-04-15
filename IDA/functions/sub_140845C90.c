#include "../winhttp.h"

//----- (0000000140845C90) ----------------------------------------------------
__int64 __fastcall sub_140845C90(__int64 a1)
{
	unsigned int v1; // esi
	unsigned int v3; // ebx
	__int64 v4; // rcx
	__int64* v5; // rdi
	__int64 v6; // rcx
	__int64 result; // rax

	v1 = 0;
	if (*(_BYTE*)(a1 + 137))
	{
		do
		{
			v3 = 0;
			v4 = *(_QWORD*)(a1 + 24 * (v1 + 1i64));
			v5 = (__int64*)(a1 + 24 * (v1 + 1i64));
			if ((unsigned int)((v5[1] - v4) >> 4))
			{
				do
				{
					v6 = *(_QWORD*)(v4 + 16i64 * v3 + 8);
					if (v6)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 80i64))(v6);
					v4 = *v5;
					++v3;
				} while (v3 < (unsigned int)((v5[1] - *v5) >> 4));
			}
			result = *(unsigned __int8*)(a1 + 137);
			++v1;
		} while (v1 < (unsigned int)result);
	}
	return result;
}

