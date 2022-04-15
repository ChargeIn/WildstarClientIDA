//----- (00000001404E1270) ----------------------------------------------------
__int64 __fastcall sub_1404E1270(__int64* a1, int* a2, unsigned int a3, int** a4)
{
	__int64 result; // rax
	__int64 v7; // r13
	int* v8; // rbp
	__int64 v9; // rax
	int* v10; // r14
	__int64 v11; // rbx
	signed __int64 v12; // rbx
	char* v13; // rdi
	__int64 v14; // rsi
	char* v15; // rax
	unsigned __int64 v16; // rbx
	char* v17; // rax
	unsigned __int64 v18; // r15
	unsigned __int64* v19; // rax
	char* v20; // rsi
	char* v21; // rdi
	unsigned __int64 v22; // rcx
	int* v23; // rdx
	char* v24; // r8
	bool v25; // zf
	_WORD* v26; // rax
	BOOL v27; // edi
	__int64 v28; // rax
	__int64 v29; // rcx
	__int64 v30; // rax
	float v31; // xmm2_4
	__int64 v32; // rdx
	int* v33; // rdi
	int* v34; // rdx
	__int64 v35; // rax
	__int64 v36; // rdx
	int* v37; // rsi
	int** v38; // r12
	int* v39; // r13
	__int64 v40; // rbx
	int* v41; // rax
	unsigned __int64 v42; // rbx
	unsigned __int64 v43; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int64 v44; // [rsp+28h] [rbp-40h] BYREF
	unsigned int v45; // [rsp+80h] [rbp+18h] BYREF
	int** v46; // [rsp+88h] [rbp+20h]

	v46 = a4;
	if (!a3)
		return 0i64;
	result = sub_14023C740(a3);
	v7 = result;
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
			|| (HIWORD(v45) = 46, v15 = (char*)sub_14002C8A0(v10, (__int64)v10 + v12, v45), v15 == v13)
			|| (v16 = (v15 - (char*)v10) >> 1, v16 == -1i64)
			|| (HIWORD(v45) = 41, v17 = (char*)sub_14002C8A0(v10, (__int64)v13, v45), v17 == v13)
			|| (v18 = (v17 - (char*)v10) >> 1, v18 == -1i64)
			|| v16 >= v18)
		{
			v18 = 0i64;
		LABEL_55:
			if (v10)
				sub_14018B900((__int64)v10, 0);
			return v18;
		}
		v19 = &v43;
		v43 = v14 - (v16 + 1);
		v44 = v18 - v16 - 1;
		v20 = (char*)v10 + 2 * v16 + 2;
		if (v43 >= v44)
			v19 = &v44;
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
		if (v23)
			*(_WORD*)v23 = 0;
		v25 = sub_14018E5E0(v8, L"abs") == 0;
		v26 = (_WORD*)a1[24];
		v27 = !v25;
		if (v26 != (_WORD*)a1[25])
		{
			*v26 = 0;
			a1[25] = a1[24];
		}
		if (sub_14018E5E0(v8, L"cost"))
		{
			v28 = *a1;
			v45 = 0;
			(*(void(__fastcall**)(__int64*, int*, const wchar_t*, unsigned int*))(v28 + 184))(a1, v8, L"cost", &v45);
			if (v45 < 2)
			{
				v30 = sub_1403C2300(v29, *(_DWORD*)(v7 + 4));
				if (v30)
					v31 = sub_140462A90(v30);
				else
					v31 = 0.0;
				if (sub_14018E5E0(v8, L"rawInt"))
				{
					v33 = 0i64;
					v34 = (int*)*sub_14034C700(
						&v44,
						(__int64)L"%d",
						(unsigned int)(int)(float)((float)((float)*(int*)(v7 + 4i64 * v45 + 28) * v31) + 0.5));
					v35 = 0i64;
					if (*(_WORD*)v34)
					{
						do
							++v35;
						while (*((_WORD*)v34 + v35));
					}
					sub_14001C480((__int64)(a1 + 23), v34, (int*)((char*)v34 + 2 * v35));
					if (v44)
						(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)(v44 - 16) + 8i64))(v44 - 16);
					goto LABEL_43;
				}
				sub_1404DE6F0((__int64)a1, v32, v27);
			}
		}
		else if (sub_14018E5E0(v8, L"ms"))
		{
			sub_1404DE760((__int64)a1, v36, v27);
		}
		v33 = 0i64;
	LABEL_43:
		v37 = (int*)a1[24];
		v38 = v46;
		v39 = *v46;
		if (v37)
		{
			v40 = 0i64;
			if (*(_WORD*)v37)
			{
				do
					++v40;
				while (*((_WORD*)v37 + v40));
			}
			v41 = sub_14018B280(2 * v40 + 18, 0);
			if (v41)
			{
				*((_QWORD*)v41 + 1) = v40;
				*(_QWORD*)v41 = off_140B55060;
			}
			else
			{
				v41 = 0i64;
			}
			v33 = v41 + 4;
			v42 = 2 * v40;
			sub_1407DB590(v41 + 4, v37, v42);
			*(_WORD*)((char*)v33 + v42) = 0;
		}
		*v38 = v33;
		if (v39)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v39 - 2) + 8i64))(v39 - 4);
		if (v8)
			sub_14018B900((__int64)v8, 0);
		goto LABEL_55;
	}
	return result;
}
// 1404E14E8: variable 'v29' is possibly undefined
// 1404E159A: variable 'v32' is possibly undefined
// 1404E15CF: variable 'v36' is possibly undefined
// 140B0B430: using guessed type wchar_t aAbs_4[4];
// 140B0B438: using guessed type wchar_t aCost_0[5];
// 140B0B448: using guessed type wchar_t aCost_1[5];
// 140B0B550: using guessed type wchar_t aRawint_5[7];
// 140B0B560: using guessed type wchar_t aD_49[3];
// 140B0B568: using guessed type wchar_t aMs_5[3];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

