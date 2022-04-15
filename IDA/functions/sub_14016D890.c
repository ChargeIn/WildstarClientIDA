//----- (000000014016D890) ----------------------------------------------------
void __fastcall sub_14016D890(__int64 a1, __int64 a2)
{
	int v2; // ebp
	__int64 v4; // rsi
	__int64 v5; // rax
	__int64 v6; // rdi
	int* v7; // rsi
	int* v8; // rdi
	unsigned int v9; // esi
	__int64 v10; // rcx
	__int64 v11; // rdi
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	_QWORD* v16; // rdi
	int i; // esi
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rdx
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rdx
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
	__int64 v36; // rcx
	__int64 v37; // rcx
	__int64 v38; // rcx
	__int64 v39; // rcx

	v2 = 1;
	*(_QWORD*)a1 = off_140B5CF80;
	if ((int)((__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3) > 1)
	{
		v4 = 8i64;
		do
		{
			v5 = *(_QWORD*)(a1 + 1416);
			v6 = *(_QWORD*)(v4 + v5);
			if (v6)
			{
				sub_14016CB60(*(_QWORD*)(v4 + v5), a2);
				sub_14018B900(v6, 0);
			}
			++v2;
			v4 += 8i64;
		} while (v2 < (int)((__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3));
	}
	v7 = *(int**)(a1 + 1424);
	v8 = *(int**)(a1 + 1416);
	sub_1407DB590(v8, v7, 0i64);
	*(_QWORD*)(a1 + 1424) += -8 * (((char*)v7 - (char*)v8) >> 3);
	v9 = 0;
	if (*(_QWORD*)(a1 + 1400))
	{
		v10 = 0i64;
		do
		{
			v11 = *(_QWORD*)(*(_QWORD*)(a1 + 1392) + 8 * v10);
			if (v11)
			{
				v12 = *(_QWORD*)(v11 + 16);
				if (v12)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
					*(_QWORD*)(v11 + 16) = 0i64;
				}
				sub_1401429A0(qword_140C63678, *(_DWORD*)(v11 + 76));
				v13 = *(_QWORD*)(v11 + 24);
				if (v13)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
					*(_QWORD*)(v11 + 24) = 0i64;
				}
				v14 = *(_QWORD*)(v11 + 48);
				if (v14)
					sub_14018B900(v14, 0);
				sub_14018B900(v11, 0);
			}
			v10 = ++v9;
		} while ((unsigned __int64)v9 < *(_QWORD*)(a1 + 1400));
	}
	v15 = *(_QWORD*)(a1 + 1936);
	if (v15)
		sub_14018B900(v15, 0);
	v16 = (_QWORD*)(a1 + 1912);
	for (i = 5; i >= 0; --i)
	{
		v18 = *(v16 - 6);
		v16 -= 6;
		if (v18)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
			*v16 = 0i64;
		}
		v19 = v16[3];
		if (v19)
			sub_14018B900(v19, 0);
	}
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 1612));
	v21 = *(_QWORD*)(a1 + 1592);
	if (v21)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v21 - 16) + 8i64))(v21 - 16);
	v22 = *(_QWORD*)(a1 + 1576);
	if (v22)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v22 - 16) + 8i64))(v22 - 16);
	sub_14016CB60(a1 + 1440, v20);
	v23 = *(_QWORD*)(a1 + 1416);
	if (v23)
		sub_14018B900(v23, 0);
	v24 = *(_QWORD*)(a1 + 1392);
	if (v24)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 1364));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 1360));
	v26 = *(_QWORD*)(a1 + 1312);
	if (v26)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
		*(_QWORD*)(a1 + 1312) = 0i64;
	}
	v27 = *(_QWORD*)(a1 + 1336);
	if (v27)
		sub_14018B900(v27, 0);
	v28 = *(_QWORD*)(a1 + 1264);
	if (v28)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 8i64))(v28);
		*(_QWORD*)(a1 + 1264) = 0i64;
	}
	v29 = *(_QWORD*)(a1 + 1288);
	if (v29)
		sub_14018B900(v29, 0);
	v30 = *(_QWORD*)(a1 + 1216);
	if (v30)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
		*(_QWORD*)(a1 + 1216) = 0i64;
	}
	v31 = *(_QWORD*)(a1 + 1240);
	if (v31)
		sub_14018B900(v31, 0);
	v32 = *(_QWORD*)(a1 + 1168);
	if (v32)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 8i64))(v32);
		*(_QWORD*)(a1 + 1168) = 0i64;
	}
	v33 = *(_QWORD*)(a1 + 1192);
	if (v33)
		sub_14018B900(v33, 0);
	v34 = *(_QWORD*)(a1 + 1120);
	if (v34)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v34 + 8i64))(v34);
		*(_QWORD*)(a1 + 1120) = 0i64;
	}
	v35 = *(_QWORD*)(a1 + 1144);
	if (v35)
		sub_14018B900(v35, 0);
	v36 = *(_QWORD*)(a1 + 1072);
	if (v36)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v36 + 8i64))(v36);
		*(_QWORD*)(a1 + 1072) = 0i64;
	}
	v37 = *(_QWORD*)(a1 + 1096);
	if (v37)
		sub_14018B900(v37, 0);
	v38 = *(_QWORD*)(a1 + 1024);
	if (v38)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v38 + 8i64))(v38);
		*(_QWORD*)(a1 + 1024) = 0i64;
	}
	v39 = *(_QWORD*)(a1 + 1048);
	if (v39)
		sub_14018B900(v39, 0);
	sub_1400C6030(a1, v25);
}
// 14016D8F3: variable 'a2' is possibly undefined
// 14016DA71: variable 'v20' is possibly undefined
// 14016DC0F: variable 'v25' is possibly undefined
// 140B5CF80: using guessed type __int64 (__fastcall *off_140B5CF80[25])();
// 140C63678: using guessed type __int64 qword_140C63678;

