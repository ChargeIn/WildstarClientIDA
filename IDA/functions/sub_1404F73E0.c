//----- (00000001404F73E0) ----------------------------------------------------
__int64 __fastcall sub_1404F73E0(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // r14
	unsigned int v8; // ebp
	__int64* v9; // rbx
	int v10; // eax
	__int64 v11; // rdi
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64* v18; // [rsp+50h] [rbp+8h] BYREF
	__int64 v19; // [rsp+58h] [rbp+10h] BYREF

	v3 = *(_QWORD*)(a1 + 2328);
	if (v3 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v3 + 24i64))(v3) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	v5 = *(_QWORD*)(a2 + 16);
	if (!v5)
		return 2147500037i64;
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
	if (!v7)
		return 2147500037i64;
	v8 = 0;
	v9 = 0i64;
	v18 = 0i64;
	v19 = 0i64;
	v10 = sub_1402EC590(v6, &v19);
	v11 = v19;
	if (v10 < 0
		|| (v10 = sub_1401DB2A0(v19, v7, (__int64*)&v18), v9 = v18, v10 < 0)
		|| (v10 = sub_14002F5D0(a2 + 32, v18, *(_QWORD*)(a1 + 2160)), v10 < 0)
		|| (v10 = sub_140030080(a2 + 32, (__int64)v9), v10 < 0))
	{
		v8 = v10;
	}
	else
	{
		sub_140453D40(a1);
		sub_1404FE940(a1);
		v12 = *(_QWORD*)(a1 + 2176);
		if (v12)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
			*(_QWORD*)(a1 + 2176) = 0i64;
		}
		v13 = *(_QWORD*)(a1 + 2184);
		if (v13)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
			*(_QWORD*)(a1 + 2184) = 0i64;
		}
		if (*(__int64**)(a1 + 2168) != v9)
		{
			if (v9)
				(*(void(__fastcall**)(__int64*)) * v9)(v9);
			v14 = *(_QWORD*)(a1 + 2168);
			if (v14)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
			*(_QWORD*)(a1 + 2168) = v9;
		}
		if (*(_QWORD*)(a1 + 2160) != v11)
		{
			if (v11)
				(**(void(__fastcall***)(__int64))v11)(v11);
			v15 = *(_QWORD*)(a1 + 2160);
			if (v15)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
			*(_QWORD*)(a1 + 2160) = v11;
		}
		*(_DWORD*)(a1 + 1040) = 1;
		v16 = *(_QWORD*)(a1 + 2192);
		if (v16)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
			*(_QWORD*)(a1 + 2192) = 0i64;
		}
		*(_DWORD*)(a1 + 2200) = 0;
	}
	if (v9)
		(*(void(__fastcall**)(__int64*))(*v9 + 8))(v9);
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	return v8;
}
// 1404F7457: variable 'v6' is possibly undefined

