#include "../winhttp.h"

//----- (00000001400C5310) ----------------------------------------------------
__int64 __fastcall sub_1400C5310(__int64 a1, __int64 a2, __int64 a3, float a4, int a5)
{
	__int64 result; // rax

	*(_OWORD*)(a1 + 112) = *(_OWORD*)a2;
	*(_QWORD*)(a1 + 128) = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(a1 + 136) = *(_QWORD*)(a2 + 24);
	*(_QWORD*)(a1 + 144) = *(_QWORD*)(a2 + 32);
	*(_QWORD*)(a1 + 152) = *(_QWORD*)(a2 + 40);
	*(_DWORD*)(a1 + 160) = *(_DWORD*)(a2 + 48);
	*(_DWORD*)(a1 + 164) = *(_DWORD*)(a2 + 52);
	*(_DWORD*)(a1 + 168) = *(_DWORD*)(a2 + 56);
	*(_DWORD*)(a1 + 172) = *(_DWORD*)(a2 + 60);
	*(_DWORD*)(a1 + 176) = *(_DWORD*)(a2 + 64);
	*(_DWORD*)(a1 + 180) = *(_DWORD*)(a2 + 68);
	*(_DWORD*)(a1 + 184) = *(_DWORD*)(a2 + 72);
	*(_DWORD*)(a1 + 188) = *(_DWORD*)(a2 + 76);
	*(_DWORD*)(a1 + 192) = *(_DWORD*)(a2 + 80);
	*(_OWORD*)(a1 + 16) = *(_OWORD*)a3;
	*(_QWORD*)(a1 + 32) = *(_QWORD*)(a3 + 16);
	*(_QWORD*)(a1 + 40) = *(_QWORD*)(a3 + 24);
	*(_QWORD*)(a1 + 48) = *(_QWORD*)(a3 + 32);
	*(_QWORD*)(a1 + 56) = *(_QWORD*)(a3 + 40);
	*(_DWORD*)(a1 + 64) = *(_DWORD*)(a3 + 48);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(a3 + 52);
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(a3 + 56);
	*(_DWORD*)(a1 + 76) = *(_DWORD*)(a3 + 60);
	*(_DWORD*)(a1 + 80) = *(_DWORD*)(a3 + 64);
	*(_DWORD*)(a1 + 84) = *(_DWORD*)(a3 + 68);
	*(_DWORD*)(a1 + 88) = *(_DWORD*)(a3 + 72);
	*(_DWORD*)(a1 + 92) = *(_DWORD*)(a3 + 76);
	*(_DWORD*)(a1 + 96) = *(_DWORD*)(a3 + 80);
	switch (a5)
	{
	case 1:
		*(_QWORD*)(a1 + 240) = sub_1400E0030;
		break;
	case 2:
		*(_QWORD*)(a1 + 240) = sub_1400E0050;
		break;
	case 3:
		*(_QWORD*)(a1 + 240) = sub_1400E00C0;
		break;
	case 4:
		*(_QWORD*)(a1 + 240) = sub_1400E0110;
		break;
	case 5:
		*(_QWORD*)(a1 + 240) = sub_1400E0170;
		break;
	case 6:
		*(_QWORD*)(a1 + 240) = sub_1400E0190;
		break;
	case 7:
		*(_QWORD*)(a1 + 240) = sub_1400E01C0;
		break;
	case 8:
		*(_QWORD*)(a1 + 240) = sub_1400E0240;
		break;
	case 9:
		*(_QWORD*)(a1 + 240) = sub_1400E0270;
		break;
	case 10:
		*(_QWORD*)(a1 + 240) = sub_1400E02B0;
		break;
	case 11:
		*(_QWORD*)(a1 + 240) = sub_1400E0320;
		break;
	case 12:
		*(_QWORD*)(a1 + 240) = sub_1400E0350;
		break;
	case 13:
		*(_QWORD*)(a1 + 240) = sub_1400E0390;
		break;
	case 14:
		*(_QWORD*)(a1 + 240) = sub_1400E0410;
		break;
	case 15:
		*(_QWORD*)(a1 + 240) = sub_1400E0440;
		break;
	case 16:
		*(_QWORD*)(a1 + 240) = sub_1400E0480;
		break;
	case 17:
		*(_QWORD*)(a1 + 240) = sub_1400E0500;
		break;
	case 18:
		*(_QWORD*)(a1 + 240) = sub_1400E0560;
		break;
	case 19:
		*(_QWORD*)(a1 + 240) = sub_1400E05D0;
		break;
	case 20:
		*(_QWORD*)(a1 + 240) = sub_1400E0680;
		break;
	case 21:
		*(_QWORD*)(a1 + 240) = sub_1400E06C0;
		break;
	case 22:
		*(_QWORD*)(a1 + 240) = sub_1400E0700;
		break;
	case 23:
		*(_QWORD*)(a1 + 240) = sub_1400E0770;
		break;
	case 24:
		*(_QWORD*)(a1 + 240) = sub_1400E07B0;
		break;
	case 25:
		*(_QWORD*)(a1 + 240) = sub_1400E0800;
		break;
	default:
		*(_QWORD*)(a1 + 240) = 0i64;
		break;
	}
	result = sub_1400C3230(a1 + 208, 0.0, 1.0, a4);
	*(_DWORD*)a1 = a5;
	return result;
}
// 1400E0190: using guessed type __int64 __fastcall sub_1400E0190();
// 1400E0410: using guessed type __int64 __fastcall sub_1400E0410();
// 1400E0770: using guessed type __int64 __fastcall sub_1400E0770();

