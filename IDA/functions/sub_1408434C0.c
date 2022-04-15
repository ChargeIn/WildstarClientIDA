#include "../winhttp.h"

//----- (00000001408434C0) ----------------------------------------------------
__int64 __fastcall sub_1408434C0(__int64 a1, __int64 a2, char a3)
{
	__int64 result; // rax
	__int64 v6; // rbx
	__int64 v7; // rdi
	__int64 v8; // rax
	unsigned __int64 v9; // [rsp+20h] [rbp-38h]
	__m128i v10; // [rsp+30h] [rbp-28h] BYREF

	result = *(unsigned int*)(a2 + 40);
	if ((_DWORD)result)
	{
		if (a3)
		{
			*(_DWORD*)(a2 + 40) = 0;
		}
		else
		{
			result = (unsigned int)(result - 1);
			*(_DWORD*)(a2 + 40) = result;
		}
		if (!*(_DWORD*)(a2 + 40))
		{
			v6 = *(_QWORD*)(a2 + 32);
			while (v6)
			{
				v7 = v6;
				v6 = *(_QWORD*)(v6 + 32);
				if (*(_WORD*)(v7 + 60) == 1027)
				{
					sub_1408552B0(*(_DWORD*)(v7 + 56));
					LODWORD(v9) = *(_DWORD*)(v7 + 64);
					v10 = (__m128i)v9;
					v8 = sub_140868CC0(a1 + 1776, &v10);
					if (v8)
						sub_140842230(v8, 0);
				}
			}
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		}
	}
	return result;
}
// 140843553: variable 'v9' is possibly undefined

