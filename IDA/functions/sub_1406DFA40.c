//----- (00000001406DFA40) ----------------------------------------------------
__int64 __fastcall sub_1406DFA40(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	if (!a1 || !a2)
		return 0i64;
	switch (*(_DWORD*)(a2 + 220))
	{
	case 1:
		result = *(unsigned int*)(**(_QWORD**)a1 + 40i64);
		break;
	case 2:
		result = *(unsigned int*)(**(_QWORD**)a1 + 44i64);
		break;
	case 3:
		result = *(unsigned int*)(**(_QWORD**)a1 + 48i64);
		break;
	case 4:
		result = *(unsigned int*)(**(_QWORD**)a1 + 52i64);
		break;
	case 5:
		result = *(unsigned int*)(**(_QWORD**)a1 + 56i64);
		break;
	case 7:
		result = *(unsigned int*)(**(_QWORD**)a1 + 60i64);
		break;
	default:
		return 0i64;
	}
	return result;
}

