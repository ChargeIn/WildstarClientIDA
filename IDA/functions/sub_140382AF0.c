//----- (0000000140382AF0) ----------------------------------------------------
__int64 __fastcall sub_140382AF0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	int v4; // eax
	__int64 v5; // rcx
	__int64 v6; // rdi
	__int64 v7; // rax
	__int64 v8; // rdx
	int* v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rcx
	unsigned int v12[4]; // [rsp+30h] [rbp-28h] BYREF
	int v13[6]; // [rsp+40h] [rbp-18h] BYREF
	__int64* v14; // [rsp+60h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 1168);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 1168) = 0i64;
	}
	result = *(_QWORD*)a1;
	if ((*(_BYTE*)(*(_QWORD*)a1 + 232i64) & 0x11) == 17)
	{
		v4 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 64i64))(*(_QWORD*)(a1 + 16), 20i64);
		result = sub_140350A20(*(_QWORD*)(*(_QWORD*)a1 + 16i64), 4i64, v4, (int**)(a1 + 1168));
		if ((int)result >= 0 && (_DWORD)result != 1)
		{
			v5 = *(_QWORD*)(a1 + 16);
			v14 = 0i64;
			(*(void(__fastcall**)(__int64, __int64, __int64**))(*(_QWORD*)v5 + 72i64))(v5, 20i64, &v14);
			v6 = *(_QWORD*)(*(_QWORD*)(a1 + 1168) + 32i64);
			v7 = (*(__int64(__fastcall**)(__int64*))(*v14 + 24))(v14);
			v13[0] = 68;
			v8 = *v14;
			v9 = (int*)v7;
			v13[1] = 68;
			v13[2] = 1;
			v13[3] = 13;
			v10 = (*(__int64(__fastcall**)(__int64*))(v8 + 16))(v14);
			v11 = *(_QWORD*)(v6 + 16);
			v12[0] = *(_DWORD*)(v10 + 44);
			v12[1] = 17 * v12[0];
			v12[2] = 17 * v12[0];
			result = sub_140371D10(v11, *(_DWORD*)(v6 + 24), v9, v13, v12);
			if (v14)
				return (*(__int64(__fastcall**)(__int64*))(*v14 + 8))(v14);
		}
	}
	return result;
}

