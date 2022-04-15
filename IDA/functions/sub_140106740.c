//----- (0000000140106740) ----------------------------------------------------
char __fastcall sub_140106740(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	int* v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rax
	_WORD* v8; // rax
	__int64 v9; // r15
	__int64 v10; // rdi
	const wchar_t* v11; // rbx
	wchar_t* v12; // rax
	int v13; // ecx
	bool v14; // zf
	unsigned __int16* v15; // rsi
	__int64 v16; // rbp
	__int64 v17; // rdi
	__int64 i; // rbp
	__int64 v19; // rbx
	_QWORD* v20; // rax
	unsigned __int16 v21; // r11
	unsigned __int64 v22; // rcx
	__int64 v23; // r10
	unsigned __int64 v24; // rdx
	unsigned __int16* v25; // rax
	__int64 v26; // r10
	int* v27; // rdi
	__int64 v28; // rax
	__int64 v29; // r14
	_WORD* v30; // r8
	_QWORD* v31; // rax
	_QWORD* v32; // rcx
	char v34[8]; // [rsp+20h] [rbp-48h] BYREF
	int* v35; // [rsp+28h] [rbp-40h]
	_WORD* v36; // [rsp+30h] [rbp-38h]
	__int64 v37; // [rsp+38h] [rbp-30h]
	int v38; // [rsp+80h] [rbp+18h] BYREF

	v4 = sub_1401A6B80(a2, L"Name");
	if (!v4)
		return 0;
	v5 = (int*)sub_1401A4F40(v4 + 32);
	if (!v5)
		return 0;
	v6 = 0i64;
	if (*(_WORD*)v5)
	{
		do
			++v6;
		while (*((_WORD*)v5 + v6));
	}
	sub_14001C480(a1 + 64, v5, (int*)((char*)v5 + 2 * v6));
	v38 = 1;
	v7 = sub_1401A6B80(a2, L"Cycle");
	if (v7)
	{
		v8 = (_WORD*)sub_1401A4F40(v7 + 32);
		sub_1407DF428(v8, (__int64)L"%d", &v38);
	}
	*(_BYTE*)(a1 + 56) = v38 != 0;
	v9 = sub_1401A5AE0(a2, L"Layer");
	if (v9)
	{
		while (1)
		{
			v10 = *(_QWORD*)(v9 + 96);
			if (v10)
			{
				while (1)
				{
					v11 = L"Name";
					v12 = (wchar_t*)sub_1401A4F40(v10 + 8);
					if (v12 == L"Name")
						break;
					v13 = 0;
					if (!*v12)
						goto LABEL_18;
					do
					{
						if (!*v11 || *v12 != *v11)
							break;
						v14 = v13 == 0x7FFFFFFF;
						if (v13 == 0x7FFFFFFF)
							goto LABEL_16;
						++v12;
						++v11;
						++v13;
					} while (*v12);
					v14 = v13 == 0x7FFFFFFF;
				LABEL_16:
					if (v14)
						break;
					if (!*v12)
					{
					LABEL_18:
						if (!*v11)
							break;
					}
					v10 = *(_QWORD*)(v10 + 56);
					if (!v10)
						goto LABEL_20;
				}
				v15 = (unsigned __int16*)sub_1401A4F40(v10 + 32);
			}
			else
			{
			LABEL_20:
				v15 = 0i64;
			}
			v16 = *(_QWORD*)(a1 + 8);
			if (v15)
			{
				v17 = *(_QWORD*)(v16 + 64);
				for (i = *(_QWORD*)(v16 + 72); v17 != i; v17 += 8i64)
				{
					v19 = *(_QWORD*)(*(_QWORD*)v17 + 40i64);
					v20 = sub_14010A540(*(_QWORD**)(*(_QWORD*)v17 + 32i64), v19, v15);
					if (v20 != (_QWORD*)v19 && *v20)
						break;
				}
			}
			v21 = *v15;
			v22 = 0i64;
			if (*v15)
			{
				do
					++v22;
				while (v15[v22]);
			}
			v23 = *(_QWORD*)(a1 + 72);
			if ((*(_QWORD*)(a1 + 80) - v23) >> 1 != v22)
				goto LABEL_35;
			v24 = 0i64;
			if (v22)
				break;
		LABEL_48:
			v9 = sub_1401A5BC0(v9, L"Layer");
			if (!v9)
				return 1;
		}
		v25 = v15;
		v26 = v23 - (_QWORD)v15;
		while (*(unsigned __int16*)((char*)v25 + v26) == *v25)
		{
			++v24;
			++v25;
			if (v24 >= v22)
				goto LABEL_48;
		}
	LABEL_35:
		v27 = 0i64;
		v35 = 0i64;
		v37 = 0i64;
		v28 = 0i64;
		if (v21)
		{
			do
				++v28;
			while (v15[v28]);
		}
		v29 = (2 * v28) >> 1;
		if ((unsigned __int64)(v29 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v27 = sub_14018B280(2 * (v29 + 1), 0);
			v35 = v27;
			v37 = (__int64)v27 + 2 * v29 + 2;
		}
		sub_1407DB590(v27, (int*)v15, 2 * v29);
		v30 = (_WORD*)v27 + v29;
		v36 = v30;
		if (v30)
			*v30 = 0;
		v31 = *(_QWORD**)(a1 + 112);
		if (v31 == *(_QWORD**)(a1 + 120))
		{
			sub_1400F8CF0((__int64*)(a1 + 96), *(char**)(a1 + 112), (__int64)v34);
		}
		else
		{
			if (v31)
			{
				v32 = *(_QWORD**)(a1 + 112);
				v31[1] = 0i64;
				v31[2] = 0i64;
				v31[3] = 0i64;
				sub_14001C1B0(v32, v27, (__int64)v30);
			}
			*(_QWORD*)(a1 + 112) += 32i64;
		}
		if (v27)
			sub_14018B900((__int64)v27, 0);
		goto LABEL_48;
	}
	return 1;
}
// 140106953: conditional instruction was optimized away because rdi.8!=0
// 140106979: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A1A7A0: using guessed type wchar_t aLayer[6];
// 140A1A9B8: using guessed type wchar_t aCycle[6];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140106740: using guessed type char var_48[8];

