#include "../winhttp.h"

//----- (000000014088AC10) ----------------------------------------------------
BOOL __fastcall sub_14088AC10(__int64 a1, __int64 a2)
{
	__int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rdi
	int v7; // edx
	__int64 v8; // rax
	int v9; // ebx

	v3 = 0i64;
	v4 = qword_140C629D8;
	if (qword_140C629D8)
	{
		while (v4 != a2)
		{
			v3 = v4;
			v4 = *(_QWORD*)(v4 + 120);
			if (!v4)
				goto LABEL_12;
		}
		if (v4)
		{
			if (v4 == qword_140C629D8)
				qword_140C629D8 = *(_QWORD*)(v4 + 120);
			else
				*(_QWORD*)(v3 + 120) = *(_QWORD*)(v4 + 120);
			v5 = qword_140C629E0;
			if (v4 == qword_140C629E0)
				v5 = v3;
			qword_140C629E0 = v5;
		}
	}
LABEL_12:
	v6 = *(_QWORD*)(a2 + 104);
	if (v6)
	{
		v7 = *(_DWORD*)(v6 + 48);
		if (v7)
		{
			if ((*(_DWORD*)(a2 + 32) & 0x20000) != 0)
				sub_140845490((__int64)&unk_140C629F0, v7);
			sub_14083C1C0(qword_140C61B80, *(_DWORD*)(v6 + 48));
			if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 120i64))(a2))
			{
				v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 120i64))(a2);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 312i64))(v8, 3i64);
			}
		}
		v9 = dword_140C10F20;
		sub_14088C940((_QWORD*)v6);
		sub_140881720(v9, v6);
	}
	return SetEvent(qword_140C629D0);
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 140C629D8: using guessed type __int64 qword_140C629D8;
// 140C629E0: using guessed type __int64 qword_140C629E0;

