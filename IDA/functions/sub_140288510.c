#include "../winhttp.h"

//----- (0000000140288510) ----------------------------------------------------
void __fastcall sub_140288510(__int64 a1)
{
	int v2; // eax
	__int64 v3; // rsi
	__int64 v4; // rax
	__int64 v5; // rsi
	unsigned __int64 v6; // rbp
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	_DWORD v12[6]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+38h] [rbp-10h]

	*(_QWORD*)a1 = off_140B61748;
	if (*(_QWORD*)(a1 + 40))
	{
		v2 = *(_DWORD*)(a1 + 24);
		v12[0] = 0;
		v12[2] = v2;
		v12[3] = *(_DWORD*)(a1 + 28);
		v3 = *(_QWORD*)(a1 + 16);
		v12[4] = *(_DWORD*)(a1 + 32);
		v4 = *(_QWORD*)(a1 + 40);
		v12[1] = 1;
		v13 = v4;
		v5 = v3 + 6200;
		v12[5] = *(_DWORD*)(a1 + 48);
		v6 = (*(__int64(__fastcall**)(_DWORD*))(v5 + 24))(v12);
		v7 = *(_QWORD*)(v5 + 16) + 8 * (v6 % *(_QWORD*)(v5 + 8));
		if (*(_QWORD*)v7)
		{
			while (v6 != **(_QWORD**)v7
				|| !(*(unsigned int(__fastcall**)(_DWORD*, __int64))(v5 + 32))(v12, *(_QWORD*)v7 + 16i64))
			{
				v7 = *(_QWORD*)v7 + 8i64;
				if (!*(_QWORD*)v7)
					goto LABEL_8;
			}
			v8 = *(_QWORD*)v7;
			*(_QWORD*)v7 = *(_QWORD*)(*(_QWORD*)v7 + 8i64);
			sub_14018B900(v8, 0);
			--* (_QWORD*)v5;
		}
	LABEL_8:
		sub_14018B900(*(_QWORD*)(a1 + 40), 0);
	}
	v9 = *(_QWORD*)(a1 + 56);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	v10 = *(_QWORD*)(a1 + 96);
	if (v10)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		*(_QWORD*)(a1 + 96) = 0i64;
	}
	v11 = *(_QWORD*)(a1 + 104);
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		*(_QWORD*)(a1 + 104) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 80), 0);
}
// 140B61748: using guessed type __int64 (__fastcall *off_140B61748[8])();

