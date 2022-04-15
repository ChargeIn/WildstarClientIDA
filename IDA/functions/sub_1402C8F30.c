//----- (00000001402C8F30) ----------------------------------------------------
__int64 __fastcall sub_1402C8F30(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // rdx
	__int64 v7; // rdx
	__int64 v8; // rdx
	__int64 v9; // rdx
	__int64 v10; // rdx
	__int64 v11; // rdx
	__int64 v12; // rdx
	__int64 v13; // rdx
	__int64 v14; // rdx
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // r8
	__int64 v18; // r9
	__int64 v19; // rax
	__int64 v20; // rcx

	result = sub_1402CA3C0(a1, a2, (unsigned int*)(a3 + 24));
	if ((int)result >= 0)
	{
		result = sub_1402CA3C0(a1, v6, (unsigned int*)(a3 + 48));
		if ((int)result >= 0)
		{
			result = sub_1402CA3C0(a1, v7, (unsigned int*)(a3 + 72));
			if ((int)result >= 0)
			{
				result = sub_1402CA3C0(a1, v8, (unsigned int*)(a3 + 96));
				if ((int)result >= 0)
				{
					result = sub_1402CA3C0(a1, v9, (unsigned int*)(a3 + 120));
					if ((int)result >= 0)
					{
						result = sub_1402CA3C0(a1, v10, (unsigned int*)(a3 + 168));
						if ((int)result >= 0)
						{
							result = sub_1402CA3C0(a1, v11, (unsigned int*)(a3 + 192));
							if ((int)result >= 0)
							{
								result = sub_1402CA3C0(a1, v12, (unsigned int*)(a3 + 216));
								if ((int)result >= 0)
								{
									result = sub_1402CA3C0(a1, v13, (unsigned int*)(a3 + 240));
									if ((int)result >= 0)
									{
										v15 = *(_QWORD*)(a3 + 272);
										v16 = v15 + v14;
										if ((unsigned __int64)(v15 + v14) < *a1)
											return 2147500037i64;
										v17 = *(unsigned int*)(a3 + 264);
										if ((unsigned __int64)(v14 + v15 + 4 * v17) > a1[1])
											return 2147500037i64;
										v18 = 0i64;
										v19 = 0i64;
										if ((_DWORD)v17)
											v19 = v16;
										v20 = *(_QWORD*)(a3 + 280);
										*(_QWORD*)(a3 + 272) = v19;
										if ((unsigned __int64)(v20 + v14) < *a1 || (unsigned __int64)(v14 + v20 + 12 * v17) > a1[1])
										{
											return 2147500037i64;
										}
										else
										{
											if ((_DWORD)v17)
												v18 = v20 + v14;
											result = 0i64;
											*(_QWORD*)(a3 + 280) = v18;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return result;
}
// 1402C8F58: variable 'v6' is possibly undefined
// 1402C8F6C: variable 'v7' is possibly undefined
// 1402C8F80: variable 'v8' is possibly undefined
// 1402C8F94: variable 'v9' is possibly undefined
// 1402C8FAB: variable 'v10' is possibly undefined
// 1402C8FC2: variable 'v11' is possibly undefined
// 1402C8FD9: variable 'v12' is possibly undefined
// 1402C8FF0: variable 'v13' is possibly undefined
// 1402C9000: variable 'v14' is possibly undefined

