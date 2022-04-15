#include "../winhttp.h"

//----- (00000001400F86D0) ----------------------------------------------------
__int64 __fastcall sub_1400F86D0(__int64 a1, wchar_t* a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
	wchar_t* v7; // rdi
	__int64 v10; // rax
	int* v11; // rbp
	__int64 v12; // rbx
	unsigned __int64 v13; // rbx
	_WORD* v14; // r14
	_QWORD* v15; // r15
	_QWORD* v16; // rsi
	_QWORD* v17; // rbx
	_QWORD* v18; // rbx
	int* v19; // r14
	__int64 v20; // rax
	__int64 v22; // rbx
	unsigned __int64 v23; // rbx
	_WORD* v24; // r15
	_QWORD* v25; // rbp
	_QWORD* v26; // rsi
	_QWORD* v27; // rbx
	__int64 result; // rax
	__int64 v29; // rbx
	__int64 v30; // rdx
	__int64 v31; // [rsp+30h] [rbp-58h] BYREF
	__int64 v32; // [rsp+38h] [rbp-50h]
	_QWORD* v33; // [rsp+90h] [rbp+8h]
	_QWORD* v34; // [rsp+90h] [rbp+8h]

	v7 = L"Window";
	if (a2)
		v7 = a2;
	v10 = 0i64;
	v11 = 0i64;
	if (*v7)
	{
		do
			++v10;
		while (v7[v10]);
	}
	v12 = (2 * v10) >> 1;
	if ((unsigned __int64)(v12 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v11 = sub_14018B280(2 * (v12 + 1), 0);
	v13 = 2 * v12;
	sub_1407DB590(v11, (int*)v7, v13);
	v14 = (_WORD*)((char*)v11 + v13);
	if ((int*)((char*)v11 + v13))
		*v14 = 0;
	v15 = *(_QWORD**)(a1 + 24);
	v16 = v15;
	v17 = (_QWORD*)v15[1];
	while (v17)
	{
		if ((int)sub_1400454D0(v17[5], v17[6], (unsigned __int16*)v11, (__int64)v14) < 0)
		{
			v17 = (_QWORD*)v17[3];
		}
		else
		{
			v16 = v17;
			v17 = (_QWORD*)v17[2];
		}
	}
	if (v16 == v15 || (v33 = v16, (int)sub_1400454D0((__int64)v11, (__int64)v14, (unsigned __int16*)v16[5], v16[6]) < 0))
		v33 = v15;
	v18 = v33;
	if (v11)
		sub_14018B900((__int64)v11, 0);
	if (v33 != *(_QWORD**)(a1 + 24))
		goto LABEL_41;
	if (*(_BYTE*)(*(_QWORD*)(a1 + 8) + 2825i64))
	{
		v7 = L"Window";
		v19 = 0i64;
		v20 = 0i64;
		while (aWindow_6[++v20] != 0)
			;
		v22 = (2 * v20) >> 1;
		if ((unsigned __int64)(v22 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v19 = sub_14018B280(2 * (v22 + 1), 0);
		v23 = 2 * v22;
		sub_1407DB590(v19, (int*)L"Window", v23);
		v24 = (_WORD*)((char*)v19 + v23);
		if ((int*)((char*)v19 + v23))
			*v24 = 0;
		v25 = *(_QWORD**)(a1 + 24);
		v26 = v25;
		v27 = (_QWORD*)v25[1];
		while (v27)
		{
			if ((int)sub_1400454D0(v27[5], v27[6], (unsigned __int16*)v19, (__int64)v24) < 0)
			{
				v27 = (_QWORD*)v27[3];
			}
			else
			{
				v26 = v27;
				v27 = (_QWORD*)v27[2];
			}
		}
		if (v26 == v25
			|| (v34 = v26, (int)sub_1400454D0((__int64)v19, (__int64)v24, (unsigned __int16*)v26[5], v26[6]) < 0))
		{
			v34 = v25;
		}
		v18 = v34;
		if (v19)
			sub_14018B900((__int64)v19, 0);
	}
	if (v18 == *(_QWORD**)(a1 + 24))
	{
		sub_14018EFA0(&v31, (__int64)L"Control class '%s' not found in XML file.", v7);
		if (v32)
			sub_14018B900(v32, 0);
		return 0i64;
	}
	else
	{
	LABEL_41:
		v29 = ((__int64(__fastcall*)(_QWORD, _QWORD, __int64, __int64, __int64, __int64))v18[9])(
			v18[8],
			*(_QWORD*)(a1 + 8),
			a3,
			a4,
			a5,
			a6);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v29 + 552i64))(v29, a6);
		sub_1400579E0(*(_QWORD*)(*(_QWORD*)(v29 + 32) + 400i64), v30, *(_DWORD*)(v29 + 808));
		result = v29;
		*(_DWORD*)(v29 + 808) = a7;
	}
	return result;
}
// 1400F8977: variable 'v30' is possibly undefined
// 140A19260: using guessed type wchar_t aWindow_5[7];
// 140A19270: using guessed type wchar_t aWindow_6[7];
// 140A19280: using guessed type wchar_t aControlClassSN[42];

