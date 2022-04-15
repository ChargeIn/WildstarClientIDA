#include "../winhttp.h"

//----- (00000001404352D0) ----------------------------------------------------
__int64 __fastcall sub_1404352D0(__int64 a1, double a2)
{
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // r8
	__int64 v6; // r14
	unsigned __int64 v7; // r15
	__int64 v8; // rbx
	__int64 v9; // rbp
	int* v10; // rax
	int* v11; // rsi
	int* v12; // rdx
	__int64 v13; // rcx

	sub_1400E74A0(*(_QWORD*)(a1 + 96), a2);
	if (*(_DWORD*)(a1 + 40) != 4)
	{
		v3 = *(_QWORD*)(a1 + 32);
		if (v3)
		{
			while (*(_DWORD*)(v3 + 40) == 4)
			{
				v3 = *(_QWORD*)(v3 + 32);
				if (!v3)
					goto LABEL_5;
			}
		}
		else
		{
		LABEL_5:
			v4 = qword_140C63628;
			v5 = *(_QWORD*)(qword_140C63628 + 296);
			if (v5)
				sub_1407E4830(*(int**)(qword_140C63628 + 288), 0i64, 8 * v5);
			v6 = 0i64;
			*(_DWORD*)(v4 + 576) = 0;
			v7 = (unsigned int)sub_1400518A0(v4, 173, 6, 0);
			if ((dword_140C8CD58 & 0x80u) == 0)
			{
				dword_140C8CD58 |= 0x80u;
				sub_1401AD620((__int64)&unk_140C8D540, L"ZoneKit 7 StoreMusic");
			}
			sub_1401ADA40((__int64)&unk_140C8D540, v7);
			if (*(__int64*)(v4 + 296) <= 7)
			{
				do
				{
					v8 = *(_QWORD*)(v4 + 296);
					v9 = v8 + 1;
					v10 = sub_14018DB00(*(_QWORD*)(v4 + 288), v8 + 1, 8i64);
					v11 = v10;
					*(_QWORD*)&v10[2 * v8] = 0i64;
					v12 = *(int**)(v4 + 288);
					if (v12 != v10)
					{
						sub_1407DB590(v10, v12, 8i64 * *(_QWORD*)(v4 + 296));
						v13 = *(_QWORD*)(v4 + 288);
						if (v13)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
						*(_QWORD*)(v4 + 288) = v11;
					}
					*(_QWORD*)(v4 + 296) = v9;
				} while (v9 <= 7);
			}
			if ((_DWORD)v7 && v7 < *(_QWORD*)(v4 + 192))
				v6 = *(_QWORD*)(*(_QWORD*)(v4 + 184) + 8 * v7);
			*(_QWORD*)(*(_QWORD*)(v4 + 288) + 56i64) = v6;
		}
	}
	return 0i64;
}
// 140A14360: using guessed type wchar_t aZonekit7Storem[21];
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C8CD58: using guessed type int dword_140C8CD58;

