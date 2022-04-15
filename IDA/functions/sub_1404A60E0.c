#include "../winhttp.h"

//----- (00000001404A60E0) ----------------------------------------------------
float __fastcall sub_1404A60E0(__int64 a1, unsigned int a2)
{
	__int64 v2; // r9
	__int64 v3; // rdx
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // r10
	__int64 v8; // [rsp+8h] [rbp+8h]

	v2 = a2;
	v3 = *(_QWORD*)(qword_140C659A8 + 56);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < (unsigned int)v2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v8 = v4, (unsigned int)v2 < *(_DWORD*)(v4 + 32)))
		v8 = *(_QWORD*)(qword_140C659A8 + 56);
	if (v8 == v3)
		return -1.0;
	v6 = *(_QWORD*)(v8 + 40);
	if (!v6)
		return -1.0;
	else
		return (float)((float)(*(float*)(*(_QWORD*)(qword_140C659A8 + 136) + 12 * v2)
			* *(float*)(*(_QWORD*)(qword_140C659A8 + 128) + 12i64 * *(int*)(v6 + 4)))
			* *(float*)(v6 + 12))
		+ (float)(*(float*)(*(_QWORD*)(qword_140C659A8 + 136) + 12 * v2 + 4)
			+ *(float*)(*(_QWORD*)(qword_140C659A8 + 128) + 12i64 * *(int*)(v6 + 4) + 4));
}
// 140C659A8: using guessed type __int64 qword_140C659A8;

