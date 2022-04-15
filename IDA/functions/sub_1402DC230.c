#include "../winhttp.h"

//----- (00000001402DC230) ----------------------------------------------------
__int64 __fastcall sub_1402DC230(__int64* a1, unsigned int a2, __int64* a3)
{
	__int64 result; // rax
	unsigned __int64 v6; // rsi
	_QWORD* v7; // rbx
	__int64 v8; // rax
	int v9; // ebx
	void(__fastcall * ***v10)(_QWORD); // rbx
	void(__fastcall * **v11)(_QWORD); // rbx
	unsigned int v12; // [rsp+48h] [rbp+10h] BYREF
	__int64* v13; // [rsp+50h] [rbp+18h] BYREF
	unsigned int v14; // [rsp+58h] [rbp+20h] BYREF
	unsigned int v15; // [rsp+5Ch] [rbp+24h]

	v12 = a2;
	if (!a3)
		return 2147942487i64;
	v6 = ((__int64(__fastcall*)(unsigned int*))a1[216])(&v12);
	v7 = *(_QWORD**)(a1[215] + 8 * (v6 % a1[214]));
	if (!v7)
		goto LABEL_7;
	while (v6 != *v7 || !((unsigned int(__fastcall*)(unsigned int*, _QWORD*))a1[217])(&v12, v7 + 2))
	{
		v7 = (_QWORD*)v7[1];
		if (!v7)
			goto LABEL_7;
	}
	v10 = (void(__fastcall****)(_QWORD))(v7 + 3);
	if (v10)
	{
		v11 = *v10;
		(**v11)(v11);
		*a3 = (__int64)v11;
	}
	else
	{
	LABEL_7:
		v14 = v12 & 0x7F;
		v8 = *a1;
		v15 = (v12 >> 7) & 0x7F;
		result = (*(__int64(__fastcall**)(__int64*, unsigned int*, __int64**))(v8 + 112))(a1, &v14, &v13);
		if ((int)result < 0)
			return result;
		v9 = sub_1402DFFC0(v13, v12, a3);
		if (v9 < 0)
		{
			(*(void(__fastcall**)(__int64*))(*v13 + 8))(v13);
			return (unsigned int)v9;
		}
		(*(void(__fastcall**)(__int64*))(*v13 + 8))(v13);
	}
	return 0i64;
}

