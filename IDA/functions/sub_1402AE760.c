//----- (00000001402AE760) ----------------------------------------------------
void __fastcall sub_1402AE760(__int64 a1)
{
	signed __int32 v2; // edx
	__int64* v3; // rdi
	__int64 v4; // rax
	signed __int32 v5; // ecx
	__int64 v6; // rcx
	signed __int32 v7; // edx
	__int64* v8; // rdi
	__int64 v9; // rax
	signed __int32 v10; // ecx
	__int64 v11; // rcx
	signed __int32 v12; // edx
	__int64* v13; // rdi
	__int64 v14; // rax
	signed __int32 v15; // ecx
	__int64 v16; // rcx
	unsigned __int64 i; // rdi
	__int64 v18; // rcx
	__int64 v19; // rcx
	signed __int32 v20; // ecx
	__int64 v21; // rcx
	signed __int32 v22; // ecx
	__int64 v23; // rcx
	signed __int32 v24; // ecx
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	int v28[4]; // [rsp+20h] [rbp-38h] BYREF
	int v29[4]; // [rsp+30h] [rbp-28h] BYREF
	int v30[6]; // [rsp+40h] [rbp-18h] BYREF

	*(_QWORD*)a1 = &off_140B62010;
	sub_14029CA70(a1);
	if (*(_QWORD*)(a1 + 368))
	{
		v2 = *(_DWORD*)(a1 + 360);
		if (v2)
		{
			while (v2 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 360), v2 + 1, v2))
			{
				v2 = *(_DWORD*)(a1 + 360);
				if (!v2)
					goto LABEL_14;
			}
			v3 = *(__int64**)(a1 + 368);
			if (v3)
			{
				(*(void(__fastcall**)(_QWORD))(*v3 + 104))(*(_QWORD*)(a1 + 368));
				v4 = *v3;
				v28[0] = -1;
				(*(void(__fastcall**)(__int64*, int*))(v4 + 32))(v3, v28);
				v5 = *(_DWORD*)(a1 + 360);
				if (v5)
				{
					while (v5 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 360), v5 - 1, v5))
					{
						v5 = *(_DWORD*)(a1 + 360);
						if (!v5)
							goto LABEL_14;
					}
					if (v5 == 1)
					{
						v6 = *(_QWORD*)(a1 + 368);
						if (v6)
						{
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
							*(_QWORD*)(a1 + 368) = 0i64;
						}
					}
				}
			}
		}
	}
LABEL_14:
	if (*(_QWORD*)(a1 + 384))
	{
		v7 = *(_DWORD*)(a1 + 376);
		if (v7)
		{
			while (v7 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 376), v7 + 1, v7))
			{
				v7 = *(_DWORD*)(a1 + 376);
				if (!v7)
					goto LABEL_27;
			}
			v8 = *(__int64**)(a1 + 384);
			if (v8)
			{
				(*(void(__fastcall**)(_QWORD))(*v8 + 104))(*(_QWORD*)(a1 + 384));
				v9 = *v8;
				v29[0] = -1;
				(*(void(__fastcall**)(__int64*, int*))(v9 + 32))(v8, v29);
				v10 = *(_DWORD*)(a1 + 376);
				if (v10)
				{
					while (v10 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 376), v10 - 1, v10))
					{
						v10 = *(_DWORD*)(a1 + 376);
						if (!v10)
							goto LABEL_27;
					}
					if (v10 == 1)
					{
						v11 = *(_QWORD*)(a1 + 384);
						if (v11)
						{
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
							*(_QWORD*)(a1 + 384) = 0i64;
						}
					}
				}
			}
		}
	}
