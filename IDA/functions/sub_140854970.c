#include "../winhttp.h"

//----- (0000000140854970) ----------------------------------------------------
__int64 __fastcall sub_140854970(
	_QWORD* a1,
	__int64 a2,
	unsigned int a3,
	unsigned int a4,
	float a5,
	unsigned __int64 a6,
	__int64 a7)
{
	unsigned int v9; // esi
	__int64 result; // rax
	__int64 v11; // rax
	char v12; // [rsp+20h] [rbp-48h]
	int v13; // [rsp+30h] [rbp-38h] BYREF
	unsigned __int64 v14; // [rsp+38h] [rbp-30h]
	char v15; // [rsp+40h] [rbp-28h]
	__int64 v16; // [rsp+48h] [rbp-20h]
	float v17; // [rsp+50h] [rbp-18h]

	v9 = 1;
	switch (a3)
	{
	case 0u:
	case 2u:
	case 3u:
	case 4u:
	case 0xFu:
	case 0x10u:
	case 0x11u:
	case 0x12u:
	case 0x13u:
	case 0x16u:
	case 0x17u:
	case 0x1Du:
	case 0x1Eu:
	case 0x20u:
	case 0x21u:
	case 0x22u:
	case 0x23u:
	case 0x24u:
		sub_1408364E0(qword_140C61BB0, a2, a6, a4);
		(*(void(__fastcall**)(_QWORD*, _QWORD, _QWORD, unsigned __int64, __int64))(*a1 + 176i64))(a1, a3, *a1, a6, a7);
		return 1i64;
	case 6u:
		goto LABEL_16;
	case 8u:
		if ((*((_BYTE*)a1 + 90) & 0x40) == 0 && a1[8])
			goto LABEL_16;
		v14 = a6;
		v17 = a5;
		v16 = a7;
		v11 = *a1;
		v13 = 8;
		v15 = 0;
		(*(void(__fastcall**)(_QWORD*, int*))(v11 + 168))(a1, &v13);
		result = 1i64;
		break;
	case 9u:
		if ((*((_BYTE*)a1 + 90) & 8) == 0 && a1[8])
			goto LABEL_16;
		v12 = 1;
		(*(void(__fastcall**)(_QWORD*, _QWORD, unsigned __int64, __int64, char))(*a1 + 424i64))(
			a1,
			(unsigned int)(int)a5,
			a6,
			a7,
			v12);
		result = 1i64;
		break;
	case 0xAu:
	case 0xBu:
	case 0xCu:
	case 0xDu:
	case 0xEu:
	case 0x14u:
	case 0x15u:
	case 0x25u:
	case 0x26u:
	case 0x41u:
	case 0x42u:
	case 0x43u:
	case 0x44u:
		(*(void(__fastcall**)(_QWORD*, _QWORD, _QWORD, unsigned __int64, __int64))(*a1 + 560i64))(a1, *a1, a3, a6, a7);
		return 1i64;
	case 0x18u:
		(*(void(__fastcall**)(_QWORD*, bool, __int64, unsigned __int64, __int64))(*a1 + 216i64))(
			a1,
			a5 != 0.0,
			1i64,
			a6,
			a7);
		return 1i64;
	case 0x19u:
		(*(void(__fastcall**)(_QWORD*, _QWORD, __int64, unsigned __int64, __int64))(*a1 + 216i64))(
			a1,
			2 * (unsigned int)(a5 != 0.0),
			2i64,
			a6,
			a7);
		return 1i64;
	case 0x1Au:
		(*(void(__fastcall**)(_QWORD*, _QWORD, __int64, unsigned __int64, __int64))(*a1 + 216i64))(
			a1,
			4 * (unsigned int)(a5 != 0.0),
			4i64,
			a6,
			a7);
		return 1i64;
	case 0x1Bu:
		(*(void(__fastcall**)(_QWORD*, _QWORD, __int64, unsigned __int64, __int64))(*a1 + 216i64))(
			a1,
			8 * (unsigned int)(a5 != 0.0),
			8i64,
			a6,
			a7);
		return 1i64;
	case 0x1Cu:
		(*(void(__fastcall**)(_QWORD*, _QWORD, __int64, unsigned __int64, __int64))(*a1 + 216i64))(
			a1,
			16 * (unsigned int)(a5 != 0.0),
			16i64,
			a6,
			a7);
		return 1i64;
	default:
		v9 = 2;
	LABEL_16:
		result = v9;
		break;
	}
	return result;
}
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

