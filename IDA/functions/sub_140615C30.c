//----- (0000000140615C30) ----------------------------------------------------
__int64 __fastcall sub_140615C30(__int64 a1, __int64 a2)
{
	int v2; // esi
	int v5; // r14d
	__int64 v6; // rdi
	int* v7; // rax
	unsigned __int64 v8; // rcx
	_QWORD* v9; // rax
	__int64 v10; // rbx
	int* v11; // rax
	int* v12; // rsi
	int* v13; // rdx
	__int64 v14; // rcx

	v2 = 0;
	v5 = 0;
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 192i64))(a1);
	if (!v6)
	{
		v7 = sub_14018B280(40i64, 0);
		v5 = 1;
		v6 = (__int64)v7;
		if (v7)
		{
			*(_QWORD*)v7 = off_140B6FA98;
			v7[2] = 1;
		}
		else
		{
			v6 = 0i64;
		}
		*(_QWORD*)(v6 + 16) = a1;
		*(_DWORD*)(v6 + 24) = 0;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 200i64))(a1, v6);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		v8 = 0i64;
		v9 = (_QWORD*)(qword_140C63628 + 720);
		while (*v9 != a1)
		{
			++v8;
			++v9;
			if (v8 >= 3)
			{
				if (*(_QWORD*)(qword_140C63628 + 24) != a1)
				{
					LOBYTE(v2) = *(_QWORD*)(qword_140C63628 + 96) == a1;
					goto LABEL_11;
				}
				break;
			}
		}
		v2 = 1;
	LABEL_11:
		*(_DWORD*)(v6 + 32) = v2;
	}
	if (!*(_DWORD*)(v6 + 32) && ((*(float(__fastcall**)(__int64))(*(_QWORD*)a1 + 208i64))(a1) > *(float*)a2 || v5))
	{
		v10 = *(_QWORD*)(a2 + 16);
		v11 = sub_14018DB00(*(_QWORD*)(a2 + 8), v10 + 1, 8i64);
		v12 = v11;
		*(_QWORD*)&v11[2 * v10] = v6;
		v13 = *(int**)(a2 + 8);
		if (v13 != v11)
		{
			sub_1407DB590(v11, v13, 8i64 * *(_QWORD*)(a2 + 16));
			v14 = *(_QWORD*)(a2 + 8);
			if (v14)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
			*(_QWORD*)(a2 + 8) = v12;
		}
		*(_QWORD*)(a2 + 16) = v10 + 1;
	}
	return 0i64;
}
// 140B6FA98: using guessed type __int64 (__fastcall *off_140B6FA98[26])();
// 140C63628: using guessed type __int64 qword_140C63628;

