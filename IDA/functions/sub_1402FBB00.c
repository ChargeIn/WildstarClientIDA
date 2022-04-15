//----- (00000001402FBB00) ----------------------------------------------------
void __fastcall sub_1402FBB00(__int64 a1)
{
	__int64 v2; // rax
	__int64 i; // rax
	__int64 j; // r8
	__int64 v5; // rdx
	unsigned int v6; // eax
	unsigned int v7; // ecx
	__int64 v8; // rax
	__int64 v9; // rax
	unsigned __int64 k; // rdi
	__int64 v11; // rcx
	_QWORD* v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rax
	int v15[6]; // [rsp+20h] [rbp-18h] BYREF

	if (*(_QWORD*)(a1 + 1216)
		&& (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 1008i64))(a1)
			|| !(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1216) + 1008i64))(*(_QWORD*)(a1 + 1216))))
	{
		sub_1402F5DF0(a1);
		v2 = *(_QWORD*)(*(_QWORD*)(a1 + 1224) + 1224i64);
		if (*(_DWORD*)(v2 + 1824))
		{
			*(_DWORD*)(v2 + 1824) = 0;
			for (i = *(_QWORD*)(v2 + 1232); i; i = *(_QWORD*)(sub_1402F6470(i, 0) + 1248))
				;
		}
		for (j = *(_QWORD*)(a1 + 1216); j; j = *(_QWORD*)(j + 1216))
		{
			v5 = *(_QWORD*)(j + 1232);
			v6 = *(_DWORD*)(j + 856) != 0;
			while (v5)
			{
				v7 = *(_DWORD*)(v5 + 308);
				v5 = *(_QWORD*)(v5 + 1248);
				if (v6 <= v7)
					v6 = v7;
			}
			if (*(_DWORD*)(j + 308) == v6)
				break;
			*(_DWORD*)(j + 308) = v6;
		}
		v8 = *(_QWORD*)(a1 + 1232);
		*(_DWORD*)(a1 + 1200) = 0;
		*(_QWORD*)(a1 + 1208) = 0i64;
		*(_QWORD*)(a1 + 1216) = 0i64;
		for (*(_QWORD*)(a1 + 1224) = a1; v8; v8 = *(_QWORD*)(sub_1402FB490(v8, *(_QWORD*)(a1 + 1224)) + 1248))
			;
		v9 = *(_QWORD*)a1;
		v15[0] = 0;
		if ((*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(v9 + 16))(a1, v15, 0i64))
		{
			for (k = 0i64; k < *(unsigned int*)(*(_QWORD*)(a1 + 64) + 760i64); ++k)
			{
				v11 = *(_QWORD*)(*(_QWORD*)(a1 + 1424) + 8 * k);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v11 + 120i64))(v11, 1i64);
			}
		}
		v12 = *(_QWORD**)(a1 + 1240);
		if (v12)
			*v12 = *(_QWORD*)(a1 + 1248);
		v13 = *(_QWORD*)(a1 + 1248);
		if (v13)
			*(_QWORD*)(v13 + 1240) = *(_QWORD*)(a1 + 1240);
		v14 = *(_QWORD*)a1;
		*(_QWORD*)(a1 + 1240) = 0i64;
		*(_QWORD*)(a1 + 1248) = 0i64;
		(*(void(__fastcall**)(__int64))(v14 + 8))(a1);
	}
}
// 1402FBB00: using guessed type int var_18[6];

