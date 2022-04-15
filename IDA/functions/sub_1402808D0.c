//----- (00000001402808D0) ----------------------------------------------------
__int64 __fastcall sub_1402808D0(__int64 a1)
{
	__int64 v3; // [rsp+30h] [rbp+8h] BYREF

	if (!*(_QWORD*)(a1 + 8584)
		|| *(_DWORD*)(a1 + 6252) && (*(int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 40i64))(a1, a1 + 56) < 0
		|| !(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8584) + 32i64))(*(_QWORD*)(a1 + 8584)))
	{
		return 0i64;
	}
	if (!*(_QWORD*)(a1 + 8592))
	{
		v3 = 0x141DE2D28i64;
		sub_1401A3130(14, 2, &v3);
		return 0i64;
	}
	return 1i64;
}

