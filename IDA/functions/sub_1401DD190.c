#include "../winhttp.h"

//----- (00000001401DD190) ----------------------------------------------------
__int64 __fastcall sub_1401DD190(__int64 a1, __int64* a2, __int64* a3)
{
	unsigned __int64 v6; // rsi
	_QWORD* v7; // rbx
	int* v8; // rax
	__int64 v9; // rbx
	__int64* v10; // rbx
	int v12; // edi

	v6 = (*(__int64(__fastcall**)(__int64*))(a1 + 280))(a2);
	v7 = *(_QWORD**)(*(_QWORD*)(a1 + 272) + 8 * (v6 % *(_QWORD*)(a1 + 264)));
	if (v7)
	{
		while (v6 != *v7 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a1 + 288))(a2, v7 + 2))
		{
			v7 = (_QWORD*)v7[1];
			if (!v7)
				goto LABEL_5;
		}
		v10 = v7 + 149;
		if (v10)
		{
			v9 = *v10;
			(**(void(__fastcall***)(__int64))v9)(v9);
		LABEL_9:
			*a3 = v9;
			return 0i64;
		}
	}
LABEL_5:
	v8 = sub_14018B280(1288i64, 0);
	v9 = (__int64)v8;
	if (v8)
	{
		*(_QWORD*)v8 = off_140B55048;
		v8[2] = 1;
		*(_QWORD*)v8 = off_140B602D0;
		*((_QWORD*)v8 + 157) = 0i64;
		*((_QWORD*)v8 + 158) = 0i64;
		*((_QWORD*)v8 + 159) = 0i64;
		*((_QWORD*)v8 + 160) = 0i64;
		*((_QWORD*)v8 + 2) = a1;
	}
	else
	{
		v9 = 0i64;
	}
	v12 = sub_1401E5130(v9, a2);
	if (v12 >= 0)
		goto LABEL_9;
	if (v9)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 16i64))(v9, 1i64);
	return (unsigned int)v12;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B602D0: using guessed type __int64 (__fastcall *off_140B602D0[3])();

