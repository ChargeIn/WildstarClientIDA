//----- (000000014092FA70) ----------------------------------------------------
__int64 __fastcall sub_14092FA70(__int64 a1, _WORD* a2, int a3, __int64 a4, int a5)
{
	unsigned int* v5; // rsi
	_WORD* v6; // rbx
	_WORD* v8; // r9
	__int64 v9; // rax
	bool v10; // zf
	int v11; // r15d
	unsigned __int64 v12; // r12
	int v13; // r10d
	int v14; // edi
	__int64 v15; // rax
	char* v16; // rax
	int v17; // edi
	__int64 v18; // rax
	int v19; // edi
	int v20; // edi
	int v21; // edi
	int v22; // r13d
	__int64 v23; // rbp
	__int64 v24; // rax
	int v25; // edi
	__int64 v26; // rax
	int v27; // edi

	v5 = *(unsigned int**)a1;
	v6 = a2;
	v8 = a2;
	do
	{
		v9 = (unsigned __int16)v8[1];
		v10 = v8[v9] == 113;
		v8 += v9;
	} while (v10);
	v11 = a5;
	v12 = (unsigned __int64)(v8 + 2);
	v13 = a5;
	v14 = 8 * (-1 - a3);
	if (a5 || *a2 != 128 && *a2 != 133)
		v6 = sub_140930750(a1, a2);
	for (; (unsigned __int64)v6 < v12; v13 = a5)
	{
		switch (*v6)
		{
		case 3:
			if (!v11)
			{
				v15 = *(int*)(a1 + 36);
				if (!*v5)
				{
					v5[26] = 0;
					v16 = sub_14092D140((__int64)v5, 1, 1, 0i64, 267, v15 + 48);
					if (v16)
						*v16 = -117;
				}
				if (!*v5)
				{
					v5[26] = 0;
					sub_14092AA10(v5, 258, v14, 512, -1i64);
				}
				v17 = v14 + 8;
				if (!*v5)
				{
					v5[26] = 0;
					sub_14092AA10(v5, 258, v17, 1, 0i64);
				}
				v14 = v17 + 8;
				v11 = 1;
			}
			++v6;
			break;
		case 0x6F:
			if (*(_DWORD*)(a1 + 100) && !v11)
			{
				sub_140932690(v5, 6, 1, 0i64, 267, *(int*)(a1 + 36));
				if (!*v5)
				{
					v5[26] = 0;
					sub_14092AA10(v5, 258, v14, 512, -1i64);
				}
				v20 = v14 + 8;
				sub_140932690(v5, 6, 258, v20, 1, 0i64);
				v13 = a5;
				v14 = v20 + 8;
				v11 = 1;
			}
			if (*(_DWORD*)(a1 + 60) && !v13)
			{
				sub_140932690(v5, 6, 1, 0i64, 267, *(int*)(a1 + 60));
				sub_140932690(v5, 6, 258, v14, 512, -2i64);
				v21 = v14 + 8;
				sub_140932690(v5, 6, 258, v21, 1, 0i64);
				v14 = v21 + 8;
				a5 = 1;
			}
			v6 += 2;
			break;
		case 0x7F:
		case 0x80:
		case 0x84:
		case 0x85:
			v22 = 2 * (unsigned __int16)v6[2];
			v23 = 8i64 * v22;
			v24 = v23 + *(int*)(a1 + 36);
			if (!*v5)
			{
				v5[26] = 0;
				sub_14092AA10(v5, 258, v14, 512, v24);
			}
			v25 = v14 + 8;
			if (!*v5)
			{
				v26 = v23 + *(int*)(a1 + 36) + 48i64;
				v5[26] = 0;
				sub_14092AA10(v5, 1, 0i64, 267, v26);
			}
			sub_140932690(v5, 6, 3, 0i64, 267, *(int*)(a1 + 36) + 8i64 * (v22 + 1));
			sub_140932690(v5, 6, 258, v25, 1, 0i64);
			v27 = v25 + 8;
			sub_140932690(v5, 6, 258, v27, 3, 0i64);
			v14 = v27 + 8;
			v6 += 3;
			break;
		case 0x8F:
			if (!v13)
			{
				v18 = *(int*)(a1 + 60);
				if (!*v5)
				{
					v5[26] = 0;
					sub_14092AA10(v5, 1, 0i64, 267, v18 + 48);
				}
				if (!*v5)
				{
					v5[26] = 0;
					sub_14092AA10(v5, 258, v14, 512, -2i64);
				}
				v19 = v14 + 8;
				sub_140932690(v5, 6, 258, v19, 1, 0i64);
				v14 = v19 + 8;
				a5 = 1;
			}
			v6 += (unsigned __int16)v6[1] + 3;
			break;
		default:
			v6 = sub_140930750(a1, v6);
			break;
		}
	}
	return sub_140932690(v5, 6, 258, v14, 512, 0i64);
}
// 14092FBDA: variable 'v13' is possibly undefined

