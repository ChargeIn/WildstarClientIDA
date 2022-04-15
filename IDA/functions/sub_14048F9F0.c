#include "../winhttp.h"

//----- (000000014048F9F0) ----------------------------------------------------
__int64 __fastcall sub_14048F9F0(__int64 a1, unsigned int a2)
{
	__int64 v2; // r8
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // r10
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rax
	int* v9; // rdx
	int v10; // eax
	int v11; // r8d
	int v12; // r9d
	int v13; // eax
	__int64 v15; // [rsp+8h] [rbp+8h]
	__int64 v16; // [rsp+8h] [rbp+8h]

	v2 = *(_QWORD*)(qword_140C65948 + 16);
	v3 = v2;
	v4 = *(_QWORD*)(v2 + 8);
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v3 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v3 == v2 || (v15 = v3, a2 < *(_DWORD*)(v3 + 32)))
		v15 = *(_QWORD*)(qword_140C65948 + 16);
	if (v15 == v2)
		return 0i64;
	v5 = *(_QWORD*)(v15 + 40);
	if (!v5)
		return 0i64;
	v6 = *(_QWORD*)(qword_140C65948 + 48);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < a2)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v16 = v7, a2 < *(_DWORD*)(v7 + 32)))
		v16 = *(_QWORD*)(qword_140C65948 + 48);
	if (v16 == v6)
		return 0i64;
	v9 = *(int**)(v16 + 40);
	if (!v9)
		return 0i64;
	v10 = *(_DWORD*)(v5 + 40);
	v11 = 0;
	v12 = 0;
	if (v10)
		v12 = v9[v10 - 1 + 21];
	v13 = v9[8];
	if (v13)
		v11 = v9[v13 - 1 + 21];
	return (unsigned int)(int)(float)(fmaxf(
		0.0,
		fminf(
			(float)((float)((float)v9[7] * 0.0099999998)
				- (float)((float)v11 * (float)(1.0 / (float)v12)))
			/ (float)((float)((float)v9[6] * (float)(1.0 / (float)v12))
				- (float)((float)v11 * (float)(1.0 / (float)v12))),
			1.0))
		* 100.0);
}
// 140C65948: using guessed type __int64 qword_140C65948;

