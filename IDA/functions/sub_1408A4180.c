//----- (00000001408A4180) ----------------------------------------------------
__int64 __fastcall sub_1408A4180(__int64 a1, int a2)
{
	unsigned int v2; // ebx
	unsigned int v4; // esi
	__int64 v5; // rax
	__int64 v6; // rdx
	__int64 result; // rax
	unsigned int v8; // r10d
	__int64 v9; // r8
	unsigned int v10; // eax
	__int64 v11; // r9
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	unsigned int v17; // ebp
	unsigned __int16 v18; // ax

	v2 = 0;
	v4 = 0;
	if (!a2)
		return 1i64;
	do
	{
		++v4;
		a2 &= a2 - 1;
	} while (a2);
	if (!v4)
		return 1i64;
	v5 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 32) + 8i64))(*(_QWORD*)(a1 + 32), 56i64 * v4);
	*(_QWORD*)(a1 + 8) = v5;
	if (!v5)
		return 52i64;
	v8 = 0;
	v9 = 0i64;
	if ((int)v4 >= 4)
	{
		v6 = 0i64;
		v10 = ((v4 - 4) >> 2) + 1;
		v11 = v10;
		v8 = 4 * v10;
		v9 = 4i64 * v10;
		do
		{
			v12 = v6 + *(_QWORD*)(a1 + 8);
			if (v12)
			{
				*(_QWORD*)v12 = 0i64;
				*(_DWORD*)(v12 + 8) = 0;
				*(_QWORD*)(v12 + 16) = 0i64;
				*(_QWORD*)(v12 + 24) = 0i64;
				*(_QWORD*)(v12 + 32) = 0i64;
				*(_QWORD*)(v12 + 40) = 0i64;
				*(_DWORD*)(v12 + 48) = 0;
			}
			v13 = v6 + *(_QWORD*)(a1 + 8) + 56i64;
			if (v13)
			{
				*(_QWORD*)v13 = 0i64;
				*(_DWORD*)(v13 + 8) = 0;
				*(_QWORD*)(v13 + 16) = 0i64;
				*(_QWORD*)(v13 + 24) = 0i64;
				*(_QWORD*)(v13 + 32) = 0i64;
				*(_QWORD*)(v13 + 40) = 0i64;
				*(_DWORD*)(v13 + 48) = 0;
			}
			v14 = v6 + *(_QWORD*)(a1 + 8) + 112i64;
			if (v14)
			{
				*(_QWORD*)v14 = 0i64;
				*(_DWORD*)(v14 + 8) = 0;
				*(_QWORD*)(v14 + 16) = 0i64;
				*(_QWORD*)(v14 + 24) = 0i64;
				*(_QWORD*)(v14 + 32) = 0i64;
				*(_QWORD*)(v14 + 40) = 0i64;
				*(_DWORD*)(v14 + 48) = 0;
			}
			v15 = v6 + *(_QWORD*)(a1 + 8) + 168i64;
			if (v15)
			{
				*(_QWORD*)v15 = 0i64;
				*(_DWORD*)(v15 + 8) = 0;
				*(_QWORD*)(v15 + 16) = 0i64;
				*(_QWORD*)(v15 + 24) = 0i64;
				*(_QWORD*)(v15 + 32) = 0i64;
				*(_QWORD*)(v15 + 40) = 0i64;
				*(_DWORD*)(v15 + 48) = 0;
			}
			v6 += 224i64;
			--v11;
		} while (v11);
	}
	if (v8 < v4)
	{
		v9 *= 56i64;
		v6 = v4 - v8;
		do
		{
			v16 = v9 + *(_QWORD*)(a1 + 8);
			if (v16)
			{
				*(_QWORD*)v16 = 0i64;
				*(_DWORD*)(v16 + 8) = 0;
				*(_QWORD*)(v16 + 16) = 0i64;
				*(_QWORD*)(v16 + 24) = 0i64;
				*(_QWORD*)(v16 + 32) = 0i64;
				*(_QWORD*)(v16 + 40) = 0i64;
				*(_DWORD*)(v16 + 48) = 0;
			}
			v9 += 56i64;
			--v6;
		} while (v6);
	}
	v17 = (int)(float)((float)(*(float*)(a1 + 104) * 0.001) * (float)*(int*)(a1 + 188));
	while (1)
	{
		v18 = (*(__int64(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 40) + 16i64))(
			*(_QWORD*)(a1 + 40),
			v6,
			v9);
		result = sub_1408A63A0(
			*(_QWORD*)(a1 + 8) + 56i64 * v2,
			*(_QWORD*)(a1 + 32),
			v17,
			v18,
			*(float*)(a1 + 56),
			*(float*)(a1 + 52),
			*(float*)(a1 + 48),
			*(float*)(a1 + 60));
		if ((_DWORD)result != 1)
			break;
		if (++v2 >= v4)
			return 1i64;
	}
	return result;
}
// 1408A430A: conditional instruction was optimized away because esi.4!=0
// 1408A4317: variable 'v6' is possibly undefined
// 1408A4317: variable 'v9' is possibly undefined

