//----- (000000014030C930) ----------------------------------------------------
__int64 __fastcall sub_14030C930(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // r8
	__int64 v9; // rcx
	__int64 v10; // r9
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rdx

	result = sub_14030ED20(a1, a2, (unsigned int*)(a3 + 40));
	if ((int)result >= 0)
	{
		v7 = *(_QWORD*)(a3 + 72);
		v8 = v7 + v6;
		if ((unsigned __int64)(v7 + v6) < *a1)
			return 2147500037i64;
		v9 = *(unsigned int*)(a3 + 64);
		if ((unsigned __int64)(v6 + v7 + 4 * v9) > a1[1])
			return 2147500037i64;
		v10 = 0i64;
		v11 = 0i64;
		if ((_DWORD)v9)
			v11 = v8;
		*(_QWORD*)(a3 + 72) = v11;
		v12 = *(_QWORD*)(a3 + 80);
		if ((unsigned __int64)(v12 + v6) < *a1 || (unsigned __int64)(v6 + v12 + 2 * v9) > a1[1])
		{
			return 2147500037i64;
		}
		else
		{
			if ((_DWORD)v9)
				v10 = v12 + v6;
			*(_QWORD*)(a3 + 80) = v10;
			result = sub_1402CA3C0(a1, v6, (unsigned int*)(a3 + 88));
			if ((int)result >= 0)
			{
				result = sub_1402CA3C0(a1, v13, (unsigned int*)(a3 + 112));
				if ((int)result >= 0)
				{
					result = sub_1402CA3C0(a1, v14, (unsigned int*)(a3 + 136));
					if ((int)result >= 0)
						return 0i64;
				}
			}
		}
	}
	return result;
}
// 14030C955: variable 'v6' is possibly undefined
// 14030C9C9: variable 'v13' is possibly undefined
// 14030C9DC: variable 'v14' is possibly undefined

