//----- (00000001405B4AB0) ----------------------------------------------------
__int64 __fastcall sub_1405B4AB0(__int64 a1, unsigned int* a2, unsigned int* a3, __int64 a4, _DWORD* a5)
{
	unsigned int v5; // r11d
	__int64 result; // rax
	__int64 v7; // [rsp+50h] [rbp+18h] BYREF

	v5 = *a3;
	switch (*a3)
	{
	case 0u:
		if (a4)
			*a2 = *(_DWORD*)(a4 + 8i64 * *(unsigned int*)(a4 + 4) + 20)
			+ (int)(float)((float)((float)(int)(a3[2] - *(_DWORD*)(a4 + 8i64 * *(unsigned int*)(a4 + 4) + 16))
				* *(float*)(a4 + 8))
				+ *(float*)(a4 + 12));
		result = 0i64;
		break;
	case 1u:
		result = sub_1407135F0(a1 + 3904, *a2, a3 + 2);
		break;
	case 2u:
		result = sub_1407138F0(a1 + 3936, *a2, a3 + 2, a5);
		break;
	case 3u:
		result = sub_140713AB0(a1 + 3936, *a2, (__int64)(a3 + 2), a4, (__int64)a5);
		break;
	case 4u:
		result = sub_140713C00(a1 + 3936, *a2, (__int64)(a3 + 2));
		break;
	case 5u:
		result = sub_140713CF0(a1 + 3936, *a2, a3 + 2, (__int64)a5);
		break;
	case 6u:
		result = sub_140713E80(a1 + 3936, *a2, (__int64)(a3 + 2), (__int64)a5);
		break;
	case 7u:
		result = sub_140714010(a1 + 3936, *a2, a3 + 2, (unsigned __int64)a5);
		break;
	case 8u:
		result = sub_140714A90(a1 + 4080, *a2, (__int64)(a3 + 2), a5);
		break;
	case 9u:
		result = sub_140714BE0(a1 + 4080, *a2, (__int64)(a3 + 2), a4, (__int64)a5);
		break;
	case 0xAu:
		result = sub_140714CE0(a1 + 4080, *a2, (int*)a3 + 2, a5);
		break;
	case 0xBu:
		result = sub_140715020(a1 + 4144, *a2, (__int64)(a3 + 2), a5);
		break;
	case 0xCu:
		result = sub_140715170(a1 + 4144, *a2, (__int64)(a3 + 2), a4, (__int64)a5);
		break;
	case 0xDu:
		result = sub_140715270(a1 + 4144, *a2, (int*)a3 + 2, a5);
		break;
	case 0xEu:
		result = sub_140715350(a1 + 4256, *a2, a3 + 2, a5);
		break;
	case 0xFu:
		result = sub_140715470(a1 + 4256, *a2, (__int64)(a3 + 2), a4, (__int64)a5);
		break;
	case 0x10u:
		result = sub_140715570(a1 + 4256, *a2, (__int64)(a3 + 2), a4, (__int64)a5);
		break;
	case 0x11u:
		result = sub_140715650(a1 + 4256, *a2, a3 + 2);
		break;
	case 0x12u:
		result = sub_140715730(a1 + 4256, *a2, (int*)a3 + 2, a5);
		break;
	case 0x13u:
		result = sub_1407157F0(a1 + 4256, *a2, a3 + 2, a5);
		break;
	case 0x14u:
		result = sub_1407158D0(a1 + 4256, *a2, (__int64)(a3 + 2), (__int64)a5);
		break;
	case 0x15u:
		result = sub_1407159B0(a1 + 4256, *a2, (int*)a3 + 2, a5);
		break;
	case 0x16u:
		result = sub_140715F60(a1 + 4320, *a2, (__int64)(a3 + 2), a5);
		break;
	case 0x17u:
		result = sub_140716080(a1 + 4320, *a2, (__int64)(a3 + 2), a4, (__int64)a5);
		break;
	case 0x18u:
		result = sub_1407163D0(a1 + 4208, *a2, a3 + 2);
		break;
	case 0x19u:
		result = sub_1407164D0(a1 + 4208, *a2, (__int64)(a3 + 2), a4, (__int64)a5);
		break;
	case 0x1Au:
		result = sub_140716610(a1 + 4208, *a2, (int*)a3 + 2);
		break;
	case 0x1Bu:
		result = sub_1407166B0(a1 + 4232, *a2, a3 + 2);
		break;
	case 0x1Cu:
		result = sub_1407167B0(a1 + 4232, *a2, (__int64)(a3 + 2), a4, (__int64)a5);
		break;
	case 0x1Du:
		result = sub_1407168F0(a1 + 4232, *a2);
		break;
	default:
		v7 = 0x141E1B948i64;
		sub_1401A3130(5, 2, &v7, v5);
		result = 2147500037i64;
		break;
	}
	return result;
}

