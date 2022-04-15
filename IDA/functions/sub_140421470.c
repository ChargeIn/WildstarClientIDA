#include "../winhttp.h"

//----- (0000000140421470) ----------------------------------------------------
__int64 __fastcall sub_140421470(__int64 a1, __int64 a2)
{
	int* v4; // rdi
	__int64 v5; // rax
	int* v6; // rsi
	__int64 v7; // rbx
	unsigned __int64 v8; // rbx
	int* v9; // rdi
	int* v10; // rsi
	__int64 v11; // rax
	__int64 v12; // rbx
	unsigned __int64 v13; // rbx
	int* v14; // rdi
	__int64 v15; // rax
	int* v16; // rsi
	__int64 v17; // rbx
	unsigned __int64 v18; // rbx
	int* v19; // rax
	int* v20; // rdi
	__int64 v21; // rbx
	__int64 v22; // rsi
	int v23; // r12d
	_QWORD* v24; // rax
	int* v25; // rcx
	__int64 v26; // rdx
	__int64 v27; // rdx
	int* v28; // rbp
	__int64 v29; // rax
	__int64 v30; // rbx
	unsigned __int64 v31; // rbx
	_WORD* v32; // r14
	__int64 v33; // r15
	__int64 v34; // rsi
	_QWORD* v35; // rbx
	__int64* v36; // rbx
	__int64 v37; // rbx
	unsigned int v38; // ebx
	__int64 v39; // [rsp+20h] [rbp-78h] BYREF
	__int64 v40; // [rsp+28h] [rbp-70h] BYREF
	__int64 v41; // [rsp+30h] [rbp-68h]
	__int64 v42; // [rsp+38h] [rbp-60h]
	char v43[8]; // [rsp+40h] [rbp-58h] BYREF
	__int64 v44; // [rsp+48h] [rbp-50h]
	__int64 v45; // [rsp+A8h] [rbp+10h]
	__int64 v46; // [rsp+B0h] [rbp+18h]
	__int64 v47; // [rsp+B8h] [rbp+20h]

	if (!a2
		|| !*(_BYTE*)(a2 + 312)
		|| sub_140137390(a2, (int*)L"OptionsScreen")
		|| sub_140137390(a2, (int*)L"FrontEndScreen")
		|| sub_140137390(a2, (int*)L"ExternalTool"))
	{
		return 0i64;
	}
	v4 = (int*)&unk_1409E8B4C;
	if (*(_QWORD*)(qword_140C635F0 + 5744))
		v4 = *(int**)(qword_140C635F0 + 5744);
	v5 = 0i64;
	v6 = 0i64;
	v47 = 0i64;
	if (*(_WORD*)v4)
	{
		do
			++v5;
		while (*((_WORD*)v4 + v5));
	}
	v7 = (2 * v5) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v6 = sub_14018B280(2 * (v7 + 1), 0);
		v47 = (__int64)v6;
	}
	v8 = 2 * v7;
	sub_1407DB590(v6, v4, v8);
	if ((int*)((char*)v6 + v8))
		*(_WORD*)((char*)v6 + v8) = 0;
	v9 = (int*)&unk_1409E8B1C;
	v10 = 0i64;
	v11 = 0i64;
	v46 = 0i64;
	if (*(_QWORD*)(qword_140C635F0 + 5752))
		v9 = *(int**)(qword_140C635F0 + 5752);
	if (*(_WORD*)v9)
	{
		do
			++v11;
		while (*((_WORD*)v9 + v11));
	}
	v12 = (2 * v11) >> 1;
	if ((unsigned __int64)(v12 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v10 = sub_14018B280(2 * (v12 + 1), 0);
		v46 = (__int64)v10;
	}
	v13 = 2 * v12;
	sub_1407DB590(v10, v9, v13);
	if ((int*)((char*)v10 + v13))
		*(_WORD*)((char*)v10 + v13) = 0;
	if (qword_140C65898)
	{
		v14 = (int*)&unk_1409E8BBC;
		if (*(_QWORD*)(qword_140C65898 + 136))
			v14 = *(int**)(qword_140C65898 + 136);
	}
	else
	{
		v14 = (int*)&unk_1409E8B7C;
	}
	v15 = 0i64;
	v16 = 0i64;
	v45 = 0i64;
	if (*(_WORD*)v14)
	{
		do
			++v15;
		while (*((_WORD*)v14 + v15));
	}
	v17 = (2 * v15) >> 1;
	if ((unsigned __int64)(v17 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v16 = sub_14018B280(2 * (v17 + 1), 0);
		v45 = (__int64)v16;
	}
	v18 = 2 * v17;
	sub_1407DB590(v16, v14, v18);
	if ((int*)((char*)v16 + v18))
		*(_WORD*)((char*)v16 + v18) = 0;
	v19 = sub_14018B280(16i64, 0);
	v20 = v19;
	v21 = (__int64)v19;
	v22 = (__int64)(v19 + 4);
	if (v19)
		*(_WORD*)v19 = 0;
	v23 = 4;
	while (1)
	{
		v24 = (_QWORD*)sub_1404326C0((__int64)v43, v23);
		v25 = v20;
		v20 = (int*)v24[1];
		v24[1] = v25;
		v26 = v24[2];
		v24[2] = v21;
		v41 = v26;
		v27 = v24[3];
		v24[3] = v22;
		v42 = v27;
		if (v44)
			sub_14018B900(v44, 0);
		v28 = 0i64;
		v29 = 0i64;
		if (*(_WORD*)v20)
		{
			do
				++v29;
			while (*((_WORD*)v20 + v29));
		}
		v30 = (2 * v29) >> 1;
		if ((unsigned __int64)(v30 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v28 = sub_14018B280(2 * (v30 + 1), 0);
		v31 = 2 * v30;
		sub_1407DB590(v28, v20, v31);
		v32 = (_WORD*)((char*)v28 + v31);
		if ((int*)((char*)v28 + v31))
			*v32 = 0;
		v33 = *(_QWORD*)(a2 + 288);
		v34 = v33;
		v35 = *(_QWORD**)(v33 + 8);
		while (v35)
		{
			if ((int)sub_1400454D0(v35[5], v35[6], (unsigned __int16*)v28, (__int64)v32) < 0)
			{
				v35 = (_QWORD*)v35[3];
			}
			else
			{
				v34 = (__int64)v35;
				v35 = (_QWORD*)v35[2];
			}
		}
		if (v34 == v33
			|| (int)sub_1400454D0((__int64)v28, (__int64)v32, *(unsigned __int16**)(v34 + 40), *(_QWORD*)(v34 + 48)) < 0)
		{
			v40 = v33;
			v36 = &v40;
		}
		else
		{
			v39 = v34;
			v36 = &v39;
		}
		v37 = *v36;
		if (v28)
			sub_14018B900((__int64)v28, 0);
		if (v37 != *(_QWORD*)(a2 + 288) && *(_DWORD*)(v37 + 64) != 2)
		{
			v38 = *(_DWORD*)(v37 + 64);
			goto LABEL_62;
		}
		if (--v23 < 2)
			break;
		v21 = v41;
		v22 = v42;
	}
	v38 = 2;
LABEL_62:
	if (v20)
		sub_14018B900((__int64)v20, 0);
	if (v45)
		sub_14018B900(v45, 0);
	if (v46)
		sub_14018B900(v46, 0);
	if (v47)
		sub_14018B900(v47, 0);
	return v38;
}
// 140B00010: using guessed type wchar_t aOptionsscreen_3[14];
// 140B00030: using guessed type wchar_t aExternaltool_0[13];
// 140B00050: using guessed type wchar_t aFrontendscreen_0[15];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140421470: using guessed type char var_58[8];

