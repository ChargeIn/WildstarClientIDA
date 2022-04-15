//----- (0000000140350D70) ----------------------------------------------------
__int64 __fastcall sub_140350D70(__int64 a1, int* a2)
{
	__int64 v2; // r13
	__int64 v3; // rdi
	unsigned __int64 v5; // rsi
	_QWORD* v6; // rbx
	int* v7; // rax
	__int64 v8; // rbx
	__int64* v9; // rbx
	__int64* v10; // rcx
	__int64 v11; // rax
	unsigned __int64 v12; // rbp
	int** v13; // r15
	int* v14; // rax
	int* v15; // rcx
	__int64 v16; // rdi
	unsigned __int64 v17; // rsi
	_QWORD* v18; // rbx
	__m128** v19; // rbx
	__m128* v20; // rbx
	__int64 result; // rax

	v2 = qword_140C65878;
	v3 = qword_140C65878 + 960;
	v5 = (*(__int64(__fastcall**)(int*))(qword_140C65878 + 984))(a2);
	v6 = *(_QWORD**)(*(_QWORD*)(v3 + 16) + 8 * (v5 % *(_QWORD*)(v3 + 8)));
	if (!v6)
		goto LABEL_5;
	while (v5 != *v6 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v3 + 32))(a2, v6 + 2))
	{
		v6 = (_QWORD*)v6[1];
		if (!v6)
			goto LABEL_5;
	}
	v9 = v6 + 3;
	if (v9)
	{
		v8 = *v9;
	}
	else
	{
	LABEL_5:
		v7 = sub_14018B280(32i64, 0);
		v8 = (__int64)v7;
		if (v7)
		{
			*((_QWORD*)v7 + 2) = 0i64;
			*((_QWORD*)v7 + 3) = 0i64;
			*((_QWORD*)v7 + 1) = 0i64;
		}
		else
		{
			v8 = 0i64;
		}
		v10 = (__int64*)(v2 + 1000);
		if (!*(_QWORD*)(v8 + 16))
		{
			*(_QWORD*)(v8 + 16) = v10;
			*(_QWORD*)(v8 + 24) = *v10;
			*v10 = v8;
			v11 = *(_QWORD*)(v8 + 24);
			if (v11)
				*(_QWORD*)(v11 + 16) = v8 + 24;
		}
		if (*(_QWORD*)v3 == *(_QWORD*)(v3 + 8))
			sub_1400290D0(v3);
		v12 = (*(__int64(__fastcall**)(int*))(v3 + 24))(a2);
		v13 = (int**)(*(_QWORD*)(v3 + 16) + 8 * (v12 % *(_QWORD*)(v3 + 8)));
		v14 = sub_14018B280(32i64, 0);
		if (v14)
		{
			v15 = *v13;
			*(_QWORD*)v14 = v12;
			*((_QWORD*)v14 + 1) = v15;
			LODWORD(v15) = *a2;
			*((_QWORD*)v14 + 3) = v8;
			v14[4] = (int)v15;
		}
		else
		{
			v14 = 0i64;
		}
		*v13 = v14;
		++* (_QWORD*)v3;
	}
	sub_1403514F0(v8, a2, (__int64)&off_140A7D3E8);
	v16 = *(_QWORD*)(v2 + 560);
	if (!v16)
		return 0i64;
	while (1)
	{
		v17 = (*(__int64(__fastcall**)(int*))(v16 + 2024))(a2);
		v18 = *(_QWORD**)(*(_QWORD*)(v16 + 2016) + 8 * (v17 % *(_QWORD*)(v16 + 2008)));
		if (v18)
		{
			while (v17 != *v18 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v16 + 2032))(a2, v18 + 2))
			{
				v18 = (_QWORD*)v18[1];
				if (!v18)
					goto LABEL_28;
			}
			v19 = (__m128**)(v18 + 3);
			if (v19)
			{
				v20 = *v19;
				result = sub_140372FE0(v20);
				if ((int)result < 0)
					return result;
				result = sub_140367360(v16, (__int64)v20);
				if ((int)result < 0)
					return result;
			}
		}
	LABEL_28:
		v16 = *(_QWORD*)(v16 + 120);
		if (!v16)
			return 0i64;
	}
}
// 140A7D3E8: using guessed type wchar_t *off_140A7D3E8;
// 140C65878: using guessed type __int64 qword_140C65878;

