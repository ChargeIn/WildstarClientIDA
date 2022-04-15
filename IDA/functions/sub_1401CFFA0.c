//----- (00000001401CFFA0) ----------------------------------------------------
__int64 __fastcall sub_1401CFFA0(char* a1, _WORD* a2, unsigned int a3, __int64** a4)
{
	__m128i* v9; // r10
	__int64 v10; // rbx
	__int64 v11; // rdx
	__m128i* v12; // rcx
	int v13; // r11d
	__int64 v14; // r8
	signed __int64 v15; // r9
	__int16 v16; // ax
	char* v17; // rcx
	const __m128i* v18; // rax
	__m128i* v19; // rdx
	const char* v20; // r8
	char* v21; // rcx
	signed __int64 v22; // r8
	__int16 v23; // ax
	int v24; // ebx
	__m128i* v25; // [rsp+40h] [rbp-C0h] BYREF
	__int64(__fastcall * *v26)(); // [rsp+50h] [rbp-B0h] BYREF
	__int64 v27; // [rsp+58h] [rbp-A8h]
	__int64 v28; // [rsp+60h] [rbp-A0h]
	__int64 v29; // [rsp+68h] [rbp-98h]
	__int64 v30; // [rsp+70h] [rbp-90h]
	__int64 v31; // [rsp+78h] [rbp-88h]
	__int64 v32; // [rsp+80h] [rbp-80h]
	int v33; // [rsp+88h] [rbp-78h]
	__int64 v34; // [rsp+90h] [rbp-70h]
	__m128i v35[32]; // [rsp+A0h] [rbp-60h] BYREF
	char v36[8]; // [rsp+2A8h] [rbp+1A8h] BYREF
	char v37[528]; // [rsp+2B0h] [rbp+1B0h] BYREF

	if (!a4)
		return 2147942487i64;
	v9 = v35;
	v10 = 260i64;
	v25 = v35;
	v35[0].m128i_i16[0] = 0;
	if (a1 && *(_WORD*)a1)
	{
		v11 = 260i64;
		v12 = v35;
		v13 = 0;
		v14 = 0i64;
		v15 = a1 - (char*)v35;
		while (v11 != -2147483386)
		{
			v16 = *(__int16*)((char*)v12->m128i_i16 + v15);
			if (!v16)
				break;
			v12->m128i_i16[0] = v16;
			v12 = (__m128i*)((char*)v12 + 2);
			++v14;
			if (!--v11)
			{
				v12 = (__m128i*)((char*)v12 - 2);
				v13 = -2147024774;
				--v14;
				break;
			}
		}
		v12->m128i_i16[0] = 0;
		v34 = v14;
		v17 = &v35[0].m128i_i8[2 * v14];
		if ((int)(v13 + 0x80000000) < 0 || v13 == -2147024774)
		{
			v9 = (__m128i*)((char*)v35 + 2 * v14);
			v25 = v9;
			if (v17 > (char*)v35 && *((_WORD*)v17 - 1) != 92)
			{
				sub_1401B38F0(v17, (v36 - v17) >> 1, "\\", (char**)&v25, 0i64);
				v9 = v25;
			}
		}
	}
	if (a2 && *a2)
		sub_14001B2D0(v9, (v36 - (char*)v9) >> 1, (__int64)a2);
	v18 = sub_1407DD8D8(v35, 0x5Cu);
	if (v18)
		v19 = (__m128i*) & v18->m128i_i8[2];
	else
		v19 = v35;
	v20 = "*";
	if (v19->m128i_i16[0])
		v20 = (const char*)v19;
	v21 = v37;
	v22 = v20 - v37;
	while (v10 != -2147483386)
	{
		v23 = *(_WORD*)&v21[v22];
		if (!v23)
			break;
		*(_WORD*)v21 = v23;
		v21 += 2;
		if (!--v10)
		{
			v21 -= 2;
			break;
		}
	}
	*(_WORD*)v21 = 0;
	v19->m128i_i16[0] = 0;
	v26 = off_140B5F120;
	v28 = 0i64;
	v27 = 0i64;
	v30 = 0i64;
	v29 = 0i64;
	v32 = 0i64;
	v31 = 0i64;
	v33 = 1;
	v24 = sub_1401D1190(
		(__int64*)&v26,
		(__int64)v37,
		a3,
		(const WCHAR*)v35,
		v25->m128i_i32,
		v19->m128i_i32,
		(__int64)v36);
	if (v24 < 0 || (v24 = sub_1401D06D0(&v26, a4), v24 < 0))
	{
		if (v31)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v31 - 16) + 8i64))(v31 - 16);
		if (v29)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v29 - 16) + 8i64))(v29 - 16);
		if (v27)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v27 - 16) + 8i64))(v27 - 16);
		return (unsigned int)v24;
	}
	else
	{
		if (v31)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v31 - 16) + 8i64))(v31 - 16);
		if (v29)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v29 - 16) + 8i64))(v29 - 16);
		if (v27)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v27 - 16) + 8i64))(v27 - 16);
		return 0i64;
	}
}
// 1401D005A: conditional instruction was optimized away because rdx.8!=0
// 1401D0159: conditional instruction was optimized away because rbx.8!=0
// 140B5F120: using guessed type __int64 (__fastcall *off_140B5F120[20])();
// 1401CFFA0: using guessed type __m128i var_450[32];
// 1401CFFA0: using guessed type char var_248[8];

