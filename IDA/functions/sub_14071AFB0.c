#include "../winhttp.h"

//----- (000000014071AFB0) ----------------------------------------------------
void __fastcall sub_14071AFB0(__int64 a1)
{
	bool v1; // zf
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rax

	v1 = *(_DWORD*)(a1 + 232) == 0;
	*(_QWORD*)a1 = off_140B743F0;
	if (!v1)
	{
		v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 392));
		if (v3)
		{
			v4 = *(_QWORD*)(v3 + 3264);
			if (v4)
			{
				v5 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 112i64))(v4, 20i64);
				if (v5)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 112i64))(v5);
			}
		}
		v6 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 392));
		if (v6)
		{
			v7 = *(_QWORD*)(v6 + 3264);
			if (v7)
			{
				v8 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v7 + 112i64))(v7, 20i64, 1i64);
				if (v8)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 112i64))(v8);
			}
		}
	}
	sub_140719D60(a1);
}
// 140B743F0: using guessed type __int64 (__fastcall *off_140B743F0[11])();
// 140C65898: using guessed type __int64 qword_140C65898;

