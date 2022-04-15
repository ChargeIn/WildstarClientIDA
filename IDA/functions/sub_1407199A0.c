//----- (00000001407199A0) ----------------------------------------------------
void sub_1407199A0()
{
	__int64 i; // rdi
	__int64 v1; // rbx
	__int64 v2; // rsi
	_QWORD* v3; // rbx
	__int64 v4; // rsi
	__int64 v5; // rcx
	__int64 v6; // rcx
	_QWORD* v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rcx
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rax

	if (qword_140C7F0F8)
	{
		sub_14001EA50((__int64)&unk_140C7F0E8, *(_QWORD**)(qword_140C7F0F0 + 8));
		*(_QWORD*)(qword_140C7F0F0 + 16) = qword_140C7F0F0;
		*(_QWORD*)(qword_140C7F0F0 + 8) = 0i64;
		*(_QWORD*)(qword_140C7F0F0 + 24) = qword_140C7F0F0;
		qword_140C7F0F8 = 0i64;
	}
	for (i = qword_140C7F0E0; qword_140C7F0E0; i = qword_140C7F0E0)
	{
		*(_DWORD*)(i + 700) = 0;
		v1 = i + 24;
		v2 = 6i64;
		do
		{
			if (*(_QWORD*)(v1 + 16))
				sub_140195D70(v1);
			v1 += 72i64;
			--v2;
		} while (v2);
		if (*(_QWORD*)(i + 472))
			sub_140195D70(i + 456);
		v3 = (_QWORD*)(i + 584);
		v4 = 6i64;
		do
		{
			if (*v3)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 56i64))(*v3);
				(*(void(__fastcall**)(_QWORD, __int64, __int64))(*(_QWORD*)*v3 + 72i64))(*v3, 500i64, 2i64);
				if (*v3)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 8i64))(*v3);
					*v3 = 0i64;
				}
			}
			++v3;
			--v4;
		} while (v4);
		v5 = *(_QWORD*)(i + 640);
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 72i64))(v5);
		v6 = *(_QWORD*)(i + 640);
		if (v6)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			*(_QWORD*)(i + 640) = 0i64;
		}
		v7 = *(_QWORD**)(i + 16);
		if (v7)
		{
			v8 = v7[26];
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				v7[26] = 0i64;
			}
			if (*((_DWORD*)v7 + 50) && !*(_DWORD*)((*(__int64(__fastcall**)(_QWORD*))(*v7 + 16i64))(v7) + 12) && !v7[18])
				(*(void(__fastcall**)(_QWORD*, _QWORD))(*v7 + 80i64))(v7, 0i64);
		}
		v9 = *(_QWORD*)(i + 648);
		*(_QWORD*)(i + 16) = 0i64;
		if (v9)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 56i64))(v9);
			(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(i + 648) + 72i64))(
				*(_QWORD*)(i + 648),
				500i64,
				2i64);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)i + 8i64))(i);
		}
		v10 = *(_QWORD**)(i + 704);
		if (v10)
			*v10 = *(_QWORD*)(i + 712);
		v11 = *(_QWORD*)(i + 712);
		if (v11)
			*(_QWORD*)(v11 + 704) = *(_QWORD*)(i + 704);
		v12 = *(_QWORD*)i;
		*(_QWORD*)(i + 704) = 0i64;
		*(_QWORD*)(i + 712) = 0i64;
		(*(void(__fastcall**)(__int64))(v12 + 8))(i);
	}
}
// 140C7F0E0: using guessed type __int64 qword_140C7F0E0;
// 140C7F0F0: using guessed type __int64 qword_140C7F0F0;
// 140C7F0F8: using guessed type __int64 qword_140C7F0F8;

