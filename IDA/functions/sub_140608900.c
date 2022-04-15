#include "../winhttp.h"

//----- (0000000140608900) ----------------------------------------------------
__int64 __fastcall sub_140608900(__int64 a1, unsigned int a2)
{
	__int64 v2; // r9
	__int64 v3; // r8
	__int64 v4; // rax
	__int64 result; // rax
	__int64 v6; // rbx
	__int64 v7; // r11
	__int64 v8; // [rsp+30h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 128);
	v3 = v2;
	v4 = *(_QWORD*)(v2 + 8);
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v3 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v3 == v2 || (v8 = v3, a2 < *(_DWORD*)(v3 + 32)))
		v8 = *(_QWORD*)(a1 + 128);
	result = v8;
	if (v8 != v2)
	{
		v6 = *(_QWORD*)(v8 + 40);
		if (v6)
		{
			if (*(_BYTE*)(v6 + 412))
			{
				result = sub_140608230(*(_QWORD*)v6, *(_QWORD*)(v8 + 40));
				if ((_DWORD)result)
				{
					result = sub_1406082C0(v7, v6);
					*(_BYTE*)(v6 + 412) = 0;
				}
			}
		}
	}
	return result;
}
// 14060897F: variable 'v7' is possibly undefined

