//----- (000000014030CA00) ----------------------------------------------------
__int64 __fastcall sub_14030CA00(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rdx
	__int64 v8; // rdx
	__int64 v9; // rax
	__int64 v10; // r8
	__int64 v11; // rcx
	__int64 v12; // rdx
	__int64 v13; // rax
	__int64 v14; // rax

	result = sub_14030ED20(a1, a2, (unsigned int*)(a3 + 8));
	if ((int)result >= 0)
	{
		result = sub_1402CA3C0(a1, v7, (unsigned int*)(a3 + 32));
		if ((int)result >= 0)
		{
			result = sub_14030EBF0(a1, v8, (unsigned int*)(a3 + 56));
			if ((int)result >= 0)
			{
				v9 = *(_QWORD*)(a3 + 88);
				v10 = v9 + a2;
				if ((unsigned __int64)(v9 + a2) < *a1)
					return 2147500037i64;
				v11 = *(unsigned int*)(a3 + 80);
				if ((unsigned __int64)(a2 + v9 + 4 * v11) > a1[1])
					return 2147500037i64;
				v12 = 0i64;
				v13 = 0i64;
				if ((_DWORD)v11)
					v13 = v10;
				*(_QWORD*)(a3 + 88) = v13;
				v14 = *(_QWORD*)(a3 + 96);
				if ((unsigned __int64)(v14 + a2) < *a1 || (unsigned __int64)(a2 + v14 + 8 * v11) > a1[1])
				{
					return 2147500037i64;
				}
				else
				{
					if ((_DWORD)v11)
						v12 = v14 + a2;
					result = 0i64;
					*(_QWORD*)(a3 + 96) = v12;
				}
			}
		}
	}
	return result;
}
// 14030CA30: variable 'v7' is possibly undefined
// 14030CA40: variable 'v8' is possibly undefined

