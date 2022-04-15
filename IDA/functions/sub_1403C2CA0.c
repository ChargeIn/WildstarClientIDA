//----- (00000001403C2CA0) ----------------------------------------------------
__int64 __fastcall sub_1403C2CA0(__int64 a1)
{
	int* v1; // r9
	int v3; // edx
	int v4; // ecx
	int v5; // ecx
	int v6; // ecx
	int v7; // ecx
	int v8; // ecx
	int v9; // ecx
	int v10; // ecx
	int v11; // ecx
	int v12; // ecx
	int v13; // ecx
	int v14; // ecx
	int v15; // ecx
	int v16; // ecx
	int v17; // ecx
	__int64 result; // rax

	v1 = (int*)qword_140C63750;
	*(_DWORD*)(a1 + 31652) = 0;
	v3 = dword_140C4E080;
	if (*v1 < dword_140C4E080)
		v3 = *v1;
	if (*((_BYTE*)&dword_140C4E090 + v3))
		*(_DWORD*)(a1 + 31652) = 1;
	*(_DWORD*)(a1 + 31656) = 0;
	v4 = dword_140C4E0C0;
	if (*v1 < dword_140C4E0C0)
		v4 = *v1;
	if (*((_BYTE*)&dword_140C4E0D0 + v4))
		*(_DWORD*)(a1 + 31656) = 1;
	v5 = dword_140C4E100;
	if (*v1 < dword_140C4E100)
		v5 = *v1;
	if (*((_BYTE*)&dword_140C4E110 + v5))
		*(_DWORD*)(a1 + 31656) |= 2u;
	v6 = dword_140C4E140;
	if (*v1 < dword_140C4E140)
		v6 = *v1;
	if (*((_BYTE*)&dword_140C4E150 + v6))
		*(_DWORD*)(a1 + 31656) |= 4u;
	v7 = dword_140C4E180;
	if (*v1 < dword_140C4E180)
		v7 = *v1;
	if (*((_BYTE*)&dword_140C4E190 + v7))
		*(_DWORD*)(a1 + 31656) |= 8u;
	v8 = dword_140C4E1C0;
	if (*v1 < dword_140C4E1C0)
		v8 = *v1;
	if (*((_BYTE*)&dword_140C4E1D0 + v8))
		*(_DWORD*)(a1 + 31656) |= 0x10u;
	v9 = dword_140C4E200;
	if (*v1 < dword_140C4E200)
		v9 = *v1;
	if (*((_BYTE*)&dword_140C4E210 + v9))
		*(_DWORD*)(a1 + 31656) |= 0x20u;
	v10 = dword_140C4E240;
	if (*v1 < dword_140C4E240)
		v10 = *v1;
	if (*((_BYTE*)&dword_140C4E250 + v10))
		*(_DWORD*)(a1 + 31656) |= 0x40u;
	v11 = dword_140C4E280;
	if (*v1 < dword_140C4E280)
		v11 = *v1;
	if (*((_BYTE*)&dword_140C4E290 + v11))
		*(_DWORD*)(a1 + 31656) |= 0x80u;
	v12 = dword_140C4E2C0;
	if (*v1 < dword_140C4E2C0)
		v12 = *v1;
	if (*((_BYTE*)&dword_140C4E2D0 + v12))
		*(_DWORD*)(a1 + 31656) |= 0x100u;
	v13 = dword_140C4E300;
	if (*v1 < dword_140C4E300)
		v13 = *v1;
	if (*((_BYTE*)&dword_140C4E310 + v13))
		*(_DWORD*)(a1 + 31656) |= 0x200u;
	v14 = dword_140C4E340;
	if (*v1 < dword_140C4E340)
		v14 = *v1;
	if (*((_BYTE*)&dword_140C4E350 + v14))
		*(_DWORD*)(a1 + 31656) |= 0x400u;
	v15 = dword_140C4E380;
	if (*v1 < dword_140C4E380)
		v15 = *v1;
	if (*((_BYTE*)&dword_140C4E390 + v15))
		*(_DWORD*)(a1 + 31656) |= 0x800u;
	v16 = dword_140C4E3C0;
	if (*v1 < dword_140C4E3C0)
		v16 = *v1;
	if (*((_BYTE*)&dword_140C4E3D0 + v16))
		*(_DWORD*)(a1 + 31656) |= 0x1000u;
	v17 = dword_140C4E400;
	if (*v1 < dword_140C4E400)
		v17 = *v1;
	result = v17;
	if (*((_BYTE*)&dword_140C4E410 + v17))
		*(_DWORD*)(a1 + 31656) |= 0x2000u;
	return result;
}
// 140C4E080: using guessed type int dword_140C4E080;
// 140C4E090: using guessed type int dword_140C4E090;
// 140C4E0C0: using guessed type int dword_140C4E0C0;
// 140C4E0D0: using guessed type int dword_140C4E0D0;
// 140C4E100: using guessed type int dword_140C4E100;
// 140C4E110: using guessed type int dword_140C4E110;
// 140C4E140: using guessed type int dword_140C4E140;
// 140C4E150: using guessed type int dword_140C4E150;
// 140C4E180: using guessed type int dword_140C4E180;
// 140C4E190: using guessed type int dword_140C4E190;
// 140C4E1C0: using guessed type int dword_140C4E1C0;
// 140C4E1D0: using guessed type int dword_140C4E1D0;
// 140C4E200: using guessed type int dword_140C4E200;
// 140C4E210: using guessed type int dword_140C4E210;
// 140C4E240: using guessed type int dword_140C4E240;
// 140C4E250: using guessed type int dword_140C4E250;
// 140C4E280: using guessed type int dword_140C4E280;
// 140C4E290: using guessed type int dword_140C4E290;
// 140C4E2C0: using guessed type int dword_140C4E2C0;
// 140C4E2D0: using guessed type int dword_140C4E2D0;
// 140C4E300: using guessed type int dword_140C4E300;
// 140C4E310: using guessed type int dword_140C4E310;
// 140C4E340: using guessed type int dword_140C4E340;
// 140C4E350: using guessed type int dword_140C4E350;
// 140C4E380: using guessed type int dword_140C4E380;
// 140C4E390: using guessed type int dword_140C4E390;
// 140C4E3C0: using guessed type int dword_140C4E3C0;
// 140C4E3D0: using guessed type int dword_140C4E3D0;
// 140C4E400: using guessed type int dword_140C4E400;
// 140C4E410: using guessed type int dword_140C4E410;
// 140C63750: using guessed type __int64 qword_140C63750;

