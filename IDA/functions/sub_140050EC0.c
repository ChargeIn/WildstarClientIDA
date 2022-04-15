#include "../winhttp.h"

//----- (0000000140050EC0) ----------------------------------------------------
__int64 __fastcall sub_140050EC0(__int64 a1, unsigned int a2, _DWORD* a3, _WORD* a4)
{
	_DWORD* v6; // rax
	unsigned int v8; // edi
	unsigned int* v9; // r14
	__int64 v10; // rbp
	unsigned int v11; // ebx
	__int64 v12; // rax
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // r8
	__int64 v15; // rdx
	_WORD* v16; // rcx
	unsigned __int64 v17; // r8
	__int16 v18; // ax

	v6 = (_DWORD*)sub_140233B00(a2);
	if (!v6)
		return 2147500037i64;
	*a3 = v6[4];
	a3[1] = v6[5];
	v8 = -2147467259;
	v9 = v6 + 6;
	v10 = 8i64;
	a3[2] = v6[14];
	do
	{
		v11 = *v9;
		if (qword_140C63840)
		{
			v12 = qword_140C63840(off_140A6CD60, v11, qword_140C63858);
		}
		else
		{
			if (dword_140C640C8 || (int)sub_140232360() < 0)
				goto LABEL_21;
			v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B00 + 24i64))(qword_140C63B00, v11);
		}
		if (v12)
		{
			v13 = *(_QWORD*)(v12 + 8);
			if (v13)
			{
				if (v13 <= qword_140C3FE70)
					v14 = v13 + qword_140C3FE68;
				else
					v14 = 0i64;
			}
			else
			{
				v14 = 0i64;
			}
			v15 = 32i64;
			v16 = a4;
			v17 = v14 - (_QWORD)a4;
			while (v15 != -2147483614)
			{
				v18 = *(_WORD*)((char*)v16 + v17);
				if (!v18)
					break;
				*v16++ = v18;
				if (!--v15)
				{
					--v16;
					break;
				}
			}
			*v16 = 0;
			v8 = 0;
		}
	LABEL_21:
		++v9;
		a4 += 32;
		--v10;
	} while (v10);
	return v8;
}
// 140050FC7: conditional instruction was optimized away because rdx.8!=0
// 140A6CD60: using guessed type wchar_t *off_140A6CD60[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B00: using guessed type __int64 qword_140C63B00;
// 140C640C8: using guessed type int dword_140C640C8;

