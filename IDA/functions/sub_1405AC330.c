#include "../winhttp.h"

//----- (00000001405AC330) ----------------------------------------------------
void __fastcall sub_1405AC330(__int64 a1)
{
	int v2; // edi
	int v3; // esi
	__int64 v4; // rax
	int v5; // esi
	__int64 v6; // rax
	int v7; // esi
	__int64 v8; // rax
	__int64 v9; // rax

	v2 = 0;
	v3 = 0;
	v4 = sub_140205FA0(*(_DWORD*)(a1 + 184));
	if (v4)
		v3 = *(_DWORD*)(v4 + 4);
	sub_1405AC4D0(a1, 1, v3);
	v5 = 0;
	v6 = sub_140205FA0(*(_DWORD*)(a1 + 184));
	if (v6)
		v5 = *(_DWORD*)(v6 + 4);
	sub_1405AC4D0(a1, 2, v5);
	v7 = 0;
	v8 = sub_140205FA0(*(_DWORD*)(a1 + 184));
	if (v8)
		v7 = *(_DWORD*)(v8 + 4);
	sub_1405AC4D0(a1, 4, v7);
	v9 = sub_140205FA0(*(_DWORD*)(a1 + 184));
	if (v9)
		v2 = *(_DWORD*)(v9 + 4);
	sub_1405AC4D0(a1, 3, v2);
}

