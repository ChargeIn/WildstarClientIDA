#include "../winhttp.h"

//----- (00000001405F6F90) ----------------------------------------------------
__int64 __fastcall sub_1405F6F90(__int64 a1, unsigned int a2, int a3, _QWORD* a4)
{
	__int64 v4; // r11
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rcx
	unsigned int v9; // eax
	__int64 result; // rax
	unsigned int v11; // ecx
	__int64 v12; // rcx
	__int64 k; // rcx
	__int64 m; // rcx
	__int64 v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // rax
	int v18; // eax
	unsigned int v19; // ecx
	__int64 v20; // rcx
	__int64 i; // rcx
	__int64 j; // rcx
	__int64 v23; // [rsp+8h] [rbp+8h]
	__int64 v24; // [rsp+8h] [rbp+8h]

	v4 = qword_140C65988;
	v6 = *(_QWORD*)(qword_140C65988 + 144);
	*a4 = 0i64;
	a4[1] = 0i64;
	a4[2] = 0i64;
	a4[3] = 0i64;
	a4[4] = 0i64;
	a4[5] = 0i64;
	v7 = *(_QWORD*)(v6 + 8);
	v8 = v6;
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < a2)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v8 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v8 == v6 || (v9 = *(_DWORD*)(v8 + 32), a2 < v9) || v9 >= a2 && *(_DWORD*)(v8 + 36))
		v23 = v6;
	else
		v23 = v8;
	result = v23;
	if (v23 == v6)
	{
		v15 = *(_QWORD*)(v4 + 112);
		v16 = v15;
		v17 = *(_QWORD*)(v15 + 8);
		while (v17)
		{
			if (*(_DWORD*)(v17 + 32) < a3)
			{
				v17 = *(_QWORD*)(v17 + 24);
			}
			else
			{
				v16 = v17;
				v17 = *(_QWORD*)(v17 + 16);
			}
		}
		if (v16 == v15 || (v18 = *(_DWORD*)(v16 + 32), a3 < v18) || v18 >= a3 && *(_DWORD*)(v16 + 36))
			v24 = *(_QWORD*)(v4 + 112);
		else
			v24 = v16;
		result = v24;
		while (result != v15)
		{
			if (*(_DWORD*)(result + 32) != a3)
				break;
			v19 = *(_DWORD*)(result + 36);
			if (v19 >= 6)
				break;
			a4[v19] = *(_QWORD*)(result + 40);
			v20 = *(_QWORD*)(result + 24);
			if (v20)
			{
				result = *(_QWORD*)(result + 24);
				for (i = *(_QWORD*)(v20 + 16); i; i = *(_QWORD*)(i + 16))
					result = i;
			}
			else
			{
				for (j = *(_QWORD*)(result + 8); result == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					result = j;
				if (*(_QWORD*)(result + 24) != j)
					result = j;
			}
		}
	}
	else
	{
		do
		{
			if (*(_DWORD*)(result + 32) != a2)
				break;
			v11 = *(_DWORD*)(result + 36);
			if (v11 >= 6)
				break;
			a4[v11] = *(_QWORD*)(result + 40);
			v12 = *(_QWORD*)(result + 24);
			if (v12)
			{
				result = *(_QWORD*)(result + 24);
				for (k = *(_QWORD*)(v12 + 16); k; k = *(_QWORD*)(k + 16))
					result = k;
			}
			else
			{
				for (m = *(_QWORD*)(result + 8); result == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
					result = m;
				if (*(_QWORD*)(result + 24) != m)
					result = m;
			}
		} while (result != v6);
	}
	return result;
}
// 140C65988: using guessed type __int64 qword_140C65988;

