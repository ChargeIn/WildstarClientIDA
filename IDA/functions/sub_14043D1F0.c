//----- (000000014043D1F0) ----------------------------------------------------
__int64 __fastcall sub_14043D1F0(__int64 a1, unsigned int a2, int a3, int a4)
{
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v7; // rsi
	int* v8; // r14
	__int64** v9; // rsi
	__int64* v10; // rbx
	int* i; // rdi
	int* v12; // rax
	int* v13; // rbx
	__int64(__fastcall * v14)(wchar_t**, _QWORD, __int64); // rax
	unsigned int v15; // edi
	__int64 v16; // rax
	unsigned int v17; // edi
	int* v18; // rbx
	__int64 v19; // rcx
	__int64 v20; // [rsp+30h] [rbp+8h]

	v4 = qword_140C7CD38;
	v5 = *(_QWORD*)(qword_140C7CD38 + 8);
	if (!v5)
		goto LABEL_8;
	do
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	} while (v5);
	if (v4 == qword_140C7CD38 || (v20 = v4, a2 < *(_DWORD*)(v4 + 32)))
		LABEL_8:
	v20 = qword_140C7CD38;
	if (v20 == qword_140C7CD38)
		return 0i64;
	if (!a4)
		return (unsigned int)sub_14043D650((__int64)dword_140C7CC70, a2, a3, 1) == 0;
	v7 = *(_QWORD*)(v20 + 40);
	v8 = sub_14018B280(24i64, 0);
	*(_QWORD*)v8 = v8;
	*((_QWORD*)v8 + 1) = v8;
	v9 = *(__int64***)(v7 + 8);
	v10 = *v9;
	for (i = *(int**)v8; v10 != (__int64*)v9; v10 = (__int64*)*v10)
	{
		v12 = sub_14018B280(24i64, 0);
		if (v12 != (int*)-16i64)
			v12[4] = *((_DWORD*)v10 + 4);
		*(_QWORD*)v12 = i;
		*((_QWORD*)v12 + 1) = *((_QWORD*)i + 1);
		**((_QWORD**)i + 1) = v12;
		*((_QWORD*)i + 1) = v12;
	}
	v13 = *(int**)v8;
	if (*(int**)v8 == v8)
	{
	LABEL_28:
		v17 = 0;
		goto LABEL_29;
	}
	v14 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
	while (1)
	{
		v15 = v13[4];
		if (v14)
			break;
		if (!dword_140C64E70)
		{
			if ((int)sub_1401F4D40() >= 0)
			{
				v16 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64B78 + 24i64))(qword_140C64B78, v15);
				goto LABEL_23;
			}
		LABEL_26:
			v14 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		}
		v13 = *(int**)v13;
		if (v13 == v8)
			goto LABEL_28;
	}
	v16 = v14(off_140A69AD8, v15, qword_140C63858);
LABEL_23:
	if (!v16 || (*(_BYTE*)(v16 + 12) & 1) != 0 || (unsigned int)sub_14043D3D0((__int64)dword_140C7CC70, (_DWORD*)v16))
		goto LABEL_26;
	v17 = 1;
LABEL_29:
	v18 = *(int**)v8;
	while (v18 != v8)
	{
		v19 = (__int64)v18;
		v18 = *(int**)v18;
		sub_14018B900(v19, 0);
	}
	*(_QWORD*)v8 = v8;
	*((_QWORD*)v8 + 1) = v8;
	sub_14018B900((__int64)v8, 0);
	return v17;
}
// 140A69AD8: using guessed type wchar_t *off_140A69AD8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64B78: using guessed type __int64 qword_140C64B78;
// 140C64E70: using guessed type int dword_140C64E70;
// 140C7CC70: using guessed type _DWORD dword_140C7CC70[2];
// 140C7CD38: using guessed type __int64 qword_140C7CD38;

