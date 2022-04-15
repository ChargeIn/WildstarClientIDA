#include "../winhttp.h"

//----- (0000000140546C40) ----------------------------------------------------
_QWORD* __fastcall sub_140546C40(__int64* a1)
{
	_QWORD* result; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rax
	__int64 n; // rax
	__int64 ii; // rax
	_QWORD* v21; // rbx
	__int64 v22; // rax

	result = (_QWORD*)a1[39];
	if (*(_DWORD*)(result[14] + 24i64) != 1)
	{
		sub_140546B70((__int64)a1, a1 + 76);
		sub_140546B70(v3, a1 + 77);
		sub_140546B70(v4, a1 + 78);
		v6 = a1[80];
		v7 = *(_QWORD*)(v6 + 16);
		if (v7 != v6)
		{
			do
			{
				sub_140546B70(v5, *(__int64**)(v7 + 40));
				v8 = *(_QWORD*)(v7 + 24);
				if (v8)
				{
					v7 = *(_QWORD*)(v7 + 24);
					for (i = *(_QWORD*)(v8 + 16); i; i = *(_QWORD*)(i + 16))
						v7 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v7 + 8); v7 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v7 = j;
					if (*(_QWORD*)(v7 + 24) != j)
						v7 = j;
				}
			} while (v7 != a1[80]);
		}
		v11 = a1[88];
		v12 = *(_QWORD*)(v11 + 16);
		if (v12 != v11)
		{
			do
			{
				sub_140546B70(v5, *(__int64**)(v12 + 40));
				v13 = *(_QWORD*)(v12 + 24);
				if (v13)
				{
					v12 = *(_QWORD*)(v12 + 24);
					for (k = *(_QWORD*)(v13 + 16); k; k = *(_QWORD*)(k + 16))
						v12 = k;
				}
				else
				{
					for (m = *(_QWORD*)(v12 + 8); v12 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
						v12 = m;
					if (*(_QWORD*)(v12 + 24) != m)
						v12 = m;
				}
			} while (v12 != a1[88]);
		}
		v16 = a1[84];
		v17 = *(_QWORD*)(v16 + 16);
		if (v17 != v16)
		{
			do
			{
				sub_140546B70(v5, *(__int64**)(v17 + 40));
				v18 = *(_QWORD*)(v17 + 24);
				if (v18)
				{
					v17 = *(_QWORD*)(v17 + 24);
					for (n = *(_QWORD*)(v18 + 16); n; n = *(_QWORD*)(n + 16))
						v17 = n;
				}
				else
				{
					for (ii = *(_QWORD*)(v17 + 8); v17 == *(_QWORD*)(ii + 24); ii = *(_QWORD*)(ii + 8))
						v17 = ii;
					if (*(_QWORD*)(v17 + 24) != ii)
						v17 = ii;
				}
			} while (v17 != a1[84]);
		}
		result = (_QWORD*)a1[92];
		v21 = (_QWORD*)result[2];
		if (v21 != result)
		{
			do
			{
				sub_140546B70(v5, (__int64*)v21[5]);
				v22 = v21[3];
				if (v22)
				{
					v21 = (_QWORD*)v21[3];
					for (result = *(_QWORD**)(v22 + 16); result; result = (_QWORD*)result[2])
						v21 = result;
				}
				else
				{
					for (result = (_QWORD*)v21[1]; v21 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
						v21 = result;
					if ((_QWORD*)v21[3] != result)
						v21 = result;
				}
			} while (v21 != (_QWORD*)a1[92]);
		}
	}
	return result;
}
// 140546C76: variable 'v3' is possibly undefined
// 140546C82: variable 'v4' is possibly undefined
// 140546C9B: variable 'v5' is possibly undefined

