#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A0FA0) ----------------------------------------------------
__int64 __fastcall sub_1400A0FA0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 i; // rbx
	_BYTE* v9; // rax
	_BYTE* v10; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 8));
			if ((int)result >= 0)
			{
				result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 16));
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0xEui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 0x20ui64);
						if ((int)result >= 0)
						{
							v7 = sub_1403374E0(a2, 80i64 * *(unsigned int*)(a3 + 28));
							*(_QWORD*)(a3 + 32) = v7;
							if (v7)
							{
								for (i = 0i64; (unsigned int)i < *(_DWORD*)(a3 + 28); i = (unsigned int)(i + 1))
								{
									result = sub_1400A0DC0(a1, a2, *(_QWORD*)(a3 + 32) + 80 * i);
									if ((int)result < 0)
										return result;
								}
								result = sub_14006C090(a1, (_DWORD*)(a3 + 40), 0x20ui64);
								if ((int)result < 0)
									return result;
								v9 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 40));
								*(_QWORD*)(a3 + 48) = v9;
								if (v9)
								{
									result = sub_140337160(a1, v9, 4i64 * *(unsigned int*)(a3 + 40));
									if ((int)result < 0)
										return result;
									v10 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 40));
									*(_QWORD*)(a3 + 56) = v10;
									if (v10)
										return sub_140337160(a1, v10, 4i64 * *(unsigned int*)(a3 + 40));
								}
							}
							return 2147500037i64;
						}
					}
				}
			}
		}
	}
	return result;
}

