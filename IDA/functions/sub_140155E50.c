#include "../winhttp.h"

//----- (0000000140155E50) ----------------------------------------------------
__int64 __fastcall sub_140155E50(__int64 a1)
{
	_QWORD* v1; // rsi
	unsigned int v4; // ebx
	int* v5; // rax
	__int64 v6; // rax
	__int64 v7; // r8
	char v8; // [rsp+50h] [rbp+8h] BYREF
	__int64 v9; // [rsp+58h] [rbp+10h] BYREF

	v1 = (_QWORD*)(a1 + 472);
	if (CoCreateInstance(&stru_1409C6400, 0i64, 1u, &stru_140B5C778, (LPVOID*)(a1 + 472))
		|| (*(int(__fastcall**)(_QWORD, char*, __int64))(*(_QWORD*)*v1 + 112i64))(*v1, &v8, 4i64) < 0)
	{
		return 0i64;
	}
	v4 = 0;
	v5 = sub_14018B280(32i64, 0);
	if (v5)
	{
		v5[6] = 1;
		*(_QWORD*)v5 = &off_140B5C818;
		*((_QWORD*)v5 + 1) = off_140B5C7F8;
		*((_QWORD*)v5 + 2) = off_140B5C7C8;
	}
	else
	{
		v5 = 0i64;
	}
	*(_QWORD*)(a1 + 488) = v5;
	if (v5 && (**(int(__fastcall***)(_QWORD, void*, __int64*)) * v1)(*v1, &unk_140B5C848, &v9) >= 0)
	{
		if ((*(int(__fastcall**)(__int64, __int64*, _QWORD, __int64))(*(_QWORD*)v9 + 24i64))(
			v9,
			&qword_140B5C858,
			*(_QWORD*)(a1 + 488),
			a1 + 496) >= 0)
		{
			v6 = *(_QWORD*)(a1 + 488);
			v7 = v6 + 8;
			if (!v6)
				v7 = 0i64;
			if ((*(int(__fastcall**)(__int64, __int64*, __int64, __int64))(*(_QWORD*)v9 + 24i64))(
				v9,
				&qword_140B5C7E8,
				v7,
				a1 + 500) >= 0)
			{
				if ((unsigned int)sub_140156170(a1, 0))
					v4 = 1;
			}
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
	}
	return v4;
}
// 140B5C7C8: using guessed type __int64 (__fastcall *off_140B5C7C8[4])();
// 140B5C7E8: using guessed type __int64 qword_140B5C7E8;
// 140B5C7F8: using guessed type __int64 (__fastcall *off_140B5C7F8[3])();
// 140B5C818: using guessed type __int64 (__fastcall *off_140B5C818)();
// 140B5C858: using guessed type __int64 qword_140B5C858;

