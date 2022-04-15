//----- (00000001405581C0) ----------------------------------------------------
__int64 __fastcall sub_1405581C0(_DWORD* a1, int a2, unsigned int a3, int a4)
{
	unsigned int v6; // esi
	__int64 result; // rax
	int v9; // ebx
	unsigned int* v10; // rdx
	_DWORD* v11; // rdx

	v6 = a2;
	result = (__int64)sub_14034BDD0((__int64)a1, a2);
	if (!result || !*(_WORD*)result)
		v6 = a3;
	a1[14] = v6;
	if (a4)
	{
		v9 = 0;
		v10 = (unsigned int*)sub_140211280(v6);
		if (v10)
		{
			if ((*(_DWORD*)(qword_140C63628 + 1524) & v10[6]) == 0
				|| *(_DWORD*)(qword_140C635F0 + 5784) != 1
				|| (result = v10[2], !(_DWORD)result))
			{
				result = v10[1];
			}
		}
		else
		{
			result = 0i64;
		}
		a1[16] = result;
		a1[15] = v6;
		if (!(_DWORD)result && v6 != a3)
		{
			result = sub_140211280(a3);
			v11 = (_DWORD*)result;
			if (result)
			{
				result = qword_140C63628;
				if ((*(_DWORD*)(qword_140C63628 + 1524) & v11[6]) == 0
					|| (result = qword_140C635F0, *(_DWORD*)(qword_140C635F0 + 5784) != 1)
					|| (v9 = v11[2]) == 0)
				{
					v9 = v11[1];
				}
			}
			a1[16] = v9;
			a1[15] = a3;
		}
	}
	else
	{
		*(_QWORD*)(a1 + 15) = 0i64;
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63628: using guessed type __int64 qword_140C63628;

