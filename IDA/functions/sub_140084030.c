#include "../winhttp.h"

//----- (0000000140084030) ----------------------------------------------------
__int64 __fastcall sub_140084030(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rdx
	__int64 v9; // rbx
	unsigned int v10; // edi
	__int64 v11; // rax
	__int64 v12; // rdx
	_BYTE* v13; // rax
	_BYTE* v14; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0xFui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 12), 0x20ui64);
			if ((int)result >= 0)
			{
				v7 = sub_1403374E0(a2, 16i64 * *(unsigned int*)(a3 + 12));
				*(_QWORD*)(a3 + 16) = v7;
				if (v7)
				{
					v9 = 0i64;
					v10 = 0;
					if (*(_DWORD*)(a3 + 12))
					{
						do
						{
							result = sub_1400852F0(a1, v8, *(_QWORD*)(a3 + 16) + 16i64 * v10);
							if ((int)result < 0)
								return result;
						} while (++v10 < *(_DWORD*)(a3 + 12));
					}
					v11 = sub_1403374E0(a2, 12i64 * *(unsigned int*)(a3 + 12));
					*(_QWORD*)(a3 + 24) = v11;
					if (v11)
					{
						if (*(_DWORD*)(a3 + 12))
						{
							do
							{
								result = sub_1400A8A30(a1, v12, (_DWORD*)(*(_QWORD*)(a3 + 24) + 12 * v9));
								if ((int)result < 0)
									return result;
								v9 = (unsigned int)(v9 + 1);
							} while ((unsigned int)v9 < *(_DWORD*)(a3 + 12));
						}
						v13 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 12));
						*(_QWORD*)(a3 + 32) = v13;
						if (v13)
						{
							result = sub_140337160(a1, v13, 4i64 * *(unsigned int*)(a3 + 12));
							if ((int)result < 0)
								return result;
							v14 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 12));
							*(_QWORD*)(a3 + 40) = v14;
							if (v14)
								return sub_140337160(a1, v14, 4i64 * *(unsigned int*)(a3 + 12));
						}
					}
				}
				return 2147500037i64;
			}
		}
	}
	return result;
}
// 1400840DE: variable 'v8' is possibly undefined
// 14008412F: variable 'v12' is possibly undefined

