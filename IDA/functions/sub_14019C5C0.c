//----- (000000014019C5C0) ----------------------------------------------------
__int64 __fastcall sub_14019C5C0(const __m128i* a1, int** a2)
{
	unsigned int v3; // ebp
	int v4; // eax
	__int64 v5; // rbx
	__int64 v6; // rdi
	char* v7; // rax
	char* i; // rdx
	char* v9; // r8
	char* v10; // rcx
	int v11; // eax
	char* v12; // r15
	__int64 v13; // rax
	char* v14; // rcx
	unsigned __int64 v15; // rsi
	unsigned __int64 v16; // rdx
	__int64 v17; // rdi
	char v18; // r9
	__int16 v19; // r8
	char v20; // r10
	char v21; // r8
	char v22; // r10
	__int64 v23; // rax
	__int64 v25; // rsi
	unsigned __int64 v26; // rdi
	unsigned __int64 v27; // rdi
	__int64 v28; // rsi
	__int64 v29; // rax
	__int16* v30; // rcx
	__int64 v31; // rsi
	__int16 v32; // ax
	bool v33; // zf
	__int16 v34; // ax
	__int64 v35; // [rsp+60h] [rbp+18h] BYREF

	v3 = 0;
	v35 = 0i64;
	v4 = sub_1401B6D00((__int64)a1, a1, &v35);
	v5 = v35;
	if (v4 < 0)
		goto LABEL_35;
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v35 + 16i64))(v35);
	v7 = (char*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 32i64))(v5);
	v10 = v7;
	if (!v6)
		goto LABEL_39;
	if ((v6 & 1) != 0)
		goto LABEL_13;
	v9 = &v7[v6];
	if (*(_WORD*)v7 != 0xFEFF)
	{
		for (i = v7; i < v9; i += 2)
		{
			v11 = *(unsigned __int16*)i;
			if (!*(_WORD*)i || v11 == 2573 || (unsigned int)(v11 - 65534) <= 1)
				goto LABEL_13;
		}
		if (v10 < v9)
		{
			while (*v10)
			{
				if (++v10 >= v9)
					goto LABEL_13;
			}
			goto LABEL_39;
		}
	LABEL_13:
		v12 = (char*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 32i64))(v5);
		v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
		v14 = v12;
		v15 = v13;
		v16 = v13;
		if (!v12 && v13)
		{
			v4 = -2147024809;
		LABEL_35:
			v3 = v4;
			goto LABEL_36;
		}
		v17 = 0i64;
		if (v13)
		{
			while (1)
			{
				v18 = *v14;
				if (*v14 >= 0)
				{
					++v14;
					v19 = v18;
					--v16;
					goto LABEL_28;
				}
				if (v16 > 1 && (v18 & 0xE0) == 0xC0)
				{
					v20 = v14[1];
					if ((v20 & 0xC0) == 0x80)
						break;
				}
				if (v16 > 2 && (v18 & 0xF0) == 0xE0)
				{
					v21 = v14[1];
					if ((v21 & 0xC0) == 0x80)
					{
						v22 = v14[2];
						if ((v22 & 0xC0) == 0x80)
						{
							v14 += 3;
							v19 = v22 & 0x3F | (((unsigned __int16)(v18 << 6) | v21 & 0x3F) << 6);
							v16 -= 3i64;
						LABEL_28:
							++v17;
							if (!v19)
								goto LABEL_32;
							goto LABEL_31;
						}
					}
				}
				++v14;
				--v16;
			LABEL_31:
				if (!v16)
					goto LABEL_32;
			}
			v14 += 2;
			v19 = v20 & 0x3F | ((v18 & 0x1F) << 6);
			v16 -= 2i64;
			goto LABEL_28;
		}
	LABEL_32:
		v4 = sub_1401C5690(2 * v17, a2, 8);
		if (v4 < 0)
			goto LABEL_35;
		v23 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)*a2 + 32i64))(*a2);
		v4 = sub_14018EA30(v12, v15, v23, v17, 0i64);
	LABEL_34:
		if (v4 >= 0)
			goto LABEL_36;
		goto LABEL_35;
	}
LABEL_39:
	v25 = (*(__int64(__fastcall**)(__int64, char*, char*))(*(_QWORD*)v5 + 32i64))(v5, i, v9);
	v26 = (unsigned __int64)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5) >> 1;
	if (!v26)
		goto LABEL_51;
	if (*(_WORD*)v25 == 0xFEFF)
	{
		v4 = sub_1401C5740((int*)(v25 + 2), 2 * v26 - 2, a2);
		goto LABEL_34;
	}
	if (*(_WORD*)v25 == 0xFFFE)
	{
		v27 = v26 - 1;
		v28 = v25 + 2;
		v4 = sub_1401C5690(2 * v27, a2, 0);
		if (v4 < 0)
			goto LABEL_35;
		v29 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)*a2 + 32i64))(*a2);
		v30 = (__int16*)v29;
		if (v27)
		{
			v31 = v28 - v29;
			do
			{
				v32 = *(__int16*)((char*)v30 + v31);
				if ((v32 & 0xFF00) != 0 || (v33 = (_BYTE)v32 == 0, v34 = 0, !v33))
					v34 = 1;
				*v30++ = v34;
				--v27;
			} while (v27);
		}
	}
	else
	{
	LABEL_51:
		if (*a2 != (int*)v5)
		{
			(**(void(__fastcall***)(__int64))v5)(v5);
			if (*a2)
				(*(void(__fastcall**)(int*))(*(_QWORD*)*a2 + 8i64))(*a2);
			*a2 = (int*)v5;
		}
	}
LABEL_36:
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	return v3;
}
// 14019C7FB: variable 'i' is possibly undefined
// 14019C7FB: variable 'v9' is possibly undefined

