//----- (000000014091B5B0) ----------------------------------------------------
unsigned __int16* __fastcall sub_14091B5B0(__int64 a1, int a2, unsigned __int16* a3, int* a4, _QWORD* a5)
{
	unsigned int* v5; // rsi
	__int64 v7; // r9
	unsigned __int16* v8; // rdi
	int v10; // r15d
	unsigned __int16* v11; // r13
	__int64 v12; // rcx
	unsigned int v13; // eax
	int v14; // eax
	int v15; // eax
	char* v16; // rax
	int v17; // r12d
	int v18; // eax
	int v19; // edx
	int v20; // ecx
	int v21; // r8d
	int v22; // ecx
	__int64 v23; // rcx
	__int64 v24; // rax
	unsigned __int16 v25; // ax
	_QWORD* v26; // rbp
	_QWORD* v27; // rax

	v5 = *(unsigned int**)a1;
	v7 = 0i64;
	v8 = a3;
	v10 = 0;
	v11 = 0i64;
	if (a2)
	{
		if (sub_14091B9D0(a1, a3))
		{
			v13 = sub_14091B900(v12, v8);
			v10 = (unsigned __int8)v13;
			v11 = &v8[(unsigned __int64)v13 >> 9];
			if ((v13 & 0x100) != 0)
				v10 = (unsigned __int8)v13 << 8;
		}
	}
	if (a4[1] == -1)
	{
		v14 = *a4;
		if (*a4 < 4)
		{
			sub_140932690(v5, 9, 1, v7, 262, -v14);
			LOWORD(v7) = 0;
		}
		else
		{
			v15 = -v14;
			if (*v5 == (_DWORD)v7)
			{
				v5[26] = v7;
				v16 = sub_14092D140((__int64)v5, 1, 1, v7, 262, v15);
				LOWORD(v7) = 0;
				if (v16)
					*v16 = 99;
			}
		}
		a4[1] = 3;
	}
	v17 = 1;
	if (*(_DWORD*)(a1 + 316) && (*v8 & 0xFC00) == 0xD800)
		v17 = 2;
	do
	{
		*a4 -= 2;
		if (v10 && v11 == v8)
		{
			*((_WORD*)a4 + a4[2] + 6) = v10 | *v8;
			*((_WORD*)a4 + a4[2] + 8) = v10;
		}
		else
		{
			*((_WORD*)a4 + a4[2] + 6) = *v8;
			*((_WORD*)a4 + a4[2] + 8) = v7;
		}
		if (++a4[2] >= 2 || !*a4)
		{
			v18 = *a4;
			if (*a4 < 4)
			{
				if (v18 < 2)
					goto LABEL_26;
				v19 = 9;
			}
			else
			{
				v19 = 12;
			}
			sub_140932690(v5, v19, a4[1], 0i64, 262, -v18);
		LABEL_26:
			v20 = a4[2];
			v21 = 1;
			if (a4[1] == 1)
				v21 = 3;
			a4[1] = v21;
			v22 = v20 - 1;
			if (v22)
			{
				if (v22 != 1)
				{
				LABEL_39:
					LOWORD(v7) = 0;
					a4[2] = 0;
					goto LABEL_40;
				}
				if (a4[4])
					sub_140932A90(v5, 31, v21, 0i64, v21, 0i64, 512, a4[4]);
				v23 = a4[3];
				v24 = a4[4];
			}
			else
			{
				v25 = *((_WORD*)a4 + 8);
				if (v25)
					sub_140932A90(v5, 31, v21, 0i64, v21, 0i64, 512, v25);
				v23 = *((unsigned __int16*)a4 + 6);
				v24 = *((unsigned __int16*)a4 + 8);
			}
			v26 = sub_140931B80(v5, 1, a4[1], 0i64, 512, v24 | v23);
			if (!*v5)
			{
				v27 = sub_14092D590((__int64)v5, 16i64);
				if (v27)
				{
					v27[1] = *a5;
					*v27 = v26;
					*a5 = v27;
				}
			}
			goto LABEL_39;
		}
	LABEL_40:
		--v17;
		++v8;
	} while (v17 > 0);
	return v8;
}
// 14091B5F4: variable 'v12' is possibly undefined
// 14091B62B: variable 'v7' is possibly undefined

