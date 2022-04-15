#include "../winhttp.h"

//----- (00000001405FA4D0) ----------------------------------------------------
void __fastcall sub_1405FA4D0(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD** v3; // rax
	_QWORD* v6; // rbx
	unsigned int* v8; // rsi
	_QWORD* v9; // rdi
	_QWORD* v10; // rcx
	_QWORD* v11; // rax
	unsigned int v12; // ebx
	__int64 v13; // rax
	__int64 v14; // rcx
	unsigned int* v15; // rdx
	int v16; // eax
	int v17; // eax
	int v18; // eax
	__int64 v19; // rcx

	v3 = *(_QWORD***)(a3 + 8);
	v6 = *v3;
	if (*v3 != v3)
	{
		do
		{
			v8 = (unsigned int*)v6[2];
			v9 = (_QWORD*)*v6;
			if ((*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
				+ 24i64))(
					qword_140C659A0,
					0i64,
					v8[7],
					0i64,
					0i64,
					0))
			{
				v19 = *(_QWORD*)(a2 + 8);
				if (!v19 || *(_DWORD*)(v19 + 32) < v8[8])
				{
					sub_1405FA2D0(a1, v8[10]);
					*(_QWORD*)(a2 + 8) = v8;
				}
				goto LABEL_22;
			}
			v10 = (_QWORD*)*v6;
			v11 = (_QWORD*)v6[1];
			*v11 = *v6;
			v10[1] = v11;
			sub_14018B900((__int64)v6, 0);
			if (*(unsigned int**)(a2 + 8) == v8)
				*(_QWORD*)(a2 + 8) = 0i64;
			v12 = v8[10];
			if (qword_140C63840)
			{
				v13 = qword_140C63840(off_140A699F8, v12, qword_140C63858);
			}
			else
			{
				if (dword_140C64FDC || (int)sub_1401F3C40() < 0)
					goto LABEL_22;
				v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64BB0 + 24i64))(qword_140C64BB0, v12);
			}
			v15 = (unsigned int*)v13;
			if (v13)
			{
				v16 = *(_DWORD*)(v13 + 4);
				if (!v16)
					goto LABEL_18;
				v17 = v16 - 4;
				if (!v17)
				{
					if (*(_DWORD*)(qword_140C65898 + 31212) == v15[2])
						*(_DWORD*)(qword_140C65898 + 31212) = 0;
					goto LABEL_22;
				}
				v18 = v17 - 1;
				if (v18)
				{
					if (v18 == 1)
						sub_1405FAB30(v14, (__int64)v15);
				}
				else
				{
				LABEL_18:
					sub_1405FA960(a1, v15);
				}
			}
		LABEL_22:
			v6 = v9;
		} while (v9 != *(_QWORD**)(a3 + 8));
	}
}
// 1405FA5C5: variable 'v14' is possibly undefined
// 140A699F8: using guessed type wchar_t *off_140A699F8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64BB0: using guessed type __int64 qword_140C64BB0;
// 140C64FDC: using guessed type int dword_140C64FDC;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

