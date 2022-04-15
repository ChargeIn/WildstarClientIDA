#include "../winhttp.h"

//----- (000000014044B630) ----------------------------------------------------
__int64 __fastcall sub_14044B630(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	__int64 result; // rax
	__int64 v5; // rbx
	__int64 v6; // rcx

	if ((unsigned int)(a3 - 2438) > 0xB)
		return 1i64;
	switch (a3)
	{
	case 2439:
		v5 = qword_140C65908;
		v6 = qword_140C65908;
		*(_DWORD*)(qword_140C65908 + 8) = 0;
		sub_14044CFF0(v6);
		sub_14044D450((_QWORD*)v5);
		sub_14044DA90((_QWORD*)v5);
		*(_DWORD*)(v5 + 4) = 1;
		*(_DWORD*)v5 = 0;
		sub_14044DBD0();
		sub_14044E4B0(v5);
		result = 0i64;
		break;
	case 2440:
		result = sub_14044C170(a1, (unsigned int*)a4);
		break;
	case 2441:
		result = sub_14044CF40();
		break;
	case 2442:
		result = sub_14044CEA0(a1, (unsigned int*)a4);
		break;
	case 2443:
		result = sub_14044B750(a1, (unsigned int*)a4);
		break;
	case 2444:
	case 2445:
		result = sub_14044C780(a1, *(_DWORD*)a4, *(_DWORD*)(a4 + 4));
		break;
	case 2446:
		result = sub_14044C540(a1, (unsigned int*)a4);
		break;
	case 2448:
		result = sub_14044CDF0(a1, (unsigned int*)a4);
		break;
	case 2449:
		result = sub_14044C840(a1, (unsigned int*)a4);
		break;
	default:
		return 1i64;
	}
	return result;
}
// 140C65908: using guessed type __int64 qword_140C65908;

