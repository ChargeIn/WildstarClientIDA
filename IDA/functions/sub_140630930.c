//----- (0000000140630930) ----------------------------------------------------
__int64 __fastcall sub_140630930(__int64 a1, __int64 a2)
{
	int* v2; // rbp
	__int64 v3; // rsi
	__int64 v5; // rdi
	int* v6; // rax
	int* v7; // rbx
	unsigned __int64 v8; // rdi
	__int64 v9; // rdi
	int* v10; // rax
	__int64 v11; // rbp
	unsigned __int64 v12; // rdi
	__int64 v13; // rbx
	__int64* v14; // r15
	unsigned __int64 v15; // rbp
	_QWORD* v16; // rdi
	__int64 v17; // rbp
	unsigned __int64 v18; // r12
	int** v19; // rdi
	int* v20; // rax
	int* v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	LARGE_INTEGER* QuadPart; // rbx
	__int64 v26; // [rsp+20h] [rbp-48h]
	int v27; // [rsp+30h] [rbp-38h] BYREF
	__int64 v28; // [rsp+38h] [rbp-30h]
	__int64 v29; // [rsp+70h] [rbp+8h] BYREF

	v29 = a1;
	v2 = *(int**)(a2 + 16);
	v3 = qword_140C65C18;
	if (v2)
	{
		v5 = 0i64;
		if (*(_WORD*)v2)
		{
			do
				++v5;
			while (*((_WORD*)v2 + v5));
		}
		v6 = sub_14018B280(2 * v5 + 18, 0);
		if (v6)
		{
			*(_QWORD*)v6 = off_140B55060;
			*((_QWORD*)v6 + 1) = v5;
		}
		else
		{
			v6 = 0i64;
		}
		v7 = v6 + 4;
		v8 = 2 * v5;
		sub_1407DB590(v6 + 4, v2, v8);
		*(_WORD*)((char*)v7 + v8) = 0;
	}
	else
	{
		v7 = 0i64;
	}
	v27 = *(_DWORD*)a2;
	if (v7)
	{
		v9 = *((_QWORD*)v7 - 1);
		v10 = sub_14018B280(2 * v9 + 18, 0);
		if (v10)
		{
			*(_QWORD*)v10 = off_140B55060;
			*((_QWORD*)v10 + 1) = v9;
		}
		else
		{
			v10 = 0i64;
		}
		v11 = (__int64)(v10 + 4);
		v12 = 2 * v9;
		sub_1407DB590(v10 + 4, v7, v12);
		*(_WORD*)(v12 + v11) = 0;
		v28 = v11;
	}
	else
	{
		v11 = 0i64;
		v28 = 0i64;
	}
	sub_140631E70(v3 + 40, &v29, &v27);
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
	if (v7)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
	v13 = v29;
	if (v29 != *(_QWORD*)(v3 + 48))
	{
		v14 = (__int64*)(a2 + 8);
		v15 = (*(__int64(__fastcall**)(__int64*))(v3 + 24))(v14);
		v16 = *(_QWORD**)(*(_QWORD*)(v3 + 16) + 8 * (v15 % *(_QWORD*)(v3 + 8)));
		if (!v16)
			goto LABEL_26;
		while (v15 != *v16 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v3 + 32))(v14, v16 + 2))
		{
			v16 = (_QWORD*)v16[1];
			if (!v16)
				goto LABEL_26;
		}
		if (v16 == (_QWORD*)-24i64)
		{
		LABEL_26:
			v17 = *(_QWORD*)(v13 + 48);
			if (*(_QWORD*)v3 == *(_QWORD*)(v3 + 8))
				sub_1400290D0(v3);
			v18 = (*(__int64(__fastcall**)(__int64*))(v3 + 24))(v14);
			v19 = (int**)(*(_QWORD*)(v3 + 16) + 8 * (v18 % *(_QWORD*)(v3 + 8)));
			v20 = sub_14018B280(32i64, 0);
			if (v20)
			{
				v21 = *v19;
				*(_QWORD*)v20 = v18;
				*((_QWORD*)v20 + 1) = v21;
				v22 = *v14;
				*((_QWORD*)v20 + 3) = v17;
				*((_QWORD*)v20 + 2) = v22;
			}
			else
			{
				v20 = 0i64;
			}
			*v19 = v20;
			++* (_QWORD*)v3;
		}
		v23 = *(_QWORD*)(v13 + 48);
		*(_QWORD*)(v23 + 24) = *v14;
		QuadPart = *(LARGE_INTEGER**)(v23 + 48);
		for (*(_DWORD*)(v23 + 44) = 1; QuadPart; QuadPart = (LARGE_INTEGER*)QuadPart[15].QuadPart)
		{
			LODWORD(v26) = 5;
			sub_1406A4360((__int64)QuadPart, QuadPart + 1, "Li", QuadPart, v26);
		}
	}
	return 0i64;
}
// 140630B39: variable 'v26' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65C18: using guessed type __int64 qword_140C65C18;

