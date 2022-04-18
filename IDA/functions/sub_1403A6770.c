#include "../winhttp.h"

//----- (00000001403A6770) ----------------------------------------------------
__int64 __fastcall sub_1403A6770(__int64 a1, unsigned int a2)
{
	int v3; // edx
	__int16* v4; // rax

	switch (a2)
	{
	case 0x1Bu:
		v3 = 525407;
		break;
	case 0x1Fu:
		v3 = 4005;
		break;
	case 0x23u:
		v3 = 580431;
		break;
	case 0x27u:
		v3 = 4001;
		break;
	case 0x28u:
		v3 = 4002;
		break;
	case 0x2Au:
		v3 = 4003;
		break;
	case 0x3Fu:
		v3 = 128963;
		break;
	case 0x48u:
		v3 = 188102;
		break;
	case 0x84u:
		v3 = 588746;
		break;
	case 0x9Cu:
		v3 = 731743;
		break;
	default:
		v3 = 4000;
		break;
	}
	v4 = sub_14034BDD0(a1, v3);
	return Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "GenericError", "iS", a2, v4);
}
// 140C65898: using guessed type __int64 qword_140C65898;

