#include "../winhttp.h"

//----- (000000014034B970) ----------------------------------------------------
__int16* __fastcall sub_14034B970(__int64 a1, int a2, __int64 a3)
{
	int v3; // r13d
	__int64 v4; // rax
	__int64 v5; // rcx
	unsigned __int64 v7; // rdx
	unsigned __int64 v8; // rcx
	__int64 v9; // r9
	unsigned __int64 v10; // rax
	int* v11; // r14
	int* v12; // rax
	int* v13; // r15
	int* v14; // rax
	int v15; // ecx
	int v16; // eax
	int* v17; // rbx
	__int16 v18; // si
	int v19; // r12d
	int* v20; // rbp
	__int64 v21; // r15
	__int16 v22; // ax
	__int64 v23; // rbp
	__int64 v24; // rsi
	__int64 v25; // rdi
	int* v26; // rax
	__int64 v27; // rsi
	unsigned __int64 v28; // rdi
	__int64 v29; // rdi
	int v30; // [rsp+20h] [rbp-58h] BYREF
	__int64 v31; // [rsp+28h] [rbp-50h]
	__int64 v32; // [rsp+30h] [rbp-48h] BYREF
	__int64 v33; // [rsp+80h] [rbp+8h]

	v3 = a2;
	v4 = *(_QWORD*)(qword_140C7ABA8 + 8);
	v5 = qword_140C7ABA8;
	if (!v4)
		goto LABEL_8;
	do
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	} while (v4);
	if (v5 == qword_140C7ABA8 || (v33 = v5, a2 < *(_DWORD*)(v5 + 32)))
		LABEL_8:
	v33 = qword_140C7ABA8;
	if (v33 != qword_140C7ABA8)
		return *(__int16**)(v33 + 40);
	v7 = *(unsigned int*)(a3 + 64);
	v8 = 0i64;
	if (!*(_DWORD*)(a3 + 64))
		return &word_140B7B704;
	v9 = *(_QWORD*)(a3 + 72);
	while (1)
	{
		v10 = v8 + ((v7 - v8) >> 1);
		if (v3 - *(_DWORD*)(v9 + 8 * v10) >= 0)
			break;
		v7 = v8 + ((v7 - v8) >> 1);
	LABEL_17:
		if (v8 >= v7)
			return &word_140B7B704;
	}
	if (v3 - *(_DWORD*)(v9 + 8 * v10) > 0)
	{
		v8 = v10 + 1;
		goto LABEL_17;
	}
	v11 = (int*)(*(_QWORD*)(a3 + 88) + 2i64 * *(unsigned int*)(v9 + 8 * v10 + 4));
	v12 = sub_14018B280(18i64, 0);
	if (v12)
	{
		*(_QWORD*)v12 = off_140B55060;
		*((_QWORD*)v12 + 1) = 0i64;
	}
	else
	{
		v12 = 0i64;
	}
	v13 = v12 + 4;
	v14 = (int*)qword_140C63750;
	*(_WORD*)v13 = 0;
	v15 = *v14;
	v16 = dword_140C43DA0;
	v17 = v13;
	if (v15 < dword_140C43DA0)
		v16 = v15;
	if (*((_BYTE*)&dword_140C43DB0 + v16))
	{
		v18 = *(_WORD*)v11;
		if (*(_WORD*)v11)
		{
			do
			{
				v11 = (int*)((char*)v11 + 2);
				if (v18 == 32 || (v19 = 0, (unsigned __int16)(v18 - 9) <= 4u))
					v19 = 1;
				v20 = v17;
				if (v17)
					v21 = *((_QWORD*)v17 - 1);
				else
					v21 = 0i64;
				v17 = (int*)sub_14018D140(v17, v21 + 1);
				v22 = 45;
				if (v19)
					v22 = v18;
				*((_WORD*)v17 + v21) = v22;
				*((_WORD*)v17 + v21 + 1) = 0;
				if (v20 != v17 && v20)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v20 - 2) + 8i64))(v20 - 4);
				v18 = *(_WORD*)v11;
			} while (*(_WORD*)v11);
			v3 = a2;
		}
	}
	else if (v11)
	{
		v23 = *((_QWORD*)v13 - 1);
		v24 = 0i64;
		if (*(_WORD*)v11)
		{
			do
				++v24;
			while (*((_WORD*)v11 + v24));
		}
		v17 = (int*)sub_14018D140(v13, v24 + v23);
		sub_1407DB590((int*)((char*)v17 + 2 * v23), v11, 2 * v24);
		*((_WORD*)v17 + v24 + v23) = 0;
		if (v13 != v17)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v13 - 2) + 8i64))(v13 - 4);
	}
	v30 = v3;
	if (v17)
	{
		v25 = *((_QWORD*)v17 - 1);
		v26 = sub_14018B280(2 * v25 + 18, 0);
		if (v26)
		{
			*(_QWORD*)v26 = off_140B55060;
			*((_QWORD*)v26 + 1) = v25;
		}
		else
		{
			v26 = 0i64;
		}
		v27 = (__int64)(v26 + 4);
		v28 = 2 * v25;
		sub_1407DB590(v26 + 4, v17, v28);
		*(_WORD*)(v28 + v27) = 0;
		v31 = v27;
	}
	else
	{
		v31 = 0i64;
	}
	sub_14034C730((__int64)&unk_140C7ABA0, (__int64)&v32, &v30);
	v29 = *(_QWORD*)(v32 + 40);
	if (v31)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v31 - 16) + 8i64))(v31 - 16);
	if (v17)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v17 - 2) + 8i64))(v17 - 4);
	return (__int16*)v29;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C43DA0: using guessed type int dword_140C43DA0;
// 140C43DB0: using guessed type int dword_140C43DB0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C7ABA8: using guessed type __int64 qword_140C7ABA8;

