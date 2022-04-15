//----- (00000001401163B0) ----------------------------------------------------
char __fastcall sub_1401163B0(__int64 a1, int* a2, int* a3, int* a4)
{
	_QWORD* v4; // rbp
	int v5; // edi
	__int64 v7; // rbx
	__int64 v11; // rax
	__int64 v12; // rax
	_QWORD* v13; // rbx
	__int64 v14; // rbx
	__int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64 v19; // rbx
	_QWORD* v20; // rsi
	__int64 v21; // rbx
	_QWORD* v22; // rax
	_QWORD* v23; // rdi
	__int64 v24; // rbx
	__int64 v25; // rax
	__int64 v26; // rbx
	__int64 v27; // rdi
	__int64 v28; // rax
	int* v29; // rax
	__int64 v30; // rax
	__int64 v31; // rax
	__int64 v32; // rax
	__int64 v33; // rax
	_QWORD* v34; // rdi
	__int64 v35; // rcx
	_QWORD* v36; // rax
	_QWORD* v37; // rax
	__int64 v38; // rcx
	__int64 v39; // rcx
	__int64 v40; // rax
	__int64 v41; // rcx
	__int64 v42; // rax
	__int64 v43; // rax
	__int64 v44; // rcx
	__int64 v45; // rcx
	__int64 v46; // rax

	v4 = (_QWORD*)(a1 + 1048);
	v5 = 0;
	v7 = *(_QWORD*)(a1 + 1096);
	if (v7)
	{
		while (1)
		{
			v11 = (**(__int64(__fastcall***)(__int64))v7)(v7);
			if (v11)
				break;
			v7 = *(_QWORD*)(v7 + 72);
			if (!v7)
				goto LABEL_4;
		}
		v14 = *(_QWORD*)(v11 + 48);
		if (v14)
		{
			while (1)
			{
				v15 = (**(__int64(__fastcall***)(__int64))v14)(v14);
				if (v15)
					break;
				v14 = *(_QWORD*)(v14 + 72);
				if (!v14)
					goto LABEL_20;
			}
			while (1)
			{
				v16 = *(_QWORD*)(v15 + 72);
				++v5;
				if (!v16)
					break;
				while (1)
				{
					v15 = (**(__int64(__fastcall***)(__int64))v16)(v16);
					if (v15)
						break;
					v16 = *(_QWORD*)(v16 + 72);
					if (!v16)
						goto LABEL_20;
				}
			}
		}
	}
	else
	{
	LABEL_4:
		v12 = (*(__int64(__fastcall**)(_QWORD*))(v4[16] + 16i64))(v4 + 16);
		v13 = (_QWORD*)v12;
		if (v12)
		{
			*(_QWORD*)(v12 + 8) = v4;
			*(_QWORD*)(v12 + 16) = 0i64;
			*(_DWORD*)(v12 + 24) = 0;
			*(_QWORD*)(v12 + 32) = 0i64;
			*(_QWORD*)(v12 + 40) = 0i64;
			*(_QWORD*)(v12 + 48) = 0i64;
			*(_QWORD*)(v12 + 56) = 0i64;
			*(_QWORD*)(v12 + 64) = 0i64;
			*(_QWORD*)(v12 + 72) = 0i64;
			*(_QWORD*)(v12 + 80) = 0i64;
			*(_QWORD*)v12 = off_140B5EBA0;
			*(_DWORD*)(v12 + 88) = 0;
			*(_QWORD*)(v12 + 96) = 0i64;
		}
		else
		{
			v13 = 0i64;
		}
		v13[10] = v4 + 16;
		sub_1401A4C50((__int64)(v13 + 3), (int*)L"MLDoc");
		if (v13[1] == v4[1])
		{
			sub_1401A6150(v17, (__int64)v13);
			v18 = v4[7];
			if (v18)
			{
				*(_QWORD*)(v18 + 72) = v13;
				v13[8] = v4[7];
				v4[7] = v13;
			}
			else
			{
				v4[7] = v13;
				v4[6] = v13;
				v13[8] = 0i64;
			}
			v13[9] = 0i64;
			v13[2] = v4;
		}
	}
LABEL_20:
	v19 = v4[6];
	if (v19)
	{
		while (1)
		{
			v20 = (_QWORD*)(**(__int64(__fastcall***)(__int64))v19)(v19);
			if (v20)
				break;
			v19 = *(_QWORD*)(v19 + 72);
			if (!v19)
				goto LABEL_23;
		}
	}
	else
	{
	LABEL_23:
		v20 = 0i64;
	}
	if (v5 >= 500)
	{
		v21 = v20[6];
		if (v21)
		{
			while (1)
			{
				v22 = (_QWORD*)(**(__int64(__fastcall***)(__int64))v21)(v21);
				v23 = v22;
				if (v22)
					break;
				v21 = *(_QWORD*)(v21 + 72);
				if (!v21)
					goto LABEL_30;
			}
			v24 = v22[10];
			(*(void(__fastcall**)(_QWORD*, _QWORD))(*v22 + 120i64))(v22, 0i64);
			(*(void(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)v24 + 24i64))(v24, v23);
		}
	}
LABEL_30:
	v25 = (*(__int64(__fastcall**)(_QWORD*))(v4[16] + 16i64))(v4 + 16);
	v26 = v25;
	if (v25)
	{
		*(_QWORD*)(v25 + 8) = v4;
		*(_QWORD*)(v25 + 16) = 0i64;
		*(_DWORD*)(v25 + 24) = 0;
		*(_QWORD*)(v25 + 32) = 0i64;
		*(_QWORD*)(v25 + 40) = 0i64;
		*(_QWORD*)(v25 + 48) = 0i64;
		*(_QWORD*)(v25 + 56) = 0i64;
		*(_QWORD*)(v25 + 64) = 0i64;
		*(_QWORD*)(v25 + 72) = 0i64;
		*(_QWORD*)(v25 + 80) = 0i64;
		*(_QWORD*)v25 = off_140B5EBA0;
		*(_DWORD*)(v25 + 88) = 0;
		*(_QWORD*)(v25 + 96) = 0i64;
	}
	else
	{
		v26 = 0i64;
	}
	*(_QWORD*)(v26 + 80) = v4 + 16;
	if ((*(_DWORD*)(v26 + 24) & 0x200) != 0)
		sub_14018B900(*(_QWORD*)(v26 + 32), 0);
	v27 = 0i64;
	*(_DWORD*)(v26 + 24) = 0;
	*(_QWORD*)(v26 + 32) = 0i64;
	*(_QWORD*)(v26 + 40) = 0i64;
	do
		++v27;
	while (word_1409DB474[v27]);
	v28 = 2 * (v27 + 1);
	if (!is_mul_ok(v27 + 1, 2ui64))
		v28 = -1i64;
	v29 = sub_14018B280(v28, 0);
	*(_QWORD*)(v26 + 32) = v29;
	sub_1407DB590(v29, (int*)word_1409DB474, 2 * v27 + 2);
	v30 = *(_QWORD*)(v26 + 32);
	*(_DWORD*)(v26 + 24) = 512;
	*(_QWORD*)(v26 + 40) = v30 + 2 * v27;
	v31 = sub_1401A6C70(v26, (int*)&word_140A31AB8);
	sub_1401A4C50(v31 + 32, a2);
	v32 = sub_1401A6C70(v26, (int*)L"Font");
	sub_1401A4C50(v32 + 32, a3);
	v33 = sub_1401A7880((__int64)v4, a4);
	v34 = (_QWORD*)v33;
	if (*(_QWORD*)(v33 + 8) == *(_QWORD*)(v26 + 8))
	{
		v35 = *(_QWORD*)(v33 + 16);
		if (v35)
		{
			v36 = *(_QWORD**)(v35 + 48);
			if (v34 == v36)
				*(_QWORD*)(v35 + 48) = v36[9];
			v37 = *(_QWORD**)(v35 + 56);
			if (v34 == v37)
				*(_QWORD*)(v35 + 56) = v37[8];
			v38 = v34[8];
			if (v38)
				*(_QWORD*)(v38 + 72) = v34[9];
			v39 = v34[9];
			if (v39)
				*(_QWORD*)(v39 + 64) = v34[8];
			v34[2] = 0i64;
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v33 + 80) + 32i64))(*(_QWORD*)(v33 + 80));
		}
		v40 = *(_QWORD*)(v26 + 56);
		if (v40)
		{
			*(_QWORD*)(v40 + 72) = v34;
			v34[8] = *(_QWORD*)(v26 + 56);
			*(_QWORD*)(v26 + 56) = v34;
		}
		else
		{
			*(_QWORD*)(v26 + 56) = v34;
			*(_QWORD*)(v26 + 48) = v34;
			v34[8] = 0i64;
		}
		v34[9] = 0i64;
		v34[2] = v26;
	}
	if (*(_QWORD*)(v26 + 8) == v20[1])
	{
		v41 = *(_QWORD*)(v26 + 16);
		if (v41)
		{
			v42 = *(_QWORD*)(v41 + 48);
			if (v26 == v42)
				*(_QWORD*)(v41 + 48) = *(_QWORD*)(v42 + 72);
			v43 = *(_QWORD*)(v41 + 56);
			if (v26 == v43)
				*(_QWORD*)(v41 + 56) = *(_QWORD*)(v43 + 64);
			v44 = *(_QWORD*)(v26 + 64);
			if (v44)
				*(_QWORD*)(v44 + 72) = *(_QWORD*)(v26 + 72);
			v45 = *(_QWORD*)(v26 + 72);
			if (v45)
				*(_QWORD*)(v45 + 64) = *(_QWORD*)(v26 + 64);
			*(_QWORD*)(v26 + 16) = 0i64;
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v26 + 80) + 32i64))(*(_QWORD*)(v26 + 80));
		}
		v46 = v20[7];
		if (v46)
		{
			*(_QWORD*)(v46 + 72) = v26;
			*(_QWORD*)(v26 + 64) = v20[7];
			v20[7] = v26;
		}
		else
		{
			v20[7] = v26;
			v20[6] = v26;
			*(_QWORD*)(v26 + 64) = 0i64;
		}
		*(_QWORD*)(v26 + 72) = 0i64;
		*(_QWORD*)(v26 + 16) = v20;
	}
	sub_140141330(a1 + 1024);
	return sub_140116010(a1);
}
// 1401164E2: variable 'v17' is possibly undefined
// 1409DB474: using guessed type __int16 word_1409DB474[];
// 140A1CC68: using guessed type wchar_t aMldoc[6];
// 140A31AA8: using guessed type wchar_t aFont[5];
// 140A31AB8: using guessed type __int16 word_140A31AB8;
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();

