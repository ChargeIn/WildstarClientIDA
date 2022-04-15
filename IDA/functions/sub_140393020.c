//----- (0000000140393020) ----------------------------------------------------
void __fastcall sub_140393020(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // r8
	unsigned __int64 v5; // rdx
	unsigned __int64 v6; // rcx
	__int16 v7; // dx
	__int64 v8; // rbx
	__int64 v9; // rax
	unsigned __int64 v10; // rcx
	__int64 v11; // rbx
	int v12; // eax
	__int64 v13; // rcx
	int* v14; // rsi
	unsigned __int64 v15; // rbx
	int* v16; // rax

	if (*(_QWORD*)(a1 + 88))
	{
		v2 = **(_QWORD**)(a1 + 24);
		if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 68i64) > 0xFFFFu)
		{
			v8 = (*(__int64 (**)(void))(v2 + 24))();
			v9 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 88) + 56i64))(
				*(_QWORD*)(a1 + 88),
				0i64,
				0i64,
				2i64);
			v4 = v9;
			if (!v9)
				goto LABEL_12;
			v5 = *(_QWORD*)(a1 + 32);
			v10 = 0i64;
			if (*(_DWORD*)(v5 + 64))
			{
				v11 = v8 - v9;
				do
				{
					v12 = *(_DWORD*)(v11 + v4);
					++v10;
					v4 += 4i64;
					*(_DWORD*)(v4 - 4) = v12;
					v5 = *(unsigned int*)(*(_QWORD*)(a1 + 32) + 64i64);
				} while (v10 < v5);
			}
		}
		else
		{
			v3 = (*(__int64 (**)(void))(v2 + 24))();
			v4 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 88) + 56i64))(
				*(_QWORD*)(a1 + 88),
				0i64,
				0i64,
				2i64);
			if (!v4)
				goto LABEL_12;
			v5 = *(_QWORD*)(a1 + 32);
			v6 = 0i64;
			if (*(_DWORD*)(v5 + 64))
			{
				do
				{
					v7 = *(_WORD*)(v3 + 4 * v6++);
					*(_WORD*)(v4 + 2 * v6 - 2) = v7;
					v5 = *(unsigned int*)(*(_QWORD*)(a1 + 32) + 64i64);
				} while (v6 < v5);
			}
		}
		(*(void(__fastcall**)(_QWORD, unsigned __int64, __int64))(**(_QWORD**)(a1 + 88) + 64i64))(
			*(_QWORD*)(a1 + 88),
			v5,
			v4);
	}
LABEL_12:
	v13 = *(_QWORD*)(a1 + 96);
	if (v13)
	{
		v14 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)v13 + 56i64))(
			v13,
			0i64,
			0i64,
			2i64);
		if (v14)
		{
			v15 = 72i64 * *(unsigned int*)(*(_QWORD*)(a1 + 32) + 68i64);
			v16 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 32i64))(*(_QWORD*)(a1 + 24));
			sub_1407DB590(v14, v16, v15);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 64i64))(*(_QWORD*)(a1 + 96));
		}
	}
}

