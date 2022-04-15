//----- (00000001407D1AE0) ----------------------------------------------------
__int64 __fastcall sub_1407D1AE0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rdi
	__int64 v5; // rsi
	_QWORD* v6; // r14
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	unsigned int v13; // esi
	__int64 v14; // rdi
	_QWORD* v15; // rdi
	__int64 result; // rax
	__int64 v17; // rcx
	unsigned __int64 v18; // rdi
	__int64 v19; // rsi
	__int64 v20; // rcx
	__int64 v21; // rcx
	int i; // edi
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64* v27; // rcx
	__int64 v28; // rcx
	__int64* v29; // rcx
	__int64 v30; // rcx
	__int64* v31; // rcx
	__int64 v32; // rcx
	__int64* v33; // rcx
	__int64 v34; // rcx
	__int64* v35; // rcx
	__int64 v36; // rcx
	int v37[10]; // [rsp+20h] [rbp-28h] BYREF

	*(_QWORD*)a1 = off_140B79A90;
	v2 = *(_QWORD*)(a1 + 216);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 104i64))(v2);
		v3 = *(_QWORD*)(a1 + 216);
		v37[0] = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 32i64))(v3, v37);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 216) + 8i64))(*(_QWORD*)(a1 + 216));
		*(_QWORD*)(a1 + 216) = 0i64;
	}
	v4 = (_QWORD*)(a1 + 328);
	v5 = 4i64;
	do
	{
		if (*v4)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v4 + 8i64))(*v4);
			*v4 = 0i64;
		}
		++v4;
		--v5;
	} while (v5);
	v6 = (_QWORD*)(a1 + 424);
	v7 = *(_QWORD*)(a1 + 424);
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		*v6 = 0i64;
	}
	v8 = *(_QWORD*)(a1 + 432);
	if (v8)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		*(_QWORD*)(a1 + 432) = 0i64;
	}
	v9 = *(_QWORD*)(a1 + 440);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*(_QWORD*)(a1 + 440) = 0i64;
	}
	v10 = *(_QWORD*)(a1 + 448);
	if (v10)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		*(_QWORD*)(a1 + 448) = 0i64;
	}
	v11 = *(_QWORD*)(a1 + 240);
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		*(_QWORD*)(a1 + 240) = 0i64;
	}
	if (*(_DWORD*)(a1 + 232))
		sub_1400B6120(*(_QWORD*)(a1 + 24) + 1272i64, a1 + 144);
	sub_14018B900(*(_QWORD*)(a1 + 144), 0);
	v12 = *(_QWORD*)(a1 + 224);
	if (v12)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		*(_QWORD*)(a1 + 224) = 0i64;
	}
	v13 = 0;
	if (*(_QWORD*)(a1 + 288))
	{
		v14 = 0i64;
		do
		{
			v15 = (_QWORD*)(*(_QWORD*)(a1 + 280) + 32 * v14);
			if (*v15)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v15 + 8i64))(*v15);
				*v15 = 0i64;
			}
			v14 = ++v13;
		} while ((unsigned __int64)v13 < *(_QWORD*)(a1 + 288));
	}
	sub_1407D7BA0((__int64*)(a1 + 280), 0i64);
	sub_1407D1A50((_QWORD*)(a1 + 1984));
	sub_1407D1A50((_QWORD*)(a1 + 1488));
	sub_1407D1A50((_QWORD*)(a1 + 992));
	result = sub_1407D1A50((_QWORD*)(a1 + 496));
	v17 = *(_QWORD*)(a1 + 488);
	if (v17)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
	v18 = 0i64;
	if (*(_QWORD*)(a1 + 480))
	{
		v19 = 0i64;
		do
		{
			result = *(_QWORD*)(a1 + 472);
			v20 = *(_QWORD*)(v19 + result);
			if (v20)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
			++v18;
			v19 += 16i64;
		} while (v18 < *(_QWORD*)(a1 + 480));
	}
	v21 = *(_QWORD*)(a1 + 472);
	if (v21)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v21 - 16) + 8i64))(v21 - 16);
	for (i = 5; i >= 0; --i)
	{
		v23 = *--v6;
		if (v23)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
	}
	v24 = *(_QWORD*)(a1 + 368);
	if (v24)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
	v25 = *(_QWORD*)(a1 + 296);
	if (v25)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v25 - 16) + 8i64))(v25 - 16);
	v26 = *(_QWORD*)(a1 + 280);
	if (v26)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v26 - 16) + 8i64))(v26 - 16);
	v27 = *(__int64**)(a1 + 128);
	if (v27)
	{
		result = *(_QWORD*)(a1 + 136);
		*v27 = result;
	}
	v28 = *(_QWORD*)(a1 + 136);
	if (v28)
	{
		result = *(_QWORD*)(a1 + 128);
		*(_QWORD*)(v28 + 128) = result;
	}
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	v29 = *(__int64**)(a1 + 112);
	if (v29)
	{
		result = *(_QWORD*)(a1 + 120);
		*v29 = result;
	}
	v30 = *(_QWORD*)(a1 + 120);
	if (v30)
	{
		result = *(_QWORD*)(a1 + 112);
		*(_QWORD*)(v30 + 112) = result;
	}
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	v31 = *(__int64**)(a1 + 96);
	if (v31)
	{
		result = *(_QWORD*)(a1 + 104);
		*v31 = result;
	}
	v32 = *(_QWORD*)(a1 + 104);
	if (v32)
	{
		result = *(_QWORD*)(a1 + 96);
		*(_QWORD*)(v32 + 96) = result;
	}
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	v33 = *(__int64**)(a1 + 64);
	if (v33)
	{
		result = *(_QWORD*)(a1 + 72);
		*v33 = result;
	}
	v34 = *(_QWORD*)(a1 + 72);
	if (v34)
	{
		result = *(_QWORD*)(a1 + 64);
		*(_QWORD*)(v34 + 32) = result;
	}
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	v35 = *(__int64**)(a1 + 48);
	if (v35)
	{
		result = *(_QWORD*)(a1 + 56);
		*v35 = result;
	}
	v36 = *(_QWORD*)(a1 + 56);
	if (v36)
	{
		result = *(_QWORD*)(a1 + 48);
		*(_QWORD*)(v36 + 16) = result;
	}
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	return result;
}
// 140B79A90: using guessed type __int64 (__fastcall *off_140B79A90[16])();
// 1407D1AE0: using guessed type int var_28[10];

