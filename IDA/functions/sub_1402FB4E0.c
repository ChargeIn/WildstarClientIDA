//----- (00000001402FB4E0) ----------------------------------------------------
__int64 __fastcall sub_1402FB4E0(__int64* a1, int a2, __int64 a3)
{
	__int64 v4; // rsi
	__int64* v5; // rdi
	__int64 result; // rax
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	void(__fastcall * *v11)(__int64); // rax
	int v12; // eax
	int v13; // xmm1_4
	void(__fastcall * *v14)(__int64); // rax
	__int64 v15; // rax
	__int64 v16; // rdx
	__int64 v17; // r8
	__int64 v18; // rax
	__int64* v19; // r14
	__int64 i; // rax
	_QWORD* v21; // rcx
	__int64 v22; // rax
	void(__fastcall * *v23)(__int64); // rax
	unsigned __int64 j; // rsi
	__int64 v25; // rcx
	__int64* v26; // rax
	int v27; // ecx
	__int64* v28; // rax
	int v29; // ecx
	unsigned int v30; // eax
	int v31[6]; // [rsp+20h] [rbp-18h] BYREF

	v4 = a2;
	v5 = a1;
	result = (*(__int64(__fastcall**)(__int64*))(*a1 + 1008))(a1);
	if (!(_DWORD)result)
	{
		v7 = *(_QWORD**)(a3 + 344);
		if (v7)
			*v7 = *(_QWORD*)(a3 + 352);
		v8 = *(_QWORD*)(a3 + 352);
		if (v8)
			*(_QWORD*)(v8 + 344) = *(_QWORD*)(a3 + 344);
		v9 = *(_QWORD**)(a3 + 360);
		*(_QWORD*)(a3 + 344) = 0i64;
		*(_QWORD*)(a3 + 352) = 0i64;
		if (v9)
			*v9 = *(_QWORD*)(a3 + 368);
		v10 = *(_QWORD*)(a3 + 368);
		if (v10)
			*(_QWORD*)(v10 + 360) = *(_QWORD*)(a3 + 360);
		v11 = *(void(__fastcall***)(__int64))a3;
		*(_QWORD*)(a3 + 360) = 0i64;
		*(_QWORD*)(a3 + 368) = 0i64;
		((void(__fastcall*)(__int64, _QWORD))v11[44])(a3, *((unsigned int*)v5 + 80));
		v12 = *((_DWORD*)v5 + 266);
		*(float*)&v13 = *((float*)v5 + 268) * *(float*)(a3 + 148);
		v31[1] = *((_DWORD*)v5 + 267);
		v31[0] = v12;
		v14 = *(void(__fastcall***)(__int64))a3;
		v31[2] = v13;
		((void(__fastcall*)(__int64, int*))v14[30])(a3, v31);
		*(_DWORD*)(a3 + 1200) = v4;
		v15 = *v5;
		v31[0] = 0;
		if ((*(unsigned int(__fastcall**)(__int64*, int*, _QWORD))(v15 + 16))(v5, v31, 0i64)
			&& (_DWORD)v4
			&& (v16 = v5[8], (unsigned int)v4 < *(_DWORD*)(v16 + 624))
			&& (v17 = *(unsigned __int16*)(*(_QWORD*)(v16 + 632) + 2 * v4), (unsigned int)v17 < *(_DWORD*)(v16 + 608)))
		{
			v18 = *(_QWORD*)(v16 + 616) + 4 * v17;
		}
		else
		{
			v18 = 0i64;
		}
		*(_QWORD*)(a3 + 1208) = v18;
		v19 = v5 + 153;
		*(_QWORD*)(a3 + 1216) = v5;
		*(_QWORD*)(a3 + 1224) = v5[153];
		for (i = *(_QWORD*)(a3 + 1232); i; i = *(_QWORD*)(sub_1402FB490(i, *(_QWORD*)(a3 + 1224)) + 1248))
			;
		v21 = v5 + 154;
		if (!*(_QWORD*)(a3 + 1240))
		{
			*(_QWORD*)(a3 + 1240) = v21;
			*(_QWORD*)(a3 + 1248) = *v21;
			*v21 = a3;
			v22 = *(_QWORD*)(a3 + 1248);
			if (v22)
				*(_QWORD*)(v22 + 1240) = a3 + 1248;
		}
		(**(void(__fastcall***)(__int64))a3)(a3);
		v23 = *(void(__fastcall***)(__int64))a3;
		v31[0] = 0;
		if (((unsigned int(__fastcall*)(__int64, int*, _QWORD))v23[2])(a3, v31, 0i64))
		{
			for (j = 0i64; j < *(unsigned int*)(*(_QWORD*)(a3 + 64) + 760i64); ++j)
			{
				v25 = *(_QWORD*)(*(_QWORD*)(a3 + 1424) + 8 * j);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v25 + 120i64))(v25, 1i64);
			}
		}
		v26 = v5;
		do
		{
			v27 = *((_DWORD*)v26 + 12);
			if ((v27 & 4) == 0)
				break;
			*((_DWORD*)v26 + 12) = v27 & 0xFFFFFFFB;
			v26 = (__int64*)v26[152];
		} while (v26);
		v28 = v5;
		do
		{
			v29 = *((_DWORD*)v28 + 13);
			if ((v29 & 0x20) == 0)
				break;
			*((_DWORD*)v28 + 13) = v29 & 0xFFFFFFDF;
			v28 = (__int64*)v28[152];
		} while (v28);
		do
		{
			v30 = *(_DWORD*)(a3 + 308);
			if (*((_DWORD*)v5 + 77) >= v30)
				break;
			*((_DWORD*)v5 + 77) = v30;
			v5 = (__int64*)v5[152];
		} while (v5);
		result = *(_QWORD*)(*v19 + 1224);
		if (*(_DWORD*)(result + 1824))
		{
			*(_DWORD*)(result + 1824) = 0;
			for (result = *(_QWORD*)(result + 1232); result; result = *(_QWORD*)(sub_1402F6470(result, 0) + 1248))
				;
		}
	}
	return result;
}

