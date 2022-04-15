//----- (0000000140865EF0) ----------------------------------------------------
__int64 __fastcall sub_140865EF0(__int64 a1, __int64* a2)
{
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64* v6; // rbx
	__int64 v7; // rbx
	unsigned int v8; // eax
	__int64 v9; // rbx
	__int64 v10; // rcx

	if (a2 != (__int64*)a1)
	{
		v4 = *a2;
		if (*a2)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(*a2);
		v5 = *(_QWORD*)a1;
		*(_QWORD*)a1 = v4;
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
		v6 = (__int64*)a2[1];
		if (v6)
		{
			v7 = *v6;
			v8 = sub_14086D210(*(_QWORD*)a1);
			*(_QWORD*)(a1 + 8) = (*(__int64(__fastcall**)(__int64, _QWORD))(v7 + 24))(a2[1], v8);
		}
		else
		{
			*(_QWORD*)(a1 + 8) = 0i64;
		}
		*(_DWORD*)(a1 + 16) = *((_DWORD*)a2 + 4);
		v9 = a2[3];
		if (v9)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(a2[3]);
		v10 = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(a1 + 24) = v9;
		if (v10)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 16i64))(v10);
		*(_QWORD*)(a1 + 32) = a2[4];
	}
	return a1;
}

