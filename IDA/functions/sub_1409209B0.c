//----- (00000001409209B0) ----------------------------------------------------
__int64 __fastcall sub_1409209B0(__int64 a1, __int64 a2)
{
	unsigned int* v2; // rbx
	_WORD* v5; // rdx
	int v6; // esi
	char* v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	_QWORD* v10; // rax
	__int64* j; // rdx
	__int64 v12; // rcx
	_QWORD* v14; // rsi
	_QWORD* v15; // rax
	__int64 v16; // rcx
	_QWORD* v17; // rsi
	_QWORD* v18; // rax
	__int64* i; // rdx
	__int64 v20; // rcx
	_QWORD* v21; // rax

	v2 = *(unsigned int**)a1;
	if (*(int*)(a2 + 44) >= 0)
	{
		sub_140932690(*(unsigned int**)a1, 6, 2, 0i64, 267, *(int*)(a2 + 40));
		v14 = sub_140932450((__int64)v2, 23);
		if (!*v2)
		{
			v15 = sub_14092D590((__int64)v2, 16i64);
			if (v15)
			{
				v16 = *(_QWORD*)(a1 + 256);
				*v15 = v14;
				v15[1] = v16;
				*(_QWORD*)(a1 + 256) = v15;
			}
		}
		if (*(_QWORD*)(a2 + 24))
		{
			v17 = sub_140932450((__int64)v2, 22);
			v18 = sub_140932570((__int64)v2);
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
			sub_14092EC50((unsigned int**)a1, *(_DWORD*)(a2 + 48));
			v21 = sub_140932570((__int64)v2);
			if (v17 && v21)
			{
				v17[2] &= ~2ui64;
				v17[2] |= 1ui64;
				v17[3] = v21;
			}
		}
		return sub_140932690(v2, 6, 267, *(int*)(a2 + 40), 258, 8i64 * *(int*)(a2 + 44));
	}
	else
	{
		v5 = *(_WORD**)(a2 + 32);
		if (*v5 == 128 || *v5 == 133)
		{
			v6 = 2 * (unsigned __int16)v5[2];
			if (!*v2)
			{
				v2[26] = 0;
				v7 = sub_14092D140((__int64)v2, 1, 1, 0i64, 258, -8i64);
				if (v7)
					*v7 = -117;
				if (!*v2)
				{
					v2[26] = 0;
					sub_14092AA10(v2, 3, 0i64, 258, -16i64);
					if (!*v2)
					{
						v8 = *(int*)(a1 + 36) + 48i64;
						v2[26] = 0;
						sub_14092AA10(v2, 267, v8 + 8i64 * v6, 1, 0i64);
						if (!*v2)
						{
							v9 = *(int*)(a1 + 36) + 48i64;
							v2[26] = 0;
							sub_14092AA10(v2, 267, v9 + 8i64 * (v6 + 1), 3, 0i64);
						}
					}
				}
			}
		}
		v10 = sub_140932570((__int64)v2);
		for (j = *(__int64**)(a2 + 24); j; j = (__int64*)j[1])
		{
			v12 = *j;
			if (*j)
			{
				if (v10)
				{
					*(_QWORD*)(v12 + 16) &= ~2ui64;
					*(_QWORD*)(v12 + 16) |= 1ui64;
					*(_QWORD*)(v12 + 24) = v10;
				}
			}
		}
		return sub_14092EC50((unsigned int**)a1, *(_DWORD*)(a2 + 48));
	}
}

