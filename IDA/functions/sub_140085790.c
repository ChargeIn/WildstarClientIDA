#include "../winhttp.h"

//----- (0000000140085790) ----------------------------------------------------
__int64 __fastcall sub_140085790(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8
	__int64 v8; // r8
	__int64 v9; // r8
	_BYTE* v10; // rax
	_BYTE* v11; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x12ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C120(a1, (__int64*)(a3 + 16), v7);
			if ((int)result >= 0)
			{
				result = sub_14006C120(a1, (__int64*)(a3 + 24), v8);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C120(a1, (__int64*)(a3 + 40), v9);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 48), 0x20ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 52), 0x20ui64);
								if ((int)result >= 0)
								{
									result = sub_14006BE30(a1, (_BYTE*)(a3 + 56), 8ui64);
									if ((int)result >= 0)
									{
										result = sub_14006C090(a1, (_DWORD*)(a3 + 60), 0x12ui64);
										if ((int)result >= 0)
										{
											result = sub_14006BE30(a1, (_BYTE*)(a3 + 64), 3ui64);
											if ((int)result >= 0)
											{
												v10 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned __int8*)(a3 + 64));
												*(_QWORD*)(a3 + 72) = v10;
												if (!v10)
													return 2147500037i64;
												result = sub_140337160(a1, v10, 4i64 * *(unsigned __int8*)(a3 + 64));
												if ((int)result >= 0)
												{
													result = sub_14006BE30(a1, (_BYTE*)(a3 + 80), 4ui64);
													if ((int)result >= 0)
													{
														v11 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned __int8*)(a3 + 80));
														*(_QWORD*)(a3 + 88) = v11;
														if (!v11)
															return 2147500037i64;
														return sub_140337160(a1, v11, 4i64 * *(unsigned __int8*)(a3 + 80));
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
	}
	return result;
}
// 1400857F8: variable 'v7' is possibly undefined
// 14008580C: variable 'v8' is possibly undefined
// 14008583A: variable 'v9' is possibly undefined

