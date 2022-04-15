#include "../winhttp.h"

//----- (0000000140338DF0) ----------------------------------------------------
int** __fastcall sub_140338DF0(__int64 a1, int a2, _QWORD* a3)
{
	__int64 v3; // rbx
	__int64 v7; // rdi
	int* v8; // rsi
	int** result; // rax

	v3 = *a3;
	if (*a3)
	{
		(**(void(__fastcall***)(_QWORD))v3)(*a3);
		(**(void(__fastcall***)(__int64))v3)(v3);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
	}
	v7 = *(_QWORD*)(a1 + 16);
	v8 = sub_14018B280(32i64, 0);
	if (v8 != (int*)-16i64)
	{
		v8[4] = a2;
		*((_QWORD*)v8 + 3) = v3;
		if (v3)
			(**(void(__fastcall***)(__int64))v3)(v3);
	}
	*(_QWORD*)v8 = v7;
	*((_QWORD*)v8 + 1) = *(_QWORD*)(v7 + 8);
	result = *(int***)(v7 + 8);
	*result = v8;
	*(_QWORD*)(v7 + 8) = v8;
	if (v3)
		result = (int**)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
	if (*a3)
		return (int**)(*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a3 + 8i64))(*a3);
	return result;
}

