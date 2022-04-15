//----- (0000000140796230) ----------------------------------------------------
const char* __fastcall sub_140796230(__int64 a1, const __m128i* a2, unsigned __int64* a3)
{
	char* v5; // r14
	__int64 v6; // r8
	unsigned __int64 v7; // r8
	__int64 v8; // rax
	__int64 v9; // r9
	__int64 v10; // rax
	unsigned __int64* v11; // rsi
	__int64 v12; // rbx
	__int64 v13; // rax
	__int8* v14; // rbp
	__int64 v15; // rcx
	const __m128i* v16; // rdx
	char* v17; // rax
	unsigned __int64 v18; // rcx
	_QWORD* v19; // rdx
	const char* v20; // rbx
	__int64 v21; // rcx
	__int64* v22; // rax
	__int64 v23; // rsi
	unsigned __int64 v24; // rcx
	_QWORD* v25; // rax
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v29; // [rsp+20h] [rbp-18h] BYREF
	int v30; // [rsp+28h] [rbp-10h]

	v5 = (char*)sub_140057200((_QWORD*)a1, a2, (const __m128i*)asc_140C39D0C, asc_140C39D54);
	v6 = *(_QWORD*)(**(_QWORD**)(*(_QWORD*)(a1 + 40) + 8i64) + 24i64);
	*(_DWORD*)(a1 + 144) = 5;
	*(_QWORD*)(a1 + 136) = v6;
	v7 = -1i64;
	do
		++v7;
	while (*((_BYTE*)a3 + v7));
	v8 = sub_140062650(a1, a3, v7);
	v9 = *(_QWORD*)(a1 + 16);
	v29 = v8;
	v30 = 4;
	sub_14005E8E0(a1, a1 + 136, (int*)&v29, v9);
	*(_QWORD*)(a1 + 16) += 16i64;
	v10 = *(_QWORD*)(a1 + 16) - 16i64;
	if (*(_DWORD*)(v10 + 8) != 4)
	{
		if (!(unsigned int)sub_14005E620(a1, *(_QWORD*)(a1 + 16) - 16i64))
			goto LABEL_9;
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v10 = *(_QWORD*)(a1 + 16) - 16i64;
	}
	v11 = (unsigned __int64*)(*(_QWORD*)v10 + 32i64);
	if (*(_QWORD*)v10 == -32i64)
		LABEL_9:
	sub_140056830((_QWORD*)a1, (unsigned __int64*)"'package.%s' must be a string", (const char*)a3);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v12 = *(_QWORD*)(a1 + 16);
	v13 = sub_140062650(a1, (unsigned __int64*)&unk_140C665F1, 0i64);
	*(_DWORD*)(v12 + 8) = 4;
	*(_QWORD*)v12 = v13;
	*(_QWORD*)(a1 + 16) += 16i64;
	v14 = sub_1407961A0(a1, v11);
	if (!v14)
		return 0i64;
	while (1)
	{
		v15 = *(_QWORD*)(a1 + 16) - 16i64;
		if (*(_DWORD*)(v15 + 8) != 4)
		{
			if (!(unsigned int)sub_14005E620(a1, *(_QWORD*)(a1 + 16) - 16i64))
			{
				v16 = 0i64;
				goto LABEL_20;
			}
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v15 = *(_QWORD*)(a1 + 16) - 16i64;
		}
		v16 = (const __m128i*)(*(_QWORD*)v15 + 32i64);
	LABEL_20:
		v17 = (char*)sub_140057200((_QWORD*)a1, v16, (const __m128i*)asc_140C39CF4, v5);
		v18 = *(_QWORD*)(a1 + 16);
		v19 = (_QWORD*)(v18 - 16);
		v20 = v17;
		if (v18 - 16 < v18)
		{
			do
			{
				v21 = *v19;
				v19 += 2;
				*(v19 - 4) = v21;
				*((_DWORD*)v19 - 6) = *((_DWORD*)v19 - 2);
			} while ((unsigned __int64)v19 < *(_QWORD*)(a1 + 16));
		}
		*(_QWORD*)(a1 + 16) -= 16i64;
		if (v17)
		{
			v22 = (__int64*)sub_1400593A0(v17);
			v23 = (__int64)v22;
			if (v22)
				break;
		}
		sub_140058780(a1, (unsigned __int64*)"\n\tno file '%s'", v20);
		v24 = *(_QWORD*)(a1 + 16);
		v25 = (_QWORD*)(v24 - 16);
		if (v24 - 16 < v24)
		{
			do
			{
				v26 = *v25;
				v25 += 2;
				*(v25 - 4) = v26;
				*((_DWORD*)v25 - 6) = *((_DWORD*)v25 - 2);
			} while ((unsigned __int64)v25 < *(_QWORD*)(a1 + 16));
		}
		v27 = *(_QWORD*)(a1 + 32);
		*(_QWORD*)(a1 + 16) -= 16i64;
		if (*(_QWORD*)(v27 + 120) >= *(_QWORD*)(v27 + 112))
			sub_14005E2C0(a1);
		sub_14005F210(a1, 2, ((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 24)) >> 4) - 1);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v14 = sub_1407961A0(a1, (unsigned __int64*)v14);
		if (!v14)
			return 0i64;
	}
	sub_14018B900(*v22, 0);
	sub_14018B900(v23, 0);
	return v20;
}

