#include "../winhttp.h"

//----- (00000001403C9A70) ----------------------------------------------------
void __fastcall sub_1403C9A70(__int64 a1)
{
	int* v1; // rbx
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // edx
	unsigned int v5; // eax
	unsigned int* v6; // rax
	__int64 v7; // rdx
	__int64 v8; // rcx

	v1 = *(int**)(a1 + 120);
	if (v1)
	{
		v2 = sub_140200220(0x435u);
		if (v2)
			v4 = *(_DWORD*)(v2 + 4);
		else
			v4 = 28349;
		v5 = sub_140612E30(v3, v4, v1[13], v1[55], v1[54]);
		v6 = (unsigned int*)sub_140211280(v5);
		if (v6)
		{
			if ((*(_DWORD*)(qword_140C63628 + 1524) & v6[6]) == 0
				|| *(_DWORD*)(qword_140C635F0 + 5784) != 1
				|| (v7 = v6[2], !(_DWORD)v7))
			{
				v7 = v6[1];
			}
		}
		else
		{
			v7 = 0i64;
		}
		v8 = *(_QWORD*)(qword_140C63628 + 728);
		if (v8)
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v8 + 16i64))(v8, v7, 0i64);
	}
}
// 1403C9AB1: variable 'v3' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63628: using guessed type __int64 qword_140C63628;

