#include "../winhttp.h"

//----- (0000000140003FB0) ----------------------------------------------------
__int64 __fastcall sub_140003FB0(__int64 a1, __int64 a2, int a3, unsigned int* a4)
{
	int v6; // r9d
	__int64 v7; // rcx
	__int64 result; // rax
	unsigned int i; // esi
	__int64 v10; // rcx
	__int64 v11; // rax
	int v12; // r9d
	void(__fastcall * **v13)(_QWORD); // rcx
	unsigned int v14; // [rsp+20h] [rbp-38h]
	__int64 v15; // [rsp+20h] [rbp-38h]
	int v16; // [rsp+30h] [rbp-28h] BYREF
	__int64 v17; // [rsp+38h] [rbp-20h]
	void(__fastcall * v18)(__int64); // [rsp+40h] [rbp-18h]
	__int64 v19; // [rsp+48h] [rbp-10h]

	switch (a3)
	{
	case 2406:
		result = sub_140005600(a1, (__int64)a4);
		break;
	case 2407:
		result = sub_140005730(a1, (int*)a4);
		break;
	case 2408:
		for (i = 0; i < *a4; ++i)
			sub_1400062C0(a1, (unsigned int*)(*((_QWORD*)a4 + 1) + 8i64 * i), 1);
		(**(void(__fastcall***)(__int64))qword_140C658D0)(qword_140C658D0);
		if (!qword_140C63630)
			goto LABEL_5;
		sub_140055A40();
		result = 0i64;
		break;
	case 2409:
		result = sub_1400051C0(a1, (__int64)a4);
		break;
	case 2410:
		result = sub_140004E30(a1, (__int64)a4);
		break;
	case 2411:
		result = sub_140004F60(a1, (__int64)a4);
		break;
	case 2412:
		result = sub_140005040(a1, (__int64)a4);
		break;
	case 2413:
		result = sub_140004AE0(a1, (__int64)a4);
		break;
	case 2414:
		result = sub_140005540(a1, (__int64)a4);
		break;
	case 2415:
		*(_DWORD*)(a1 + 360) = *a4;
		if (!qword_140C65898)
			goto LABEL_5;
		v11 = *(_QWORD*)(qword_140C65898 + 29504) + 4264i64;
		if (*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 4344i64))
			goto LABEL_5;
		v12 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 4320i64);
		v18 = sub_1400A8020;
		v16 = 0;
		v17 = v11;
		v19 = 0i64;
		sub_140195960(v11 + 64, 0, (__int64)&v16, v12);
		result = 0i64;
		break;
	case 2416:
		if (!qword_140C65898)
			goto LABEL_5;
		v14 = a4[1];
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "AccountOperationResults", byte_1409ECC34, *a4, v14);
		v10 = *(_QWORD*)(qword_140C65898 + 32736);
		if (!v10)
			goto LABEL_5;
		LODWORD(v15) = a4[1];
		Apollo_LUAEvent(*(_QWORD*)(v10 + 96), "AccountOperationResults", byte_1409EFD14, *a4, v15);
		result = 0i64;
		break;
	case 2417:
		result = sub_140007180(a1, a4);
		break;
	case 2418:
		result = 1i64;
		break;
	case 2419:
		sub_1400062C0(a1, a4, 0);
		result = 0i64;
		break;
	case 2420:
		sub_1400061E0(a1, a4);
		result = 0i64;
		break;
	case 2421:
		result = sub_1400049B0(a1, (__int64)a4);
		break;
	case 2422:
		result = sub_140004470((__int64*)a1, (__int64)a4);
		break;
	case 2423:
		sub_140005A90((_QWORD*)a1);
		result = 0i64;
		break;
	case 2424:
		result = sub_140005350(a1, a4);
		break;
	case 2425:
		result = sub_140004540((__int64*)a1, (__int64)a4);
		break;
	case 2426:
		*(_QWORD*)(a1 + 192) = 0i64;
		sub_140007760((__int64*)(a1 + 184), *((int**)a4 + 1), *a4);
		result = 0i64;
		break;
	case 2427:
		result = sub_140005480(0x140000000i64, a4);
		break;
	case 2428:
		result = sub_140004C40(a1, a4);
		break;
	case 2429:
		result = sub_1400047C0(a1, (unsigned __int16**)a4);
		break;
	case 2430:
		result = sub_140004650(a1, a4);
		break;
	case 2431:
		v13 = (void(__fastcall***)(_QWORD))qword_140C658D0;
		*(_BYTE*)(a1 + 520) = *(_BYTE*)a4;
		(**v13)(v13);
		result = 0i64;
		break;
	case 2432:
		v6 = *a4;
		if (*(_DWORD*)a1 != v6)
		{
			v7 = qword_140C65898;
			*(_DWORD*)a1 = v6;
			if (v7)
				Apollo_LUAEvent(*(_QWORD*)(v7 + 29504), "WalletUpdate", L"i");
		}
	LABEL_5:
		result = 0i64;
		break;
	default:
		result = 1i64;
		break;
	}
	return result;
}
// 140004247: variable 'v15' is possibly undefined
// 1409ECC34: using guessed type _BYTE byte_1409ECC34[4];
// 1409EF7E4: using guessed type wchar_t aI_42[2];
// 1409EFD14: using guessed type _BYTE byte_1409EFD14[40];
// 140C63630: using guessed type __int64 qword_140C63630;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D0: using guessed type __int64 qword_140C658D0;

