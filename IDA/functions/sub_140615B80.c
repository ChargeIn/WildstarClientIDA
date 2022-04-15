//----- (0000000140615B80) ----------------------------------------------------
__int64 __fastcall sub_140615B80(__int64 a1)
{
	unsigned __int64 i; // rdx
	__int64 v3; // rdi
	__int64 v4; // rcx

	for (i = _InterlockedExchangeAdd64((volatile signed __int64*)(a1 + 24), 1ui64);
		i < *(_QWORD*)(a1 + 16);
		i = _InterlockedExchangeAdd64((volatile signed __int64*)(a1 + 24), 1ui64))
	{
		v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * i);
		v4 = *(_QWORD*)(v3 + 16);
		*(_QWORD*)(v3 + 24) = 2139095039i64;
		(*(void(__fastcall**)(__int64, __int64(__fastcall*)(__int64, __int64), __int64))(*(_QWORD*)v4 + 224i64))(
			v4,
			sub_140615AB0,
			v3);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 16) + 216i64))(*(_QWORD*)(v3 + 16));
		if (*(float*)(v3 + 24) == 3.4028235e38)
			*(_DWORD*)(v3 + 24) = 0;
	}
	return 0i64;
}

