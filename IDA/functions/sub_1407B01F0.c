//----- (00000001407B01F0) ----------------------------------------------------
__int64 __fastcall sub_1407B01F0(int* a1, int a2, int** a3, __int64 a4)
{
	int** v4; // rbp
	_QWORD* v5; // rsi
	int v6; // r14d
	__int64 v7; // r13
	__int16* v8; // r14
	const __m128i* v9; // rbx
	__int64 v10; // r12
	bool v11; // zf
	const __m128i* v12; // rax
	__int16 v13; // ax
	const __m128i* v14; // rcx
	const __m128i* v15; // rcx
	const __m128i* v16; // rdx
	__int64 i; // rax
	__int16* v18; // rcx
	signed __int64 v19; // rdx
	__int16 v20; // ax
	__int16* v21; // r9
	__int16* v22; // r10
	const wchar_t* v23; // r8
	__int64 v24; // rcx
	char* v25; // rdx
	__int16 v26; // ax
	__int16 v27; // ax
	__int16 v28; // ax
	__int16 v29; // ax
	__int64 v30; // rax
	__int64 v31; // rcx
	__int64 v32; // r8
	__m128i* v33; // rax
	__int64 v34; // rcx
	__int64 result; // rax
	int* v36; // rax
	__int64 v37; // rbx
	signed int v38; // edi
	__int64 v39; // rcx
	int* v40; // rdi
	__int64 v41; // r8
	__m128i v46[33]; // [rsp+50h] [rbp-868h] BYREF
	__int16 v47[256]; // [rsp+260h] [rbp-658h] BYREF
	__int16 v48[256]; // [rsp+460h] [rbp-458h] BYREF
	char v49[528]; // [rsp+660h] [rbp-258h] BYREF

	v4 = (int**)a4;
	v5 = a3;
	v6 = a2;
	if ((a2 & 1) == 0)
	{
	LABEL_60:
		v36 = sub_14018B280(752i64, 0);
		v37 = (__int64)v36;
		if (v36)
		{
			*(_QWORD*)v36 = off_140B78750;
			v36[2] = 1;
			*((_QWORD*)v36 + 11) = 0i64;
			*((_QWORD*)v36 + 10) = 0i64;
			*((_QWORD*)v36 + 12) = 0i64;
			*((_QWORD*)v36 + 26) = 0i64;
			*((_QWORD*)v36 + 27) = 0i64;
			*((_QWORD*)v36 + 2) = 0i64;
			*((_QWORD*)v36 + 3) = 0i64;
			*((_QWORD*)v36 + 4) = 0i64;
			*((_QWORD*)v36 + 5) = 0i64;
			*((_QWORD*)v36 + 6) = 0i64;
			*((_QWORD*)v36 + 7) = 0i64;
			*((_QWORD*)v36 + 8) = 0i64;
			*((_QWORD*)v36 + 9) = 0i64;
		}
		else
		{
			v37 = 0i64;
		}
		v38 = sub_1407AFA00(v37, a1);
		if (v38 >= 0)
		{
			v40 = sub_14018B280(64i64, 0);
			if (v40)
			{
				*(_QWORD*)v40 = off_140B78780;
				*((_QWORD*)v40 + 1) = v37;
				if (v37)
					(**(void(__fastcall***)(__int64))v37)(v37);
				*((_QWORD*)v40 + 4) = 0i64;
				*((_QWORD*)v40 + 5) = 0i64;
				v40[14] = v6;
				v40[15] = 1;
				v40[4] = 0;
			}
			else
			{
				v40 = 0i64;
			}
			sub_14019E010(v39, (void(__fastcall***)(_QWORD))v40, v41, 0i64, v4);
			(*(void(__fastcall**)(int*))(*(_QWORD*)v40 + 8i64))(v40);
			if (v5)
			{
				*v5 = v37;
				(**(void(__fastcall***)(__int64))v37)(v37);
			}
			v38 = 0;
		}
		if (v37)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v37 + 8i64))(v37);
		return (unsigned int)v38;
	}
	v7 = 256i64;
	v8 = v48;
	v9 = (const __m128i*)a1;
	v10 = 256i64;
	if (a1)
	{
		v11 = (unsigned int)sub_1407DFF20(*(_WORD*)a1) == 0;
		v12 = v9;
		if (v11 || v9->m128i_i16[1] != 58)
		{
			v13 = v9->m128i_i16[1] && v9->m128i_i16[2] == 58;
			if (!(unsigned int)sub_1407DFF20(v13))
			{
			LABEL_16:
				v14 = sub_1407DD8D8(v9, 0x2Fu);
				if (v14 || (v14 = sub_1407DD8D8(v9, 0x5Cu)) != 0i64)
				{
					v15 = (const __m128i*) & v14->m128i_i8[2];
					if (v15)
					{
						for (; v9 != v15; v9 = (const __m128i*)((char*)v9 + 2))
							;
					}
				}
				v16 = sub_1407DD8D8(v9, 0x2Eu);
				if (!v16)
				{
					for (i = 0i64; v9->m128i_i16[i]; ++i)
						;
					v16 = (const __m128i*)((char*)v9 + 2 * i);
				}
				if (v9 != v16)
				{
					do
					{
						if (v10 == 1)
						{
							if (v8)
								*v8 = 0;
							goto LABEL_37;
						}
						if (v8)
						{
							++v8;
							--v10;
							*(v8 - 1) = v9->m128i_i16[0];
						}
						v9 = (const __m128i*)((char*)v9 + 2);
					} while (v9 != v16);
					if (!v8)
						goto LABEL_32;
				}
				*v8 = 0;
			LABEL_32:
				v18 = v47;
				v19 = (char*)v16 - (char*)v47;
				while (v7 != -2147483390)
				{
					v20 = *(__int16*)((char*)v18 + v19);
					if (!v20)
						break;
					*v18++ = v20;
					if (!--v7)
					{
						*(v18 - 1) = 0;
						goto LABEL_37;
					}
				}
				*v18 = 0;
				goto LABEL_37;
			}
			v12 = v9;
		}
		if (v12->m128i_i16[0])
		{
			while (v9->m128i_i16[0] != 58)
			{
				v9 = (const __m128i*)((char*)v9 + 2);
				if (!v9->m128i_i16[0])
					goto LABEL_16;
			}
			v9 = (const __m128i*)((char*)v9 + 2);
		}
		goto LABEL_16;
	}
