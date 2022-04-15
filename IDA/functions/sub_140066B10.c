//----- (0000000140066B10) ----------------------------------------------------
__int64 __fastcall sub_140066B10(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	int v3; // r15d
	int v6; // eax
	int v7; // r14d
	__int64 v8; // r12
	__int64 v9; // rcx
	int v10; // eax
	char* v11; // rdx
	bool v12; // zf
	int v13; // ecx
	int v14; // eax
	__int64 v15; // rcx
	int v16; // eax
	int v17; // eax
	__int64 v18; // rax
	unsigned int v19; // edx
	int i; // ecx
	__int64 v21; // r8
	__int64 v22; // rcx
	unsigned int j; // edx
	__int64 result; // rax
	__int64* v25; // rbx
	__int64 v26; // rcx
	__int64 v27; // r8
	const char* v28; // rax
	__int64* v29; // rbx
	__int64 v30; // rcx
	__int64 v31; // r8
	const char* v32; // rax
	const char* v33; // rax
	const char* v34; // rax
	int v35; // [rsp+30h] [rbp-40h] BYREF
	int v36; // [rsp+38h] [rbp-38h]
	__int64 v37; // [rsp+40h] [rbp-30h]
	__int64 v38; // [rsp+48h] [rbp-28h]
	unsigned int v39; // [rsp+50h] [rbp-20h]
	__int64 v40; // [rsp+54h] [rbp-1Ch]

	v2 = *(_QWORD*)(a1 + 48);
	v3 = *(_DWORD*)(a1 + 4);
	v6 = sub_14006BBF0(v2, 10, *(_DWORD*)(*(_QWORD*)(v2 + 24) + 8i64));
	v7 = 0;
	*(_QWORD*)(a2 + 16) = -1i64;
	v8 = v6;
	*(_DWORD*)a2 = 11;
	*(_DWORD*)(a2 + 8) = v6;
	v9 = *(_QWORD*)(a1 + 48);
	v40 = 0i64;
	v39 = 0;
	v38 = a2;
	v37 = -1i64;
	v35 = 0;
	v36 = 0;
	sub_14006AAE0(v9, (int*)a2);
	if (*(_DWORD*)(a1 + 16) != 123)
	{
		v10 = sub_1407DE7F8(123);
		v11 = aCharD;
		if (!v10)
			v11 = aC_16;
		v33 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)v11, 123i64);
		v34 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)"'%s' expected", v33);
		sub_140062CF0(a1, v34, *(_DWORD*)(a1 + 16));
	}
	v12 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (!v12)
		goto LABEL_27;
LABEL_5:
	*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	while (*(_DWORD*)(a1 + 16) != 125)
	{
		if (v35)
		{
			sub_14006A700(v2, &v35);
			if (v35 == 12 && (v36 & 0x100) == 0 && v36 >= *(unsigned __int8*)(v2 + 74))
				--* (_DWORD*)(v2 + 60);
			v13 = *(_DWORD*)(v2 + 60) + 1;
			if (v13 > *(unsigned __int8*)(*(_QWORD*)v2 + 115i64))
			{
				if (v13 >= 250)
					sub_140062CF0(*(_QWORD*)(v2 + 24), aFunctionOrExpr, *(_DWORD*)(*(_QWORD*)(v2 + 24) + 16i64));
				*(_BYTE*)(*(_QWORD*)v2 + 115i64) = v13;
			}
			sub_14006A980(v2, &v35, (*(_DWORD*)(v2 + 60))++);
			v35 = 0;
			if (HIDWORD(v40) == 50)
			{
				sub_14006BCE0(v2, *(_DWORD*)(v38 + 8), v40, 50);
				HIDWORD(v40) = 0;
			}
		}
		v14 = *(_DWORD*)(a1 + 16);
		v15 = a1;
		if (v14 == 91)
		{
		LABEL_24:
			sub_140066820(v15, (__int64)&v35);
			goto LABEL_25;
		}
		if (v14 == 285)
		{
			v16 = sub_140063BB0(a1, (__int64*)(a1 + 40));
			v15 = a1;
			*(_DWORD*)(a1 + 32) = v16;
			if (v16 == 61)
				goto LABEL_24;
			sub_140067E60(a1, &v35, 0i64);
			if ((int)v40 > 2147483645)
			{
				v29 = *(__int64**)(a1 + 48);
				v30 = v29[4];
				v31 = *(unsigned int*)(*v29 + 96);
				if ((_DWORD)v31)
					v32 = (const char*)sub_14005B130(
						v30,
						(unsigned __int64*)"function at line %d has more than %d %s",
						v31,
						2147483645i64,
						aItemsInAConstr_0);
				else
					v32 = (const char*)sub_14005B130(
						v30,
						(unsigned __int64*)"main function has more than %d %s",
						2147483645i64,
						aItemsInAConstr_0);
				sub_140062CF0(v29[3], v32, 0);
			}
			++HIDWORD(v40);
			LODWORD(v40) = v40 + 1;
		}
		else
		{
			sub_140067E60(a1, &v35, 0i64);
			if ((int)v40 > 2147483645)
			{
				v25 = *(__int64**)(a1 + 48);
				v26 = v25[4];
				v27 = *(unsigned int*)(*v25 + 96);
				if ((_DWORD)v27)
					v28 = (const char*)sub_14005B130(
						v26,
						(unsigned __int64*)"function at line %d has more than %d %s",
						v27,
						2147483645i64,
						aItemsInAConstr_0);
				else
					v28 = (const char*)sub_14005B130(
						v26,
						(unsigned __int64*)"main function has more than %d %s",
						2147483645i64,
						aItemsInAConstr_0);
				sub_140062CF0(v25[3], v28, 0);
			}
			++HIDWORD(v40);
			LODWORD(v40) = v40 + 1;
		}
	LABEL_25:
		v17 = *(_DWORD*)(a1 + 16);
		if (v17 != 44 && v17 != 59)
			break;
		v12 = *(_DWORD*)(a1 + 32) == 287;
		*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
		if (v12)
			goto LABEL_5;
	LABEL_27:
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v18 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v18;
	}
	sub_1400656B0(a1, 125, 123, v3);
	if (HIDWORD(v40))
		sub_140066A30(v2, (__int64)&v35);
	v19 = v40;
	for (i = 0; v19 >= 0x10; v19 = (v19 + 1) >> 1)
		++i;
	if (v19 >= 8)
		v19 = (8 * i + 8) | (v19 - 8);
	v21 = 4 * v8;
	v22 = *(_QWORD*)(*(_QWORD*)v2 + 24i64);
	*(_DWORD*)(v22 + v21) &= 0x7FFFFFu;
	*(_DWORD*)(v22 + v21) |= v19 << 23;
	for (j = v39; j >= 0x10; j = (j + 1) >> 1)
		++v7;
	if (j >= 8)
		j = (8 * v7 + 8) | (j - 8);
	result = *(_QWORD*)v2;
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 24i64) + 4 * v8) ^= (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 24i64) + 4 * v8) ^ (j << 14)) & 0x7FC000;
	return result;
}
// 140067E60: using guessed type __int64 __fastcall sub_140067E60(_QWORD, _QWORD, _QWORD);

