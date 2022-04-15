//----- (000000014091CE80) ----------------------------------------------------
void __fastcall sub_14091CE80(__int64 a1, __int64 a2)
{
	_WORD* v2; // rsi
	unsigned int* v3; // rbx
	__int16 v6; // r15
	_QWORD* v7; // rdi
	__int64 v8; // rcx
	char* v9; // rax
	_QWORD* v10; // rax
	__int64* v11; // rcx
	_QWORD* j; // rdx
	__int64 v13; // rax
	__int64 v14; // rdi
	_QWORD* v15; // rax
	_QWORD* v16; // rax
	_QWORD* v17; // rax
	_QWORD* v18; // rax
	__int64* i; // rdx
	__int64 v20; // rcx
	__int64 v21; // rsi
	_QWORD* v22; // rax
	_QWORD* v23; // rax

	v2 = *(_WORD**)(a2 + 32);
	v3 = *(unsigned int**)a1;
	v6 = 125;
	v7 = 0i64;
	if (*v2 == 140)
	{
		++v2;
		v6 = 140;
		if (!*v3)
		{
			v8 = *(_QWORD*)a1;
			v3[26] = 0;
			v9 = sub_14092D140(v8, 1, 6, 0i64, 258, -8i64);
			if (v9)
				*v9 = -117;
		}
	}
	if (*(int*)(a2 + 48) >= 0)
	{
		if (v6 == 140)
		{
			if (((*v2 - 120) & 0xFFFD) == 0)
			{
			LABEL_12:
				if (!*v3)
				{
					v3[26] = 0;
					sub_14092AA10(v3, 258, -8i64, 512, 0i64);
				}
				v14 = *(_QWORD*)(a2 + 56);
				v15 = sub_140931B80(v3, 1, 6, 0i64, 512, 0i64);
				if (v15)
				{
					if (v14)
					{
						v15[2] &= ~2ui64;
						v15[2] |= 1ui64;
						v15[3] = v14;
					}
				}
				sub_14092EC50((unsigned int**)a1, 1);
				return;
			}
			sub_14092EC50((unsigned int**)a1, 1);
			v7 = sub_140931B80(v3, 0, 6, 0i64, 512, 0i64);
		}
		if (((*v2 - 119) & 0xFFFD) != 0)
		{
			v16 = sub_140932570((__int64)v3);
			sub_140931600(*(__int64**)(a2 + 24), (__int64)v16);
		}
		else
		{
			sub_140932690(v3, 6, 2, 0i64, 267, *(int*)(a2 + 52));
			v17 = sub_140932450((__int64)v3, 23);
			sub_14091B490(v3, (__int64*)(a1 + 256), (__int64)v17);
			sub_140932690(v3, 6, 267, *(int*)(a2 + 52), 258, 8i64 * *(int*)(a2 + 48));
			v18 = sub_140932570((__int64)v3);
			for (i = *(__int64**)(a2 + 24); i; i = (__int64*)i[1])
			{
				v20 = *i;
				if (*i && v18)
				{
					*(_QWORD*)(v20 + 16) &= ~2ui64;
					*(_QWORD*)(v20 + 16) |= 1ui64;
					*(_QWORD*)(v20 + 24) = v18;
				}
			}
		}
		if (v6 == 140)
		{
			sub_140932A90(v3, 25, 2, 0i64, 2, 0i64, 512, 8i64);
			sub_140932690(v3, 6, 258, -8i64, 512, 0i64);
			v21 = *(_QWORD*)(a2 + 56);
			v22 = sub_140932450((__int64)v3, 22);
			if (v22 && v21)
			{
				v22[2] &= ~2ui64;
				v22[2] |= 1ui64;
				v22[3] = v21;
			}
			v23 = sub_140932570((__int64)v3);
			if (v7 && v23)
			{
				v7[2] &= ~2ui64;
				v7[2] |= 1ui64;
				v7[3] = v23;
			}
		}
	}
	else
	{
		v10 = sub_140932570((__int64)v3);
		v11 = *(__int64**)(a2 + 24);
		for (j = v10; v11; v11 = (__int64*)v11[1])
		{
			v13 = *v11;
			if (*v11 && j)
			{
				*(_QWORD*)(v13 + 16) &= ~2ui64;
				*(_QWORD*)(v13 + 16) |= 1ui64;
				*(_QWORD*)(v13 + 24) = j;
			}
		}
		if (v6 == 140)
			goto LABEL_12;
	}
}

