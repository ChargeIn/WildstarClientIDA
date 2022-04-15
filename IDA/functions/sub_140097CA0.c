#include "../winhttp.h"

//----- (0000000140097CA0) ----------------------------------------------------
__int64 __fastcall sub_140097CA0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rbx
	unsigned int v9; // edi
	__int64 v10; // rax
	__int64 v11; // r14
	__int64 v12; // rax
	__int64 v13; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			v7 = sub_1403374E0(a2, 8i64 * *(unsigned int*)(a3 + 4));
			*(_QWORD*)(a3 + 8) = v7;
			if (!v7)
				return 2147500037i64;
			v8 = 0i64;
			v9 = 0;
			if (*(_DWORD*)(a3 + 4))
			{
				do
				{
					v10 = *(_QWORD*)(a3 + 8);
					v11 = v10 + 8i64 * v9;
					if (!v11)
						return 2147500037i64;
					result = sub_14006C090(a1, (_DWORD*)(v10 + 8i64 * v9), 0x20ui64);
					if ((int)result < 0)
						return result;
					result = sub_14006C090(a1, (_DWORD*)(v11 + 4), 0x20ui64);
					if ((int)result < 0)
						return result;
				} while (++v9 < *(_DWORD*)(a3 + 4));
			}
			result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
			if ((int)result >= 0)
			{
				v12 = sub_1403374E0(a2, 80i64 * *(unsigned int*)(a3 + 16));
				*(_QWORD*)(a3 + 24) = v12;
				if (v12)
				{
					if (*(_DWORD*)(a3 + 16))
					{
						while (1)
						{
							result = sub_140097AE0(a1, v13, *(_QWORD*)(a3 + 24) + 80 * v8);
							if ((int)result < 0)
								break;
							v8 = (unsigned int)(v8 + 1);
							if ((unsigned int)v8 >= *(_DWORD*)(a3 + 16))
								goto LABEL_16;
						}
					}
					else
					{
					LABEL_16:
						result = sub_14006C1C0(a1, (_DWORD*)(a3 + 32));
						if ((int)result >= 0)
						{
							result = sub_14006C1C0(a1, (_DWORD*)(a3 + 36));
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 40), 1ui64);
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, (_DWORD*)(a3 + 44), 1ui64);
									if ((int)result >= 0)
										return sub_14006C090(a1, (_DWORD*)(a3 + 48), 1ui64);
								}
							}
						}
					}
					return result;
				}
				return 2147500037i64;
			}
		}
	}
	return result;
}
// 140097DCF: variable 'v13' is possibly undefined

