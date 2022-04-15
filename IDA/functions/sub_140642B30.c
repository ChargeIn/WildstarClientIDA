//----- (0000000140642B30) ----------------------------------------------------
__int64 __fastcall sub_140642B30(__int64 a1)
{
	__int64 v1; // r8
	__int64 result; // rax
	unsigned int v3; // edx

	switch ((unsigned int)sub_1406428D0(*(_QWORD*)(a1 + 40)))
	{
	case 0u:
	case 2u:
	case 4u:
	case 6u:
	case 7u:
	case 8u:
	case 9u:
		result = *(unsigned int*)(v1 + 20);
		break;
	case 1u:
	case 3u:
	case 5u:
		v3 = *(_DWORD*)(v1 + 24) - ((*(_DWORD*)(v1 + 24) >> 2) & 0x9249249) - ((*(_DWORD*)(v1 + 24) >> 1) & 0x5B6DB6DB);
		result = ((*(_DWORD*)(v1 + 20)
			- ((*(_DWORD*)(v1 + 20) >> 2) & 0x9249249)
			- ((*(_DWORD*)(v1 + 20) >> 1) & 0x5B6DB6DB)
			+ ((*(_DWORD*)(v1 + 20)
				- ((*(_DWORD*)(v1 + 20) >> 2) & 0x9249249)
				- ((*(_DWORD*)(v1 + 20) >> 1) & 0x5B6DB6DBu)) >> 3)) & 0xC71C71C7)
			% 0x3F
			+ ((v3 + (v3 >> 3)) & 0xC71C71C7) % 0x3F;
		break;
	default:
		result = 0i64;
		break;
	}
	return result;
}
// 140642B5E: variable 'v1' is possibly undefined

