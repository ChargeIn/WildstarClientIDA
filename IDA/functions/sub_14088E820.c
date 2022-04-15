#include "../winhttp.h"

//----- (000000014088E820) ----------------------------------------------------
__int64 __fastcall sub_14088E820(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned __int16 v5; // si
	struct _RTL_CRITICAL_SECTION* v6; // rbx
	unsigned __int16 v7; // ax
	int v8; // ebp
	__int64 v9; // rax
	__int64 v10; // rdi

	sub_14088B340(a1, a3);
	*(_QWORD*)a1 = off_1409A83A0;
	*(_QWORD*)(a1 + 24) = off_1409A83E8;
	*(_QWORD*)(a1 + 40) = &off_1409A93A0;
	sub_140894F70((_QWORD*)(a1 + 104));
	v5 = 0;
	*(_QWORD*)(a1 + 128) = a2;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_DWORD*)(a1 + 144) = 0;
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_DWORD*)(a1 + 168) = 0;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_DWORD*)(a1 + 192) = 0;
	*(_QWORD*)(a1 + 200) = 0i64;
	if (!*(_QWORD*)(a1 + 128))
		return a1;
	v6 = (struct _RTL_CRITICAL_SECTION*)sub_140830ED0((__int64)qword_140C61BA8, 0);
	EnterCriticalSection(v6);
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 8i64))(*(_QWORD*)(a1 + 128));
	v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 656i64))(*(_QWORD*)(a1 + 128));
	v8 = v7;
	if (v7)
	{
		v9 = sub_1408819F0(dword_140C10F20, 8i64 * v7);
		*(_QWORD*)(a1 + 152) = v9;
		*(_QWORD*)(a1 + 160) = v9;
		if (v9)
		{
			*(_DWORD*)(a1 + 168) = v8;
			if (v8 > 0)
			{
				do
				{
					v10 = sub_1408928B0(*(_QWORD*)(a1 + 128), v5);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
					sub_14084CA80(a1 + 152, v10);
					++v5;
				} while (v5 < v8);
			}
		}
	}
	LeaveCriticalSection(v6);
	return a1;
}
// 1409A83A0: using guessed type __int64 (__fastcall *off_1409A83A0[5])();
// 1409A83E8: using guessed type __int64 (__fastcall *off_1409A83E8[2])();
// 1409A93A0: using guessed type __int64 (__fastcall *off_1409A93A0)();
// 140C10F20: using guessed type int dword_140C10F20;

