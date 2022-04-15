#include "../winhttp.h"

//----- (00000001403D3520) ----------------------------------------------------
__int64 __fastcall sub_1403D3520(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
	__int64 v4; // r15
	unsigned int v7; // ebp
	__int64 result; // rax
	__int64 v10; // rdi
	__int64 v11; // rcx
	int v12; // edx
	__int64 v13; // rbx
	__int64 i; // rsi
	__int64 v15; // rax
	__int64 v16; // r8
	bool v17; // zf

	v4 = qword_140C65B70;
	v7 = a2;
	if (!a2)
		return 0i64;
	result = sub_1403ACD90(qword_140C65B70, a2, a3);
	v10 = result;
	if (result)
	{
		v11 = *(_QWORD*)(result + 112);
		v12 = *(_DWORD*)(v11 + 24);
		if (((v12 - 2) & 0xFFFFFFFA) != 0)
			return v7;
		if (v12 == 3)
			return v7;
		if (*(_DWORD*)(v11 + 388))
			return v7;
		v13 = 0i64;
		if (!*(_DWORD*)(result + 40))
			return v7;
		for (i = 0i64; ; i += 168i64)
		{
			v15 = *(_QWORD*)(v10 + 48);
			if (*(_DWORD*)(v15 + i + 16) == 26)
			{
				v16 = *(unsigned int*)(v15 + i + 116);
				if ((_DWORD)v16)
				{
					if ((*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
						+ 24i64))(
							qword_140C659A0,
							a3,
							v16,
							a4,
							0i64,
							0))
					{
						break;
					}
				}
			}
			if (++v13 >= (unsigned __int64)*(unsigned int*)(v10 + 40))
				return v7;
		}
		v7 = *(_DWORD*)(168 * v13 + *(_QWORD*)(v10 + 48) + 64);
		v17 = sub_1403ACD90(v4, v7, a3) == 0;
		result = a2;
		if (!v17)
			return v7;
	}
	return result;
}
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

