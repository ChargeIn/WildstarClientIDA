//----- (0000000140279680) ----------------------------------------------------
__int64 __fastcall sub_140279680(__int64 a1)
{
	int v1; // r11d
	int v3; // ecx
	_QWORD* v4; // r8
	__int64 v5; // r9
	__int64 v6; // rax
	__int64 result; // rax
	int v8; // r11d
	int v9; // ecx
	_QWORD* v10; // r8
	__int64 v11; // r9
	__int64 v12; // rax
	int v13; // r11d
	int v14; // ecx
	_QWORD* v15; // r8
	__int64 v16; // r9
	__int64 v17; // rax
	int v18; // r11d
	int v19; // ecx
	_QWORD* v20; // r8
	__int64 v21; // r9
	__int64 v22; // rax
	_QWORD v23[4]; // [rsp+20h] [rbp-A8h] BYREF
	_QWORD v24[17]; // [rsp+40h] [rbp-88h] BYREF

	v1 = *(_DWORD*)(a1 + 7912);
	if (v1 < *(_DWORD*)(a1 + 7916))
	{
		v3 = *(_DWORD*)(a1 + 7916);
		if (v1 < v3)
		{
			v4 = &v23[v1];
			v5 = (unsigned int)(v3 - v1);
			do
			{
				v6 = *(_QWORD*)((char*)v4++ + a1 - (_QWORD)v23 + 7728);
				*(v4 - 1) = *(_QWORD*)(v6 + 16);
				--v5;
			} while (v5);
		}
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD*))(**(_QWORD**)(a1 + 6352) + 200i64))(
			*(_QWORD*)(a1 + 6352),
			v1,
			(unsigned int)(*(_DWORD*)(a1 + 7916) - v1),
			&v23[v1]);
		result = qword_140C79898;
		*(_QWORD*)(a1 + 7912) = qword_140C79898;
	}
	v8 = *(_DWORD*)(a1 + 8096);
	if (v8 < *(_DWORD*)(a1 + 8100))
	{
		v9 = *(_DWORD*)(a1 + 8100);
		if (v8 < v9)
		{
			v10 = &v23[v8];
			v11 = (unsigned int)(v9 - v8);
			do
			{
				v12 = *(_QWORD*)((char*)v10++ + a1 - (_QWORD)v23 + 7928);
				*(v10 - 1) = *(_QWORD*)(v12 + 16);
				--v11;
			} while (v11);
		}
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD*))(**(_QWORD**)(a1 + 6352) + 208i64))(
			*(_QWORD*)(a1 + 6352),
			v8,
			(unsigned int)(*(_DWORD*)(a1 + 8100) - v8),
			&v23[v8]);
		result = qword_140C79898;
		*(_QWORD*)(a1 + 8096) = qword_140C79898;
	}
	v13 = *(_DWORD*)(a1 + 7920);
	if (v13 < *(_DWORD*)(a1 + 7924))
	{
		v14 = *(_DWORD*)(a1 + 7924);
		if (v13 < v14)
		{
			v15 = &v24[v13];
			v16 = (unsigned int)(v14 - v13);
			do
			{
				v17 = *(_QWORD*)((char*)v15++ + a1 - (_QWORD)v24 + 7760);
				*(v15 - 1) = *(_QWORD*)(v17 + 16);
				--v16;
			} while (v16);
		}
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD*))(**(_QWORD**)(a1 + 6352) + 64i64))(
			*(_QWORD*)(a1 + 6352),
			v13,
			(unsigned int)(*(_DWORD*)(a1 + 7924) - v13),
			&v24[v13]);
		result = qword_140C79898;
		*(_QWORD*)(a1 + 7920) = qword_140C79898;
	}
	v18 = *(_DWORD*)(a1 + 8104);
	if (v18 < *(_DWORD*)(a1 + 8108))
	{
		v19 = *(_DWORD*)(a1 + 8108);
		if (v18 < v19)
		{
			v20 = &v24[v18];
			v21 = (unsigned int)(v19 - v18);
			do
			{
				v22 = *(_QWORD*)((char*)v20++ + a1 - (_QWORD)v24 + 7960);
				*(v20 - 1) = *(_QWORD*)(v22 + 16);
				--v21;
			} while (v21);
		}
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD*))(**(_QWORD**)(a1 + 6352) + 80i64))(
			*(_QWORD*)(a1 + 6352),
			v18,
			(unsigned int)(*(_DWORD*)(a1 + 8108) - v18),
			&v24[v18]);
		result = qword_140C79898;
		*(_QWORD*)(a1 + 8104) = qword_140C79898;
	}
	return result;
}
// 140C79898: using guessed type __int64 qword_140C79898;
// 140279680: using guessed type _QWORD var_A8[4];
// 140279680: using guessed type _QWORD var_88[17];

