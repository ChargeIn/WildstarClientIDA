//----- (0000000140278C20) ----------------------------------------------------
__int64 __fastcall sub_140278C20(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // r14
	_QWORD* v4; // rbx
	__int64 v5; // rsi
	_QWORD* v6; // rbx
	__int64 v7; // rsi
	_QWORD* v8; // rbx
	__int64 v9; // rsi
	__int64 v10; // rsi
	_QWORD* v11; // rbx
	__int64 v12; // rbp
	__int64 v13; // rcx
	_QWORD* v14; // rbx
	_QWORD* v15; // rbx
	__int64 v16; // rcx
	__int64 v17; // rcx
	unsigned __int64 i; // rbx
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
	unsigned __int64 v29; // r12
	__int64 v30; // r14
	__int64 v31; // rax
	__int64* v32; // rbx
	__int64* v33; // rbp
	__int64 v34; // r15
	__int64 v35; // rsi
	__int64 v36; // rcx
	__int64 v37; // rcx
	__int64 v38; // rcx
	__int64 v39; // rcx

	sub_14018B900(*(_QWORD*)(a1 + 152), 0);
	*(_QWORD*)(a1 + 152) = 0i64;
	sub_140283040((_QWORD*)(a1 + 7224));
	v2 = *(_QWORD*)(a1 + 7264);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 16i64))(v2);
		*(_QWORD*)(a1 + 7264) = 0i64;
	}
	sub_140282E50((_QWORD*)(a1 + 7328));
	v3 = 4i64;
	v4 = (_QWORD*)(a1 + 7368);
	v5 = 4i64;
	do
	{
		if (*v4)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v4 + 16i64))(*v4);
			*v4 = 0i64;
		}
		++v4;
		--v5;
	} while (v5);
	sub_140282C10((_QWORD*)(a1 + 7664));
	v6 = (_QWORD*)(a1 + 7704);
	v7 = 2i64;
	do
	{
		if (*v6)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v6 + 16i64))(*v6);
			*v6 = 0i64;
		}
		++v6;
		--v7;
	} while (v7);
	v8 = (_QWORD*)(a1 + 7728);
	v9 = 4i64;
	do
	{
		if (*v8)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v8 + 8i64))(*v8);
			*v8 = 0i64;
		}
		++v8;
		--v9;
	} while (v9);
	v10 = 16i64;
	v11 = (_QWORD*)(a1 + 7760);
	v12 = 16i64;
	do
	{
		if (*v11)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v11 + 8i64))(*v11);
			*v11 = 0i64;
		}
		++v11;
		--v12;
	} while (v12);
	v13 = *(_QWORD*)(a1 + 7888);
	if (v13)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
		*(_QWORD*)(a1 + 7888) = 0i64;
	}
	v14 = (_QWORD*)(a1 + 7928);
	do
	{
		if (*v14)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v14 + 8i64))(*v14);
			*v14 = 0i64;
		}
		++v14;
		--v3;
	} while (v3);
	v15 = (_QWORD*)(a1 + 7960);
	do
	{
		if (*v15)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v15 + 8i64))(*v15);
			*v15 = 0i64;
		}
		++v15;
		--v10;
	} while (v10);
	v16 = *(_QWORD*)(a1 + 8088);
	if (v16)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
		*(_QWORD*)(a1 + 8088) = 0i64;
	}
	v17 = *(_QWORD*)(a1 + 7720);
	if (v17)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 16i64))(v17);
		*(_QWORD*)(a1 + 7720) = 0i64;
	}
	for (i = 0i64; i < *(_QWORD*)(a1 + 8576); ++i)
	{
		v19 = *(_QWORD*)(*(_QWORD*)(a1 + 8568) + 8 * i);
		if (v19)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 16i64))(v19);
	}
	*(_QWORD*)(a1 + 8576) = 0i64;
	v20 = *(_QWORD*)(a1 + 8584);
	if (v20)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
		*(_QWORD*)(a1 + 8584) = 0i64;
	}
	v21 = *(_QWORD*)(a1 + 8112);
	if (v21)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 16i64))(v21);
		*(_QWORD*)(a1 + 8112) = 0i64;
	}
	v22 = *(_QWORD*)(a1 + 8144);
	if (v22)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 16i64))(v22);
		*(_QWORD*)(a1 + 8144) = 0i64;
	}
	v23 = *(_QWORD*)(a1 + 8176);
	if (v23)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
		*(_QWORD*)(a1 + 8176) = 0i64;
	}
	v24 = *(_QWORD*)(a1 + 8216);
	if (v24)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
		*(_QWORD*)(a1 + 8216) = 0i64;
	}
	v25 = *(_QWORD*)(a1 + 8480);
	if (v25)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 16i64))(v25);
		*(_QWORD*)(a1 + 8480) = 0i64;
	}
	v26 = *(_QWORD*)(a1 + 8496);
	if (v26)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 16i64))(v26);
		*(_QWORD*)(a1 + 8496) = 0i64;
	}
	v27 = *(_QWORD*)(a1 + 8200);
	if (v27)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
		*(_QWORD*)(a1 + 8200) = 0i64;
	}
	v28 = *(_QWORD*)(a1 + 8232);
	if (v28)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 8i64))(v28);
		*(_QWORD*)(a1 + 8232) = 0i64;
	}
	v29 = 0i64;
	if (*(_DWORD*)(a1 + 8472))
	{
		v30 = 0i64;
		do
		{
			v31 = *(_QWORD*)(a1 + 8464);
			v32 = *(__int64**)(v30 + v31 + 24);
			v33 = *(__int64**)(v30 + v31 + 40);
			v34 = *(_QWORD*)(v30 + v31 + 48);
			if (v32 != *(__int64**)(v30 + v31 + 56))
			{
				do
				{
					v35 = *v32;
					if (*v32)
					{
						v36 = *(_QWORD*)(v35 + 24);
						if (v36)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v36 + 16i64))(v36);
						sub_14018B900(v35, 0);
					}
					if (++v32 == v33)
					{
						v32 = *(__int64**)(v34 + 8);
						v34 += 8i64;
						v33 = v32 + 62;
					}
				} while (v32 != *(__int64**)(v30 + *(_QWORD*)(a1 + 8464) + 56));
			}
			++v29;
			v30 += 88i64;
		} while (v29 < *(unsigned int*)(a1 + 8472));
	}
	v37 = *(_QWORD*)(a1 + 8464);
	if (v37)
		sub_140278430(v37);
	*(_QWORD*)(a1 + 8464) = 0i64;
	*(_DWORD*)(a1 + 8472) = 0;
	v38 = *(_QWORD*)(a1 + 6320);
	if (v38)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v38 + 16i64))(v38);
		*(_QWORD*)(a1 + 6320) = 0i64;
	}
	v39 = *(_QWORD*)(a1 + 6328);
	if (v39)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v39 + 16i64))(v39);
		*(_QWORD*)(a1 + 6328) = 0i64;
	}
	sub_1401981B0((__int64**)(a1 + 6256));
	return 0i64;
}

