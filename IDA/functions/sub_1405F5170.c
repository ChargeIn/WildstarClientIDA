#include "../winhttp.h"

//----- (00000001405F5170) ----------------------------------------------------
__int64 __fastcall sub_1405F5170(__int64 a1, int* a2)
{
	__int64 v2; // rbp
	_QWORD* v4; // r8
	_QWORD* v5; // rax
	int v6; // r9d
	__int64 v7; // rdx
	unsigned int v8; // edi
	__int64 v9; // rax
	__int64 v10; // rsi
	int* v11; // rax
	int* v12; // rdi
	int v13; // edx
	int v14; // ecx
	int v15; // ecx
	int* v16; // rax
	int v17; // esi
	_QWORD* v18; // rbx
	int* v19; // rax

	v2 = qword_140C65980;
	v4 = *(_QWORD**)(qword_140C65980 + 48);
	v5 = (_QWORD*)*v4;
	if ((_QWORD*)*v4 == v4)
	{
	LABEL_7:
		v8 = a2[1];
		if (qword_140C63840)
		{
			v9 = qword_140C63840(off_140A6C698, v8, qword_140C63858);
		}
		else
		{
			if (dword_140C65308 || (int)sub_140229FA0() < 0)
				return 0i64;
			v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C655B0 + 24i64))(qword_140C655B0, v8);
		}
		v10 = v9;
		if (v9)
		{
			v11 = sub_14018B280(56i64, 0);
			v12 = v11;
			if (v11)
			{
				v13 = a2[2];
				v14 = *a2;
				*(_QWORD*)v11 = v10;
				v11[2] = v14;
				v15 = dword_140C636A8;
				v11[3] = v13;
				v11[5] = v15;
				v11[4] = 1;
				v16 = sub_14018B280(40i64, 0);
				v17 = 0;
				*((_QWORD*)v12 + 4) = v16;
				*((_QWORD*)v12 + 5) = 0i64;
				*(_BYTE*)v16 = 0;
				*(_QWORD*)(*((_QWORD*)v12 + 4) + 8i64) = 0i64;
				*(_QWORD*)(*((_QWORD*)v12 + 4) + 16i64) = *((_QWORD*)v12 + 4);
				*(_QWORD*)(*((_QWORD*)v12 + 4) + 24i64) = *((_QWORD*)v12 + 4);
			}
			else
			{
				v17 = 0;
				v12 = 0i64;
			}
			v18 = *(_QWORD**)(v2 + 48);
			LOBYTE(v17) = *v18 == (_QWORD)v18;
			v19 = sub_14018B280(24i64, 0);
			if (v19 != (int*)-16i64)
				*((_QWORD*)v19 + 2) = v12;
			*(_QWORD*)v19 = v18;
			*((_QWORD*)v19 + 1) = v18[1];
			*(_QWORD*)v18[1] = v19;
			v18[1] = v19;
			if (v17)
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PublicEventInitiateVote", &unk_1409D10FB);
		}
	}
	else
	{
		v6 = a2[1];
		while (1)
		{
			v7 = v5[2];
			if (**(_DWORD**)v7 == v6 && *(_DWORD*)(v7 + 12) == a2[2] && *(_DWORD*)(v7 + 8) == *a2)
				break;
			v5 = (_QWORD*)*v5;
			if (v5 == v4)
				goto LABEL_7;
		}
	}
	return 0i64;
}
// 140A6C698: using guessed type wchar_t *off_140A6C698[2];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65308: using guessed type int dword_140C65308;
// 140C655B0: using guessed type __int64 qword_140C655B0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

