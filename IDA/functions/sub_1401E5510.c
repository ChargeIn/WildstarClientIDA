#include "../winhttp.h"

//----- (00000001401E5510) ----------------------------------------------------
__int64 __fastcall sub_1401E5510(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rbx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx

	v2 = *(_QWORD**)(a1 + 1256);
	if (v2)
	{
		while (1)
		{
			v5 = v2[1];
			if (v5)
			{
				if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 32i64))(v5, a2))
					return 0i64;
			}
			v6 = v2[2];
			if (v6)
			{
				if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 32i64))(v6, a2))
					return 0i64;
			}
			v7 = v2[3];
			if (v7)
			{
				if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 32i64))(v7, a2))
					return 0i64;
			}
			v8 = v2[4];
			if (v8)
			{
				if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 32i64))(v8, a2))
					return 0i64;
			}
			v2 = (_QWORD*)v2[6];
			if (!v2)
				goto LABEL_11;
		}
	}
	else
	{
	LABEL_11:
		*(_DWORD*)(a1 + 1204) = 1;
		return 1i64;
	}
}

