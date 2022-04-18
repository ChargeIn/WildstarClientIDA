#include "../winhttp.h"

//----- (00000001405F54C0) ----------------------------------------------------
__int64 __fastcall sub_1405F54C0(__int64 a1, _DWORD* a2)
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
	int v12; // edi
	__int64 v13; // rsi
	_QWORD* v14; // rbx
	int* v15; // rax

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
			v12 = 0;
			if (v11)
				v13 = sub_1405F4B60((__int64)v11, v10, (__int64)a2);
			else
				v13 = 0i64;
			v14 = *(_QWORD**)(v2 + 48);
			LOBYTE(v12) = *v14 == (_QWORD)v14;
			v15 = sub_14018B280(24i64, 0);
			if (v15 != (int*)-16i64)
				*((_QWORD*)v15 + 2) = v13;
			*(_QWORD*)v15 = v14;
			*((_QWORD*)v15 + 1) = v14[1];
			*(_QWORD*)v14[1] = v15;
			v14[1] = v15;
			if (v12)
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "PublicEventInitiateVote", &unk_1409D10FB);
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
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65308: using guessed type int dword_140C65308;
// 140C655B0: using guessed type __int64 qword_140C655B0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

