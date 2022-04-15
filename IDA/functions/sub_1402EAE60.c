//----- (00000001402EAE60) ----------------------------------------------------
int __fastcall sub_1402EAE60(__int64 a1)
{
	__int64 i; // rdx
	_QWORD* v3; // rax
	_QWORD* v4; // rbx
	_QWORD* v5; // rsi
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rax
	_QWORD* j; // rax
	__int64 k; // rax
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int64 v30; // rcx
	__int64 v31; // rcx
	__int64 v32; // rcx
	__int64 v33; // rcx
	__int64 v34; // rcx
	__int64 v35; // rcx
	__int64 v36; // rax

	sub_1401981B0((__int64**)(a1 + 96));
	for (i = *(_QWORD*)(a1 + 2328); i; i = *(_QWORD*)(a1 + 2328))
		sub_1402ECEB0(a1, i);
	v3 = *(_QWORD**)(a1 + 2296);
	v4 = (_QWORD*)v3[2];
	if (v4 != v3)
	{
		do
		{
			v5 = (_QWORD*)v4[5];
			if (v5)
			{
				v6 = v5[5];
				*v5 = off_140B63918;
				sub_14018B900(v6, 0);
				sub_14018B900(v5[6], 0);
				v7 = v5[1];
				if (v7)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
				sub_14018B900((__int64)v5, 0);
			}
			v8 = v4[3];
			if (v8)
			{
				v4 = (_QWORD*)v4[3];
				for (j = *(_QWORD**)(v8 + 16); j; j = (_QWORD*)j[2])
					v4 = j;
			}
			else
			{
				for (k = v4[1]; v4 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
					v4 = (_QWORD*)k;
				if (v4[3] != k)
					v4 = (_QWORD*)k;
			}
		} while (v4 != *(_QWORD**)(a1 + 2296));
	}
	sub_140008410(a1 + 2288);
	sub_14018B900(*(_QWORD*)(a1 + 2248), 0);
	sub_14018B900(*(_QWORD*)(a1 + 2264), 0);
	sub_14018B900(*(_QWORD*)(a1 + 2272), 0);
	sub_14018B900(*(_QWORD*)(a1 + 2280), 0);
	sub_140008410(a1 + 2288);
	sub_14018B900(*(_QWORD*)(a1 + 2296), 0);
	v11 = *(_QWORD*)(a1 + 2232);
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	v12 = *(_QWORD*)(a1 + 2224);
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
	v13 = *(_QWORD*)(a1 + 2216);
	if (v13)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
	v14 = *(_QWORD*)(a1 + 2208);
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
	v15 = *(_QWORD*)(a1 + 2200);
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
	v16 = *(_QWORD*)(a1 + 2192);
	if (v16)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
	v17 = *(_QWORD*)(a1 + 2184);
	if (v17)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
	v18 = *(_QWORD*)(a1 + 2176);
	if (v18)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
	v19 = *(_QWORD*)(a1 + 2168);
	if (v19)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
	v20 = *(_QWORD*)(a1 + 2160);
	if (v20)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
	v21 = *(_QWORD*)(a1 + 2152);
	if (v21)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
	v22 = *(_QWORD*)(a1 + 2144);
	if (v22)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
	v23 = *(_QWORD*)(a1 + 2136);
	if (v23)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
	v24 = *(_QWORD*)(a1 + 2128);
	if (v24)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
	v25 = *(_QWORD*)(a1 + 2120);
	if (v25)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
	v26 = *(_QWORD*)(a1 + 2112);
	if (v26)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
	v27 = *(_QWORD*)(a1 + 2104);
	if (v27)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
	v28 = *(_QWORD*)(a1 + 2096);
	if (v28)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 8i64))(v28);
	v29 = *(_QWORD*)(a1 + 2088);
	if (v29)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
	v30 = *(_QWORD*)(a1 + 2080);
	if (v30)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
	v31 = *(_QWORD*)(a1 + 2072);
	if (v31)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 8i64))(v31);
	v32 = *(_QWORD*)(a1 + 2064);
	if (v32)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 8i64))(v32);
	v33 = *(_QWORD*)(a1 + 2056);
	if (v33)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 8i64))(v33);
	v34 = *(_QWORD*)(a1 + 2048);
	if (v34)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v34 + 8i64))(v34);
	v35 = *(_QWORD*)(a1 + 2040);
	if (v35)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
	sub_1402EAA90((_QWORD*)(a1 + 112));
	sub_1401981B0((__int64**)(a1 + 96));
	if (*(_QWORD*)(a1 + 96))
		sub_1401A4A00((const void***)(a1 + 96));
	sub_140019490((_QWORD*)(a1 + 56));
	sub_14018B900(*(_QWORD*)(a1 + 72), 0);
	*(_QWORD*)(a1 + 72) = 0i64;
	if (*(_QWORD*)(a1 + 48))
		sub_1401A4A00((const void***)(a1 + 48));
	if (*(_QWORD*)(a1 + 40))
		sub_1401A4A00((const void***)(a1 + 40));
	v36 = *(_QWORD*)(a1 + 32);
	if (v36)
		LODWORD(v36) = CloseHandle(*(HANDLE*)(a1 + 32));
	return v36;
}
// 140B63918: using guessed type __int64 (__fastcall *off_140B63918[2])();

