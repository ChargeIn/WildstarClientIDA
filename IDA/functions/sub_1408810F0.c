//----- (00000001408810F0) ----------------------------------------------------
__int64 __fastcall sub_1408810F0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	char v5; // al

	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 96i64))(*(_QWORD*)(a1 + 88));
	if (a2 <= 1 && *(_DWORD*)(a1 + 104))
	{
		v5 = *(_BYTE*)(a1 + 126);
		if ((v5 & 2) != 0)
			*(_BYTE*)(a1 + 126) = v5 & 0xFD;
		else
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 128i64))(*(_QWORD*)(a1 + 88));
		result = 0i64;
		*(_QWORD*)(a1 + 96) = 0i64;
		*(_DWORD*)(a1 + 104) = 0;
	}
	return result;
}

