#include "../winhttp.h"

//----- (00000001404A5240) ----------------------------------------------------
__int64 __fastcall sub_1404A5240(__int64 a1)
{
	unsigned int v2; // eax
	unsigned int v3; // ebp
	int* v4; // rax
	int* v5; // rbx
	unsigned __int64 v6; // rax
	__int64 v7; // rax
	unsigned __int64 v8; // kr00_8
	int* v9; // rax
	unsigned __int64 v10; // r8
	unsigned int v11; // esi
	__int64 v12; // rax
	_DWORD* v13; // rdi
	__int64 v14; // rcx
	int* v15; // rbx
	__int64 v16; // rdi
	unsigned __int64 v17; // r15
	int** v18; // r14
	int* v19; // rax
	int* v20; // rcx

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6C2E0, qword_140C63858);
	}
	else
	{
		if (dword_140C647D0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_140225760() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64208 + 40i64))(qword_140C64208);
	}
	v3 = v2;
LABEL_9:
	v4 = sub_14018B280(40i64, 0);
	v5 = v4;
	if (v4)
	{
		*(_QWORD*)v4 = 0i64;
		v6 = sub_1401A40C0(v3);
		*((_QWORD*)v5 + 1) = v6;
		v8 = v6;
		v7 = 8 * v6;
		if (!is_mul_ok(v8, 8ui64))
			v7 = -1i64;
		v9 = sub_14018B280(v7, 0);
		v10 = 8i64 * *((_QWORD*)v5 + 1);
		*((_QWORD*)v5 + 2) = v9;
		sub_1407E4830(v9, 0i64, v10);
		*((_QWORD*)v5 + 3) = sub_1400522D0;
		*((_QWORD*)v5 + 4) = sub_1400522E0;
	}
	else
	{
		v5 = 0i64;
	}
	v11 = 0;
	*(_QWORD*)(a1 + 8) = v5;
	if (v3)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C647D0 && (int)sub_140225760() >= 0)
			{
				v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64208 + 32i64))(qword_140C64208, v11);
			LABEL_20:
				v13 = (_DWORD*)v12;
				if (v12)
				{
					v15 = sub_14018B280(32i64, 0);
					if (v15)
					{
						*(_QWORD*)v15 = 0i64;
						*((_QWORD*)v15 + 1) = 0i64;
						*((_QWORD*)v15 + 2) = 0i64;
						*((_QWORD*)v15 + 3) = 0i64;
					}
					else
					{
						v15 = 0i64;
					}
					sub_1404A5190(v14, v15, v13);
					v16 = *(_QWORD*)(a1 + 8);
					if (*(_QWORD*)v16 == *(_QWORD*)(v16 + 8))
						sub_1400290D0(*(_QWORD*)(a1 + 8));
					v17 = (*(__int64(__fastcall**)(int*))(v16 + 24))(v15);
					v18 = (int**)(*(_QWORD*)(v16 + 16) + 8 * (v17 % *(_QWORD*)(v16 + 8)));
					v19 = sub_14018B280(32i64, 0);
					if (v19)
					{
						v20 = *v18;
						*(_QWORD*)v19 = v17;
						*((_QWORD*)v19 + 1) = v20;
						LODWORD(v20) = *v15;
						*((_QWORD*)v19 + 3) = v15;
						v19[4] = (int)v20;
					}
					*v18 = v19;
					++* (_QWORD*)v16;
				}
			}
			if (++v11 >= v3)
				return 0i64;
		}
		v12 = qword_140C63848(off_140A6C2E0, v11, qword_140C63858);
		goto LABEL_20;
	}
	return 0i64;
}
// 1404A53B2: variable 'v14' is possibly undefined
// 140A6C2E0: using guessed type wchar_t *off_140A6C2E0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64208: using guessed type __int64 qword_140C64208;
// 140C647D0: using guessed type int dword_140C647D0;

