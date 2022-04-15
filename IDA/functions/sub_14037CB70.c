//----- (000000014037CB70) ----------------------------------------------------
__int64 __fastcall sub_14037CB70(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // [rsp+30h] [rbp+8h] BYREF

	if ((*(_BYTE*)(a1 + 32) & 1) == 0)
	{
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 48i64))(*(_QWORD*)(a1 + 16));
		if (!(_DWORD)result)
			return result;
		*(_QWORD*)(a1 + 32) = 1i64;
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	if ((*(_BYTE*)(a1 + 32) & 2) == 0)
	{
		sub_14037D790(a1);
		*(_DWORD*)(a1 + 32) |= 2u;
		*(_DWORD*)(a1 + 40) &= ~2u;
		sub_140383760((_QWORD*)a1);
		*(_DWORD*)(a1 + 44) &= ~8u;
	}
	if ((*(_BYTE*)(a1 + 32) & 4) == 0)
	{
		(*(void(__fastcall**)(_QWORD, __int64, __int64*))(**(_QWORD**)(a1 + 16) + 72i64))(
			*(_QWORD*)(a1 + 16),
			21i64,
			&v3);
		*(_DWORD*)(a1 + 1120) = *(unsigned __int8*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 24i64))(v3);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_DWORD*)(a1 + 32) |= 4u;
	}
	if ((*(_BYTE*)(a1 + 32) & 8) == 0)
	{
		sub_1403828A0(a1);
		*(_DWORD*)(a1 + 32) |= 8u;
		*(_DWORD*)(a1 + 40) &= ~0x8000u;
	}
	return 1i64;
}

