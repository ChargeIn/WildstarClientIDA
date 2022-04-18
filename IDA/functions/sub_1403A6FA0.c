#include "../winhttp.h"

//----- (00000001403A6FA0) ----------------------------------------------------
__int64 __fastcall sub_1403A6FA0(__int64 a1, unsigned int* a2)
{
	int* v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	int v10; // r8d
	int v11; // edx
	__int64 v12; // rax
	__int16* v13; // r8
	int v14; // edx
	__int16* v15; // rax
	__int64 v16; // rdi
	__int64 v17; // rcx

	v4 = (int*)0x140000000i64;
	switch (*a2)
	{
	case 0u:
	case 1u:
	case 2u:
	case 4u:
	case 5u:
	case 0xAu:
	case 0xCu:
	case 0xDu:
	case 0xEu:
	case 0xFu:
	case 0x10u:
	case 0x11u:
		v14 = 347861;
		goto LABEL_23;
	case 3u:
		v5 = *(_QWORD*)(a1 + 26392);
		if (!v5)
			return 0i64;
		*(_DWORD*)(v5 + 16) = 1;
		break;
	case 6u:
		v6 = *(_QWORD*)(a1 + 26392);
		if (!v6)
			return 0i64;
		*(_DWORD*)(v6 + 4) = 1;
		break;
	case 7u:
		v7 = *(_QWORD*)(a1 + 26392);
		if (!v7)
			return 0i64;
		*(_DWORD*)(v7 + 4) = 0;
		break;
	case 8u:
		v8 = *(_QWORD*)(a1 + 26392);
		if (!v8)
			return 0i64;
		*(_DWORD*)(v8 + 12) = 1;
		break;
	case 9u:
		v9 = *(_QWORD*)(a1 + 26392);
		if (!v9)
			return 0i64;
		*(_DWORD*)(v9 + 12) = 0;
		break;
	case 0xBu:
		v4 = *(int**)(a1 + 26392);
		if (v4)
		{
			v10 = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
			if (v10 == *v4)
			{
				v11 = v4[2];
			}
			else
			{
				v11 = 0;
				if (v10 == v4[2])
					v11 = *v4;
			}
			v12 = sub_1403D90D0(a1, v11);
			if (v12)
			{
				v13 = &word_140B7B704;
				if (*(_QWORD*)(v12 + 16))
					v13 = *(__int16**)(v12 + 16);
				sub_1405E2530(qword_140C65898 + 26680, (_QWORD*)(v12 + 416), (__int64)v13);
			}
		}
		v14 = 347851;
	LABEL_23:
		v15 = sub_14034BDD0((__int64)v4, v14);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v15, 0, 0i64);
		break;
	default:
		break;
	}
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "P2PTradeResult", L"i", *a2);
	if (a2[1])
	{
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "P2PCancelTrade", L"i", *a2);
		v16 = *(_QWORD*)(a1 + 26392);
		if (v16)
		{
			v17 = *(_QWORD*)(v16 + 24);
			if (v17)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
			sub_14018B900(v16, 0);
		}
		*(_QWORD*)(a1 + 26392) = 0i64;
	}
	return 0i64;
}
// 1403A70EB: variable 'v4' is possibly undefined
// 1409EE9D4: using guessed type wchar_t aI_4[2];
// 1409EE9E4: using guessed type wchar_t aI_5[2];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

