#include "../winhttp.h"

//----- (00000001403266D0) ----------------------------------------------------
int* __fastcall sub_1403266D0(__int64 a1, __int64* a2)
{
	unsigned __int64 v3; // rsi
	_QWORD* v4; // rbx
	int* result; // rax
	unsigned __int64 v6; // rsi
	int** v7; // rbx
	int* v8; // rax
	int* v9; // rcx
	int* v10; // rbx
	__int64 v11; // [rsp+20h] [rbp-18h] BYREF

	v11 = *a2;
	v3 = (*(__int64(__fastcall**)(__int64*))(a1 + 136))(&v11);
	v4 = *(_QWORD**)(*(_QWORD*)(a1 + 128) + 8 * (v3 % *(_QWORD*)(a1 + 120)));
	if (!v4)
		goto LABEL_7;
	while (v3 != *v4 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a1 + 144))(&v11, v4 + 2))
	{
		v4 = (_QWORD*)v4[1];
		if (!v4)
			goto LABEL_7;
	}
	result = (int*)(v4 + 3);
	if (v4 == (_QWORD*)-24i64)
	{
	LABEL_7:
		if (*(_QWORD*)(a1 + 112) == *(_QWORD*)(a1 + 120))
			sub_1400290D0(a1 + 112);
		v6 = (*(__int64(__fastcall**)(__int64*))(a1 + 136))(&v11);
		v7 = (int**)(*(_QWORD*)(a1 + 128) + 8 * (v6 % *(_QWORD*)(a1 + 120)));
		v8 = sub_14018B280(56i64, 0);
		if (v8)
		{
			v9 = *v7;
			*(_QWORD*)v8 = v6;
			*((_QWORD*)v8 + 1) = v9;
			*((_QWORD*)v8 + 2) = v11;
			*((_QWORD*)v8 + 4) = 0i64;
			*((_QWORD*)v8 + 3) = 0i64;
			*((_QWORD*)v8 + 6) = 0i64;
			*((_QWORD*)v8 + 5) = 0i64;
		}
		else
		{
			v8 = 0i64;
		}
		*v7 = v8;
		++* (_QWORD*)(a1 + 112);
		v10 = *v7;
		sub_140326800((__int64*)v10 + 3, a1, (__int64)&v11);
		return v10 + 6;
	}
	return result;
}

