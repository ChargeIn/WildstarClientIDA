#include "../winhttp.h"

//----- (0000000140099C90) ----------------------------------------------------
__int64 __fastcall sub_140099C90(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8
	__int64 v8; // r8
	__int64 v9; // r8
	__int64 v10; // r8
	__int64 v11; // r8
	__int64 v12; // r8
	_BYTE* v13; // rax
	__int64 v14; // r8
	__int64 v15; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v7);
		if ((int)result >= 0)
		{
			result = sub_14006C120(a1, (__int64*)(a3 + 16), v8);
			if ((int)result >= 0)
			{
				result = sub_14006C120(a1, (__int64*)(a3 + 24), v9);
				if ((int)result >= 0)
				{
					result = sub_14006C120(a1, (__int64*)(a3 + 32), v10);
					if ((int)result >= 0)
					{
						result = sub_14006C120(a1, (__int64*)(a3 + 40), v11);
						if ((int)result >= 0)
						{
							result = sub_14006C120(a1, (__int64*)(a3 + 48), v12);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 56), 0x12ui64);
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, (_DWORD*)(a3 + 60), 0x20ui64);
									if ((int)result >= 0)
									{
										result = sub_14006C090(a1, (_DWORD*)(a3 + 64), 0x12ui64);
										if ((int)result >= 0)
										{
											result = sub_14006BE30(a1, (_BYTE*)(a3 + 68), 3ui64);
											if ((int)result >= 0)
											{
												v13 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned __int8*)(a3 + 68));
												*(_QWORD*)(a3 + 72) = v13;
												if (v13)
												{
													result = sub_140337160(a1, v13, 4i64 * *(unsigned __int8*)(a3 + 68));
													if ((int)result >= 0)
													{
														result = sub_14006C120(a1, (__int64*)(a3 + 80), v14);
														if ((int)result >= 0)
														{
															result = sub_14006C090(a1, (_DWORD*)(a3 + 88), 0x20ui64);
															if ((int)result >= 0)
															{
																result = sub_14006C120(a1, (__int64*)(a3 + 96), v15);
																if ((int)result >= 0)
																	return sub_14006C090(a1, (_DWORD*)(a3 + 104), 0x20ui64);
															}
														}
													}
												}
												else
												{
													return 2147500037i64;
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
		}
	}
	return result;
}
// 140099CDE: variable 'v7' is possibly undefined
// 140099CF2: variable 'v8' is possibly undefined
// 140099D06: variable 'v9' is possibly undefined
// 140099D1A: variable 'v10' is possibly undefined
// 140099D2E: variable 'v11' is possibly undefined
// 140099D42: variable 'v12' is possibly undefined
// 140099DFE: variable 'v14' is possibly undefined
// 140099E24: variable 'v15' is possibly undefined

