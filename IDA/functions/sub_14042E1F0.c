#include "../winhttp.h"

//----- (000000014042E1F0) ----------------------------------------------------
__int64 __fastcall sub_14042E1F0(__int64 a1, int** a2)
{
	unsigned __int64 v2; // rdi
	unsigned __int64 v4; // rax
	int* v5; // rdx
	int v6; // ecx
	int* v7; // rdi
	unsigned __int64 i; // rcx
	int* v9; // rdi
	unsigned __int64 j; // rcx
	int v12; // [rsp+20h] [rbp-98h]
	int v13; // [rsp+28h] [rbp-90h]
	int v14; // [rsp+30h] [rbp-88h]
	int v15; // [rsp+38h] [rbp-80h]
	int v16; // [rsp+40h] [rbp-78h]
	int v17; // [rsp+48h] [rbp-70h]
	int v18; // [rsp+50h] [rbp-68h]
	int v19; // [rsp+58h] [rbp-60h]
	int v20; // [rsp+60h] [rbp-58h]
	int v22[6]; // [rsp+70h] [rbp-48h] BYREF
	int v23[6]; // [rsp+88h] [rbp-30h] BYREF

	v2 = (unsigned __int64)a2[1];
	if (v2 > 5)
		v2 = 5i64;
	v4 = 0i64;
	if (!v2)
		goto LABEL_7;
	v5 = *a2;
	do
	{
		v6 = *v5;
		++v4;
		v5 += 2;
		v22[v4 + 5] = v6;
		v22[v4 - 1] = *(v5 - 1);
	} while (v4 < v2);
	if (v4 < 5)
	{
	LABEL_7:
		v7 = &v22[v4];
		for (i = (4 * (5 - v4)) >> 2; i; --i)
			*v7++ = 0;
		v9 = &v23[v4];
		for (j = (4 * (5 - v4)) >> 2; j; --j)
			*v9++ = 0;
	}
	v20 = v22[4];
	v19 = v23[4];
	v18 = v22[3];
	v17 = v23[3];
	v16 = v22[2];
	v15 = v23[2];
	v14 = v22[1];
	v13 = v23[1];
	v12 = v22[0];
	return sub_1400EA3E0(
		a1,
		"TargetThreatListUpdated",
		"UiUiUiUiUi",
		(unsigned int)v23[0],
		v12,
		v13,
		v14,
		v15,
		v16,
		v17,
		v18,
		v19,
		v20);
}

