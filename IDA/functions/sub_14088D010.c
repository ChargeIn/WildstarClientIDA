//----- (000000014088D010) ----------------------------------------------------
__int64 __fastcall sub_14088D010(_QWORD* a1, int a2, char a3)
{
	__int64 v4; // rdx
	int v7; // r13d
	int v8; // r12d
	_DWORD* v9; // r14
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rdi
	_DWORD* v13; // rbx
	_QWORD* v14; // rdi
	int v15; // r14d
	int v16; // r8d
	__int64 v17; // rdx
	_DWORD* v19; // [rsp+40h] [rbp-C0h] BYREF
	_DWORD* v20; // [rsp+48h] [rbp-B8h]
	int v21; // [rsp+50h] [rbp-B0h]
	__int64 v22; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v23; // [rsp+68h] [rbp-98h]
	__int64 v24; // [rsp+70h] [rbp-90h] BYREF
	__int64 v25; // [rsp+78h] [rbp-88h] BYREF
	char v26[264]; // [rsp+80h] [rbp-80h] BYREF
	__int64 v27; // [rsp+188h] [rbp+88h]
	char v28; // [rsp+1A8h] [rbp+A8h]
	int v29; // [rsp+1F0h] [rbp+F0h] BYREF
	int v30; // [rsp+208h] [rbp+108h] BYREF

	v4 = a1[2];
	v23 = a1[1] - *(_QWORD*)(v4 + 112);
	sub_140890370((__int64)v26, v4, 0);
	if (!v27)
		return nullsub_1(v26);
	v7 = 0;
	if (a3)
	{
		(*(void(__fastcall**)(_QWORD, char*, _QWORD))(*(_QWORD*)a1[2] + 96i64))(a1[2], v26, 0i64);
		v7 = 1;
	}
	v8 = 2;
	while (1)
	{
		v9 = 0i64;
		v10 = sub_1408906B0((__int64)v26, &v24);
		v11 = v24;
		v19 = 0i64;
		v20 = 0i64;
		if (v10)
			v11 = v10;
		v21 = 0;
		sub_140890DA0(v11, (__int64)&v19);
		v12 = (__int64)v19;
		v13 = v19;
		if (v19 == v20)
			goto LABEL_26;
		while (*v13 != a2)
		{
			v13 += 6;
			if (v13 == v20)
				goto LABEL_26;
		}
		if (!sub_14088CA80(a1, a2))
			break;
		v14 = sub_14088CAF0((__int64)a1, v13[1], &v29);
		if (!v14 && v13[1])
		{
		LABEL_31:
			v17 = (__int64)v19;
			if (!v19)
				return nullsub_1(v26);
			v20 = v19;
			goto LABEL_35;
		}
		v15 = v29;
		v16 = v13[2];
		v30 = v13[3];
		v8 = sub_140890530((__int64)v26, v23 + v29, v16, &v30, 0, 0, &v22);
		if (v8 == 1)
		{
			if ((unsigned int)sub_14088DFF0((__int64)a1, (__int64)v26, (__int64)v14, v13, v22, v15, v7 == 0) != 1)
				goto LABEL_31;
			if (v14)
				sub_14088C260((__int64)v14, &v25);
		}
		else
		{
			if (v14)
				sub_14088B850((__int64(__fastcall***)(_QWORD, _QWORD))v14);
			if (v28 || v13[5] != 1 || v7)
			{
				v8 = 1;
			}
			else
			{
				(*(void(__fastcall**)(_QWORD, char*, _QWORD))(*(_QWORD*)a1[2] + 96i64))(a1[2], v26, 0i64);
				v7 = 1;
			}
		}
		v12 = (__int64)v19;
		v9 = v13;
	LABEL_26:
		if (v12)
		{
			v20 = (_DWORD*)v12;
			sub_140881720(dword_140C10F20, v12);
		}
		if (v8 == 1 || !v9)
			return nullsub_1(v26);
	}
	if (!v12)
		return nullsub_1(v26);
	v20 = (_DWORD*)v12;
	v17 = v12;
LABEL_35:
	sub_140881720(dword_140C10F20, v17);
	return nullsub_1(v26);
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C10F20: using guessed type int dword_140C10F20;

