//----- (000000014019C8D0) ----------------------------------------------------
__int64 __fastcall sub_14019C8D0(WCHAR* a1, int a2, const __m128i* a3)
{
	int v4; // eax
	int* v5; // rbx
	unsigned int v6; // edi
	WCHAR* v7; // r14
	unsigned __int64 v8; // rdi
	unsigned __int64 v9; // rdi
	unsigned int v10; // ebx
	int* v11; // rcx
	int v12; // eax
	unsigned __int16* v13; // rsi
	WCHAR* v14; // r14
	WCHAR* v15; // rax
	__int64 v16; // rcx
	int* v17; // r13
	WCHAR* v18; // r15
	__int16 v19; // cx
	unsigned __int64 v20; // rax
	__int64 v21; // r15
	int* v22; // r12
	__int64 v23; // [rsp+20h] [rbp-29h]
	char v24[8]; // [rsp+28h] [rbp-21h] BYREF
	int* v25; // [rsp+30h] [rbp-19h]
	int* v26; // [rsp+38h] [rbp-11h]
	__int64 v27; // [rsp+40h] [rbp-9h]
	__int64 v28; // [rsp+48h] [rbp-1h] BYREF
	unsigned __int16* v29; // [rsp+50h] [rbp+7h]
	int* v30; // [rsp+58h] [rbp+Fh]
	int* v31; // [rsp+60h] [rbp+17h]
	WCHAR* v32; // [rsp+B0h] [rbp+67h] BYREF
	int v33; // [rsp+B8h] [rbp+6Fh]
	int* v34; // [rsp+C8h] [rbp+7Fh] BYREF

	v33 = a2;
	v32 = a1;
	if (a2 > *(_DWORD*)qword_140C63750)
		return 2147500037i64;
	v34 = 0i64;
	v4 = sub_14019C5C0(a3, &v34);
	v5 = v34;
	v6 = v4;
	if (v4 < 0)
		goto LABEL_52;
	v7 = (WCHAR*)(*(__int64(__fastcall**)(int*))(*(_QWORD*)v34 + 32i64))(v34);
	v32 = v7;
	v8 = 2 * ((unsigned __int64)(*(__int64(__fastcall**)(int*))(*(_QWORD*)v5 + 16i64))(v5) >> 1);
	v9 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v5 + 32i64))(v5) + v8;
	if ((unsigned __int64)v7 >= v9)
		goto LABEL_51;
	v10 = v33;
	do
	{
		v11 = sub_14018B280(16i64, 0);
		v29 = (unsigned __int16*)v11;
		v30 = v11;
		v31 = v11 + 4;
		if (v11)
			*(_WORD*)v11 = 0;
		v12 = sub_14019A770(&v32, v9, &v28);
		v13 = v29;
		v14 = v32;
		if (!v12)
			goto LABEL_13;
		v15 = v32;
		if ((unsigned __int64)v32 >= v9)
			goto LABEL_47;
		while (1)
		{
			v16 = *v15;
			if ((_WORD)v16 != 32 && (_WORD)v16 != 9)
				break;
			if ((unsigned __int64)++v15 >= v9)
				goto LABEL_13;
		}
		if ((unsigned __int64)v15 < v9
			&& *v15 == 61
			&& (v14 = v15 + 1, v32 = v15 + 1, (v23 = sub_14019D200(v16, v29)) != 0))
		{
			if ((unsigned __int64)v14 < v9)
			{
				do
				{
					if (*v14 != 32 && *v14 != 9)
						break;
					++v14;
				} while ((unsigned __int64)v14 < v9);
				v32 = v14;
			}
			v17 = (int*)v14;
			if ((unsigned __int64)v14 < v9)
			{
				do
				{
					if (*v14 == 13)
						break;
					if (*v14 == 10)
						break;
					++v14;
				} while ((unsigned __int64)v14 < v9);
				v32 = v14;
			}
			v18 = v14;
			if (v14 > (WCHAR*)v17)
			{
				do
				{
					v19 = *(v18 - 1);
					v20 = (unsigned __int64)(v18 - 1);
					if (v19 != 32 && v19 != 9)
						break;
					--v18;
				} while (v20 > (unsigned __int64)v17);
			}
			v21 = ((char*)v18 - (char*)v17) >> 1;
			v22 = 0i64;
			v25 = 0i64;
			v26 = 0i64;
			v27 = 0i64;
			if ((unsigned __int64)(v21 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v22 = sub_14018B280(2 * (v21 + 1), 0);
				v25 = v22;
				v26 = v22;
				v27 = (__int64)v22 + 2 * v21 + 2;
			}
			sub_1407DB590(v22, v17, 2 * v21);
			v26 = (int*)((char*)v22 + 2 * v21);
			if (v26)
				*((_WORD*)v22 + v21) = 0;
			(*(void(__fastcall**)(__int64, _QWORD, char*))(*(_QWORD*)v23 + 24i64))(v23, v10, v24);
			if (v25)
				sub_14018B900((__int64)v25, 0);
			v13 = v29;
		}
		else
		{
		LABEL_13:
			if ((unsigned __int64)v14 >= v9)
				goto LABEL_47;
			while (*v14 != 13 && *v14 != 10)
			{
				v32 = ++v14;
				if ((unsigned __int64)v14 >= v9)
					goto LABEL_47;
			}
		}
		if ((unsigned __int64)v14 < v9)
		{
			do
			{
				if (*v14 != 13 && *v14 != 10)
					break;
				++v14;
			} while ((unsigned __int64)v14 < v9);
			v32 = v14;
		}
	LABEL_47:
		if (v13)
			sub_14018B900((__int64)v13, 0);
	} while ((unsigned __int64)v14 < v9);
	v5 = v34;
LABEL_51:
	v6 = 0;
LABEL_52:
	if (v5)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v5 + 8i64))(v5);
	return v6;
}
// 140C63750: using guessed type __int64 qword_140C63750;
// 14019C8D0: using guessed type char var_78[8];

