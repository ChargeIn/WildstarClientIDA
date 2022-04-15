#include "../winhttp.h"

//----- (000000014014ED50) ----------------------------------------------------
__int64 __fastcall sub_14014ED50(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rdx
	float v4; // xmm1_4
	float v5; // xmm0_4
	__int64 v6; // rax
	__int64 v7; // rax
	float v8; // xmm0_4
	__int64 v9; // rax
	float v10; // xmm0_4
	__int64 v11; // rax

	result = sub_14014EBC0(a1, 1);
	v3 = result;
	if (result)
	{
		v4 = 0.0;
		if (*(_QWORD*)(result + 16))
			v5 = 0.0;
		else
			v5 = *(float*)(result + 48);
		v6 = *(_QWORD*)(a1 + 16);
		*(double*)v6 = v5;
		*(_DWORD*)(v6 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		v7 = *(_QWORD*)(a1 + 16);
		if (*(_QWORD*)(v3 + 24))
			v8 = 0.0;
		else
			v8 = *(float*)(v3 + 52);
		*(_DWORD*)(v7 + 8) = 3;
		*(double*)v7 = v8;
		*(_QWORD*)(a1 + 16) += 16i64;
		v9 = *(_QWORD*)(a1 + 16);
		if (*(_QWORD*)(v3 + 32))
			v10 = 0.0;
		else
			v10 = *(float*)(v3 + 56);
		*(_DWORD*)(v9 + 8) = 3;
		*(double*)v9 = v10;
		*(_QWORD*)(a1 + 16) += 16i64;
		v11 = *(_QWORD*)(a1 + 16);
		if (!*(_QWORD*)(v3 + 40))
			v4 = *(float*)(v3 + 60);
		*(_DWORD*)(v11 + 8) = 3;
		*(double*)v11 = v4;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 4i64;
	}
	return result;
}

