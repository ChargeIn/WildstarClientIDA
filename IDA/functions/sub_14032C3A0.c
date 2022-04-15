//----- (000000014032C3A0) ----------------------------------------------------
__int64 __fastcall sub_14032C3A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	_QWORD* v4; // r14
	_QWORD* v5; // rbp
	__int64 v6; // r13
	__int64 v7; // r12
	__int64 v8; // rax
	unsigned __int64 v9; // rsi
	unsigned __int16* v10; // rbx
	__int64 v11; // r15
	__int64 v12; // rax
	unsigned __int64 v13; // rdi
	__int64 v14; // rcx
	__int64 v15; // rax
	unsigned __int64 v16; // rdx
	__int64 v17; // rcx
	unsigned __int64 v18; // rax
	unsigned __int64 v19; // rcx
	unsigned int v20; // eax
	unsigned int v21; // ecx

	v4 = *(_QWORD**)(a4 + 48);
	v5 = *(_QWORD**)(a3 + 48);
	v6 = v4[8];
	v7 = v5[8];
	v8 = *(_QWORD*)(v6 + 800) + 400i64 * *(unsigned int*)(a4 + 64);
	v9 = 0i64;
	v10 = (unsigned __int16*)(v8 + 6);
	v11 = *(_QWORD*)(v7 + 800) + 400i64 * *(unsigned int*)(a3 + 64) - v8;
	do
	{
		v12 = *(unsigned __int16*)((char*)v10 + v11);
		v13 = -1i64;
		if ((unsigned int)v12 < *(_DWORD*)(v7 + 448))
		{
			v14 = *(_QWORD*)(v5[132] + 24 * v12 + 16);
			if (v14)
				v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 64i64))(v14);
		}
		v15 = *v10;
		v16 = -1i64;
		if ((unsigned int)v15 < *(_DWORD*)(v6 + 448))
		{
			v17 = *(_QWORD*)(v4[132] + 24 * v15 + 16);
			if (v17)
				v16 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v17 + 64i64))(v17, -1i64);
		}
		if (v13 < v16)
			return 0xFFFFFFFFi64;
		if (v13 > v16)
			return 1i64;
		++v9;
		++v10;
	} while (v9 < 2);
	v18 = v5[7];
	v19 = v4[7];
	if (v18 >= v19)
	{
		if (v18 > v19)
			return 1i64;
		if (v5 >= v4)
		{
			if (v5 <= v4)
			{
				v20 = *(_DWORD*)(a3 + 64);
				v21 = *(_DWORD*)(a4 + 64);
				if (v20 >= v21)
					return v20 > v21;
				return 0xFFFFFFFFi64;
			}
			return 1i64;
		}
	}
	return 0xFFFFFFFFi64;
}

