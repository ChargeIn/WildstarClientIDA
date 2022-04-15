#include "../winhttp.h"

//----- (0000000140141820) ----------------------------------------------------
void __fastcall sub_140141820(__int64 a1, __int128* a2, float a3)
{
	unsigned __int64 v6; // rsi
	__int64 v7; // rdi
	__int64 v8; // rcx
	__int64 v9; // rdi
	__int128 v10; // [rsp+20h] [rbp-28h] BYREF

	if (*(_BYTE*)(a1 + 825))
		sub_1401411C0(a1);
	v6 = 0i64;
	LODWORD(v10) = 0;
	if (*(_BYTE*)(a1 + 824))
		goto LABEL_8;
	v7 = 0i64;
	if (!*(_QWORD*)(a1 + 816))
	{
	LABEL_7:
		*(_BYTE*)(a1 + 824) = 1;
	LABEL_8:
		v10 = *a2;
		if (*(_QWORD*)(a1 + 816))
		{
			do
			{
				v9 = *(_QWORD*)(*(_QWORD*)(a1 + 808) + 8 * v6);
				(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v9 + 40i64))(v9, a2);
				if ((*(float(__fastcall**)(__int64))(*(_QWORD*)v9 + 24i64))(v9) > a3)
					break;
				++v6;
				a3 = a3 - (*(float(__fastcall**)(__int64))(*(_QWORD*)v9 + 24i64))(v9);
			} while (v6 < *(_QWORD*)(a1 + 816));
		}
		return;
	}
	while (1)
	{
		v8 = *(_QWORD*)(*(_QWORD*)(a1 + 808) + 8 * v7);
		if (!(*(unsigned __int8(__fastcall**)(__int64, __int128*))(*(_QWORD*)v8 + 72i64))(v8, &v10))
			break;
		if ((unsigned __int64)++v7 >= *(_QWORD*)(a1 + 816))
			goto LABEL_7;
	}
}

