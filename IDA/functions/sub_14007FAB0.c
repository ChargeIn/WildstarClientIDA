#include "../winhttp.h"

//----- (000000014007FAB0) ----------------------------------------------------
__int64 __fastcall sub_14007FAB0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 i; // rdi
	_BYTE* v9; // rax
	_BYTE* v10; // rax
	__int64 v11; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
		if ((int)result >= 0)
		{
			v7 = sub_1403374E0(a2, 160i64 * *(unsigned int*)(a3 + 8));
			*(_QWORD*)(a3 + 16) = v7;
			if (v7)
			{
				for (i = 0i64; (unsigned int)i < *(_DWORD*)(a3 + 8); i = (unsigned int)(i + 1))
				{
					result = sub_14007F720(a1, a2, *(_QWORD*)(a3 + 16) + 160 * i);
					if ((int)result < 0)
						return result;
				}
				result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
				if ((int)result < 0)
					return result;
				v9 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 24));
				*(_QWORD*)(a3 + 32) = v9;
				if (v9)
				{
					result = sub_140337160(a1, v9, 4i64 * *(unsigned int*)(a3 + 24));
					if ((int)result < 0)
						return result;
					result = sub_14006C090(a1, (_DWORD*)(a3 + 40), 0x20ui64);
					if ((int)result < 0)
						return result;
					v10 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 40));
					*(_QWORD*)(a3 + 48) = v10;
					if (v10)
					{
						result = sub_140337160(a1, v10, 4i64 * *(unsigned int*)(a3 + 40));
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 56), 0xEui64);
							if ((int)result >= 0)
							{
								result = sub_1400852F0(a1, v11, a3 + 64);
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, (_DWORD*)(a3 + 80), 0x20ui64);
									if ((int)result >= 0)
									{
										result = sub_14006C090(a1, (_DWORD*)(a3 + 84), 0x20ui64);
										if ((int)result >= 0)
										{
											result = sub_14006C090(a1, (_DWORD*)(a3 + 88), 0x20ui64);
											if ((int)result >= 0)
											{
												result = sub_14006C090(a1, (_DWORD*)(a3 + 92), 0x20ui64);
												if ((int)result >= 0)
												{
													result = sub_14006C090(a1, (_DWORD*)(a3 + 96), 0xEui64);
													if ((int)result >= 0)
														return sub_14006C090(a1, (_DWORD*)(a3 + 100), 1ui64);
												}
											}
										}
									}
								}
							}
						}
						return result;
					}
				}
			}
			return 2147500037i64;
		}
	}
	return result;
}
// 14007FC3B: variable 'v11' is possibly undefined

