//----- (0000000140422FF0) ----------------------------------------------------
_WORD* __fastcall sub_140422FF0(__int64 a1)
{
	_WORD* result; // rax
	__int64 v3; // rax

	result = *(_WORD**)(a1 + 3696);
	if (*(_WORD**)(a1 + 3688) != result)
	{
		v3 = sub_14013A630(a1 + 2496, *(int**)(a1 + 3688));
		if (v3)
			sub_140137B80(v3);
		result = *(_WORD**)(a1 + 3688);
		if (result != *(_WORD**)(a1 + 3696))
		{
			*result = 0;
			result = *(_WORD**)(a1 + 3688);
			*(_QWORD*)(a1 + 3696) = result;
		}
	}
	return result;
}

