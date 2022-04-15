//----- (00000001400A4150) ----------------------------------------------------
__int64 __fastcall sub_1400A4150(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rdx
	__int64 v7; // rdx
	__int64 v8; // rdx
	__int64 v9; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14008F650(a1, a2, a3);
	if ((int)result >= 0)
	{
		result = sub_1400A8A30(a1, v6, a3 + 4);
		if ((int)result >= 0)
		{
			result = sub_1400A8A30(a1, v7, a3 + 7);
			if ((int)result >= 0)
			{
				result = sub_1400A8A30(a1, v8, a3 + 10);
				if ((int)result >= 0)
					return sub_1400A8A30(a1, v9, a3 + 13);
			}
		}
	}
	return result;
}
// 1400A4185: variable 'v6' is possibly undefined
// 1400A4195: variable 'v7' is possibly undefined
// 1400A41A5: variable 'v8' is possibly undefined
// 1400A41B5: variable 'v9' is possibly undefined

