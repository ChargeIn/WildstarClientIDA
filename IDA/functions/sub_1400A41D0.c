//----- (00000001400A41D0) ----------------------------------------------------
__int64 __fastcall sub_1400A41D0(__int64 a1, _QWORD* a2, __int64* a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7; // r8
	__int64 v8; // r8
	__int64 v9; // r8
	__int64 v10; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_140336A40(a1, a2, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, a3 + 1, v6);
		if ((int)result >= 0)
		{
			result = sub_14006C120(a1, a3 + 2, v7);
			if ((int)result >= 0)
			{
				result = sub_14006C120(a1, a3 + 3, v8);
				if ((int)result >= 0)
				{
					result = sub_14006C120(a1, a3 + 4, v9);
					if ((int)result >= 0)
						return sub_14006C120(a1, a3 + 5, v10);
				}
			}
		}
	}
	return result;
}
// 1400A4205: variable 'v6' is possibly undefined
// 1400A4215: variable 'v7' is possibly undefined
// 1400A4225: variable 'v8' is possibly undefined
// 1400A4235: variable 'v9' is possibly undefined
// 1400A4245: variable 'v10' is possibly undefined

