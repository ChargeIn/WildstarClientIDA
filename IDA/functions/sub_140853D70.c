#include "../winhttp.h"

//----- (0000000140853D70) ----------------------------------------------------
__int64 __fastcall sub_140853D70(__int64 a1)
{
	int v2; // r14d
	struct _RTL_CRITICAL_SECTION* v3; // rbx
	bool v4; // zf
	unsigned int v5; // ebp
	unsigned int v6; // edi
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rcx
	int v10; // edi

	v2 = 0;
	v3 = (struct _RTL_CRITICAL_SECTION*)sub_140830ED0((__int64)qword_140C61BA8, (*(_BYTE*)(a1 + 91) & 2) != 0);
	EnterCriticalSection(v3);
	v4 = (*(_DWORD*)(a1 + 8))-- == 1;
	v5 = *(_DWORD*)(a1 + 8);
	if (v4)
	{
		v6 = *(_DWORD*)(a1 + 24);
		LOBYTE(v2) = (*(_BYTE*)(a1 + 91) & 2) != 0;
		v7 = sub_140830ED0((__int64)qword_140C61BA8, v2);
		sub_140868870(v7, v6);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
		v8 = *(_QWORD*)(a1 + 64);
		if (v8)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 96i64))(v8, a1);
		v9 = *(_QWORD*)(a1 + 72);
		if (v9)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 96i64))(v9, a1);
		v10 = dword_140C10F20;
		(**(void(__fastcall***)(__int64, _QWORD))a1)(a1, 0i64);
		sub_140881720(v10, a1);
	}
	LeaveCriticalSection(v3);
	return v5;
}
// 140C10F20: using guessed type int dword_140C10F20;

