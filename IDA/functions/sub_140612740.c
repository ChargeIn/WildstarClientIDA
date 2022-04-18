#include "../winhttp.h"

//----- (0000000140612740) ----------------------------------------------------
__int64 __fastcall sub_140612740(__int64 a1, unsigned int* a2)
{
	int v2; // esi
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rbx
	int v8; // ebp
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rax
	unsigned int v13; // [rsp+20h] [rbp-28h]
	int v14; // [rsp+50h] [rbp+8h] BYREF

	*(_DWORD*)(a1 + 28568) = 1;
	*(_DWORD*)(a1 + 31216) = 0;
	v2 = *a2;
	v4 = sub_140617410(a1, *a2);
	v5 = v4;
	if (!v4 || !*(_QWORD*)(v4 + 152))
		return 2147500037i64;
	v6 = qword_140C65970;
	if (!qword_140C65970)
		return 2147500037i64;
	v8 = a2[1];
	v14 = v2;
	sub_1400EE810(qword_140C65970 + 96, &v14);
	v10 = sub_140617410(v9, v2);
	if (v10)
	{
		sub_1406168F0(v10, v8);
		v11 = *(_QWORD*)(v6 + 88);
		if (v11)
		{
			v12 = sub_140572E80(v11, v2, 0);
			if (v12)
				sub_14056B530(*(_QWORD*)(v12 + 48));
		}
	}
	v13 = a2[1];
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "SoldierHoldoutEnd", "#i", *(_QWORD*)(v5 + 152), v13);
	return 0i64;
}
// 1406127C4: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

