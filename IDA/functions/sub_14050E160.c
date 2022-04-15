//----- (000000014050E160) ----------------------------------------------------
__int64 __fastcall sub_14050E160(__int64 a1)
{
	unsigned __int64 v2; // rdx
	unsigned int v3; // ecx
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64(__fastcall * v7)(wchar_t**, __int64); // rax
	unsigned int v8; // eax
	unsigned int v9; // r15d
	unsigned int v10; // ebp
	__int64 v11; // rax
	__int64 v12; // rcx
	unsigned int* v13; // rsi
	__int16* v14; // r14
	__int64 v15; // rdx
	__int64 v16; // rdx
	__int64 v17; // rbx
	__int64 v18; // rax
	unsigned __int64* v19; // rdx
	unsigned __int64 v20; // r8
	__m128i v21; // xmm0
	__int64 v22; // rax
	unsigned __int64* v23; // rdx
	unsigned __int64 v24; // r8
	unsigned __int64* v25; // rdx
	unsigned __int64 v26; // r8
	__int64 v28; // [rsp+20h] [rbp-38h] BYREF
	__int64 v29; // [rsp+28h] [rbp-30h]

	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v3;
		} while (v3 < v2);
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v5 = *(_QWORD*)(a1 + 16);
	v6 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	v7 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v7)
	{
		v8 = v7(off_140A6DA48, qword_140C63858);
	}
	else
	{
		if (dword_140C63DA0)
		{
			v9 = 0;
			goto LABEL_15;
		}
		if ((int)sub_140241E20() < 0)
		{
			v9 = 0;
			goto LABEL_15;
		}
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63D50 + 40i64))(qword_140C63D50);
	}
	v9 = v8;
LABEL_15:
	v10 = 0;
	if (v9)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C63DA0 && (int)sub_140241E20() >= 0)
			{
				v11 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63D50 + 32i64))(qword_140C63D50, v10);
				goto LABEL_21;
			}
		LABEL_47:
			if (++v10 >= v9)
				return 1i64;
		}
		v11 = qword_140C63848(off_140A6DA48, v10, qword_140C63858);
	LABEL_21:
		v13 = (unsigned int*)v11;
		if (v11)
		{
			v14 = sub_14034BDD0(v12, *(_DWORD*)(v11 + 4));
			if (v14)
			{
				v15 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(v15 + 8) = 3;
				*(double*)v15 = (double)(int)(v10 + 1);
				v16 = *(_QWORD*)(a1 + 32);
				*(_QWORD*)(a1 + 16) += 16i64;
				if (*(_QWORD*)(v16 + 120) >= *(_QWORD*)(v16 + 112))
					sub_14005E2C0(a1);
				v17 = *(_QWORD*)(a1 + 16);
				v18 = sub_14005C1B0(a1, 0, 0);
				*(_DWORD*)(v17 + 8) = 5;
				*(_QWORD*)v17 = v18;
				*(_QWORD*)(a1 + 16) += 16i64;
				v19 = (unsigned __int64*)sub_14018F0E0(&v28, L"index")[1];
				if (v19)
				{
					v20 = -1i64;
					do
						++v20;
					while (*((_BYTE*)v19 + v20));
					sub_140058710(a1, v19, v20);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					*(_QWORD*)(a1 + 16) += 16i64;
				}
				if (v29)
					sub_14018B900(v29, 0);
				v21 = _mm_cvtsi32_si128(*v13);
				v22 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(v22 + 8) = 3;
				*(_QWORD*)v22 = *(_OWORD*)&_mm_cvtepi32_pd(v21);
				*(_QWORD*)(a1 + 16) += 16i64;
				sub_14005EA50(
					a1,
					(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
					(int*)(*(_QWORD*)(a1 + 16) - 32i64),
					(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				v23 = (unsigned __int64*)sub_14018F0E0(&v28, L"localizedText")[1];
				if (v23)
				{
					v24 = -1i64;
					do
						++v24;
					while (*((_BYTE*)v23 + v24));
					sub_140058710(a1, v23, v24);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					*(_QWORD*)(a1 + 16) += 16i64;
				}
				if (v29)
					sub_14018B900(v29, 0);
				v25 = (unsigned __int64*)sub_14018F0E0(&v28, (unsigned __int16*)v14)[1];
				if (v25)
				{
					v26 = -1i64;
					do
						++v26;
					while (*((_BYTE*)v25 + v26));
					sub_140058710(a1, v25, v26);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					*(_QWORD*)(a1 + 16) += 16i64;
				}
				if (v29)
					sub_14018B900(v29, 0);
				sub_14005EA50(
					a1,
					(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
					(int*)(*(_QWORD*)(a1 + 16) - 32i64),
					(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				sub_14005EA50(
					a1,
					(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
					(int*)(*(_QWORD*)(a1 + 16) - 32i64),
					(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
			}
		}
		goto LABEL_47;
	}
	return 1i64;
}
// 14050E2A8: variable 'v12' is possibly undefined
// 140A6DA48: using guessed type wchar_t *off_140A6DA48[2];
// 140B11428: using guessed type wchar_t aIndex_43[6];
// 140B11450: using guessed type wchar_t aLocalizedtext_0[14];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D50: using guessed type __int64 qword_140C63D50;
// 140C63DA0: using guessed type int dword_140C63DA0;

