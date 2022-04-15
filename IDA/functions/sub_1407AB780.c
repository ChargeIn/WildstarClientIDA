//----- (00000001407AB780) ----------------------------------------------------
__int64 __fastcall sub_1407AB780(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v4; // rbx
	unsigned int v5; // edi
	unsigned int v6; // r15d
	unsigned int v7; // r12d
	int v8; // r13d
	__int64 v9; // rax
	int v10; // edx
	int v11; // eax
	int v12; // r14d
	__int64 v13; // rax
	__int64 v16; // [rsp+48h] [rbp-39h]
	int v17[3]; // [rsp+50h] [rbp-31h] BYREF
	int v18; // [rsp+5Ch] [rbp-25h]
	int v19; // [rsp+60h] [rbp-21h]
	int v20; // [rsp+64h] [rbp-1Dh]
	int v21; // [rsp+68h] [rbp-19h]
	__int64 v22; // [rsp+70h] [rbp-11h]
	int v23[3]; // [rsp+78h] [rbp-9h] BYREF
	int v24; // [rsp+84h] [rbp+3h]
	int v25; // [rsp+88h] [rbp+7h]
	int v26; // [rsp+8Ch] [rbp+Bh]
	int v27; // [rsp+90h] [rbp+Fh]

	v23[0] = 1;
	v17[0] = 1;
	v4 = 88 * (*(unsigned int*)(a1 + 96) + 8i64 * a2) + a1 + 66592;
	v5 = 0;
	v6 = *(_DWORD*)(a1 + 4i64 * *(unsigned int*)(v4 + 8) + 431968);
	v23[1] = v6;
	v17[1] = v6;
	v7 = *(_DWORD*)(v4 + 8);
	v23[2] = v7;
	v17[2] = v7;
	v8 = *(_DWORD*)(a1 + 4i64 * *(unsigned int*)(v4 + 8) + 434044);
	v26 = -1;
	v20 = -1;
	v27 = 1;
	v25 = v8;
	v19 = v8;
	v21 = 1;
	v9 = sub_1407ABD10(a1, v6, v7, 0, v8, a3);
	v10 = dword_140C549C0;
	v22 = v9;
	v11 = dword_140C549C0;
	if (*(_DWORD*)qword_140C63750 < dword_140C549C0)
		v11 = *(_DWORD*)qword_140C63750;
	if ((unsigned int)(*(_DWORD*)(v4 + 28) - *(_DWORD*)(v4 + 32)) > *((_DWORD*)&off_140C549B0 + v11 + 8))
	{
		v12 = 2;
		v24 = 2;
	}
	else
	{
		v12 = 4;
		v24 = 4;
		if (*(_DWORD*)qword_140C63750 < dword_140C549C0)
			v10 = *(_DWORD*)qword_140C63750;
		if ((unsigned int)(*(_DWORD*)(v4 + 32) - *(_DWORD*)(v4 + 36)) <= *((_DWORD*)&off_140C549B0 + v10 + 8))
		{
			v16 = sub_1407ABD10(a1, v6, v7, 5, v8, a3);
			if (v16)
			{
				v18 = 5;
				goto LABEL_19;
			}
		}
		v16 = sub_1407ABD10(a1, v6, v7, 3, v8, a3);
		if (v16)
		{
			v18 = 3;
			goto LABEL_19;
		}
		v16 = sub_1407ABD10(a1, v6, v7, 4, v8, a3);
		if (v16)
		{
			v18 = 4;
			goto LABEL_19;
		}
	}
	v16 = sub_1407ABD10(a1, v6, v7, 1, v8, a3);
	if (v16)
	{
		v18 = 1;
	}
	else
	{
		v16 = sub_1407ABD10(a1, v6, v7, 2, v8, a3);
		if (v16)
		{
			v18 = 2;
		}
		else
		{
			v16 = 0i64;
			v18 = 6;
		}
	}
LABEL_19:
	if (v22)
	{
		*(_DWORD*)(v4 + 16) = v12;
		*(_DWORD*)(v4 + 24) = v25;
		if (v22)
		{
			if ((unsigned int)sub_1407AC2C0((_QWORD*)a1, v22, (__int64)v23, 1, 1))
				v5 = 1;
		}
	}
	if (v16)
	{
		*(_DWORD*)(v4 + 12) = v18;
		*(_DWORD*)(v4 + 20) = v19;
		if (v18 == 5 && !*(_QWORD*)(v4 + 72))
		{
			*(_QWORD*)(v4 + 72) = a1 + 436128;
			*(_QWORD*)(v4 + 80) = *(_QWORD*)(a1 + 436128);
			*(_QWORD*)(a1 + 436128) = v4;
			v13 = *(_QWORD*)(v4 + 80);
			if (v13)
				*(_QWORD*)(v13 + 72) = v4 + 80;
		}
		if ((unsigned int)sub_1407AC2C0((_QWORD*)a1, v16, (__int64)v17, 1, 1))
			return 1;
	}
	return v5;
}
// 1407ABA47: conditional instruction was optimized away because %var_90.8!=0
// 140C549B0: using guessed type __int64 (__fastcall *off_140C549B0)();
// 140C549C0: using guessed type int dword_140C549C0;
// 140C63750: using guessed type __int64 qword_140C63750;

