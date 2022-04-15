#include "../winhttp.h"

//----- (000000014086E300) ----------------------------------------------------
__int64 __fastcall sub_14086E300(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v4; // rbx
	char v5; // al
	bool v6; // zf
	__int16 v7; // ax
	__int16 v8; // ax
	int v9; // esi
	__int64 result; // rax

	if (*(char*)(a1 + 479) >= 0)
	{
		v4 = *(_QWORD*)(a1 + 8i64 * ((unsigned int)a3 % 0x1F) + 200);
		if (v4)
		{
			while (*(_QWORD*)(v4 + 8) != a3)
			{
				v4 = *(_QWORD*)(v4 + 16);
				if (!v4)
					goto LABEL_6;
			}
		}
		else
		{
		LABEL_6:
			v4 = 0i64;
		}
	}
	else
	{
		v4 = *(_QWORD*)(a1 + 456);
	}
	v5 = *(_BYTE*)(a2 + 24);
	*(_BYTE*)(v4 + 24) = v5;
	v6 = v5 == 0;
	v7 = *(_WORD*)(a2 + 26);
	if (v6)
		v8 = v7 + 1;
	else
		v8 = v7 - 1;
	*(_WORD*)(v4 + 26) = v8;
	v9 = v8;
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 192) + 24i64))(*(_QWORD*)(a1 + 192));
	if (v9 + 1 != (_DWORD)result || (*(_BYTE*)(a1 + 479) & 0x20) != 0)
	{
		if (!(_WORD)v9 && !*(_BYTE*)(v4 + 24))
			*(_BYTE*)(v4 + 24) = 1;
	}
	else
	{
		result = 0xFFFFFFFFi64;
		*(_WORD*)(v4 + 26) = -1;
	}
	return result;
}

