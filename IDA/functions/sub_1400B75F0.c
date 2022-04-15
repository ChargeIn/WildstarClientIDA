//----- (00000001400B75F0) ----------------------------------------------------
__int16* __fastcall sub_1400B75F0(__int64 a1, int a2)
{
	__int16* result; // rax
	int* v4; // rdx
	_WORD* v5; // rcx
	__int64 v6; // rax

	result = sub_14034BDD0(a1, a2);
	v4 = (int*)result;
	if (result)
	{
		v6 = 0i64;
		if (*(_WORD*)v4)
		{
			do
				++v6;
			while (*((_WORD*)v4 + v6));
		}
		return (__int16*)sub_14001C480(a1 + 8, v4, (int*)((char*)v4 + 2 * v6));
	}
	else
	{
		v5 = *(_WORD**)(a1 + 16);
		if (v5 != *(_WORD**)(a1 + 24))
		{
			*v5 = 0;
			result = *(__int16**)(a1 + 16);
			*(_QWORD*)(a1 + 24) = result;
		}
	}
	return result;
}

