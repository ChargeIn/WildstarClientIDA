#include "../winhttp.h"

//----- (00000001403CBB60) ----------------------------------------------------
__int64 __fastcall sub_1403CBB60(__int64 a1, _DWORD* a2)
{
	int v2; // edx
	__int16* v3; // rax

	switch (*a2)
	{
	case 1:
		v2 = 30185;
		goto LABEL_20;
	case 2:
		v2 = 432246;
		goto LABEL_20;
	case 3:
		v2 = 30026;
		goto LABEL_20;
	case 4:
		v2 = 432250;
		goto LABEL_20;
	case 5:
		v2 = 30027;
		goto LABEL_20;
	case 6:
		v2 = 432254;
		goto LABEL_20;
	case 7:
		v2 = 30028;
		goto LABEL_20;
	case 8:
		v2 = 30029;
		goto LABEL_20;
	case 9:
		v2 = 30030;
		goto LABEL_20;
	case 0xA:
		v2 = 30031;
		goto LABEL_20;
	case 0xB:
		v2 = 30076;
		goto LABEL_20;
	case 0xC:
		v2 = 374221;
		goto LABEL_20;
	case 0xD:
		v2 = 432286;
		goto LABEL_20;
	case 0xE:
		v2 = 432287;
		goto LABEL_20;
	case 0xF:
		v2 = 432686;
		goto LABEL_20;
	case 0x10:
		v2 = 589699;
		goto LABEL_20;
	case 0x11:
		v2 = 589700;
		goto LABEL_20;
	case 0x12:
		v2 = 765512;
	LABEL_20:
		v3 = sub_14034BDD0(a1, v2);
		if (v3)
			sub_140003890((__int64*)qword_140C658A0, 0xAu, 0i64, (int*)v3, 0, 0i64);
		break;
	default:
		return 0i64;
	}
	return 0i64;
}
// 140C658A0: using guessed type __int64 qword_140C658A0;

