//----- (0000000140529B60) ----------------------------------------------------
void __fastcall sub_140529B60(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	int v5; // edi
	int v6; // eax
	__int64 v7; // rbp
	int* v8; // rax
	int* v9; // rax
	__int64(__fastcall * **v10)(_QWORD); // rax
	unsigned int v11; // eax
	__int64 v12; // r8
	__int64 v13; // rcx
	__int64 v14; // rdx
	__int64 v15; // rcx
	unsigned __int64 v16; // rax
	unsigned __int64 v17; // rbp
	__int64 v18; // r15
	unsigned int v19; // r14d
	__int64 v20; // rax
	unsigned __int64 v21; // rcx
	__m128i* v22; // r8
	__int64 v23; // rdx
	_DWORD* v24; // rax
	unsigned int v25; // ebx
	int* v26; // rax
	unsigned int v27; // eax
	bool v28; // zf
	__int128 v29; // [rsp+30h] [rbp-68h]
	__int128 v30; // [rsp+40h] [rbp-58h]
	int v31[8]; // [rsp+50h] [rbp-48h] BYREF
	__int64 v32; // [rsp+A0h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 1352);
	if (v3)
		sub_14018B900(v3, 0);
	v5 = 0;
	*(_QWORD*)(a1 + 1152) = a2;
	*(_QWORD*)(a1 + 1352) = 0i64;
	if (a2)
	{
		v6 = (**(__int64(__fastcall***)(__int64))a2)(a2);
		v7 = *(_QWORD*)(a1 + 1152);
		LODWORD(v32) = v6;
		v8 = sub_140538120(a1 + 1376, (int*)&v32);
		if (*((_QWORD*)v8 + 1) != v7)
			*((_QWORD*)v8 + 1) = v7;
		*(_DWORD*)(a1 + 1412) = 0;
		v9 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 88i64))(a2);
		sub_14044A3B0((__int64)v31, v9);
		*(_QWORD*)&v29 = __PAIR64__(v31[2], v31[0]);
		*(_QWORD*)&v30 = __PAIR64__(v31[6], v31[4]);
		*(_OWORD*)(a1 + 1280) = v29;
		*(_OWORD*)(a1 + 1296) = v30;
		if ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1152) + 24i64))(*(_QWORD*)(a1 + 1152)))
		{
			v10 = (__int64(__fastcall***)(_QWORD))(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1152) + 24i64))(*(_QWORD*)(a1 + 1152));
			v11 = (**v10)(v10);
			v12 = *(_QWORD*)(a1 + 1168);
			v13 = *(_QWORD*)(v12 + 8);
			v14 = v12;
			while (v13)
			{
				if (*(_DWORD*)(v13 + 32) < v11)
				{
					v13 = *(_QWORD*)(v13 + 24);
				}
				else
				{
					v14 = v13;
					v13 = *(_QWORD*)(v13 + 16);
				}
			}
			if (v14 == v12 || (v32 = v14, v11 < *(_DWORD*)(v14 + 32)))
				v32 = v12;
			if (v32 != v12)
			{
				v15 = *(_QWORD*)(v32 + 40);
				if (v15 != *(_QWORD*)(a1 + 1192))
					*(_QWORD*)(a1 + 1192) = v15;
			}
		}
		sub_14052B650(a1);
		v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 128i64))(a2);
		sub_140538630((__int64*)(a1 + 1200), v16);
		v17 = 0i64;
		if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 128i64))(a2))
		{
			v18 = 0i64;
			do
			{
				v19 = *(_DWORD*)((*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)a2 + 120i64))(a2, v17) + 24);
				if (qword_140C63840)
				{
					v20 = qword_140C63840(off_140A6B4A8, v19, qword_140C63858);
				}
				else if (dword_140C64CE4)
				{
					v20 = 0i64;
				}
				else if ((int)sub_140214320() >= 0)
				{
					v20 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C38 + 24i64))(qword_140C63C38, v19);
				}
				else
				{
					v20 = 0i64;
				}
				v21 = *(_QWORD*)(v20 + 8);
				if (v21)
				{
					if (v21 <= qword_140C3FE70)
						v22 = (__m128i*)(v21 + qword_140C3FE68);
					else
						v22 = 0i64;
				}
				else
				{
					v22 = 0i64;
				}
				v23 = *(_QWORD*)(a1 + 32);
				if (v23)
					sub_140109710((__int64*)(v18 + *(_QWORD*)(a1 + 1200)), v23 + 240, v22, 0);
				++v17;
				v18 += 48i64;
			} while (v17 < (*(__int64(__fastcall**)(__int64, __int64, __m128i*))(*(_QWORD*)a2 + 128i64))(a2, v23, v22));
		}
		v24 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1152) + 88i64))(*(_QWORD*)(a1 + 1152));
		v25 = (v24[2] - *v24) * (v24[3] - v24[1]);
		v26 = sub_14018B280(v25, 0);
		*(_QWORD*)(a1 + 1352) = v26;
		sub_1407E4830(v26, 0i64, v25);
		v27 = sub_140529FF0(a1);
		v28 = v27 == *(_DWORD*)(a1 + 1332);
		*(_DWORD*)(a1 + 1332) = v27;
		LOBYTE(v5) = !v28;
		if (v5)
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ZoneMapPlayerIndicatorUpdated", L"b", v27);
	}
	else
	{
		*(_DWORD*)(a1 + 1332) = 0;
	}
}
// 140529C39: variable 'v29' is possibly undefined
// 140529C4B: variable 'v30' is possibly undefined
// 140529DE1: variable 'v23' is possibly undefined
// 140529DE1: variable 'v22' is possibly undefined
// 1409EF904: using guessed type wchar_t aB_24[2];
// 140A6B4A8: using guessed type wchar_t *off_140A6B4A8[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C38: using guessed type __int64 qword_140C63C38;
// 140C64CE4: using guessed type int dword_140C64CE4;
// 140C65898: using guessed type __int64 qword_140C65898;

