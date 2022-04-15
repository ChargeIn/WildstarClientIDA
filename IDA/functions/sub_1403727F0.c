#include "../winhttp.h"

//----- (00000001403727F0) ----------------------------------------------------
void __fastcall sub_1403727F0(__int64 a1)
{
	__int64 v2; // rsi
	unsigned __int64 v3; // rbp
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	int v9; // [rsp+20h] [rbp-18h] BYREF
	__int64 v10; // [rsp+28h] [rbp-10h]

	*(_QWORD*)a1 = off_140B65A60;
	if (*(_DWORD*)(a1 + 32))
	{
		v9 = *(_DWORD*)(a1 + 32);
		v2 = *(_QWORD*)(a1 + 16) + 1920i64;
		v10 = *(_QWORD*)(a1 + 24);
		v3 = (*(__int64(__fastcall**)(int*))(v2 + 24))(&v9);
		v4 = *(_QWORD*)(v2 + 16) + 8 * (v3 % *(_QWORD*)(v2 + 8));
		if (*(_QWORD*)v4)
		{
			while (v3 != **(_QWORD**)v4
				|| !(*(unsigned int(__fastcall**)(int*, __int64))(v2 + 32))(&v9, *(_QWORD*)v4 + 16i64))
			{
				v4 = *(_QWORD*)v4 + 8i64;
				if (!*(_QWORD*)v4)
					goto LABEL_8;
			}
			v5 = *(_QWORD*)v4;
			*(_QWORD*)v4 = *(_QWORD*)(*(_QWORD*)v4 + 8i64);
			sub_14018B900(v5, 0);
			--* (_QWORD*)v2;
		}
	}
LABEL_8:
	v6 = *(_QWORD*)(a1 + 48);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	v7 = *(_QWORD*)(a1 + 40);
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	v8 = *(_QWORD*)(a1 + 848);
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
}
// 140B65A60: using guessed type __int64 (__fastcall *off_140B65A60[14])();

