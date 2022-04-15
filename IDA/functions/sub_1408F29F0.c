//----- (00000001408F29F0) ----------------------------------------------------
__int64 __fastcall sub_1408F29F0(__int64 a1)
{
	__int64 v1; // rax
	int v3; // ecx
	unsigned __int64 v4; // rsi
	unsigned __int64 v5; // rdi
	int* v6; // rax
	int* v8; // rax
	__int64 v9; // rax
	__int64 v10; // r9
	__int64 v11; // r8
	bool v12; // cc
	__int64 v13; // r8
	__int64 v14; // rdx

	v1 = *(_QWORD*)(a1 + 8);
	v3 = *(_DWORD*)(v1 + 236);
	*(_DWORD*)(a1 + 292) = v3;
	if (v3)
	{
		v4 = (unsigned int)(32 * v3);
		v5 = *(unsigned __int16*)(a1 + 296) * ((unsigned int)(v3 + 3) >> 2);
		v6 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 8i64))(*(_QWORD*)(a1 + 16));
		*(_QWORD*)(a1 + 24) = v6;
		if (!v6)
			return 52i64;
		sub_1407E4830(v6, 0i64, v4);
		v8 = (int*)(*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 16) + 8i64))(
			*(_QWORD*)(a1 + 16),
			v5);
		*(_QWORD*)(a1 + 32) = v8;
		if (!v8)
			return 52i64;
		sub_1407E4830(v8, 0i64, v5);
		v9 = *(_QWORD*)(a1 + 8);
		v10 = *(_QWORD*)(a1 + 32);
		v11 = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(a1 + 112) = *(_QWORD*)(v9 + 224);
		*(_QWORD*)(a1 + 120) = v11;
		*(_QWORD*)(a1 + 104) = v9 + 120;
		*(_QWORD*)(a1 + 128) = v10;
		v12 = *(_DWORD*)(a1 + 96) <= 1u;
		*(_BYTE*)(a1 + 298) = 1;
		if (!v12)
			sub_1408F4B00(a1 + 96);
		sub_1408F2B80(a1);
	}
	else
	{
		v13 = *(_QWORD*)(a1 + 32);
		v14 = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(a1 + 112) = *(_QWORD*)(v1 + 224);
		*(_QWORD*)(a1 + 120) = v14;
		*(_QWORD*)(a1 + 128) = v13;
		*(_QWORD*)(a1 + 104) = v1 + 120;
	}
	*(_DWORD*)(*(_QWORD*)(a1 + 8) + 232i64) &= ~1u;
	*(_DWORD*)(*(_QWORD*)(a1 + 8) + 232i64) &= ~4u;
	return 1i64;
}

