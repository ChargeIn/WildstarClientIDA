#include "../winhttp.h"

//----- (000000014007F720) ----------------------------------------------------
__int64 __fastcall sub_14007F720(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rdx
	unsigned int v9; // esi
	unsigned int v10; // ebp
	__int64 v11; // rax
	__int64 v12; // rdx
	__int64 v13; // rdx
	_BYTE* v14; // rax
	_BYTE* v15; // rax
	_BYTE* v16; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 8));
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 2ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 20), 5ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 5ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 0x20ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 36), 0x20ui64);
								if ((int)result >= 0)
								{
									v7 = sub_1403374E0(a2, 16i64 * *(unsigned int*)(a3 + 36));
									*(_QWORD*)(a3 + 40) = v7;
									if (v7)
									{
										v9 = 0;
										v10 = 0;
										if (*(_DWORD*)(a3 + 36))
										{
											do
											{
												result = sub_1400AB890(a1, v8, (_DWORD*)(*(_QWORD*)(a3 + 40) + 16i64 * v10));
												if ((int)result < 0)
													return result;
											} while (++v10 < *(_DWORD*)(a3 + 36));
										}
										result = sub_14006C090(a1, (_DWORD*)(a3 + 48), 0x20ui64);
										if ((int)result < 0)
											return result;
										v11 = sub_1403374E0(a2, 16i64 * *(unsigned int*)(a3 + 48));
										*(_QWORD*)(a3 + 56) = v11;
										if (v11)
										{
											if (*(_DWORD*)(a3 + 48))
											{
												do
												{
													result = sub_1400AB890(a1, v12, (_DWORD*)(*(_QWORD*)(a3 + 56) + 16i64 * v9));
													if ((int)result < 0)
														return result;
												} while (++v9 < *(_DWORD*)(a3 + 48));
											}
											result = sub_14006C090(a1, (_DWORD*)(a3 + 64), 0xFui64);
											if ((int)result < 0)
												return result;
											result = sub_14006C090(a1, (_DWORD*)(a3 + 68), 0xFui64);
											if ((int)result < 0)
												return result;
											result = sub_14006C090(a1, (_DWORD*)(a3 + 72), 0xEui64);
											if ((int)result < 0)
												return result;
											result = sub_1400AB810(a1, v13, (_DWORD*)(a3 + 76));
											if ((int)result < 0)
												return result;
											result = sub_14006C090(a1, (_DWORD*)(a3 + 96), 3ui64);
											if ((int)result < 0)
												return result;
											result = sub_14006C090(a1, (_DWORD*)(a3 + 100), 1ui64);
											if ((int)result < 0)
												return result;
											result = sub_14006C090(a1, (_DWORD*)(a3 + 104), 1ui64);
											if ((int)result < 0)
												return result;
											result = sub_14006C090(a1, (_DWORD*)(a3 + 108), 0x20ui64);
											if ((int)result < 0)
												return result;
											result = sub_14006C090(a1, (_DWORD*)(a3 + 112), 4ui64);
											if ((int)result < 0)
												return result;
											v14 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 112));
											*(_QWORD*)(a3 + 120) = v14;
											if (v14)
											{
												result = sub_140337160(a1, v14, 4i64 * *(unsigned int*)(a3 + 112));
												if ((int)result < 0)
													return result;
												v15 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 112));
												*(_QWORD*)(a3 + 128) = v15;
												if (v15)
												{
													result = sub_140337160(a1, v15, 4i64 * *(unsigned int*)(a3 + 112));
													if ((int)result < 0)
														return result;
													result = sub_14006C090(a1, (_DWORD*)(a3 + 136), 0x20ui64);
													if ((int)result < 0)
														return result;
													v16 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 136));
													*(_QWORD*)(a3 + 144) = v16;
													if (v16)
													{
														result = sub_140337160(a1, v16, 4i64 * *(unsigned int*)(a3 + 136));
														if ((int)result >= 0)
															return sub_14006C1C0(a1, (_DWORD*)(a3 + 152));
														return result;
													}
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
			}
		}
	}
	return result;
}
// 14007F84E: variable 'v8' is possibly undefined
// 14007F8AE: variable 'v12' is possibly undefined
// 14007F917: variable 'v13' is possibly undefined