LABEL_37:
	v21 = v47;
	v22 = v48;
	v23 = L"RemoteCache";
	v24 = 260i64;
	v25 = v49;
	while (v24 != 1)
	{
		v26 = *v23++;
		v25 += 2;
		*((_WORD*)v25 - 1) = v26;
		--v24;
		if (!*v23)
		{
			v27 = *(v23 - 1);
			if (v27 != 47 && v27 != 92)
			{
				if (v24 == 1)
					break;
				*(_WORD*)v25 = 92;
				v25 += 2;
				--v24;
			}
			v28 = v48[0];
			if (v48[0])
			{
				while (v24 != 1)
				{
					++v22;
					*(_WORD*)v25 = v28;
					v25 += 2;
					v28 = *v22;
					--v24;
					if (!*v22)
						goto LABEL_47;
				}
			}
			else
			{
			LABEL_47:
				v29 = v47[0];
				if (!v47[0])
					break;
				if (v47[0] != 46)
				{
					if (v24 == 1)
						break;
					*(_WORD*)v25 = 46;
					v25 += 2;
					--v24;
				}
				do
				{
					if (v24 == 1)
						break;
					++v21;
					*(_WORD*)v25 = v29;
					v25 += 2;
					v29 = *v21;
					--v24;
				} while (*v21);
			}
			break;
		}
	}
	v30 = *(_QWORD*)&qword_140C63788;
	*(_WORD*)v25 = 0;
	if ((int)sub_14001B370(v46, 260i64, L"%s%s\\%s", v30 + 4244, *(_QWORD*)(v30 + 4896), v49) >= 0
		&& v46[0].m128i_i16[0])
	{
		v33 = v46;
		do
		{
			v11 = v33->m128i_i16[1] == 0;
			v33 = (__m128i*)((char*)v33 + 2);
		} while (!v11);
	}
	v4 = (int**)a4;
	v5 = a3;
	if (!(unsigned int)sub_1401B58D0(v31, v46, v32) || (result = sub_1401B6DE0(v34, v46, a3, a4, 0i64), (int)result < 0))
	{
		v6 = a2;
		goto LABEL_60;
	}
	return result;
}
// 1407B02B4: conditional instruction was optimized away because rbp.8==0
// 1407B02BD: conditional instruction was optimized away because rdi.8==0
// 1407B02E5: conditional instruction was optimized away because rdi.8==0
// 1407B0324: conditional instruction was optimized away because r15.8==0
// 1407B032D: conditional instruction was optimized away because rsi.8==0
// 1407B034C: conditional instruction was optimized away because rsi.8==0
// 1407B062B: conditional instruction was optimized away because r13.8!=0
// 1407B0562: variable 'v31' is possibly undefined
// 1407B0562: variable 'v32' is possibly undefined
// 1407B0585: variable 'v34' is possibly undefined
// 1407B06B1: variable 'v39' is possibly undefined
// 1407B06B1: variable 'v41' is possibly undefined
// 140A47438: using guessed type wchar_t aSSS_1[8];
// 140B53960: using guessed type wchar_t aRemotecache_1[12];
// 140B78750: using guessed type __int64 (__fastcall *off_140B78750[19])();
// 140B78780: using guessed type __int64 (__fastcall *off_140B78780[13])();
// 1407B01F0: using guessed type __m128i var_868[33];

