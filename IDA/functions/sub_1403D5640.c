#include "../winhttp.h"

//----- (00000001403D5640) ----------------------------------------------------
bool __fastcall sub_1403D5640(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	unsigned int v4; // eax
	unsigned int v5; // r10d
	bool v6; // cf
	__int64 v7; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v12; // rax
	__int64 n; // rax
	__int64 ii; // rax

	if (a1 != a2)
	{
		while (a3 != a4)
		{
			v4 = *(_DWORD*)(a3 + 32);
			v5 = *(_DWORD*)(a1 + 32);
			if (v4 < v5)
				return 0;
			v6 = v5 < v4;
			v7 = *(_QWORD*)(a1 + 24);
			if (v6)
			{
				if (v7)
				{
					a1 = *(_QWORD*)(a1 + 24);
					for (i = *(_QWORD*)(v7 + 16); i; i = *(_QWORD*)(i + 16))
						a1 = i;
				}
				else
				{
					for (j = *(_QWORD*)(a1 + 8); a1 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						a1 = j;
					if (*(_QWORD*)(a1 + 24) != j)
						a1 = j;
				}
			}
			else
			{
				if (v7)
				{
					a1 = *(_QWORD*)(a1 + 24);
					for (k = *(_QWORD*)(v7 + 16); k; k = *(_QWORD*)(k + 16))
						a1 = k;
				}
				else
				{
					for (m = *(_QWORD*)(a1 + 8); a1 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
						a1 = m;
					if (*(_QWORD*)(a1 + 24) != m)
						a1 = m;
				}
				v12 = *(_QWORD*)(a3 + 24);
				if (v12)
				{
					a3 = *(_QWORD*)(a3 + 24);
					for (n = *(_QWORD*)(v12 + 16); n; n = *(_QWORD*)(n + 16))
						a3 = n;
				}
				else
				{
					for (ii = *(_QWORD*)(a3 + 8); a3 == *(_QWORD*)(ii + 24); ii = *(_QWORD*)(ii + 8))
						a3 = ii;
					if (*(_QWORD*)(a3 + 24) != ii)
						a3 = ii;
				}
			}
			if (a1 == a2)
				return a3 == a4;
		}
	}
	return a3 == a4;
}

