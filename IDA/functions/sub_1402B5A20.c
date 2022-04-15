#include "../winhttp.h"

//----- (00000001402B5A20) ----------------------------------------------------
__int64 __fastcall sub_1402B5A20(int* a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64* a5)
{
	unsigned __int64 v5; // rax
	int v6; // esi
	int* v10; // rcx
	int* v11; // r8
	bool v12; // zf
	unsigned int v14; // eax
	int v15; // eax
	int v16; // eax
	int v17; // r9d
	__int64 v18; // r10
	__int64 v19; // r11
	int v20; // r8d
	__int64* v21; // rcx
	__int64 v22; // rax
	__int64 v23; // r8
	unsigned __int64 v24; // r8
	__int64* v25; // rax
	__int64 v26; // rax
	__int64 v27; // r11
	unsigned __int64 v28; // r10
	int* v29; // rcx
	unsigned int v30; // eax
	unsigned __int64 v31; // [rsp+20h] [rbp-50h] BYREF
	unsigned __int64 v32; // [rsp+28h] [rbp-48h] BYREF
	__int64 v33; // [rsp+30h] [rbp-40h] BYREF
	__int64 v34; // [rsp+38h] [rbp-38h] BYREF
	__int64 v35; // [rsp+40h] [rbp-30h] BYREF
	__int64 v36; // [rsp+48h] [rbp-28h]
	__int64 v37; // [rsp+50h] [rbp-20h]
	__int64 v38; // [rsp+58h] [rbp-18h]

	v5 = *((_QWORD*)a1 + 3);
	v6 = 0;
	if (v5 > 1 && (v5 != 6 || a1[13] != 3 || (a1[10] & 4) == 0))
		v6 = 0x10000;
	v35 = 0i64;
	v36 = 0i64;
	v37 = 0i64;
	v38 = 0i64;
	if ((v6 & 0x10000) == 0)
	{
		switch (a1[12])
		{
		case 2:
			LODWORD(v36) = 116;
			goto LABEL_39;
		case 10:
			LODWORD(v36) = 113;
			goto LABEL_39;
		case 11:
			LODWORD(v36) = 36;
			goto LABEL_39;
		case 13:
			LODWORD(v36) = 110;
			goto LABEL_39;
		case 16:
			LODWORD(v36) = 115;
			goto LABEL_39;
		case 28:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B621B8, 0x20ui64);
			break;
		case 34:
			LODWORD(v36) = 112;
			goto LABEL_39;
		case 35:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B62318, 0x20ui64);
			break;
		case 41:
			LODWORD(v36) = 114;
			goto LABEL_39;
		case 49:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B622D8, 0x20ui64);
			break;
		case 54:
			LODWORD(v36) = 111;
		LABEL_39:
			v35 = 0x400000020i64;
			break;
		case 56:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B62238, 0x20ui64);
			break;
		case 61:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B620B8, 0x20ui64);
			break;
		case 65:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B622B8, 0x20ui64);
			break;
		case 68:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B62138, 0x20ui64);
			break;
		case 69:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B620D8, 0x20ui64);
			break;
		case 71:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B62158, 0x20ui64);
			break;
		case 74:
			v10 = (int*)&unk_140B62198;
			v11 = (int*)&unk_140B622F8;
			goto LABEL_18;
		case 77:
			v10 = (int*)&unk_140B62118;
			v11 = (int*)&unk_140B62178;
		LABEL_18:
			if ((a1[11] & 7) == 2)
				v11 = v10;
			sub_1407E15B8((int*)&v35, 0x20ui64, v11, 0x20ui64);
			break;
		case 80:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B62078, 0x20ui64);
			break;
		case 81:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B621F8, 0x20ui64);
			break;
		case 83:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B62298, 0x20ui64);
			break;
		case 84:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B621D8, 0x20ui64);
			break;
		case 85:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B620F8, 0x20ui64);
			break;
		case 86:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B62098, 0x20ui64);
			break;
		case 87:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B62218, 0x20ui64);
			break;
		case 88:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B62258, 0x20ui64);
			break;
		case 115:
			sub_1407E15B8((int*)&v35, 0x20ui64, dword_140B62338, 0x20ui64);
			break;
		default:
			break;
		}
	}
	v12 = (_DWORD)v35 == 0;
	*a5 = 128i64;
	if (v12)
		*a5 = 148i64;
	if (!a3)
		return 0i64;
	if (a4 < *a5)
		return 2147942522i64;
	*(_DWORD*)a3 = 542327876;
	sub_1407E4830((int*)(a3 + 4), 0i64, 0x7Cui64);
	*(_DWORD*)(a3 + 4) = 124;
	*(_DWORD*)(a3 + 8) = 4103;
	*(_DWORD*)(a3 + 108) = 4096;
	if (*((_QWORD*)a1 + 4))
	{
		*(_DWORD*)(a3 + 8) = 135175;
		if (*((_QWORD*)a1 + 4) > 0xFFFFFFFFui64)
			return 2147942487i64;
		v14 = a1[8];
		*(_DWORD*)(a3 + 28) = v14;
		if (v14 > 1)
			*(_DWORD*)(a3 + 108) = 4198408;
	}
	switch (a1[13])
	{
	case 2:
		if (*(_QWORD*)a1 > 0xFFFFFFFFui64)
			return 2147942487i64;
		v16 = *a1;
		*(_DWORD*)(a3 + 24) = 1;
		*(_DWORD*)(a3 + 12) = 1;
		*(_DWORD*)(a3 + 16) = v16;
		break;
	case 3:
		if (*((_QWORD*)a1 + 1) > 0xFFFFFFFFui64 || *(_QWORD*)a1 > 0xFFFFFFFFui64)
			return 2147942487i64;
		*(_DWORD*)(a3 + 12) = a1[2];
		v15 = *a1;
		*(_DWORD*)(a3 + 24) = 1;
		*(_DWORD*)(a3 + 16) = v15;
		if ((a1[10] & 4) != 0)
		{
			*(_DWORD*)(a3 + 108) |= 8u;
			*(_DWORD*)(a3 + 112) |= 0xFE00u;
		}
		break;
	case 4:
		if (*((_QWORD*)a1 + 1) > 0xFFFFFFFFui64
			|| *(_QWORD*)a1 > 0xFFFFFFFFui64
			|| *((_QWORD*)a1 + 2) > 0xFFFFFFFFui64)
		{
			return 2147942487i64;
		}
		*(_DWORD*)(a3 + 8) |= 0x800000u;
		*(_DWORD*)(a3 + 112) |= 0x200000u;
		*(_DWORD*)(a3 + 12) = a1[2];
		*(_DWORD*)(a3 + 16) = *a1;
		*(_DWORD*)(a3 + 24) = a1[4];
		break;
	default:
		return 2147500037i64;
	}
	v17 = a1[12];
	v18 = *((_QWORD*)a1 + 1);
	v19 = *(_QWORD*)a1;
	if (v17 < 70 || v17 > 84 && (unsigned int)(v17 - 94) > 5)
	{
		if ((unsigned int)(v17 - 68) > 1)
		{
			v26 = sub_1402B2300(v17);
			v24 = (unsigned __int64)(v27 * v26 + 7) >> 3;
		}
		else
		{
			v24 = 4 * ((unsigned __int64)(v19 + 1) >> 1);
		}
	}
	else
	{
		if ((unsigned int)(v17 - 70) <= 2 || (v20 = 16, (unsigned int)(v17 - 79) <= 2))
			v20 = 8;
		v21 = (__int64*)&v32;
		v32 = (unsigned __int64)(v19 + 3) >> 2;
		v22 = v20;
		if (v32 <= 1)
			v21 = &v34;
		v34 = 1i64;
		v31 = (unsigned __int64)(v18 + 3) >> 2;
		v23 = *v21;
		v33 = 1i64;
		v24 = v22 * v23;
		v25 = (__int64*)&v31;
		if (v31 <= 1)
			v25 = &v33;
		v18 = *v25;
	}
	v28 = v24 * v18;
	if (v28 <= 0xFFFFFFFF && v24 <= 0xFFFFFFFF)
	{
		if ((unsigned int)(v17 - 70) <= 0xE || (unsigned int)(v17 - 94) <= 5)
		{
			*(_DWORD*)(a3 + 8) |= 0x80000u;
			*(_DWORD*)(a3 + 20) = v28;
		}
		else
		{
			*(_DWORD*)(a3 + 8) |= 8u;
			*(_DWORD*)(a3 + 20) = v24;
		}
		v29 = (int*)(a3 + 76);
		if ((_DWORD)v35)
		{
			sub_1407E15B8(v29, 0x20ui64, (int*)&v35, 0x20ui64);
		}
		else
		{
			sub_1407E15B8(v29, 0x20ui64, dword_140B62278, 0x20ui64);
			*(_QWORD*)(a3 + 128) = 0i64;
			*(_QWORD*)(a3 + 136) = 0i64;
			*(_DWORD*)(a3 + 144) = 0;
			*(_DWORD*)(a3 + 128) = a1[12];
			*(_DWORD*)(a3 + 132) = a1[13];
			if (*((_QWORD*)a1 + 3) > 0xFFFFFFFFui64)
				return 2147942487i64;
			v30 = a1[10] & 0xFFFFFFFB;
			*(_DWORD*)(a3 + 136) = v30;
			if ((a1[10] & 4) != 0)
			{
				*(_DWORD*)(a3 + 136) = v30 | 4;
				*(_DWORD*)(a3 + 140) = *((_QWORD*)a1 + 3) / 6ui64;
			}
			else
			{
				*(_DWORD*)(a3 + 140) = a1[6];
			}
		}
		return 0i64;
	}
	return 2147500037i64;
}
// 1402B5A79: conditional instruction was optimized away because esi.4 is in (==0|==10000)
// 1402B602D: conditional instruction was optimized away because esi.4 is in (==0|==10000)
// 1402B5F53: variable 'v27' is possibly undefined
// 1402B5F5F: variable 'v18' is possibly undefined
// 1402B5F75: variable 'v17' is possibly undefined
// 140B62078: using guessed type int dword_140B62078[8];
// 140B62098: using guessed type int dword_140B62098[8];
// 140B620B8: using guessed type int dword_140B620B8[8];
// 140B620D8: using guessed type int dword_140B620D8[8];
// 140B620F8: using guessed type int dword_140B620F8[8];
// 140B62138: using guessed type int dword_140B62138[8];
// 140B62158: using guessed type int dword_140B62158[8];
// 140B621B8: using guessed type int dword_140B621B8[8];
// 140B621D8: using guessed type int dword_140B621D8[8];
// 140B621F8: using guessed type int dword_140B621F8[8];
// 140B62218: using guessed type int dword_140B62218[8];
// 140B62238: using guessed type int dword_140B62238[8];
// 140B62258: using guessed type int dword_140B62258[8];
// 140B62278: using guessed type int dword_140B62278[8];
// 140B62298: using guessed type int dword_140B62298[8];
// 140B622B8: using guessed type int dword_140B622B8[8];
// 140B622D8: using guessed type int dword_140B622D8[8];
// 140B62318: using guessed type int dword_140B62318[8];
// 140B62338: using guessed type int dword_140B62338[10];

