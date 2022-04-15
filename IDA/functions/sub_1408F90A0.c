#include "../winhttp.h"

//----- (00000001408F90A0) ----------------------------------------------------
__int64 __fastcall sub_1408F90A0(__int64 a1, unsigned __int16** a2)
{
	unsigned __int16* v2; // rbx
	__int64 v4; // rdx
	int v5; // eax
	unsigned int v6; // esi
	unsigned __int16* v7; // rbx
	int v9; // r14d
	__int64 v10; // rax
	int v12; // xmm0_4
	__int64 v13; // rax
	__int64 v14; // rcx

	v2 = *a2;
	v4 = *(_QWORD*)(a1 + 192);
	v5 = *v2;
	v6 = 0;
	v7 = v2 + 3;
	*(_DWORD*)(a1 + 200) = *((_DWORD*)v7 - 1);
	v9 = v5;
	if (v4 && *(_DWORD*)(a1 + 184) != v5)
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 160) + 16i64))(*(_QWORD*)(a1 + 160));
		*(_QWORD*)(a1 + 192) = 0i64;
		*(_DWORD*)(a1 + 184) = 0;
	}
	if (v9)
	{
		*(_DWORD*)(a1 + 184) = v9;
		if (!*(_QWORD*)(a1 + 192))
		{
			v10 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 160) + 8i64))(
				*(_QWORD*)(a1 + 160),
				(unsigned int)(12 * v9));
			*(_QWORD*)(a1 + 192) = v10;
			if (!v10)
			{
				*(_DWORD*)(a1 + 184) = 0;
				return 52i64;
			}
		}
		if (*(_DWORD*)(a1 + 184))
		{
			do
			{
				v12 = *(_DWORD*)v7;
				v13 = v6++;
				v14 = 3 * v13;
				v7 += 6;
				*(_DWORD*)(*(_QWORD*)(a1 + 192) + 4 * v14) = v12;
				*(_DWORD*)(*(_QWORD*)(a1 + 192) + 4 * v14 + 4) = *((_DWORD*)v7 - 2);
				*(_DWORD*)(*(_QWORD*)(a1 + 192) + 4 * v14 + 8) = *((_DWORD*)v7 - 1);
			} while (v6 < *(_DWORD*)(a1 + 184));
		}
	}
	*a2 = v7;
	return 1i64;
}

