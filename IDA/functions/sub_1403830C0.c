#include "../winhttp.h"

//----- (00000001403830C0) ----------------------------------------------------
int __fastcall sub_1403830C0(__int64 a1, int a2)
{
	_QWORD* v3; // rcx
	__int64 v4; // rax
	_QWORD* v5; // rcx
	__int64 v6; // rax
	_QWORD* v7; // rcx
	__int64 v8; // rax

	switch (a2)
	{
	case 0:
		*(_DWORD*)(a1 + 32) &= ~2u;
		break;
	case 1:
		*(_DWORD*)(a1 + 36) &= ~0x400u;
		break;
	case 13:
		*(_DWORD*)(a1 + 40) &= ~0x10u;
		break;
	case 14:
		*(_DWORD*)(a1 + 40) &= ~0x20u;
		break;
	case 16:
		*(_DWORD*)(a1 + 40) &= ~0x40u;
		break;
	case 17:
		*(_DWORD*)(a1 + 40) &= ~4u;
		break;
	case 18:
		*(_DWORD*)(a1 + 40) &= ~8u;
		break;
	case 19:
		*(_DWORD*)(a1 + 40) &= ~0x2000u;
		break;
	case 20:
		*(_DWORD*)(a1 + 40) &= ~0x4000u;
		break;
	case 21:
		*(_DWORD*)(a1 + 32) &= ~4u;
		break;
	case 22:
		*(_DWORD*)(a1 + 32) &= ~8u;
		break;
	case 26:
		*(_DWORD*)(a1 + 40) &= ~0x80u;
		break;
	case 27:
		sub_140383760((_QWORD*)a1);
		*(_DWORD*)(a1 + 44) &= ~8u;
		break;
	case 28:
		*(_DWORD*)(a1 + 36) &= ~0x200u;
		break;
	case 31:
		*(_DWORD*)(a1 + 40) &= ~0x10000u;
		break;
	case 34:
		*(_DWORD*)(a1 + 40) &= ~0x100u;
		break;
	default:
		break;
	}
	if (*(_DWORD*)(a1 + 32) != 15)
		*(_DWORD*)(a1 + 36) &= ~1u;
	if (*(_DWORD*)(a1 + 36) != 0x3FFF)
	{
		if (!*(_QWORD*)(a1 + 1448))
		{
			v3 = (_QWORD*)(*(_QWORD*)a1 + 2280i64);
			*(_QWORD*)(a1 + 1448) = v3;
			*(_QWORD*)(a1 + 1456) = *v3;
			*v3 = a1;
			v4 = *(_QWORD*)(a1 + 1456);
			if (v4)
				*(_QWORD*)(v4 + 1448) = a1 + 1456;
			*(_DWORD*)(*(_QWORD*)a1 + 2288i64) = 0;
			++* (_DWORD*)(*(_QWORD*)a1 + 2164i64);
		}
		*(_DWORD*)(a1 + 40) &= ~1u;
	}
	if (*(_DWORD*)(a1 + 40) != 0x1FFFF)
	{
		if (!*(_QWORD*)(a1 + 1464))
		{
			v5 = (_QWORD*)(*(_QWORD*)a1 + 2296i64);
			*(_QWORD*)(a1 + 1464) = v5;
			*(_QWORD*)(a1 + 1472) = *v5;
			*v5 = a1;
			v6 = *(_QWORD*)(a1 + 1472);
			if (v6)
				*(_QWORD*)(v6 + 1464) = a1 + 1472;
			*(_DWORD*)(*(_QWORD*)a1 + 2304i64) = 0;
			++* (_DWORD*)(*(_QWORD*)a1 + 2168i64);
		}
		*(_DWORD*)(a1 + 44) &= ~1u;
	}
	if (*(_DWORD*)(a1 + 44) != 15 && !*(_QWORD*)(a1 + 1480))
	{
		v7 = (_QWORD*)(*(_QWORD*)a1 + 2312i64);
		*(_QWORD*)(a1 + 1480) = v7;
		*(_QWORD*)(a1 + 1488) = *v7;
		*v7 = a1;
		v8 = *(_QWORD*)(a1 + 1488);
		if (v8)
			*(_QWORD*)(v8 + 1480) = a1 + 1488;
		*(_DWORD*)(*(_QWORD*)a1 + 2320i64) = 0;
		++* (_DWORD*)(*(_QWORD*)a1 + 2172i64);
	}
	return sub_140389C40((__int64*)a1);
}

