#include "../winhttp.h"

//----- (00000001404AACB0) ----------------------------------------------------
__int64 __fastcall sub_1404AACB0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	__int64 v7; // rcx
	unsigned int v8; // ebx
	__int64 v9; // rdx
	unsigned int v10; // eax
	__int64 v11; // rax
	__int64 v12; // rax

	if ((unsigned int)(a3 - 1) > 0x15)
		return 4i64;
	if (!a4)
		return 23i64;
	if (*(_DWORD*)(a4 + 684))
		return 30i64;
	v7 = *(_QWORD*)(a2 + 8);
	if (((*(_QWORD*)(a2 + 16) - v7) & 0xFFFFFFFFFFFFFFFCui64) != 48)
		return 22i64;
	v8 = 0;
	v9 = 0i64;
	do
	{
		v10 = sub_1407A1440(v7, *(_DWORD*)(v7 + 4 * v9), 1u);
		v11 = sub_1403ACD90(qword_140C65B70, v10, a4);
		if (v11)
		{
			v12 = *(_QWORD*)(v11 + 112);
			if (v8 > 7)
			{
				if (*(_DWORD*)(v12 + 252) == 5)
					return 24i64;
			}
			else if (*(_DWORD*)(v12 + 252) != 5)
			{
				return 24i64;
			}
		}
		v7 = *(_QWORD*)(a2 + 8);
		v9 = ++v8;
	} while (v8 < (unsigned __int64)((*(_QWORD*)(a2 + 16) - v7) >> 2));
	return 1i64;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

