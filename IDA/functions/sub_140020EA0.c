#include "../winhttp.h"

//----- (0000000140020EA0) ----------------------------------------------------
__int64 __fastcall sub_140020EA0(__int64 a1, int a2, unsigned int a3, unsigned int* a4)
{
	int v4; // eax
	__int64 result; // rax
	_DWORD* v8; // rcx
	unsigned int v9; // r8d
	unsigned int v10; // r8d
	unsigned int v11; // r8d
	unsigned __int64 v12; // rdx
	__int64 v13; // rcx
	unsigned __int64 v14; // r14
	unsigned __int64 v15; // rdi
	__int64 v16; // rbp
	unsigned int v17; // r8d
	unsigned int v18; // r8d
	unsigned int v19; // r8d
	__int64 v20; // rcx
	unsigned int v21; // r8d
	unsigned int v22; // r8d
	unsigned int v23; // r8d
	unsigned int v24; // r8d
	unsigned int v25; // r8d
	unsigned int v26; // r8d
	__int64 v27; // [rsp+20h] [rbp-18h]

	v4 = *(_DWORD*)(a1 + 368);
	if (v4 == 5)
		return 1i64;
	if (v4 == 6)
		return 0i64;
	v8 = *(_DWORD**)(a1 + 184);
	if (a2 != v8[38])
		return 0i64;
	if (a3 > 0x33D)
	{
		if (a3 > 0x715)
		{
			v24 = a3 - 1815;
			if (!v24)
			{
				sub_1400EA3E0(*(_QWORD*)(a1 + 72), "QueueStatus", byte_1409D0B3C, *a4, a4[1], a4[2]);
				return 0i64;
			}
			v25 = v24 - 74;
			if (!v25)
				return 0i64;
			v26 = v25 - 4;
			if (!v26)
			{
				sub_1400EA3E0(*(_QWORD*)(a1 + 72), "RealmTransferResult", byte_1409D0B7C, *a4);
				return 0i64;
			}
			if (v26 == 253)
				return sub_1400226C0(a1, (__int64)a4);
			return 1i64;
		}
		if (a3 == 1813)
		{
			sub_1400EA3E0(*(_QWORD*)(a1 + 72), "QueueFinished", &unk_1409D0167);
			return 0i64;
		}
		v21 = a3 - 874;
		if (v21)
		{
			v22 = v21 - 119;
			if (!v22)
			{
				sub_1400EA3E0(*(_QWORD*)(a1 + 72), "RealmBroadcast", byte_1409D0BDC, *((_QWORD*)a4 + 1), *a4);
				return 0i64;
			}
			v23 = v22 - 435;
			if (!v23)
				return 0i64;
			if (v23 == 342)
			{
				sub_1400EA3E0(*(_QWORD*)(a1 + 72), "PTRCharacterCopyQueued", &unk_1409D0166);
				return 0i64;
			}
			return 1i64;
		}
		if (v8)
		{
			(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v8 + 8i64))(v8);
			*(_QWORD*)(a1 + 184) = 0i64;
		}
		sub_1400168A0((__int64)v8, *a4);
		result = sub_1400481B0(a1, *(_QWORD*)(qword_140C635F0 + 5888), 0i64);
		*(_DWORD*)(a1 + 368) = 6;
	}
	else
	{
		if (a3 == 829)
			return sub_1400225E0(a1, (__int64)a4);
		if (a3 > 0xE7)
		{
			v17 = a3 - 278;
			if (!v17)
				return sub_140023230(a1, a4);
			v18 = v17 - 1;
			if (!v18)
				return sub_140021540(a1, (__int64*)a4);
			v19 = v18 - 52;
			if (!v19)
			{
				if (v4 == 3)
					return sub_140022190(a1, a4);
				else
					return 0i64;
			}
			if (v19 == 23)
			{
				if (v4 == 4)
				{
					v20 = *(_QWORD*)(a1 + 72);
					*(_DWORD*)(a1 + 368) = 0;
					sub_1400EA3E0(v20, "CharacterSelectFail", byte_1409D0ADC, *a4);
					return 0i64;
				}
				return 0i64;
			}
			return 1i64;
		}
		if (a3 != 231)
		{
			v9 = a3 - 54;
			if (!v9)
			{
				*(_DWORD*)(a1 + 364) = *a4;
				sub_140021D40(a1);
				sub_1400EA3E0(*(_QWORD*)(a1 + 72), "MaxCharacterLevelAchieved", byte_1409D09DC, *(unsigned int*)(a1 + 364));
				return 0i64;
			}
			v10 = v9 - 119;
			if (!v10)
				return sub_140022480(a1, a4);
			v11 = v10 - 47;
			if (!v11)
				return sub_140021FB0(a1, (__int64)a4);
			if (v11 == 10)
			{
				if (v4 == 2)
				{
					v12 = *(_QWORD*)(a1 + 504);
					if (v12 < *(_QWORD*)(a1 + 272))
					{
						if (!*a4)
							sub_1400296F0((__int64*)(a1 + 264), v12);
						if (!*(_QWORD*)(a1 + 272))
							*(_DWORD*)(a1 + 572) = 0;
						v13 = *(_QWORD*)(a1 + 72);
						*(_QWORD*)(a1 + 504) = -1i64;
						*(_DWORD*)(a1 + 368) = 0;
						sub_1400EA3E0(v13, "CharacterDelete", byte_1409D0A9C, *a4, a4[1]);
						return 0i64;
					}
				}
				return 0i64;
			}
			return 1i64;
		}
		v14 = *(_QWORD*)(a1 + 272);
		v15 = 0i64;
		if (v14)
		{
			v16 = 0i64;
			do
			{
				if (*(_QWORD*)(*(_QWORD*)(a1 + 264) + v16) == *(_QWORD*)a4)
				{
					LODWORD(v27) = a4[2];
					sub_1400EA3E0(*(_QWORD*)(a1 + 72), "CharacterDisabled", byte_1409D0BFC, v15 + 1, v27);
					*(_DWORD*)(*(_QWORD*)(a1 + 264) + v16 + 708) = a4[2];
				}
				++v15;
				v16 += 816i64;
			} while (v15 < v14);
		}
		return 0i64;
	}
	return result;
}
// 14002108D: variable 'v27' is possibly undefined
// 140021264: variable 'v8' is possibly undefined
// 1409D09DC: using guessed type _BYTE byte_1409D09DC[2];
// 1409D0A9C: using guessed type _BYTE byte_1409D0A9C[3];
// 1409D0ADC: using guessed type _BYTE byte_1409D0ADC[2];
// 1409D0B3C: using guessed type _BYTE byte_1409D0B3C[4];
// 1409D0B7C: using guessed type _BYTE byte_1409D0B7C[3];
// 1409D0BDC: using guessed type _BYTE byte_1409D0BDC[3];
// 1409D0BFC: using guessed type _BYTE byte_1409D0BFC[3];
// 140C635F0: using guessed type __int64 qword_140C635F0;

