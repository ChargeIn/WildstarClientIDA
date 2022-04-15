#include "../winhttp.h"

//----- (00000001400518A0) ----------------------------------------------------
__int64 __fastcall sub_1400518A0(__int64 a1, int a2, int a3, int a4)
{
	__int64 v5; // r14
	unsigned __int64 v7; // rdi
	_QWORD* v8; // rbx
	int* v10; // rbx
	int v11; // eax
	bool v12; // zf
	int v13; // [rsp+20h] [rbp-38h] BYREF
	int v14[4]; // [rsp+28h] [rbp-30h]

	v5 = a4;
	v13 = a2;
	v7 = (*(__int64(__fastcall**)(int*))(a1 + 664))(&v13);
	v8 = *(_QWORD**)(*(_QWORD*)(a1 + 656) + 8 * (v7 % *(_QWORD*)(a1 + 648)));
	if (!v8)
		return 0i64;
	while (v7 != *v8 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 672))(&v13, v8 + 2))
	{
		v8 = (_QWORD*)v8[1];
		if (!v8)
			return 0i64;
	}
	v10 = (int*)v8 + 5;
	if (v10
		&& ((v14[0] = *v10, v14[1] = v10[1], v11 = v10[2], (v14[2] = v11) == 0) ? (v12 = a3 == 1) : (v12 = v11 == a3), v12))
	{
		return (unsigned int)v14[v5];
	}
	else
	{
		return 0i64;
	}
}

