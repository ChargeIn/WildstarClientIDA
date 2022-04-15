#include "../winhttp.h"

//----- (0000000140576E50) ----------------------------------------------------
__int64 __fastcall sub_140576E50(__int64 a1, __int64 a2, __int64* a3)
{
	__int64* v3; // r14
	int* v6; // rax
	__int64 v7; // rdi
	int v8; // ebx
	__int64 v9; // rax
	__int64 v10; // rax

	v3 = (__int64*)qword_140C65B78;
	v6 = sub_14018B280(768i64, 8u);
	v7 = (__int64)v6;
	if (v6)
	{
		sub_14071BE70((__int64)v6);
		*(_QWORD*)v7 = off_140B74060;
		sub_1407E4830((int*)(v7 + 352), 0i64, 0xD0ui64);
		sub_1407E4830((int*)(v7 + 352), 0i64, 0x190ui64);
		*(_QWORD*)(v7 + 752) = 0i64;
	}
	else
	{
		v7 = 0i64;
	}
	sub_14071E280(v7 + 352, a2);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v7 + 96i64))(v7, *(unsigned int*)(v7 + 740));
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 128i64))(v7);
	v8 = sub_14071C0B0(v7, v7 + 352);
	if (v8 >= 0)
	{
		if (!*(_QWORD*)(v7 + 24))
		{
			*(_QWORD*)(v7 + 24) = v3;
			*(_QWORD*)(v7 + 32) = *v3;
			*v3 = v7;
			v9 = *(_QWORD*)(v7 + 32);
			if (v9)
				*(_QWORD*)(v9 + 24) = v7 + 32;
		}
		if (a3)
		{
			if (!*(_QWORD*)(v7 + 8))
			{
				*(_QWORD*)(v7 + 8) = a3;
				*(_QWORD*)(v7 + 16) = *a3;
				*a3 = v7;
				v10 = *(_QWORD*)(v7 + 16);
				if (v10)
					*(_QWORD*)(v10 + 8) = v7 + 16;
			}
		}
	}
	else
	{
		(**(void(__fastcall***)(__int64, __int64))v7)(v7, 1i64);
	}
	return (unsigned int)v8;
}
// 140B74060: using guessed type __int64 (__fastcall *off_140B74060[17])();
// 140C65B78: using guessed type __int64 qword_140C65B78;

