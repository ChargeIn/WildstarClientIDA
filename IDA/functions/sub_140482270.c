//----- (0000000140482270) ----------------------------------------------------
_WORD* __fastcall sub_140482270(_WORD* a1, unsigned int* a2)
{
	unsigned int v2; // edx
	int v3; // r8d
	_WORD* result; // rax
	unsigned int v5; // [rsp+8h] [rbp+8h]

	v5 = *a2;
	v2 = *a2 & 0x7FFFFFFF;
	v3 = HIWORD(v5) & 0x8000;
	if ((v5 & 0x7FFFFFFF) >= 0x33800000)
	{
		if (v2 > 0x387FEFFF)
		{
			result = a1;
			if (v2 > 0x47FFEFFF)
				*a1 = v3 | 0x43FF;
			else
				*a1 = v3 | ((v2 - 939520000) >> 13);
		}
		else
		{
			result = a1;
			*a1 = v3 | ((((v5 & 0x7FFFFF | 0x800000) >> (113 - ((v5 & 0x7FFFFFFF) >> 23))) + 4096) >> 13);
		}
	}
	else
	{
		result = a1;
		*a1 = v3;
	}
	return result;
}

