//----- (00000001402FB7E0) ----------------------------------------------------
void __fastcall sub_1402FB7E0(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	unsigned __int64 v7; // rdi
	__int64 v8; // rcx
	void(__fastcall * *v9)(__int64); // rax
	int v10; // eax
	int v11; // xmm1_4
	void(__fastcall * *v12)(__int64); // rax
	__int64 i; // rax
	_QWORD* v14; // rcx
	__int64 v15; // rax
	void(__fastcall * *v16)(__int64); // rax
	__int64 v17; // rcx
	__int64 v18; // rax
	int v19; // ecx
	__int64 v20; // rax
	int v21; // ecx
	int v22[6]; // [rsp+20h] [rbp-18h] BYREF

	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 1008i64))(a1))
	{
		v4 = *(_QWORD**)(a2 + 344);
		if (v4)
			*v4 = *(_QWORD*)(a2 + 352);
		v5 = *(_QWORD*)(a2 + 352);
		if (v5)
			*(_QWORD*)(v5 + 344) = *(_QWORD*)(a2 + 344);
		v6 = *(_QWORD**)(a2 + 360);
		v7 = 0i64;
		*(_QWORD*)(a2 + 344) = 0i64;
		*(_QWORD*)(a2 + 352) = 0i64;
		if (v6)
			*v6 = *(_QWORD*)(a2 + 368);
		v8 = *(_QWORD*)(a2 + 368);
		if (v8)
			*(_QWORD*)(v8 + 360) = *(_QWORD*)(a2 + 360);
		v9 = *(void(__fastcall***)(__int64))a2;
		*(_QWORD*)(a2 + 360) = 0i64;
		*(_QWORD*)(a2 + 368) = 0i64;
		((void(__fastcall*)(__int64, _QWORD))v9[44])(a2, *(unsigned int*)(a1 + 320));
		v10 = *(_DWORD*)(a1 + 1064);
		*(float*)&v11 = *(float*)(a1 + 1072) * *(float*)(a2 + 148);
		v22[1] = *(_DWORD*)(a1 + 1068);
		v22[0] = v10;
		v12 = *(void(__fastcall***)(__int64))a2;
		v22[2] = v11;
		((void(__fastcall*)(__int64, int*))v12[30])(a2, v22);
		*(_DWORD*)(a2 + 1200) = 0;
		*(_QWORD*)(a2 + 1208) = 0i64;
		*(_QWORD*)(a2 + 1216) = a1;
		*(_QWORD*)(a2 + 1224) = *(_QWORD*)(a1 + 1224);
		for (i = *(_QWORD*)(a2 + 1232); i; i = *(_QWORD*)(sub_1402FB490(i, *(_QWORD*)(a2 + 1224)) + 1248))
			;
		v14 = (_QWORD*)(a1 + 1232);
		if (!*(_QWORD*)(a2 + 1240))
		{
			*(_QWORD*)(a2 + 1240) = v14;
			*(_QWORD*)(a2 + 1248) = *v14;
			*v14 = a2;
			v15 = *(_QWORD*)(a2 + 1248);
			if (v15)
				*(_QWORD*)(v15 + 1240) = a2 + 1248;
		}
		(**(void(__fastcall***)(__int64))a2)(a2);
		v16 = *(void(__fastcall***)(__int64))a2;
		v22[0] = 0;
		if (((unsigned int(__fastcall*)(__int64, int*, _QWORD))v16[2])(a2, v22, 0i64)
			&& *(_DWORD*)(*(_QWORD*)(a2 + 64) + 760i64))
		{
			do
			{
				v17 = *(_QWORD*)(*(_QWORD*)(a2 + 1424) + 8 * v7);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v17 + 120i64))(v17, 1i64);
				++v7;
			} while (v7 < *(unsigned int*)(*(_QWORD*)(a2 + 64) + 760i64));
		}
		v18 = a1;
		do
		{
			v19 = *(_DWORD*)(v18 + 48);
			if ((v19 & 4) == 0)
				break;
			*(_DWORD*)(v18 + 48) = v19 & 0xFFFFFFFB;
			v18 = *(_QWORD*)(v18 + 1216);
		} while (v18);
		v20 = a1;
		do
		{
			v21 = *(_DWORD*)(v20 + 52);
			if ((v21 & 0x20) == 0)
				break;
			*(_DWORD*)(v20 + 52) = v21 & 0xFFFFFFDF;
			v20 = *(_QWORD*)(v20 + 1216);
		} while (v20);
		sub_1402F5DF0(a1);
	}
}

