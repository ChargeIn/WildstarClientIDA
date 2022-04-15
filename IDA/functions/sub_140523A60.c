//----- (0000000140523A60) ----------------------------------------------------
char __fastcall sub_140523A60(__int64 a1)
{
	char result; // al
	__int64 v3; // rcx
	__int64 v4; // [rsp+20h] [rbp-28h] BYREF
	__int64 v5; // [rsp+28h] [rbp-20h]
	__int64 v6; // [rsp+30h] [rbp-18h]

	if (*(_QWORD*)(a1 + 32) || *(_QWORD*)(a1 + 48))
	{
		if (*(_QWORD*)(a1 + 32) == *(_QWORD*)(a1 + 48))
		{
			v4 = 0i64;
			v5 = 0i64;
			v6 = 0i64;
			LODWORD(v4) = *(_DWORD*)(a1 + 32);
			v5 = *(_QWORD*)(a1 + 24);
			v6 = *(_QWORD*)(a1 + 40);
			sub_1403F4900(qword_140C65898, 0x72u, (__int64)&v4);
		}
		sub_1406E6AD0(*(_QWORD*)(a1 + 16));
		result = sub_1400D4040(*(_QWORD*)(a1 + 8), "PrimalMatrixSaving", *(char**)(a1 + 8), L"i");
		v3 = *(_QWORD*)(a1 + 16);
		if (v3)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			*(_QWORD*)(a1 + 16) = 0i64;
		}
		*(_QWORD*)(a1 + 32) = 0i64;
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	return result;
}
// 140B6B8F8: using guessed type wchar_t aI_12[2];
// 140C65898: using guessed type __int64 qword_140C65898;

