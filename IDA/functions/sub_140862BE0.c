//----- (0000000140862BE0) ----------------------------------------------------
__int64 __fastcall sub_140862BE0(__int64 a1)
{
	double v2; // xmm0_8
	int v3; // eax
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 1064) == 1)
	{
		++* (_DWORD*)(a1 + 1068);
	}
	else
	{
		v2 = sub_14085CF60((__int64*)(a1 + 1056), 0);
		sub_140833A10(a1, *(float*)&v2);
		v3 = *(_DWORD*)(a1 + 780);
		++* (_DWORD*)(a1 + 1068);
		*(_DWORD*)(a1 + 784) = v3;
		result = *(unsigned int*)(a1 + 788);
		*(_DWORD*)(a1 + 792) = result;
	}
	return result;
}

