#include "../winhttp.h"

//----- (000000014012F090) ----------------------------------------------------
__int64 __fastcall sub_14012F090(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD* v3; // rsi
	__int64 v4; // rbx
	unsigned __int64* v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v8; // [rsp+20h] [rbp-188h] BYREF
	__int64 v9; // [rsp+28h] [rbp-180h]
	__int64 v10[2]; // [rsp+40h] [rbp-168h] BYREF
	char* v11; // [rsp+50h] [rbp-158h]
	char v12; // [rsp+58h] [rbp-150h] BYREF
	unsigned __int16* v13; // [rsp+150h] [rbp-58h]
	char v14; // [rsp+158h] [rbp-50h] BYREF

	v2 = sub_14012AAF0(a1, 1u);
	v3 = *(_QWORD**)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 16i64))(v2) + 8);
	if (v3 && (v4 = v3[6]) != 0)
	{
		while (!(**(__int64(__fastcall***)(__int64))v4)(v4))
		{
			v4 = *(_QWORD*)(v4 + 72);
			if (!v4)
				goto LABEL_5;
		}
		sub_1401A8320((__int64)v10);
		if ((*(unsigned __int8(__fastcall**)(_QWORD*, __int64*))(*v3 + 112i64))(v3, v10))
		{
			v6 = (unsigned __int64*)sub_14018F0E0(&v8, v13)[1];
			if (v6)
			{
				v7 = -1i64;
				do
					++v7;
				while (*((_BYTE*)v6 + v7));
				sub_140058710((__int64)a1, v6, v7);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v9)
				sub_14018B900(v9, 0);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		v10[0] = (__int64)off_140B57B40;
		if (v13 != (unsigned __int16*)&v14)
			sub_14018B900((__int64)v13, 0);
		if (v11 != &v12)
			sub_14018B900((__int64)v11, 0);
	}
	else
	{
	LABEL_5:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140B57B40: using guessed type __int64 (__fastcall *off_140B57B40[21])();

