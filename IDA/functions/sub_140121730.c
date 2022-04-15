#include "../winhttp.h"

//----- (0000000140121730) ----------------------------------------------------
__int64 __fastcall sub_140121730(_QWORD* a1)
{
	unsigned int v2; // ebx
	unsigned int v3; // eax
	unsigned int v4; // esi
	__int64 v5; // rax
	__int64 v6; // rdx
	unsigned __int64 v7; // r8
	_WORD* v8; // rax
	__int64 v9; // rax
	double v10; // xmm0_8
	unsigned __int64 v11; // rcx
	unsigned __int16* v12; // rdx
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+28h] [rbp-20h]

	sub_140057020(a1, "Sound", &off_140B57178);
	v2 = 0;
	if (qword_140C63838)
	{
		v3 = qword_140C63838(off_140A6D038, qword_140C63858);
	}
	else
	{
		if (dword_140C65648 || (int)sub_140235AA0() < 0)
			goto LABEL_31;
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63D60 + 40i64))(qword_140C63D60);
	}
	v4 = v3;
	if (v3)
	{
		while (!qword_140C63848)
		{
			if (dword_140C65648)
			{
				v6 = 0i64;
			}
			else
			{
				if ((int)sub_140235AA0() >= 0)
				{
					v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63D60 + 32i64))(qword_140C63D60, v2);
					goto LABEL_14;
				}
				v6 = 0i64;
			}
		LABEL_15:
			v7 = *(_QWORD*)(v6 + 8);
			if (v7 && v7 <= qword_140C3FE70 && v7 + qword_140C3FE68)
			{
				v8 = v7 <= qword_140C3FE70 ? (_WORD*)(v7 + qword_140C3FE68) : 0i64;
				if (*v8 && *(_DWORD*)(v6 + 16))
				{
					v9 = a1[2];
					v10 = (double)*(int*)v6;
					*(_DWORD*)(v9 + 8) = 3;
					*(double*)v9 = v10;
					a1[2] += 16i64;
					v11 = *(_QWORD*)(v6 + 8);
					if (v11)
					{
						if (v11 <= qword_140C3FE70)
							v12 = (unsigned __int16*)(v11 + qword_140C3FE68);
						else
							v12 = 0i64;
					}
					else
					{
						v12 = 0i64;
					}
					sub_14018F0E0(&v14, v12);
					sub_140058A40((__int64)a1, -2);
					if (v15)
						sub_14018B900(v15, 0);
				}
			}
			if (++v2 >= v4)
				goto LABEL_31;
		}
		v5 = qword_140C63848(off_140A6D038, v2, qword_140C63858);
	LABEL_14:
		v6 = v5;
		goto LABEL_15;
	}
LABEL_31:
	a1[2] -= 16i64;
	return 1i64;
}
// 140121829: conditional instruction was optimized away because r8.8!=0
// 140A6D038: using guessed type wchar_t *off_140A6D038[2];
// 140B57178: using guessed type char *off_140B57178;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D60: using guessed type __int64 qword_140C63D60;
// 140C65648: using guessed type int dword_140C65648;

