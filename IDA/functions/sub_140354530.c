#include "../winhttp.h"

//----- (0000000140354530) ----------------------------------------------------
__int64 __fastcall sub_140354530(__int64 a1, int a2, int** a3)
{
	unsigned __int64 v5; // rsi
	_QWORD* v6; // rbx
	int* v7; // rbx
	int** v8; // rbx
	__int64 result; // rax
	int v10; // edi
	int v11; // [rsp+38h] [rbp+10h] BYREF

	v11 = a2;
	v5 = (*(__int64(__fastcall**)(int*))(a1 + 1984))(&v11);
	v6 = *(_QWORD**)(*(_QWORD*)(a1 + 1976) + 8 * (v5 % *(_QWORD*)(a1 + 1968)));
	if (v6)
	{
		while (v5 != *v6 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 1992))(&v11, v6 + 2))
		{
			v6 = (_QWORD*)v6[1];
			if (!v6)
				goto LABEL_5;
		}
		v8 = (int**)(v6 + 3);
		if (v8)
		{
			v7 = *v8;
			(**(void(__fastcall***)(int*))v7)(v7);
		LABEL_9:
			result = 0i64;
			*a3 = v7;
			return result;
		}
	}
LABEL_5:
	v7 = sub_14018B280(48i64, 0);
	if (v7)
	{
		v7[2] = 1;
		*((_QWORD*)v7 + 2) = a1;
		*(_QWORD*)v7 = off_140B65A70;
		v7[6] = 0;
	}
	else
	{
		v7 = 0i64;
	}
	v10 = sub_140372DB0((__int64)v7, v11);
	if (v10 >= 0)
		goto LABEL_9;
	if (v7)
		sub_140354620((__int64)v7);
	return (unsigned int)v10;
}
// 140B65A70: using guessed type __int64 (__fastcall *off_140B65A70[12])();