LABEL_27:
	if (*(_QWORD*)(a1 + 400))
	{
		v12 = *(_DWORD*)(a1 + 392);
		if (v12)
		{
			while (v12 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 392), v12 + 1, v12))
			{
				v12 = *(_DWORD*)(a1 + 392);
				if (!v12)
					goto LABEL_40;
			}
			v13 = *(__int64**)(a1 + 400);
			if (v13)
			{
				(*(void(__fastcall**)(_QWORD))(*v13 + 104))(*(_QWORD*)(a1 + 400));
				v14 = *v13;
				v30[0] = -1;
				(*(void(__fastcall**)(__int64*, int*))(v14 + 32))(v13, v30);
				v15 = *(_DWORD*)(a1 + 392);
				if (v15)
				{
					while (v15 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 392), v15 - 1, v15))
					{
						v15 = *(_DWORD*)(a1 + 392);
						if (!v15)
							goto LABEL_40;
					}
					if (v15 == 1)
					{
						v16 = *(_QWORD*)(a1 + 400);
						if (v16)
						{
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
							*(_QWORD*)(a1 + 400) = 0i64;
						}
					}
				}
			}
		}
	}
LABEL_40:
	if (*(_DWORD*)(a1 + 48) == -2147483638)
		sub_1402B1940(a1, 0xA0230002);
	for (i = 0i64; i < *(_QWORD*)(a1 + 416); ++i)
		sub_14018B900(*(_QWORD*)(*(_QWORD*)(a1 + 408) + 8 * i), 0);
	*(_QWORD*)(a1 + 416) = 0i64;
	sub_14029CD30(a1);
	*(_DWORD*)(a1 + 24) = 1;
	v18 = *(_QWORD*)(a1 + 64);
	if (v18)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 16i64))(v18);
		*(_QWORD*)(a1 + 64) = 0i64;
	}
	v19 = *(_QWORD*)(a1 + 408);
	if (v19)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
	while (*(_QWORD*)(a1 + 400))
	{
		v20 = *(_DWORD*)(a1 + 392);
		if (v20)
		{
			while (v20 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 392), v20 - 1, v20))
			{
				v20 = *(_DWORD*)(a1 + 392);
				if (!v20)
					goto LABEL_56;
			}
			if (v20 == 1)
			{
				v21 = *(_QWORD*)(a1 + 400);
				if (v21)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
					*(_QWORD*)(a1 + 400) = 0i64;
				}
			}
		}
	LABEL_56:
		;
	}
	while (*(_QWORD*)(a1 + 384))
	{
		v22 = *(_DWORD*)(a1 + 376);
		if (v22)
		{
			while (v22 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 376), v22 - 1, v22))
			{
				v22 = *(_DWORD*)(a1 + 376);
				if (!v22)
					goto LABEL_65;
			}
			if (v22 == 1)
			{
				v23 = *(_QWORD*)(a1 + 384);
				if (v23)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
					*(_QWORD*)(a1 + 384) = 0i64;
				}
			}
		}
	LABEL_65:
		;
	}
	while (*(_QWORD*)(a1 + 368))
	{
		v24 = *(_DWORD*)(a1 + 360);
		if (v24)
		{
			while (v24 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 360), v24 - 1, v24))
			{
				v24 = *(_DWORD*)(a1 + 360);
				if (!v24)
					goto LABEL_74;
			}
			if (v24 == 1)
			{
				v25 = *(_QWORD*)(a1 + 368);
				if (v25)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
					*(_QWORD*)(a1 + 368) = 0i64;
				}
			}
		}
	LABEL_74:
		;
	}
	v26 = *(_QWORD*)(a1 + 352);
	if (v26)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
	v27 = *(_QWORD*)(a1 + 344);
	if (v27)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
	*(_QWORD*)a1 = off_140B61C38;
	sub_14029CA70(a1);
	sub_14029CD30(a1);
}
// 140B61C38: using guessed type __int64 (__fastcall *off_140B61C38[5])();
// 140B62010: using guessed type __int64 (__fastcall *off_140B62010)();
// 1402AE760: using guessed type int var_38[4];
// 1402AE760: using guessed type int var_28[4];
// 1402AE760: using guessed type int var_18[6];

