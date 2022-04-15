//----- (00000001406EAAD0) ----------------------------------------------------
__int64 __fastcall sub_1406EAAD0(_QWORD* a1)
{
	unsigned __int64 v2; // rsi
	_QWORD* v3; // r14
	unsigned __int64 v4; // rax
	unsigned int v5; // edx
	__int64 v6; // r9
	__int64 v7; // r8
	__int64 v8; // rcx
	__int64 v9; // rdi
	int v10; // eax
	__int64 v11; // r12
	int v12; // eax
	__int64 v13; // r15
	_QWORD* v14; // rbx
	char* v15; // rdx
	_DWORD* v16; // rax
	__m128i* v17; // rbp
	_QWORD* v18; // r13
	__int64 v19; // rax
	__int64 i; // rbx
	int* v21; // rax
	int* v22; // rdi
	unsigned __int64 v23; // rbx
	__int64 v24; // rdx
	__int64 v25; // rcx
	__int64 v27; // [rsp+20h] [rbp-B8h] BYREF
	char v28; // [rsp+28h] [rbp-B0h]
	__int128 v29; // [rsp+30h] [rbp-A8h]
	__int128 v30; // [rsp+40h] [rbp-98h]
	__int128 v31; // [rsp+50h] [rbp-88h]
	__int64 v32; // [rsp+60h] [rbp-78h]
	__int64 v33; // [rsp+70h] [rbp-68h] BYREF
	__m128i* v34; // [rsp+78h] [rbp-60h]
	__int64 v35; // [rsp+90h] [rbp-48h] BYREF
	__int64 v36; // [rsp+98h] [rbp-40h]
	__int64 v37; // [rsp+E8h] [rbp+10h]

	v2 = 0i64;
	v3 = (_QWORD*)sub_1406E8880(a1, 1u);
	v4 = *(_QWORD*)(qword_140C63650 + 768);
	v5 = 0;
	if (v4)
	{
		v6 = *(_QWORD*)(qword_140C63650 + 760);
		v7 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a1)
		{
			v7 = ++v5;
			if (v5 >= v4)
				goto LABEL_5;
		}
		v8 = *(_QWORD*)(v6 + 8i64 * v5);
	}
	else
	{
	LABEL_5:
		v8 = 0i64;
	}
	v9 = v8 + 384;
	v10 = sub_1400F26A0(v8 + 384, 2);
	v11 = v10;
	if (v10 >= 6)
		sub_140056570(a1, 2u, "Invalid node type");
	v12 = sub_1400F26A0(v9, 3);
	v13 = v12;
	if (v12 >= 4)
		sub_140056570(a1, 3u, "Invalid node state");
	v14 = *(_QWORD**)(v9 + 16);
	v15 = (char*)sub_14018F0E0(&v35, 0i64)[1];
	v16 = (_DWORD*)(v14[3] + 48i64);
	if ((unsigned __int64)v16 < v14[2] && v16 != dword_140A12138 && *(int*)(v14[3] + 56i64) > 0)
		v15 = (char*)sub_140056BB0(v14, 4u, 0i64);
	sub_14018F2D0(&v33, v15);
	if (v36)
		sub_14018B900(v36, 0);
	v17 = v34;
	v18 = &v3[4 * v11 + v13];
	v19 = v18[246];
	v37 = v19;
	if (v34)
	{
		for (i = 0i64; v34->m128i_i16[i]; ++i)
			;
		v21 = sub_14018B280(2 * i + 18, 0);
		if (v21)
		{
			*((_QWORD*)v21 + 1) = i;
			*(_QWORD*)v21 = off_140B55060;
		}
		else
		{
			v21 = 0i64;
		}
		v22 = v21 + 4;
		v23 = 2 * i;
		sub_1407DB590(v21 + 4, v17->m128i_i32, v23);
		v19 = v37;
		*(_WORD*)((char*)v22 + v23) = 0;
		v18[246] = v22;
	}
	else
	{
		v18[246] = 0i64;
	}
	if (v19)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
	v24 = v3[4];
	v29 = 0i64;
	v30 = 0i64;
	v31 = 0i64;
	v27 = 0i64;
	v28 = 0;
	v32 = 0i64;
	sub_14010B330(&v27, v24, v17, L"PrimalMatrixNode");
	if (v3[308])
	{
		do
		{
			v25 = *(_QWORD*)(v3[307] + 8 * v2);
			if (*(_DWORD*)(v25 + 488) == (_DWORD)v11 && *(_DWORD*)(v25 + 64) == (_DWORD)v13)
				sub_1400C3730(v25 + 72, (__int64)&v27);
			++v2;
		} while (v2 < v3[308]);
	}
	if (v17)
		sub_14018B900((__int64)v17, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B3F5D8: using guessed type wchar_t aPrimalmatrixno_5[17];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C63650: using guessed type __int64 qword_140C63650;

