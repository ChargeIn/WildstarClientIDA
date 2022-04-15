#include "../winhttp.h"

//----- (0000000140082950) ----------------------------------------------------
__int64 __fastcall sub_140082950(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rdx
	unsigned int v9; // ebx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 12), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 20), 3ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 3ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 4ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 2ui64);
								if ((int)result >= 0)
								{
									v7 = sub_1403374E0(a2, 200i64 * *(unsigned int*)(a3 + 12));
									*(_QWORD*)(a3 + 40) = v7;
									if (v7)
									{
										v9 = 0;
										if (*(_DWORD*)(a3 + 12))
										{
											while (1)
											{
												result = sub_1400828A0(a1, a2, *(_QWORD*)(a3 + 40) + 200i64 * v9);
												if ((int)result < 0)
													break;
												if (++v9 >= *(_DWORD*)(a3 + 12))
													goto LABEL_16;
											}
										}
										else
										{
										LABEL_16:
											result = sub_1400852F0(a1, v8, a3 + 48);
											if ((int)result >= 0)
											{
												result = sub_14006C090(a1, (_DWORD*)(a3 + 64), 0xEui64);
												if ((int)result >= 0)
													return sub_140080710(a1, a2, (unsigned int*)(a3 + 72));
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
	return result;
}
// 140082AAB: variable 'v8' is possibly undefined

