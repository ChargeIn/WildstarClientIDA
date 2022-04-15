#include "../winhttp.h"

//----- (000000014013E4B0) ----------------------------------------------------
char __fastcall sub_14013E4B0(__int64 a1, __int64 a2)
{
	__int64 v5; // rbp
	__int64 v6; // r12
	unsigned __int64 v7; // rsi
	__int64 v8; // rdi
	__int64 v9; // rbx
	__int64 v10; // rcx

	if (*(_BYTE*)(a1 + 24))
		return 1;
	v5 = 0i64;
	v6 = 0i64;
	if (!*(_QWORD*)(a1 + 72))
	{
	LABEL_12:
		*(_BYTE*)(a1 + 24) = 1;
		return 1;
	}
	while (1)
	{
		v7 = 0i64;
		if (*(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v6))
			break;
	LABEL_11:
		if ((unsigned __int64)++v6 >= *(_QWORD*)(a1 + 72))
			goto LABEL_12;
	}
	while (1)
	{
		v8 = *(_QWORD*)(*(_QWORD*)(a1 + 96) + 8 * v5);
		if (!*(_BYTE*)(v8 + 824))
			break;
	LABEL_10:
		++v7;
		++v5;
		if (v7 >= *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v6))
			goto LABEL_11;
	}
	v9 = 0i64;
	if (!*(_QWORD*)(v8 + 816))
	{
	LABEL_9:
		*(_BYTE*)(v8 + 824) = 1;
		goto LABEL_10;
	}
	while (1)
	{
		v10 = *(_QWORD*)(*(_QWORD*)(v8 + 808) + 8 * v9);
		if (!(*(unsigned __int8(__fastcall**)(__int64, __int64))(*(_QWORD*)v10 + 72i64))(v10, a2))
			return 0;
		if ((unsigned __int64)++v9 >= *(_QWORD*)(v8 + 816))
			goto LABEL_9;
	}
}

