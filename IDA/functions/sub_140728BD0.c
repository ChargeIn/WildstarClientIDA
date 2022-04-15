#include "../winhttp.h"

//----- (0000000140728BD0) ----------------------------------------------------
__int64 __fastcall sub_140728BD0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
	__int64 v9; // rdx
	int v10; // r8d
	__int64 v11; // rcx
	__int64 v12; // rdx
	int v13; // r8d
	__int64 v14; // rcx
	_QWORD* v15; // rbx
	int v16; // ecx

	if (!(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1424) + 56i64))(*(_QWORD*)(a1 + 1424))
		&& !*(_BYTE*)(*(_QWORD*)(a1 + 1424) + 3360i64))
	{
		return 0i64;
	}
	switch (a3)
	{
	case 0x100u:
		if (a4 != 27)
			break;
		sub_1400EA3E0(*(_QWORD*)(a1 + 1424), "EscapeKeyPressed_Gacha", byte_1409D1577);
		sub_140729730(a1);
		return 0i64;
	case 0x200u:
		*(_DWORD*)(a1 + 1328) = (__int16)a5;
		*(_DWORD*)(a1 + 1332) = SWORD1(a5);
		sub_14072C180((_QWORD*)a1, 0);
		return 0i64;
	case 0x201u:
		goto LABEL_8;
	case 0x202u:
		*(_DWORD*)(a1 + 1328) = (__int16)a5;
		*(_DWORD*)(a1 + 1332) = SWORD1(a5);
		sub_14072C180((_QWORD*)a1, 0);
		sub_14072A600(a1, v12, v13);
		v14 = *(_QWORD*)(a1 + 1224);
		if (v14)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 72i64))(v14);
		return 0i64;
	case 0x203u:
	LABEL_8:
		*(_DWORD*)(a1 + 1328) = (__int16)a5;
		*(_DWORD*)(a1 + 1332) = SWORD1(a5);
		sub_14072C180((_QWORD*)a1, 0);
		sub_140729E50(a1, v9, v10);
		v11 = *(_QWORD*)(a1 + 1224);
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 64i64))(v11);
		return 0i64;
	}
	v15 = *(_QWORD**)(a1 + 1208);
	if (v15)
	{
		while ((*(__int64(__fastcall**)(_QWORD*, __int64, _QWORD, __int64, __int64))(*v15 + 24i64))(v15, a2, a3, a4, a5))
		{
			v15 = (_QWORD*)v15[2];
			if (!v15)
				goto LABEL_17;
		}
		return 0i64;
	}
LABEL_17:
	if (a4 != 27)
	{
		if (a3 - 255 <= 6 && (v16 = 103, _bittest(&v16, a3 - 255)) || a3 - 512 <= 0xD)
			(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65898 + 72i64))(
				qword_140C65898,
				a2,
				a3,
				a4,
				a5);
	}
	return 1i64;
}
// 140728C71: variable 'v9' is possibly undefined
// 140728C71: variable 'v10' is possibly undefined
// 140728CB4: variable 'v12' is possibly undefined
// 140728CB4: variable 'v13' is possibly undefined
// 1409D1577: using guessed type _BYTE byte_1409D1577[19];
// 140C65898: using guessed type __int64 qword_140C65898;

