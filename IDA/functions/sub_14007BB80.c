#include "../winhttp.h"

//----- (000000014007BB80) ----------------------------------------------------
__int64 __fastcall sub_14007BB80(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rdi
	unsigned int v9; // ebp
	__int64 v10; // rax
	unsigned int v11; // ebp
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rbp

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14007B930(a1, a2, a3 + 16);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
					if ((int)result >= 0)
					{
						v7 = sub_1403374E0(a2, 24i64 * *(unsigned int*)(a3 + 32));
						*(_QWORD*)(a3 + 40) = v7;
						if (v7)
						{
							v8 = 0i64;
							v9 = 0;
							if (*(_DWORD*)(a3 + 32))
							{
								do
								{
									result = sub_14007B9E0(a1, a2, (_DWORD*)(*(_QWORD*)(a3 + 40) + 24i64 * v9));
									if ((int)result < 0)
										return result;
								} while (++v9 < *(_DWORD*)(a3 + 32));
							}
							result = sub_14006C090(a1, (_DWORD*)(a3 + 48), 0x20ui64);
							if ((int)result < 0)
								return result;
							v10 = sub_1403374E0(a2, 48i64 * *(unsigned int*)(a3 + 48));
							*(_QWORD*)(a3 + 56) = v10;
							if (v10)
							{
								v11 = 0;
								if (*(_DWORD*)(a3 + 48))
								{
									do
									{
										result = sub_14007BA50(a1, a2, (_DWORD*)(*(_QWORD*)(a3 + 56) + 48i64 * v11));
										if ((int)result < 0)
											return result;
									} while (++v11 < *(_DWORD*)(a3 + 48));
								}
								result = sub_14006C090(a1, (_DWORD*)(a3 + 64), 0x20ui64);
								if ((int)result < 0)
									return result;
								v12 = sub_1403374E0(a2, 8i64 * *(unsigned int*)(a3 + 64));
								*(_QWORD*)(a3 + 72) = v12;
								if (v12)
								{
									if (!*(_DWORD*)(a3 + 64))
									{
									LABEL_24:
										result = sub_14006C090(a1, (_DWORD*)(a3 + 80), 0x20ui64);
										if ((int)result >= 0)
										{
											result = sub_14006C090(a1, (_DWORD*)(a3 + 84), 0x20ui64);
											if ((int)result >= 0)
												return sub_140337160(a1, (_BYTE*)(a3 + 88), 12i64);
										}
										return result;
									}
									while (1)
									{
										v13 = *(_QWORD*)(a3 + 72);
										v14 = v13 + 8 * v8;
										if (!v14)
											break;
										result = sub_14006C090(a1, (_DWORD*)(v13 + 8 * v8), 0xFui64);
										if ((int)result < 0)
											return result;
										result = sub_14006C090(a1, (_DWORD*)(v14 + 4), 0x20ui64);
										if ((int)result < 0)
											return result;
										v8 = (unsigned int)(v8 + 1);
										if ((unsigned int)v8 >= *(_DWORD*)(a3 + 64))
											goto LABEL_24;
									}
								}
							}
						}
						return 2147500037i64;
					}
				}
			}
		}
	}
	return result;
}

