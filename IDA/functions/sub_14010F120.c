//----- (000000014010F120) ----------------------------------------------------
char __fastcall sub_14010F120(
	__int64 a1,
	unsigned __int16 a2,
	__int64 a3,
	__int64 a4,
	__int64 a5,
	__int64 a6,
	__int64 a7,
	__int64 a8)
{
	unsigned __int64 v10; // rax
	unsigned __int64 v11; // r14
	__int64 v12; // rax
	__int64 v13; // rdx
	unsigned __int64 v14; // rbp
	__int64 v16; // rcx
	__int64 v17; // rdi
	__int64 v18; // rsi
	__int64 v19; // rax
	__int64 v20; // rdi
	__int64* v21; // rsi
	__int64 v22; // rbp
	__int64 v23; // rbx
	__int64 v24; // rax
	__int64 v25; // rax
	__int64 v26; // rcx
	unsigned __int64 v27; // rax
	_QWORD* v28; // rdx
	unsigned __int64 v29; // r8
	_QWORD* v30; // rcx
	unsigned __int64 v31; // r9
	_QWORD* v32; // rdx
	unsigned __int64 v33; // rax
	_QWORD* v34; // rcx
	unsigned __int64 v35; // rbp
	_QWORD* v36; // rax
	unsigned __int64 v37; // r8
	_QWORD* v38; // rcx
	unsigned __int64 v39; // rdx
	__int64 v40; // rcx
	__int64 v41; // rax
	int v42; // [rsp+60h] [rbp+8h] BYREF

	if (*(_BYTE*)(a1 + 1072) && *(_QWORD*)(a1 + 1040) == *(_QWORD*)(a1 + 1048))
	{
		v10 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 72i64))(*(_QWORD*)(a1 + 1080));
		v11 = *(_QWORD*)(a1 + 1040) + 1i64;
		if (v10 < v11)
			v11 = v10;
	}
	else
	{
		v11 = *(_QWORD*)(a1 + 1048);
	}
	v12 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 72i64))(*(_QWORD*)(a1 + 1080));
	v13 = *(_QWORD*)(a1 + 1040);
	v14 = v12;
	if (v12 + v13 - v11 >= *(_QWORD*)(a1 + 1056))
		return sub_1400D4070(a1, 0x2Bu, (char*)a1, &unk_1409D0407, a5, a6, a7, a8);
	v16 = *(_QWORD*)(a1 + 1088);
	if (!v16
		|| (v42 = 1,
			(*(void(__fastcall**)(__int64, __int64, unsigned __int64, _QWORD))(*(_QWORD*)v16 + 152i64))(
				v16,
				v13,
				v11,
				a2),
			v17 = *(_QWORD*)(a1 + 1088),
			v18 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080)),
			v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 64i64))(v17),
			sub_1400D4070(a1, 0x26u, (char*)a1, "SS>b", v19, v18, &v42),
			v42))
	{
		(*(void(__fastcall**)(_QWORD, _QWORD, unsigned __int64, _QWORD))(**(_QWORD**)(a1 + 1080) + 152i64))(
			*(_QWORD*)(a1 + 1080),
			*(_QWORD*)(a1 + 1040),
			v11,
			a2);
		sub_14010EF50(a1, *(_QWORD*)(a1 + 1040), *(_QWORD*)(a1 + 1048));
		v25 = ++ * (_QWORD*)(a1 + 1040);
		v26 = *(_QWORD*)(a1 + 1080);
		*(_QWORD*)(a1 + 1048) = v25;
		*(_QWORD*)(a1 + 1024) = v25;
		*(_QWORD*)(a1 + 1032) = -1i64;
		*(_BYTE*)(a1 + 1064) = 0;
		v27 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 72i64))(v26);
		if (v14 >= v27)
		{
			if (v14 > v27)
			{
				v34 = *(_QWORD**)(a1 + 1224);
				v35 = v14 - v27;
				v36 = (_QWORD*)*v34;
				v37 = *(_QWORD*)(a1 + 1040) - 1i64;
				if ((_QWORD*)*v34 != v34)
				{
					do
					{
						v38 = (_QWORD*)v36[2];
						v39 = v38[1];
						if (v39 > v37)
						{
							*v38 -= v35;
							v38[1] = v39 - v35;
						}
						v36 = (_QWORD*)*v36;
					} while (v36 != *(_QWORD**)(a1 + 1224));
				}
			}
		}
		else
		{
			v28 = *(_QWORD**)(a1 + 1224);
			v29 = v27 - v14;
			v30 = (_QWORD*)*v28;
			v31 = *(_QWORD*)(a1 + 1040) - 1i64;
			if ((_QWORD*)*v28 != v28)
			{
				do
				{
					v32 = (_QWORD*)v30[2];
					v33 = v32[1];
					if (v33 > v31)
					{
						*v32 += v29;
						v32[1] = v29 + v33;
					}
					v30 = (_QWORD*)*v30;
				} while (v30 != *(_QWORD**)(a1 + 1224));
			}
		}
		sub_14010EE40((_QWORD*)a1);
		v40 = *(_QWORD*)(a1 + 1080);
		*(_BYTE*)(a1 + 1065) = 1;
		v41 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v40 + 64i64))(v40);
		return sub_1400D4070(a1, 0x27u, (char*)a1, L"S", v41);
	}
	else
	{
		v20 = *(_QWORD*)(a1 + 1080);
		v21 = *(__int64**)(a1 + 1088);
		v22 = *v21;
		v23 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 72i64))(v20);
		v24 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 64i64))(v20);
		return (*(__int64(__fastcall**)(__int64*, __int64, __int64))(v22 + 56))(v21, v24, v23);
	}
}
// 1409D5A04: using guessed type wchar_t aS_1[2];

