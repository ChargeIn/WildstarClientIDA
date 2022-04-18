#include "../winhttp.h"

//----- (00000001404039F0) ----------------------------------------------------
__int64 __fastcall sub_1404039F0(__int64 a1, __int64 a2)
{
	__int64 v2; // r15
	unsigned __int64 v4; // rax
	__int64 v5; // r12
	__int64 v6; // rbx
	__int64 v7; // rax
	int* v8; // rbx
	int* v9; // rax
	__int64 v10; // rcx
	__int64 v11; // r14
	int* v12; // rbp
	int* v13; // rdi
	__int64 v14; // rax
	__int64 v15; // rbx
	unsigned __int64 v16; // rbx
	int* v17; // r8
	__int64 v18; // rax
	__int64 v19; // rcx
	int* v20; // rdi
	__int64 v21; // rax
	int* v22; // rbp
	__int64 v23; // rbx
	unsigned __int64 v24; // rbx
	int* v25; // r8
	char v27[32]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v28; // [rsp+70h] [rbp+8h] BYREF

	v28 = a1;
	v2 = qword_140C658A0;
	v4 = sub_140407590((__int64*)qword_140C658A0, (int*)a2);
	v5 = v4;
	if (v4 < *(_QWORD*)(v2 + 8))
	{
		v6 = *(_QWORD*)(*(_QWORD*)v2 + 8 * v4);
		if (**(_DWORD**)(v6 + 8) == *(_DWORD*)a2 && *(_QWORD*)(v6 + 16) == *(_QWORD*)(a2 + 8))
		{
		LABEL_35:
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ChatJoin", L"H", v6);
			return 0i64;
		}
	}
	v7 = sub_1401F20E0(*(_DWORD*)a2);
	v8 = (int*)v7;
	if (v7 && *(char*)(v7 + 52) < 0)
	{
		v9 = sub_14018B280(312i64, 0);
		if (v9)
		{
			v11 = sub_140401690((__int64)v9, v8, *(_QWORD*)(a2 + 8));
			v28 = v11;
		}
		else
		{
			v11 = 0i64;
			v28 = 0i64;
		}
		if (*(_DWORD*)a2 == 18)
		{
			v12 = 0i64;
			*(_DWORD*)v11 = *(_DWORD*)(a2 + 28);
			v13 = *(int**)(a2 + 16);
			v14 = 0i64;
			if (*(_WORD*)v13)
			{
				do
					++v14;
				while (*((_WORD*)v13 + v14));
			}
			v15 = (2 * v14) >> 1;
			if ((unsigned __int64)(v15 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v12 = sub_14018B280(2 * (v15 + 1), 0);
			v16 = 2 * v15;
			sub_1407DB590(v12, v13, v16);
			v17 = (int*)((char*)v12 + v16);
			if ((int*)((char*)v12 + v16))
				*(_WORD*)v17 = 0;
			v10 = v11 + 24;
			if (v27 != (char*)(v11 + 24))
				sub_14001C480(v10, v12, v17);
			if (v12)
				sub_14018B900((__int64)v12, 0);
		}
		if ((*(_DWORD*)(*(_QWORD*)(v11 + 8) + 52i64) & 0x400) != 0)
		{
			v18 = sub_14024DB80(*(_DWORD*)(v2 + 200));
			if (!v18 || (v20 = (int*)sub_14034BDD0(v19, *(_DWORD*)(v18 + 4))) == 0i64)
				v20 = (int*)&unk_1409E87A4;
			v21 = 0i64;
			v22 = 0i64;
			if (*(_WORD*)v20)
			{
				do
					++v21;
				while (*((_WORD*)v20 + v21));
			}
			v23 = (2 * v21) >> 1;
			if ((unsigned __int64)(v23 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v22 = sub_14018B280(2 * (v23 + 1), 0);
			v24 = 2 * v23;
			sub_1407DB590(v22, v20, v24);
			v25 = (int*)((char*)v22 + v24);
			if ((int*)((char*)v22 + v24))
				*(_WORD*)v25 = 0;
			v10 = v11 + 248;
			if (v27 != (char*)(v11 + 248))
				sub_14001C480(v10, v22, v25);
			if (v22)
				sub_14018B900((__int64)v22, 0);
		}
		sub_140407990(v10, v11, *(unsigned __int16**)(a2 + 16), *(_DWORD*)(a2 + 32));
		sub_1400B4DE0((__int64*)v2, v5, &v28);
		v6 = v28;
		sub_140407E40(v2, v28);
		goto LABEL_35;
	}
	return 0i64;
}
// 140403B61: variable 'v19' is possibly undefined
// 140403C04: variable 'v10' is possibly undefined
// 1409EE774: using guessed type wchar_t asc_1409EE774[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

