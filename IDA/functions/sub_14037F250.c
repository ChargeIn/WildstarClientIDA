//----- (000000014037F250) ----------------------------------------------------
__int64 __fastcall sub_14037F250(__int64 a1)
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
	int v13[2]; // [rsp+40h] [rbp-18h] BYREF
	__int64 v14; // [rsp+48h] [rbp-10h]
	__int64* v15; // [rsp+60h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 1280);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 1280) = 0i64;
	}
	result = *(_QWORD*)a1;
	if ((*(_BYTE*)(*(_QWORD*)a1 + 236i64) & 1) != 0)
	{
		v4 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 64i64))(*(_QWORD*)(a1 + 16), 26i64);
		result = sub_140350A20(*(_QWORD*)(*(_QWORD*)a1 + 16i64), 9i64, v4, (int**)(a1 + 1280));
		if ((int)result >= 0 && (_DWORD)result != 1)
		{
			v5 = *(_QWORD*)(a1 + 16);
			v15 = 0i64;
			(*(void(__fastcall**)(__int64, __int64, __int64**))(*(_QWORD*)v5 + 72i64))(v5, 26i64, &v15);
			v6 = *(_QWORD*)(*(_QWORD*)(a1 + 1280) + 32i64);
			v7 = (*(__int64(__fastcall**)(__int64*))(*v15 + 24))(v15);
			v13[0] = 65;
			v8 = *v15;
			v9 = (int*)v7;
			v13[1] = 65;
			v14 = 1i64;
			v10 = (*(__int64(__fastcall**)(__int64*))(v8 + 16))(v15);
			v11 = *(_QWORD*)(v6 + 16);
			v12[0] = *(_DWORD*)(v10 + 44);
			v12[1] = 65 * v12[0];
			v12[2] = 65 * v12[0];
			result = sub_140371D10(v11, *(_DWORD*)(v6 + 24), v9, v13, v12);
			if (v15)
				return (*(__int64(__fastcall**)(__int64*))(*v15 + 8))(v15);
		}
	}
	return result;
}

