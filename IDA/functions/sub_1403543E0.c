#include "../winhttp.h"

//----- (00000001403543E0) ----------------------------------------------------
__int64 __fastcall sub_1403543E0(__int64 a1, int a2, __int64 a3, int** a4)
{
	__int64 result; // rax
	unsigned __int64 v9; // rsi
	_QWORD* v10; // rbx
	int* v11; // rbx
	int** v12; // rbx
	int v13; // edi
	int v14; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+28h] [rbp-20h]

	if (!a4)
		return 2147942487i64;
	v14 = a2;
	v15 = a3;
	v9 = (*(__int64(__fastcall**)(int*))(a1 + 1944))(&v14);
	v10 = *(_QWORD**)(*(_QWORD*)(a1 + 1936) + 8 * (v9 % *(_QWORD*)(a1 + 1928)));
	if (v10)
	{
		while (v9 != *v10 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 1952))(&v14, v10 + 2))
		{
			v10 = (_QWORD*)v10[1];
			if (!v10)
				goto LABEL_7;
		}
		v12 = (int**)(v10 + 4);
		if (v12)
		{
			v11 = *v12;
			(**(void(__fastcall***)(int*))v11)(v11);
		LABEL_11:
			result = 0i64;
			*a4 = v11;
			return result;
		}
	}
LABEL_7:
	v11 = sub_14018B280(864i64, 0);
	if (v11)
	{
		*(_QWORD*)v11 = off_140B65A60;
		sub_1407E4830(v11 + 16, 0i64, 0x310ui64);
		*((_QWORD*)v11 + 106) = 0i64;
		v11[2] = 1;
		*((_QWORD*)v11 + 2) = a1;
		*((_QWORD*)v11 + 3) = a3;
		v11[8] = 0;
		*((_QWORD*)v11 + 5) = 0i64;
		*((_QWORD*)v11 + 6) = 0i64;
	}
	else
	{
		v11 = 0i64;
	}
	v13 = sub_1403728F0((__int64)v11, a2);
	if (v13 >= 0)
		goto LABEL_11;
	if (v11)
	{
		sub_1403727F0((__int64)v11);
		sub_14018B900((__int64)v11, 0);
	}
	return (unsigned int)v13;
}
// 140B65A60: using guessed type __int64 (__fastcall *off_140B65A60[14])();

