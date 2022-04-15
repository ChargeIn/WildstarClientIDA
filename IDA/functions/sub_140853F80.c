#include "../winhttp.h"

//----- (0000000140853F80) ----------------------------------------------------
unsigned __int64 __fastcall sub_140853F80(__int64 a1, int a2)
{
	unsigned __int64 result; // rax
	__int64 v3; // rdi
	__int64* v6; // rdi
	_DWORD* v7; // rdi
	unsigned __int64 v8; // rcx

	result = *(_QWORD*)(a1 + 40);
	v3 = *(_QWORD*)(a1 + 48);
	if (result != v3)
	{
		do
		{
			if (*(_DWORD*)result == a2)
				break;
			result += 24i64;
		} while (result != v3);
		if (result != v3)
		{
			v6 = (__int64*)(result + 8);
			if (result != -8i64)
			{
				sub_140869260(*v6);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)*v6 + 16i64))(*v6);
				v7 = *(_DWORD**)(a1 + 40);
				result = *(_QWORD*)(a1 + 48);
				if (v7 != (_DWORD*)result)
				{
					do
					{
						if (*v7 == a2)
							break;
						v7 += 6;
					} while (v7 != (_DWORD*)result);
					if (v7 != (_DWORD*)result)
					{
						v8 = result - 24;
						if ((unsigned __int64)v7 < result - 24)
						{
							result = 0xAAAAAAAAAAAAAAABui64 * (v8 - (_QWORD)v7 - 1);
							qmemcpy(v7, v7 + 6, 24 * ((v8 - (unsigned __int64)v7 - 1) / 0x18 + 1));
						}
						*(_QWORD*)(a1 + 48) -= 24i64;
					}
				}
			}
		}
	}
	return result;
}

