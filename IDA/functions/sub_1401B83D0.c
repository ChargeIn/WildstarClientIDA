#include "../winhttp.h"

//----- (00000001401B83D0) ----------------------------------------------------
int __fastcall sub_1401B83D0(__int64 a1, unsigned int* a2, __int64 a3)
{
	int result; // eax
	unsigned __int64 v7; // rcx
	LONGLONG* v8; // rax
	LONGLONG v9; // rcx
	LONGLONG v10; // [rsp+30h] [rbp+8h] BYREF

	if ((*(_BYTE*)(a1 + 16) & 2) == 0)
		return -2147024891;
	if (!a2)
		return -2147024809;
	v7 = *a2;
	if (!(_DWORD)v7)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
		if (result < 0)
			return result;
		return 0;
	}
	if (!a3)
	{
		result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 56i64))(a1, (unsigned int)v7);
		if (result >= 0)
		{
			*a2 = 0;
			return 0;
		}
		return result;
	}
	if (v7 >= *(_QWORD*)(a1 + 624))
		return -2147024809;
	v8 = (LONGLONG*)(*(_QWORD*)(a1 + 616) + 16 * v7);
	v9 = v8[1];
	if (!v9)
		return -2147024809;
	v10 = *v8;
	if (a3 == v9)
		return 0;
	result = sub_1401BAEC0(a1, &v10, a3);
	if (result >= 0)
	{
		result = sub_1401BA720(a1, *a2, v10, a3);
		if (result >= 0)
			return 0;
	}
	return result;
}

