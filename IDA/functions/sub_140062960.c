#include "../winhttp.h"

//----- (0000000140062960) ----------------------------------------------------
unsigned __int64 __fastcall sub_140062960(__int64 a1, int* a2, unsigned __int64 a3)
{
	unsigned __int64 v3; // rsi
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rdx
	int* v9; // rdx
	unsigned __int64 v10; // rdi
	__int64 v12; // [rsp+40h] [rbp+18h] BYREF

	v3 = a3;
	if (!a3)
		return 0i64;
	while (1)
	{
		if (*(_QWORD*)a1)
			goto LABEL_7;
		v6 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(a1 + 16))(
			*(_QWORD*)(a1 + 32),
			*(_QWORD*)(a1 + 24),
			&v12);
		if (!v6)
			return v3;
		v7 = v12;
		if (!v12)
			return v3;
		v8 = v12 - 1;
		*(_QWORD*)(a1 + 8) = v6;
		*(_QWORD*)a1 = v7 - 1;
		*(_QWORD*)(a1 + 8) = v6 + 1;
		*(_QWORD*)a1 = v8 + 1;
		*(_QWORD*)(a1 + 8) = v6;
	LABEL_7:
		v9 = *(int**)(a1 + 8);
		if (*(unsigned __int8*)v9 == -1)
			return v3;
		v10 = *(_QWORD*)a1;
		if (v3 <= *(_QWORD*)a1)
			v10 = v3;
		sub_1407DB590(a2, v9, v10);
		*(_QWORD*)a1 -= v10;
		*(_QWORD*)(a1 + 8) += v10;
		a2 = (int*)((char*)a2 + v10);
		v3 -= v10;
		if (!v3)
			return 0i64;
	}
}
// 1400629C0: conditional instruction was optimized away because ecx.4<100u

