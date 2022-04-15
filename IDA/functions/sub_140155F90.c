//----- (0000000140155F90) ----------------------------------------------------
void __fastcall sub_140155F90(__int64 a1)
{
	int(__fastcall * **v2)(_QWORD, void*, __int64*); // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(int(__fastcall****)(_QWORD, void*, __int64*))(a1 + 472);
	if (v2 && (**v2)(v2, &unk_140B5C848, &v5) >= 0)
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 32i64))(v5, *(unsigned int*)(a1 + 496));
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 32i64))(v5, *(unsigned int*)(a1 + 500));
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
		sub_140156170(a1, 1);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 472) + 32i64))(*(_QWORD*)(a1 + 472));
		v3 = *(_QWORD*)(a1 + 472);
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 16i64))(v3);
			*(_QWORD*)(a1 + 472) = 0i64;
		}
		v4 = *(_QWORD*)(a1 + 488);
		if (v4)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
			*(_QWORD*)(a1 + 488) = 0i64;
		}
	}
}

