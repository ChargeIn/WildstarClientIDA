//----- (0000000140712910) ----------------------------------------------------
void __fastcall sub_140712910(__int64 a1)
{
	void(__fastcall * v2)(_QWORD); // rax
	__int64 v3; // rdx
	__int64 v4; // rcx
	__int64 v5; // rcx

	if (*(_QWORD*)(a1 + 24) && !*(_DWORD*)(a1 + 80))
	{
		v2 = *(void(__fastcall**)(_QWORD))(a1 + 64);
		*(_DWORD*)(a1 + 80) = 1;
		if (v2)
			v2(*(_QWORD*)(a1 + 72));
		v3 = *(_QWORD*)(a1 + 40);
		*(_QWORD*)(a1 + 64) = 0i64;
		*(_QWORD*)(a1 + 72) = 0i64;
		if (v3)
		{
			v4 = *(_QWORD*)(a1 + 16);
			if (v4)
				(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v4 + 24i64))(
					v4,
					v3,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64);
		}
		v5 = *(_QWORD*)(a1 + 24);
		if (v5)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			*(_QWORD*)(a1 + 24) = 0i64;
		}
		*(_DWORD*)(a1 + 80) = 0;
	}
}

