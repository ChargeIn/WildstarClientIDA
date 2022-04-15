//----- (00000001405E75D0) ----------------------------------------------------
double __fastcall sub_1405E75D0(__int64 a1, unsigned int a2)
{
	unsigned int* v2; // r8
	double result; // xmm0_8

	if (a2 > 0xA)
		return 0.0;
	v2 = *(unsigned int**)(qword_140C65898 + 120);
	if (!v2)
		return 0.0;
	switch (a2)
	{
	case 0u:
		*(_QWORD*)&result = v2[387];
		break;
	case 1u:
		*(_QWORD*)&result = v2[389];
		break;
	case 2u:
		*(_QWORD*)&result = v2[391];
		break;
	case 3u:
		*(_QWORD*)&result = v2[393];
		break;
	case 4u:
		*(_QWORD*)&result = v2[395];
		break;
	case 5u:
		*(_QWORD*)&result = v2[397];
		break;
	case 6u:
		*(_QWORD*)&result = v2[399];
		break;
	case 7u:
		*(_QWORD*)&result = v2[445];
		break;
	case 8u:
		*(_QWORD*)&result = v2[469];
		break;
	case 9u:
		*(_QWORD*)&result = v2[473];
		break;
	case 0xAu:
		*(_QWORD*)&result = v2[477];
		break;
	default:
		return 0.0;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

