#include "../winhttp.h"

//----- (0000000140408580) ----------------------------------------------------
void __fastcall sub_140408580(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rsi
	__int64 v5; // rbx
	__int64 v6; // rcx
	unsigned __int64 v7; // rsi
	__int64 v8; // rbx
	__int64 v9; // rcx
	unsigned __int64 v10; // r15
	__int64 v11; // rsi
	unsigned __int64 i; // rbp
	unsigned __int64 v13; // r14
	__int64 v14; // rbx
	__int64 v15; // rcx
	__int64 v16; // rsi
	unsigned __int64 v17; // rbp
	__int64 v18; // rbx
	__int64 v19; // rcx
	__int64 v20[9]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v21; // [rsp+78h] [rbp+10h] BYREF
	__int64 v22; // [rsp+80h] [rbp+18h] BYREF
	int* v23; // [rsp+88h] [rbp+20h] BYREF

	if (*(_QWORD*)(a2 + 128) != *(_QWORD*)(a2 + 136))
	{
		sub_1400ECDF0(*(_QWORD*)(qword_140C65898 + 29504), *(int**)(a2 + 128));
		v21 = *(_QWORD*)(a2 + 128);
		v4 = (*(__int64(__fastcall**)(__int64*))(a1 + 40))(&v21);
		v5 = *(_QWORD*)(a1 + 32) + 8 * (v4 % *(_QWORD*)(a1 + 24));
		if (*(_QWORD*)v5)
		{
			while (v4 != **(_QWORD**)v5
				|| !(*(unsigned int(__fastcall**)(__int64*, __int64))(a1 + 48))(&v21, *(_QWORD*)v5 + 16i64))
			{
				v5 = *(_QWORD*)v5 + 8i64;
				if (!*(_QWORD*)v5)
					goto LABEL_8;
			}
			v6 = *(_QWORD*)v5;
			*(_QWORD*)v5 = *(_QWORD*)(*(_QWORD*)v5 + 8i64);
			sub_14018B900(v6, 0);
			--* (_QWORD*)(a1 + 16);
		}
	}
LABEL_8:
	if (*(_QWORD*)(a2 + 160) != *(_QWORD*)(a2 + 168))
	{
		sub_1400ECDF0(*(_QWORD*)(qword_140C65898 + 29504), *(int**)(a2 + 160));
		v22 = *(_QWORD*)(a2 + 160);
		v7 = (*(__int64(__fastcall**)(__int64*))(a1 + 40))(&v22);
		v8 = *(_QWORD*)(a1 + 32) + 8 * (v7 % *(_QWORD*)(a1 + 24));
		if (*(_QWORD*)v8)
		{
			while (v7 != **(_QWORD**)v8
				|| !(*(unsigned int(__fastcall**)(__int64*, __int64))(a1 + 48))(&v22, *(_QWORD*)v8 + 16i64))
			{
				v8 = *(_QWORD*)v8 + 8i64;
				if (!*(_QWORD*)v8)
					goto LABEL_15;
			}
			v9 = *(_QWORD*)v8;
			*(_QWORD*)v8 = *(_QWORD*)(*(_QWORD*)v8 + 8i64);
			sub_14018B900(v9, 0);
			--* (_QWORD*)(a1 + 16);
		}
	}
LABEL_15:
	v10 = 0i64;
	v11 = a2 + 64;
	for (i = 0i64; i < 2; ++i)
	{
		if (v11 == 8)
			break;
		if (*(_QWORD*)v11 != *(_QWORD*)(v11 + 8))
		{
			sub_1400ECDF0(*(_QWORD*)(qword_140C65898 + 29504), *(int**)v11);
			v23 = *(int**)v11;
			v13 = (*(__int64(__fastcall**)(int**))(a1 + 40))(&v23);
			v14 = *(_QWORD*)(a1 + 32) + 8 * (v13 % *(_QWORD*)(a1 + 24));
			if (*(_QWORD*)v14)
			{
				while (v13 != **(_QWORD**)v14
					|| !(*(unsigned int(__fastcall**)(int**, __int64))(a1 + 48))(&v23, *(_QWORD*)v14 + 16i64))
				{
					v14 = *(_QWORD*)v14 + 8i64;
					if (!*(_QWORD*)v14)
						goto LABEL_24;
				}
				v15 = *(_QWORD*)v14;
				*(_QWORD*)v14 = *(_QWORD*)(*(_QWORD*)v14 + 8i64);
				sub_14018B900(v15, 0);
				--* (_QWORD*)(a1 + 16);
			}
		}
	LABEL_24:
		v11 += 32i64;
	}
	v16 = a2 + 192;
	do
	{
		if (v16 == 8)
			break;
		if (*(_QWORD*)v16 != *(_QWORD*)(v16 + 8))
		{
			sub_1400ECDF0(*(_QWORD*)(qword_140C65898 + 29504), *(int**)v16);
			v20[0] = *(_QWORD*)v16;
			v17 = (*(__int64(__fastcall**)(__int64*))(a1 + 40))(v20);
			v18 = *(_QWORD*)(a1 + 32) + 8 * (v17 % *(_QWORD*)(a1 + 24));
			if (*(_QWORD*)v18)
			{
				while (v17 != **(_QWORD**)v18
					|| !(*(unsigned int(__fastcall**)(__int64*, __int64))(a1 + 48))(v20, *(_QWORD*)v18 + 16i64))
				{
					v18 = *(_QWORD*)v18 + 8i64;
					if (!*(_QWORD*)v18)
						goto LABEL_34;
				}
				v19 = *(_QWORD*)v18;
				*(_QWORD*)v18 = *(_QWORD*)(*(_QWORD*)v18 + 8i64);
				sub_14018B900(v19, 0);
				--* (_QWORD*)(a1 + 16);
			}
		}
	LABEL_34:
		++v10;
		v16 += 32i64;
	} while (v10 < 2);
}
// 140C65898: using guessed type __int64 qword_140C65898;

