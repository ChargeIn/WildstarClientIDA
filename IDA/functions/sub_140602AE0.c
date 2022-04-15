#include "../winhttp.h"

//----- (0000000140602AE0) ----------------------------------------------------
__int64 __fastcall sub_140602AE0(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	unsigned __int64 v5; // rsi
	unsigned __int64 i; // rbx
	_QWORD* v7; // rax
	__int64 v8; // rdx
	void(__fastcall * **v9)(_QWORD, __int64); // rcx
	__int64 v10; // rcx
	__int64 v12; // rcx

	v3 = *(_QWORD*)(a1 + 64);
	if (v3 && *(_QWORD*)(v3 + 72) == *(_QWORD*)a2)
	{
		v5 = *(_QWORD*)(v3 + 96);
		for (i = 0i64; i < v5; ++i)
		{
			v7 = *(_QWORD**)(a1 + 64);
			if (i != v7[13])
			{
				v8 = i >= v7[12] ? 0i64 : *(_QWORD*)(v7[11] + 8 * i);
				if (*(_DWORD*)(v8 + 16) == *(_DWORD*)(qword_140C635F0 + 5760))
					sub_1405E2530(qword_140C65898 + 26680, (_QWORD*)(v8 + 16), v8 + 32);
			}
		}
		v9 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 64);
		if (v9)
			(**v9)(v9, 1i64);
		*(_QWORD*)(a1 + 64) = *(_QWORD*)(a1 + 72);
		sub_140195D70(a1 + 96);
		v10 = qword_140C65898;
		*(_QWORD*)(a1 + 72) = 0i64;
		*(_DWORD*)(v10 + 28568) = 1;
		sub_1400EA3E0(*(_QWORD*)(v10 + 29504), "Group_Left", byte_1409EA14C, *(unsigned int*)(a2 + 8));
		return 0i64;
	}
	else
	{
		v12 = *(_QWORD*)(a1 + 72);
		if (v12 && *(_QWORD*)(v12 + 72) == *(_QWORD*)a2)
		{
			(**(void(__fastcall***)(__int64, __int64))v12)(v12, 1i64);
			*(_QWORD*)(a1 + 72) = 0i64;
		}
		return 0i64;
	}
}
// 1409EA14C: using guessed type _BYTE byte_1409EA14C[16];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

