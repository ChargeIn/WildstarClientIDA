#include "../winhttp.h"

//----- (0000000140491A20) ----------------------------------------------------
__int64* __fastcall sub_140491A20(__int64 a1, int a2, unsigned int a3, int a4)
{
	_QWORD* v4; // r15
	_DWORD* v8; // r14
	_QWORD* v9; // rbx
	_QWORD* v10; // rsi
	__int64 v11; // rcx
	__int64 v12; // rdx
	__int64* v13; // rdi
	__int64 v14; // rax
	__int64 v15; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	unsigned int v18; // ebx
	__int64 v19; // rax

	v4 = (_QWORD*)qword_140C65968;
	if (a2 >= 4)
		return 0i64;
	v8 = (_DWORD*)sub_14024DB80(a3);
	if (!v8)
		return 0i64;
	while (1)
	{
		v9 = (_QWORD*)v4[6];
		v10 = v9;
		v11 = v9[1];
		v12 = v11;
		if (v11)
		{
			do
			{
				if (*v8 >= *(_DWORD*)(v12 + 32))
				{
					v12 = *(_QWORD*)(v12 + 24);
				}
				else
				{
					v10 = (_QWORD*)v12;
					v12 = *(_QWORD*)(v12 + 16);
				}
			} while (v12);
			do
			{
				if (*(_DWORD*)(v11 + 32) < *v8)
				{
					v11 = *(_QWORD*)(v11 + 24);
				}
				else
				{
					v9 = (_QWORD*)v11;
					v11 = *(_QWORD*)(v11 + 16);
				}
			} while (v11);
		}
		if (v9 != v10)
			break;
	LABEL_28:
		v18 = v8[2];
		if (qword_140C63840)
		{
			v19 = qword_140C63840(off_140A6E3E8, v18, qword_140C63858);
		}
		else
		{
			if (dword_140C64634 || (int)sub_14024D920() < 0)
				return 0i64;
			v19 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v18);
		}
		v8 = (_DWORD*)v19;
		if (!v19)
			return 0i64;
	}
	while (1)
	{
		v13 = (__int64*)v9[5];
		v14 = *v13;
		if (!a4)
			break;
		if (a4 == *(_DWORD*)(v14 + 12))
			goto LABEL_18;
	LABEL_19:
		v15 = v9[3];
		if (v15)
		{
			v9 = (_QWORD*)v9[3];
			for (i = *(_QWORD**)(v15 + 16); i; i = (_QWORD*)i[2])
				v9 = i;
		}
		else
		{
			for (j = v9[1]; v9 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v9 = (_QWORD*)j;
			if (v9[3] != j)
				v9 = (_QWORD*)j;
		}
		if (v9 == v10)
			goto LABEL_28;
	}
	if (!(*(unsigned int(__fastcall**)(_QWORD*, _QWORD))(*v4 + 16i64))(v4, *(unsigned int*)(v14 + 12)))
		goto LABEL_19;
LABEL_18:
	if (*(_DWORD*)(*v13 + 20) != a2)
		goto LABEL_19;
	return v13;
}
// 140491AA0: conditional instruction was optimized away because rcx.8!=0
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;
// 140C65968: using guessed type __int64 qword_140C65968;

