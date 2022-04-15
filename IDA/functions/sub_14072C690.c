//----- (000000014072C690) ----------------------------------------------------
__int64 __fastcall sub_14072C690(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rdi
	__int64 v6; // rbx
	unsigned int v7; // r12d
	unsigned int v8; // ebp
	__int64 v9; // rax
	__int64 v10; // rbp
	unsigned int v11; // r14d
	__int64 v12; // rax
	__int64 v13; // rax
	__m128i v14; // xmm0
	__int64 v15; // rax
	__int64 i; // rax
	__int64 j; // rcx
	int v19; // [rsp+50h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	v4 = qword_140C65898;
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	v5 = *(_QWORD*)(v4 + 25360);
	v6 = *(_QWORD*)(v5 + 16);
	v7 = 1;
	while (v6 != v5)
	{
		v8 = *(_DWORD*)(v6 + 48);
		if (qword_140C63840)
		{
			v9 = qword_140C63840(off_140A69800, v8, qword_140C63858);
		}
		else
		{
			if (dword_140C63AA8 || (int)sub_1401F1600() < 0)
				goto LABEL_23;
			v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C653D0 + 24i64))(qword_140C653D0, v8);
		}
		v10 = v9;
		if (v9)
		{
			v11 = *(_DWORD*)(v9 + 4);
			if (qword_140C63840)
			{
				v12 = qword_140C63840(off_140A69838, v11, qword_140C63858);
			LABEL_15:
				if (v12
					&& (!*(_DWORD*)(v6 + 60)
						&& (!*(_DWORD*)((**(__int64(__fastcall***)(__int64, _QWORD))(v6 + 40))(
							v6 + 40,
							*(unsigned int*)(v6 + 48))
							+ 20)
							|| dword_140C636A8 < (unsigned int)(*(_DWORD*)(v6 + 52) + *(_DWORD*)(v6 + 56)))
						&& (!*(_DWORD*)((**(__int64(__fastcall***)(__int64, _QWORD))(v6 + 40))(
							v6 + 40,
							*(unsigned int*)(v6 + 48))
							+ 28)
							|| *(_DWORD*)(v6 + 64))
						|| (*(_BYTE*)(v10 + 24) & 4) == 0))
				{
					v13 = a1[2];
					v14 = _mm_cvtsi32_si128(v7);
					*(_DWORD*)(v13 + 8) = 3;
					++v7;
					*(_QWORD*)v13 = *(_OWORD*)&_mm_cvtepi32_pd(v14);
					a1[2] += 16i64;
					v19 = *(_DWORD*)(v6 + 48);
					sub_14066DB90(a1, &v19);
					sub_14005EA50(
						(__int64)a1,
						(__int64*)(a1[2] - 48i64),
						(int*)(a1[2] - 32i64),
						(unsigned int*)(a1[2] - 16i64));
					a1[2] -= 32i64;
				}
				goto LABEL_23;
			}
			if (!dword_140C639C0 && (int)sub_1401F1A40() >= 0)
			{
				v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C639E0 + 24i64))(qword_140C639E0, v11);
				goto LABEL_15;
			}
		}
	LABEL_23:
		v15 = *(_QWORD*)(v6 + 24);
		if (v15)
		{
			v6 = *(_QWORD*)(v6 + 24);
			for (i = *(_QWORD*)(v15 + 16); i; i = *(_QWORD*)(i + 16))
				v6 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v6 + 8); v6 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v6 = j;
			if (*(_QWORD*)(v6 + 24) != j)
				v6 = j;
		}
	}
	return 1i64;
}
// 140A69800: using guessed type wchar_t *off_140A69800[2];
// 140A69838: using guessed type wchar_t *off_140A69838[2];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C639C0: using guessed type int dword_140C639C0;
// 140C639E0: using guessed type __int64 qword_140C639E0;
// 140C63AA8: using guessed type int dword_140C63AA8;
// 140C653D0: using guessed type __int64 qword_140C653D0;
// 140C65898: using guessed type __int64 qword_140C65898;

