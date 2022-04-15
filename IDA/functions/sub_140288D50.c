#include "../winhttp.h"

//----- (0000000140288D50) ----------------------------------------------------
_BOOL8 __fastcall sub_140288D50(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v4; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	v4 = *(_QWORD*)(a1 + 96);
	if (v4 && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 32i64))(v4, a3))
	{
		if ((*(int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 40i64))(*(_QWORD*)(a1 + 96)) >= 0)
		{
			v6 = *(_QWORD*)(a1 + 104);
			if (v6)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				*(_QWORD*)(a1 + 104) = 0i64;
			}
			*(_QWORD*)(a1 + 104) = *(_QWORD*)(a1 + 96);
			*(_DWORD*)(a1 + 92) = *(_DWORD*)(a1 + 88);
			goto LABEL_11;
		}
		if (!*(_QWORD*)(a1 + 104))
			*(_DWORD*)(a1 + 72) = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 40i64))(*(_QWORD*)(a1 + 96));
		v7 = *(_QWORD*)(a1 + 96);
		if (v7)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		LABEL_11:
			*(_QWORD*)(a1 + 96) = 0i64;
		}
	}
	return !*(_QWORD*)(a1 + 96) || a2 >= *(_DWORD*)(a1 + 92);
}

