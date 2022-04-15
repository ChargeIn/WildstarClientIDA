//----- (000000014009E7F0) ----------------------------------------------------
__int64 __fastcall sub_14009E7F0(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rdx
	__int64 v9; // rbx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0x20ui64);
	if ((int)result >= 0)
	{
		v7 = sub_1403374E0(a2, 24i64 * *a3);
		*((_QWORD*)a3 + 1) = v7;
		if (!v7)
			return 2147500037i64;
		v9 = 0i64;
		if (*a3)
		{
			while (1)
			{
				result = sub_14008BF00(a1, v8, *((_QWORD*)a3 + 1) + 24 * v9);
				if ((int)result < 0)
					break;
				v9 = (unsigned int)(v9 + 1);
				if ((unsigned int)v9 >= *a3)
					return sub_14006C090(a1, a3 + 4, 2ui64);
			}
		}
		else
		{
			return sub_14006C090(a1, a3 + 4, 2ui64);
		}
	}
	return result;
}
// 14009E86F: variable 'v8' is possibly undefined

