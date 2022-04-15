//----- (00000001401DFDD0) ----------------------------------------------------
__int64 __fastcall sub_1401DFDD0(__int64 a1, __int64 a2)
{
	int v4; // edx
	int v5; // ecx
	__int64 v6; // rcx
	int v7; // eax
	__int64* v8; // rbx
	__int64 v9; // rdi

	if (!*(_DWORD*)(a1 + 3124) || *(_DWORD*)(a1 + 3112) != *(_DWORD*)a2 || *(float*)(a2 + 4) != *(float*)(a1 + 3116))
		goto LABEL_7;
	v4 = *(_DWORD*)(a2 + 8);
	v5 = *(_DWORD*)(a1 + 3120);
	if ((v5 ^ v4) < 0)
		v5 = 0x80000000 - v5;
	if ((int)abs32(v5 - v4) > 84)
	{
	LABEL_7:
		v6 = *(_QWORD*)(a1 + 296);
		*(_DWORD*)(a1 + 3112) = *(_DWORD*)a2;
		*(_DWORD*)(a1 + 3116) = *(_DWORD*)(a2 + 4);
		v7 = *(_DWORD*)(a2 + 8);
		*(_DWORD*)(a1 + 3124) = 1;
		*(_DWORD*)(a1 + 3120) = v7;
		if (v6)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 240i64))(v6, a1 + 3112);
			v8 = (__int64*)(a1 + 904);
			v9 = 72i64;
			do
			{
				if (*v8)
					sub_1401E7F20(*v8, a1 + 3112);
				++v8;
				--v9;
			} while (v9);
		}
		*(_DWORD*)(a1 + 3168) &= ~8u;
	}
	return 0i64;
}

