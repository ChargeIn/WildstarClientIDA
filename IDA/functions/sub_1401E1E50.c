//----- (00000001401E1E50) ----------------------------------------------------
__int64 __fastcall sub_1401E1E50(__int64 a1)
{
	int** v1; // rsi
	__int64 v2; // r14
	__int64* v4; // rbx
	__int64 v5; // rdi
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 result; // rax
	char* v9; // r15
	__int64 v10; // rcx
	__int64 v11; // r8
	__int64 v12; // rcx
	__int64 v13; // r8
	__int64 v14; // rbp
	__int64 i; // rbx
	int* v16; // rax
	int* v17; // rdi
	unsigned __int64 v18; // rbx
	int* v19; // rbp
	__int64 j; // rbx
	int* v21; // rax
	int* v22; // rdi
	unsigned __int64 v23; // rbx
	int v24[24]; // [rsp+30h] [rbp-4B8h] BYREF
	__m128i v25; // [rsp+90h] [rbp-458h] BYREF
	__m128i v26; // [rsp+2A0h] [rbp-248h] BYREF

	v1 = (int**)(a1 + 3032);
	v2 = 4i64;
	v4 = (__int64*)(a1 + 3032);
	v5 = 4i64;
	do
	{
		v6 = *(v4 - 8);
		*(v4 - 8) = 0i64;
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
		v7 = *v4;
		*v4 = 0i64;
		if (v7)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
		++v4;
		--v5;
	} while (v5);
	if ((*(_BYTE*)(*(_QWORD*)(a1 + 16) + 16i64) & 1) == 0)
	{
		result = sub_1401DBA80(a1, v24);
		if ((int)result < 0)
			return result;
		v9 = (char*)off_140A4AB60 - a1;
		do
		{
			sub_14001B370(&v25, 260i64, L"Costume\\%s.%s_Color.tex", v24, *(int**)((char*)v1 + (_QWORD)v9 - 3032));
			sub_14001B370(&v26, 260i64, L"Costume\\%s.%s_Normal.tex", v24, *(int**)((char*)v1 + (_QWORD)v9 - 3032));
			if ((unsigned int)sub_1401B58D0(v10, &v25, v11) && (unsigned int)sub_1401B58D0(v12, &v26, v13))
			{
				v14 = (__int64)*(v1 - 8);
				for (i = 0i64; v25.m128i_i16[i]; ++i)
					;
				v16 = sub_14018B280(2 * i + 18, 0);
				if (v16)
				{
					*(_QWORD*)v16 = off_140B55060;
					*((_QWORD*)v16 + 1) = i;
				}
				else
				{
					v16 = 0i64;
				}
				v17 = v16 + 4;
				v18 = 2 * i;
				sub_1407DB590(v16 + 4, v25.m128i_i32, v18);
				*(_WORD*)((char*)v17 + v18) = 0;
				*(v1 - 8) = v17;
				if (v14)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
				v19 = *v1;
				for (j = 0i64; v26.m128i_i16[j]; ++j)
					;
				v21 = sub_14018B280(2 * j + 18, 0);
				if (v21)
				{
					*(_QWORD*)v21 = off_140B55060;
					*((_QWORD*)v21 + 1) = j;
				}
				else
				{
					v21 = 0i64;
				}
				v22 = v21 + 4;
				v23 = 2 * j;
				sub_1407DB590(v21 + 4, v26.m128i_i32, v23);
				*(_WORD*)((char*)v22 + v23) = 0;
				*v1 = v22;
				if (v19)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v19 - 2) + 8i64))(v19 - 4);
			}
			++v1;
			--v2;
		} while (v2);
	}
	return 0i64;
}
// 1401E1F6E: variable 'v10' is possibly undefined
// 1401E1F6E: variable 'v11' is possibly undefined
// 1401E1F83: variable 'v12' is possibly undefined
// 1401E1F83: variable 'v13' is possibly undefined
// 140A4AB60: using guessed type wchar_t *off_140A4AB60[4];
// 140A4AF40: using guessed type wchar_t aCostumeSSNorma[25];
// 140A4AF78: using guessed type wchar_t aCostumeSSColor[24];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 1401E1E50: using guessed type int var_4B8[24];
// 1401E1E50: using guessed type __m128i var_458;
// 1401E1E50: using guessed type __m128i var_248;

