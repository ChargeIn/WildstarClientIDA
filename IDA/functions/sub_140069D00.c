//----- (0000000140069D00) ----------------------------------------------------
__int64 __fastcall sub_140069D00(__int64 a1)
{
	unsigned int v1; // edi
	__int64 result; // rax
	__int64 v4; // rdx

	v1 = *(_DWORD*)(a1 + 4);
	switch (*(_DWORD*)(a1 + 16))
	{
	case 0x102:
		sub_140064640(a1);
		sub_1400684D0(a1);
		result = 1i64;
		break;
	case 0x103:
		sub_140064640(a1);
		sub_140068080(a1, v4);
		sub_1400656B0(a1, 262, 259, v1);
		result = 0i64;
		break;
	case 0x108:
		sub_140069270(a1, v1);
		result = 0i64;
		break;
	case 0x109:
		sub_140069960(a1, v1);
		result = 0i64;
		break;
	case 0x10A:
		sub_140069480(a1, v1);
		result = 0i64;
		break;
	case 0x10C:
		sub_140064640(a1);
		if (*(_DWORD*)(a1 + 16) == 265 && (unsigned int)sub_1400655F0(a1))
		{
			sub_140069720(a1);
			result = 0i64;
		}
		else
		{
			sub_140069810(a1);
			result = 0i64;
		}
		break;
	case 0x110:
		sub_140068730(a1, v1);
		result = 0i64;
		break;
	case 0x111:
		sub_140069B30(a1);
		result = 1i64;
		break;
	case 0x115:
		sub_140068560(a1, v1);
		result = 0i64;
		break;
	default:
		sub_140069AA0(a1);
		result = 0i64;
		break;
	}
	return result;
}
// 140069D71: variable 'v4' is possibly undefined

