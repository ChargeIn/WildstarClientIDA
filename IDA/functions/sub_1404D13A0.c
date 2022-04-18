#include "../winhttp.h"

//----- (00000001404D13A0) ----------------------------------------------------
__int64 __fastcall sub_1404D13A0(__int64 a1, int a2, int a3, int a4)
{
	unsigned int v4; // edi
	__int64 v5; // r9
	unsigned int v7; // edx
	unsigned int* v8; // rcx
	unsigned int v9; // eax
	__int64 v10; // rcx
	__int64 result; // rax
	__int64 v12; // rcx
	unsigned int v13[6]; // [rsp+20h] [rbp-18h] BYREF

	v4 = *(_DWORD*)(a1 + 36);
	*(_DWORD*)(a1 + 40) = a4;
	v5 = *(_QWORD*)(a1 + 8);
	*(_DWORD*)(a1 + 36) = a3;
	*(_DWORD*)(a1 + 32) = a2;
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "RewardTrackUpdated", "w", v5);
	v7 = *(_DWORD*)(a1 + 36);
	if (v4 < v7)
	{
		v8 = *(unsigned int**)(*(_QWORD*)(a1 + 8) + 8i64);
		if (v8[1] != 2)
		{
			v9 = *v8;
			v10 = *(_QWORD*)(qword_140C65898 + 29504);
			v13[1] = v7 - v4;
			v13[0] = 1;
			v13[2] = v9;
			sub_1404283D0(v10, v13);
		}
	}
	result = qword_140C65898;
	v12 = *(_QWORD*)(qword_140C65898 + 32736);
	if (v12 && *(_QWORD*)(v12 + 24) && *(_DWORD*)(v12 + 40) != 4)
	{
		result = *(_QWORD*)(v12 + 32);
		if (result)
		{
			while (*(_DWORD*)(result + 40) == 4)
			{
				result = *(_QWORD*)(result + 32);
				if (!result)
					return Apollo_LUAEvent(*(_QWORD*)(v12 + 96), "RewardTrackUpdated", byte_1409EFCFC, *(_QWORD*)(a1 + 8));
			}
		}
		else
		{
			return Apollo_LUAEvent(*(_QWORD*)(v12 + 96), "RewardTrackUpdated", byte_1409EFCFC, *(_QWORD*)(a1 + 8));
		}
	}
	return result;
}
// 1409EFCFC: using guessed type _BYTE byte_1409EFCFC[24];
// 140C65898: using guessed type __int64 qword_140C65898;

