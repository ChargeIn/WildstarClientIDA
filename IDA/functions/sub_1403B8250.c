#include "../winhttp.h"

//----- (00000001403B8250) ----------------------------------------------------
__int64 __fastcall sub_1403B8250(__int64 a1, unsigned int a2, int a3, int a4)
{
	__int64 v8; // rbx
	__int64 result; // rax
	__int64 v10; // r14
	int v11; // ecx
	__int64(__fastcall * *v12)(); // [rsp+30h] [rbp-28h] BYREF
	int v13; // [rsp+38h] [rbp-20h]
	int v14; // [rsp+3Ch] [rbp-1Ch]
	unsigned int v15; // [rsp+40h] [rbp-18h]

	if (a4 == 24)
	{
		v8 = *(_QWORD*)(a1 + 29504);
		result = (__int64)sub_1400B5DF0(qword_140C658F0, a2, 0i64);
		if (result)
			return Apollo_LUAEvent(v8, "ItemSentToCrate", "oii", result, a3, 24);
	}
	else
	{
		v10 = *(_QWORD*)(a1 + 29504);
		result = (__int64)sub_1400B5DF0(qword_140C658F0, a2, 0i64);
		if (result)
			result = Apollo_LUAEvent(v10, "ItemRemoved", "oii", result, a3, a4);
		if (a4 == 21)
		{
			v11 = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
			v14 = 30;
			v13 = v11;
			v12 = off_140B6F370;
			v15 = a2;
			result = sub_14060AF20((__int64)&v12);
			if ((_DWORD)result)
			{
				result = sub_1403D90D0(qword_140C65898, v13);
				if (result)
				{
					result = sub_14047DCA0(result);
					if (result)
						return sub_14060AFE0((int*)&v12, v13);
				}
			}
		}
	}
	return result;
}
// 140B6F370: using guessed type __int64 (__fastcall *off_140B6F370[255])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

