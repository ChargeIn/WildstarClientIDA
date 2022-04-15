#include "../winhttp.h"

//----- (00000001405FAC80) ----------------------------------------------------
void __fastcall sub_1405FAC80(__int64 a1, unsigned int a2)
{
	__int64 v2; // r9
	__int64 v4; // rax
	__int64 v5; // r8
	__int64 v6; // r15
	_QWORD** v7; // rax
	_QWORD* v8; // rbx
	__int64 v9; // rbp
	_QWORD* v10; // rsi
	unsigned int v11; // r14d
	__int64 v12; // rax
	_QWORD* v13; // rcx
	_QWORD* v14; // rax
	__int64 v15; // [rsp+50h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 56);
	v4 = *(_QWORD*)(v2 + 8);
	v5 = v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == v2 || (v15 = v5, a2 < *(_DWORD*)(v5 + 32)))
		v15 = *(_QWORD*)(a1 + 56);
	if (v15 != v2)
	{
		v6 = *(_QWORD*)(v15 + 40);
		v7 = *(_QWORD***)(v6 + 8);
		v8 = *v7;
		if (*v7 != v7)
		{
			do
			{
				v9 = v8[2];
				v10 = (_QWORD*)*v8;
				if (v9)
				{
					v11 = *(_DWORD*)(v9 + 40);
					if (qword_140C63840)
					{
						v12 = qword_140C63840(off_140A699F8, v11, qword_140C63858);
						goto LABEL_17;
					}
					if (!dword_140C64FDC && (int)sub_1401F3C40() >= 0)
					{
						v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64BB0 + 24i64))(
							qword_140C64BB0,
							v11);
					LABEL_17:
						if (v12)
						{
							v13 = (_QWORD*)*v8;
							v14 = (_QWORD*)v8[1];
							*v14 = *v8;
							v13[1] = v14;
							sub_14018B900((__int64)v8, 0);
							if (*(_QWORD*)(v15 + 48) == v9)
							{
								*(_QWORD*)(v15 + 48) = 0i64;
								sub_1405FA640(a1, v9);
							}
							v8 = v10;
						}
					}
				}
			} while (v8 != *(_QWORD**)(v6 + 8));
		}
	}
}
// 140A699F8: using guessed type wchar_t *off_140A699F8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64BB0: using guessed type __int64 qword_140C64BB0;
// 140C64FDC: using guessed type int dword_140C64FDC;

