//----- (00000001400E1580) ----------------------------------------------------
void __fastcall sub_1400E1580(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rdi
	__int64 v5; // rsi
	__int64 v6; // rdi
	__int64 v7; // rsi
	__int64 v8; // rcx
	unsigned int* v9; // rdi
	__int64 v10; // rdx
	int v11; // r8d
	__int64 v12; // rcx
	__int64 v13; // rcx
	char v14; // [rsp+30h] [rbp+8h] BYREF

	*(_BYTE*)(a1 + 8) = 0;
	*(_DWORD*)(a1 + 12) = 0;
	v2 = *(_QWORD*)(a1 + 16);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	v3 = *(_QWORD*)(a1 + 24);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	v4 = (_QWORD*)(a1 + 32);
	v5 = 4i64;
	do
	{
		if (*v4)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v4 + 8i64))(*v4);
			*v4 = 0i64;
		}
		++v4;
		--v5;
	} while (v5);
	v6 = *(_QWORD*)(a1 + 80);
	v7 = *(_QWORD*)(a1 + 72);
	if (v7 != v6)
	{
		sub_1407DB590(*(int**)(a1 + 72), *(int**)(a1 + 80), 1ui64);
		*(_QWORD*)(a1 + 80) += v7 - v6;
	}
	v8 = qword_140C63678;
	v9 = (unsigned int*)(a1 + 96);
	if ((char*)(a1 + 96) != &v14)
	{
		sub_1401429A0(qword_140C63678, *v9);
		v8 = qword_140C63678;
		*v9 = 0;
		if (*(_QWORD*)(v8 + 48))
		{
			v10 = *(_QWORD*)(v8 + 40);
			v11 = *(_DWORD*)(v10 + 16);
			if ((unsigned int)(v11 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v10 + 16) = v11 + 1;
		}
	}
	sub_1401429A0(v8, 0);
	v12 = *(_QWORD*)(a1 + 104);
	if (v12)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		*(_QWORD*)(a1 + 104) = 0i64;
	}
	*(_DWORD*)(a1 + 112) = 0;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	v13 = *(_QWORD*)(a1 + 136);
	if (v13)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
		*(_QWORD*)(a1 + 136) = 0i64;
	}
}
// 140C63678: using guessed type __int64 qword_140C63678;

