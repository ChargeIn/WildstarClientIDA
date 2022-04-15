//----- (00000001404E0D20) ----------------------------------------------------
__int64 __fastcall sub_1404E0D20(_QWORD* a1, int* a2, unsigned int a3, int** a4)
{
	__int64 result; // rax
	float* v7; // r13
	int* v8; // r12
	__int64 v9; // rax
	int* v10; // r14
	__int64 v11; // rbx
	signed __int64 v12; // rbx
	char* v13; // rdi
	__int64 v14; // rbp
	char* v15; // rax
	unsigned __int64 v16; // rbx
	char* v17; // rax
	unsigned __int64 v18; // rsi
	unsigned __int64* v19; // rax
	char* v20; // rbp
	char* v21; // rdi
	unsigned __int64 v22; // rcx
	int* v23; // rdx
	char* v24; // r8
	unsigned int v25; // ebx
	BOOL v26; // ebp
	bool v27; // zf
	_WORD* v28; // rax
	int* v29; // rbp
	int** v30; // r15
	int* v31; // r13
	__int64 v32; // rbx
	int* v33; // rax
	float v34; // xmm1_4
	__int64 v35; // rdx
	__int64 v36; // rdx
	int* v37; // rdx
	__int64 v38; // rax
	int* v39; // rdi
	unsigned __int64 v40; // rbx
	unsigned __int64 v41; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int64 v42; // [rsp+28h] [rbp-40h] BYREF
	int v43; // [rsp+80h] [rbp+18h] BYREF
	int** v44; // [rsp+88h] [rbp+20h]

	v44 = a4;
	if (!a3)
		return 0i64;
	result = sub_140238340(a3);
	v7 = (float*)result;
	if (result)
	{
		v8 = 0i64;
		v9 = 0i64;
		v10 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v9;
			while (*((_WORD*)a2 + v9));
		}
		v11 = (2 * v9) >> 1;
		if ((unsigned __int64)(v11 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v10 = sub_14018B280(2 * (v11 + 1), 0);
		v12 = 2 * v11;
		sub_1407DB590(v10, a2, v12);
		v13 = (char*)v10 + v12;
		if ((int*)((char*)v10 + v12))
			*(_WORD*)v13 = 0;
		v14 = v12 >> 1;
		if (!(v12 >> 1)
			|| (HIWORD(v43) = 46, v15 = (char*)sub_14002C8A0(v10, (__int64)v10 + v12, v43), v15 == v13)
			|| (v16 = (v15 - (char*)v10) >> 1, v16 == -1i64)
			|| (HIWORD(v43) = 41, v17 = (char*)sub_14002C8A0(v10, (__int64)v13, v43), v17 == v13)
			|| (v18 = (v17 - (char*)v10) >> 1, v18 == -1i64)
			|| v16 >= v18)
		{
			v18 = 0i64;
		LABEL_72:
			if (v10)
				sub_14018B900((__int64)v10, 0);
			return v18;
		}
		v19 = &v42;
		v42 = v14 - (v16 + 1);
		v41 = v18 - v16 - 1;
		v20 = (char*)v10 + 2 * v16 + 2;
		if (v42 >= v41)
			v19 = &v41;
		v21 = (char*)v10 + 2 * v16 + 2 * *v19 + 2;
		v22 = ((v21 - v20) >> 1) + 1;
		if (v22 <= 0x7FFFFFFFFFFFFFFEi64)
			v8 = sub_14018B280(2 * v22, 0);
		v23 = v8;
		if (v20 != v21)
		{
			v24 = (char*)v10 + 2 * v16 + 2 - (_QWORD)v8;
			do
			{
				if (v23)
					*(_WORD*)v23 = *(_WORD*)((char*)v23 + (_QWORD)v24);
				v23 = (int*)((char*)v23 + 2);
			} while ((char*)v23 + (_QWORD)v24 != v21);
		}
		v25 = 0;
		if (v23)
			*(_WORD*)v23 = 0;
		v26 = sub_14018E5E0(v8, L"pctAdd") != 0;
		LODWORD(v41) = sub_14018E5E0(v8, L"pctSub") != 0;
		LODWORD(v42) = sub_14018E5E0(v8, L"pct") != 0;
		v27 = sub_14018E5E0(v8, L"abs") == 0;
		v28 = (_WORD*)a1[24];
		LOBYTE(v25) = !v27;
		if (v28 != (_WORD*)a1[25])
		{
			*v28 = 0;
			a1[25] = a1[24];
		}
		if (sub_14018E5E0(v8, L"mod"))
		{
			v43 = 0;
			(*(void(__fastcall**)(_QWORD*, int*, const wchar_t*, int*))(*a1 + 184i64))(a1, v8, L"mod", &v43);
			if (v43)
			{
				switch (v43)
				{
				case 1:
					v34 = v7[7];
					break;
				case 2:
					v34 = v7[8];
					break;
				case 3:
					v34 = v7[9];
					break;
				default:
					v29 = (int*)a1[24];
					v30 = v44;
					v31 = *v44;
					if (!v29)
					{
						*v44 = 0i64;
					LABEL_67:
						if (v31)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v31 - 2) + 8i64))(v31 - 4);
						if (v8)
							sub_14018B900((__int64)v8, 0);
						goto LABEL_72;
					}
					v32 = 0i64;
					if (*(_WORD*)v29)
					{
						do
							++v32;
						while (*((_WORD*)v29 + v32));
					}
					v33 = sub_14018B280(2 * v32 + 18, 0);
					if (v33)
					{
						*((_QWORD*)v33 + 1) = v32;
						*(_QWORD*)v33 = off_140B55060;
					}
					else
					{
						v33 = 0i64;
					}
				LABEL_65:
					v39 = v33 + 4;
					v40 = 2 * v32;
					sub_1407DB590(v33 + 4, v29, v40);
					*(_WORD*)((char*)v39 + v40) = 0;
					*v30 = v39;
					goto LABEL_67;
				}
			}
			else
			{
				v34 = v7[6];
			}
			if (sub_14018E5E0(v8, L"ms"))
			{
				sub_1404DE760((__int64)a1, v35, 0i64);
			}
			else if (v26)
			{
				sub_1404DE7D0((__int64)a1, (int)(float)((float)((float)(v34 * 1000.0) - 1000.0) + 0.5), v25);
			}
			else if ((_DWORD)v41)
			{
				sub_1404DE7D0((__int64)a1, (int)(float)((float)(1000.0 - (float)(v34 * 1000.0)) + 0.5), v25);
			}
			else if ((_DWORD)v42)
			{
				sub_1404DE7D0((__int64)a1, (int)(float)(v34 * 1000.0), v25);
			}
			else
			{
				if (sub_14018E5E0(v8, L"rawInt"))
				{
					v32 = 0i64;
					v37 = (int*)*sub_14034C700(&v42, (__int64)L"%d", (unsigned int)(int)v34);
					v38 = 0i64;
					if (*(_WORD*)v37)
					{
						do
							++v38;
						while (*((_WORD*)v37 + v38));
					}
					sub_14001C480((__int64)(a1 + 23), v37, (int*)((char*)v37 + 2 * v38));
					if (v42)
						(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)(v42 - 16) + 8i64))(v42 - 16);
					goto LABEL_60;
				}
				sub_1404DE6F0((__int64)a1, v36, v25);
			}
		}
		v32 = 0i64;
	LABEL_60:
		v29 = (int*)a1[24];
		v30 = v44;
		v31 = *v44;
		if (!v29)
		{
			*v44 = 0i64;
			goto LABEL_67;
		}
		if (*(_WORD*)v29)
		{
			do
				++v32;
			while (*((_WORD*)v29 + v32));
		}
		v33 = sub_14018B280(2 * v32 + 18, 0);
		if (v33)
		{
			*((_QWORD*)v33 + 1) = v32;
			*(_QWORD*)v33 = off_140B55060;
		}
		goto LABEL_65;
	}
	return result;
}
// 1404E1098: variable 'v35' is possibly undefined
// 1404E1196: variable 'v36' is possibly undefined
// 140B0B428: using guessed type wchar_t aD_48[3];
// 140B0B458: using guessed type wchar_t aMod_1[4];
// 140B0B460: using guessed type wchar_t aMod_2[4];
// 140B0B468: using guessed type wchar_t aMs_4[3];
// 140B0B470: using guessed type wchar_t aRawint_4[7];
// 140B0B480: using guessed type wchar_t aPctadd_3[7];
// 140B0B490: using guessed type wchar_t aPctsub_3[7];
// 140B0B4A0: using guessed type wchar_t aPct_3[4];
// 140B0B4A8: using guessed type wchar_t aAbs_3[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

