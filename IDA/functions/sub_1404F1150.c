//----- (00000001404F1150) ----------------------------------------------------
__int64 __fastcall sub_1404F1150(_QWORD* a1)
{
	unsigned __int64 v2; // rcx
	unsigned int v3; // edx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // r12d
	int v8; // r13d
	__int64 v9; // r14
	_DWORD* v10; // rax
	int v11; // r15d
	_DWORD* v12; // rax
	_DWORD* v13; // rax
	int v14; // ebp
	char* v15; // rdx
	_DWORD* v16; // rax
	int* v17; // rsi
	__int64 v18; // rbx
	int* v19; // rax
	_WORD* v20; // rdi
	unsigned __int64 v21; // rbx
	__int64 v22; // rcx
	__int64 v23; // rax
	__int64 v25; // [rsp+40h] [rbp-68h] BYREF
	int* v26; // [rsp+48h] [rbp-60h]
	__int64 v27; // [rsp+50h] [rbp-58h]
	__int64 v28; // [rsp+60h] [rbp-48h] BYREF
	__int64 v29; // [rsp+68h] [rbp-40h]

	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = 1;
	v8 = sub_1400F26A0(v6 + 384, 1);
	v9 = sub_140056AB0(a1, 2u);
	if (v9)
	{
		v10 = (_DWORD*)(a1[3] + 32i64);
		if ((unsigned __int64)v10 >= a1[2] || v10 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
			v11 = 0;
		else
			v11 = sub_140056D60(a1, 3u);
		v12 = (_DWORD*)(a1[3] + 48i64);
		if ((unsigned __int64)v12 < a1[2] && v12 != dword_140A12138 && *(int*)(a1[3] + 56i64) > 0)
			v7 = sub_140056D60(a1, 4u);
		v13 = (_DWORD*)(a1[3] + 64i64);
		if ((unsigned __int64)v13 >= a1[2] || v13 == dword_140A12138 || *(int*)(a1[3] + 72i64) <= 0)
			v14 = 0;
		else
			v14 = sub_140056D60(a1, 5u);
		v15 = (char*)sub_14018F0E0(&v28, word_1409F0D8C)[1];
		v16 = (_DWORD*)(a1[3] + 80i64);
		if ((unsigned __int64)v16 < a1[2] && v16 != dword_140A12138 && *(int*)(a1[3] + 88i64) > 0)
			v15 = (char*)sub_140056BB0(a1, 6u, 0i64);
		sub_14018F2D0(&v25, v15);
		if (v29)
			sub_14018B900(v29, 0);
		v17 = v26;
		v18 = (v27 - (__int64)v26) >> 1;
		v19 = sub_14018B280(2 * v18 + 18, 0);
		if (v19)
		{
			*((_QWORD*)v19 + 1) = v18;
			*(_QWORD*)v19 = off_140B55060;
		}
		else
		{
			v19 = 0i64;
		}
		v20 = v19 + 4;
		v21 = v18;
		sub_1407DB590(v19 + 4, v17, v21 * 2);
		v20[v21] = 0;
		if (v17)
			sub_14018B900((__int64)v17, 0);
		if (v14)
		{
			v23 = sub_1405E2300(qword_140C65898 + 26680, v14);
			if (v23)
				sub_1404507E0(
					(__int64)&unk_1409F0D44,
					v8,
					v11,
					*(_DWORD*)(v9 + 20),
					COERCE_INT((float)(int)*(_QWORD*)v9),
					v7,
					(__int64*)(v23 + 184),
					(__int64)&unk_1409F0D44);
			else
				sub_1400EA3E0(*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32736) + 96i64), "StoreError", byte_1409F0D5C, 18i64);
		}
		else if (*v20)
		{
			LODWORD(v25) = 0;
			v26 = 0i64;
			sub_1404507E0(v22, v8, v11, *(_DWORD*)(v9 + 20), COERCE_INT((float)(int)*(_QWORD*)v9), v7, &v25, (__int64)v20);
		}
		else
		{
			sub_140450720(v22, v8, v11, *(_DWORD*)(v9 + 20), COERCE_INT((float)(int)*(_QWORD*)v9), v7);
		}
		if (v20)
			(*(void(__fastcall**)(_WORD*))(*((_QWORD*)v20 - 2) + 8i64))(v20 - 8);
	}
	return 0i64;
}
// 1404F13C4: conditional instruction was optimized away because r8.2==0
// 1404F1468: variable 'v22' is possibly undefined
// 1409F0D5C: using guessed type _BYTE byte_1409F0D5C[24];
// 1409F0D8C: using guessed type unsigned __int16 word_1409F0D8C[12];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

