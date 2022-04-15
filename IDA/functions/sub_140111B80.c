//----- (0000000140111B80) ----------------------------------------------------
__int64 __fastcall sub_140111B80(__int64 a1)
{
	unsigned __int64 v1; // r14
	unsigned __int64 v2; // rbp
	unsigned __int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // rdi
	__int64 v7; // rsi
	__int64 v8; // rax
	__int64 v9; // rdi
	__int64* v10; // rsi
	__int64 v11; // rbp
	__int64 v12; // rbx
	__int64 v13; // rax
	_QWORD* v14; // rcx
	_QWORD* v15; // rax
	unsigned __int64 v16; // rbp
	_QWORD* v17; // rcx
	unsigned __int64 v18; // rdx
	__int64 v19; // rax
	int v21; // [rsp+60h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 1040);
	v2 = *(_QWORD*)(a1 + 1048);
	if (v1 >= v2)
	{
		v4 = *(_QWORD*)(a1 + 1024);
		if (v4 >= (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 72i64))(*(_QWORD*)(a1 + 1080)))
			return 0i64;
		*(_QWORD*)(a1 + 1040) = v4;
		*(_QWORD*)(a1 + 1048) = v4 + 1;
		sub_14010EE40((_QWORD*)a1);
		v1 = *(_QWORD*)(a1 + 1040);
		v2 = *(_QWORD*)(a1 + 1048);
	}
	v5 = *(_QWORD*)(a1 + 1088);
	if (!v5
		|| (v21 = 1,
			(*(void(__fastcall**)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD*)v5 + 120i64))(v5, v1, v2),
			v6 = *(_QWORD*)(a1 + 1088),
			v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080)),
			v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 64i64))(v6),
			sub_1400D4070(a1, 0x26u, (char*)a1, "SS>b", v8, v7, &v21),
			v21))
	{
		(*(void(__fastcall**)(_QWORD, unsigned __int64, unsigned __int64))(**(_QWORD**)(a1 + 1080) + 120i64))(
			*(_QWORD*)(a1 + 1080),
			v1,
			v2);
		sub_14010EF50(a1, v1, v2);
		v14 = *(_QWORD**)(a1 + 1224);
		*(_QWORD*)(a1 + 1040) = v1;
		*(_QWORD*)(a1 + 1048) = v1;
		*(_QWORD*)(a1 + 1024) = v1;
		*(_QWORD*)(a1 + 1032) = -1i64;
		v15 = (_QWORD*)*v14;
		v16 = v2 - v1;
		if ((_QWORD*)*v14 != v14)
		{
			do
			{
				v17 = (_QWORD*)v15[2];
				v18 = v17[1];
				if (v18 > v1)
				{
					*v17 -= v16;
					v17[1] = v18 - v16;
				}
				v15 = (_QWORD*)*v15;
			} while (v15 != *(_QWORD**)(a1 + 1224));
		}
		sub_14010EE40((_QWORD*)a1);
		v19 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080));
		sub_1400D4070(a1, 0x27u, (char*)a1, L"S", v19);
		*(_BYTE*)(a1 + 1065) = 1;
	}
	else
	{
		v9 = *(_QWORD*)(a1 + 1080);
		v10 = *(__int64**)(a1 + 1088);
		v11 = *v10;
		v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 72i64))(v9);
		v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 64i64))(v9);
		(*(void(__fastcall**)(__int64*, __int64, __int64))(v11 + 56))(v10, v13, v12);
	}
	return 0i64;
}
// 1409D5A04: using guessed type wchar_t aS_1[2];

