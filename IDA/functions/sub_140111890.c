//----- (0000000140111890) ----------------------------------------------------
__int64 __fastcall sub_140111890(__int64 a1)
{
	unsigned __int64 v2; // rdi
	unsigned __int64 v3; // rsi
	unsigned __int64 v4; // rcx
	unsigned __int64 v5; // rdx
	unsigned __int64* v6; // rax

	v2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 72i64))(*(_QWORD*)(a1 + 1080));
	if ((*(_BYTE*)(a1 + 664) & 1) != 0)
	{
		v2 = *(_QWORD*)(a1 + 1024);
		sub_14010FFB0(a1);
		v3 = *(_QWORD*)(a1 + 1248);
		if (!*(_BYTE*)(a1 + 1064))
		{
			if ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 72i64))(*(_QWORD*)(a1 + 1080)))
			{
				v4 = 0i64;
				if (v3)
				{
					v5 = *(_QWORD*)(a1 + 1024);
					v6 = *(unsigned __int64**)(a1 + 1240);
					do
					{
						if (v5 >= *v6 && v5 < v6[1])
							break;
						++v4;
						v6 += 3;
					} while (v4 < v3);
				}
				*(_BYTE*)(a1 + 1064) = 1;
				if (v4 >= v3)
				{
					v2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 72i64))(*(_QWORD*)(a1 + 1080));
				LABEL_13:
					*(_BYTE*)(a1 + 1064) = 0;
					goto LABEL_14;
				}
				v2 = *(_QWORD*)(*(_QWORD*)(a1 + 1240) + 24 * v4 + 8);
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080));
				if (*(_WORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080))
					+ 2 * v2
					- 2) == 10)
				{
					--v2;
					goto LABEL_13;
				}
			}
		}
	}
LABEL_14:
	sub_1401115F0(a1, v2);
	return 0i64;
}

