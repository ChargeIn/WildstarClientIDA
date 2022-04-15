#include "../winhttp.h"

//----- (00000001406167B0) ----------------------------------------------------
__int64 __fastcall sub_1406167B0(__int64 a1, __int64 a2)
{
	unsigned int v3; // ecx
	int v4; // eax
	bool v5; // zf
	int v6; // eax
	__int64 v7; // rdi
	__int64 v8; // rcx
	int v9; // eax
	__int64 v10; // rcx
	int v11; // ebx
	int v12; // eax
	__int64 v13; // rcx
	__int16* v14; // rax

	v3 = *(_DWORD*)(*(_QWORD*)(a1 + 152) + 4i64);
	if (v3 > 8 || (v4 = 332, !_bittest(&v4, v3)))
		*(_DWORD*)(a1 + 8) = dword_140C636A8;
	v5 = *(_DWORD*)(a1 + 160) == 0;
	*(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 8);
	v6 = *(_DWORD*)(a2 + 4);
	*(_DWORD*)(a1 + 4) = 0;
	*(_DWORD*)(a1 + 16) = v6;
	if (!v5)
	{
		if (v6)
		{
			v7 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 24));
			if (v7)
			{
				if (*(_DWORD*)(a1 + 20))
				{
					v8 = *(_QWORD*)(qword_140C65898 + 7152);
					if (v8 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 24i64))(v8) == 166)
					{
						v9 = sub_1401AE6F0(0, 4);
						v10 = 0x140000000ui64;
						v11 = dword_140B27798[v9];
					}
					else
					{
						v12 = sub_1401AE6F0(0, 4);
						v10 = 0x140000000ui64;
						v11 = dword_140B27450[v12];
					}
				}
				else
				{
					if (!*(_QWORD*)(a1 + 176) && (int)sub_1406177C0((_QWORD*)a1) < 0)
						return 0i64;
					v13 = a1 + 168;
					v11 = **(_DWORD**)(a1 + 168);
					sub_1401C2F20(v13, 0i64);
				}
				if (v11)
				{
					v14 = sub_14034BDD0(v10, v11);
					sub_140474B80(v7, 0x14u, (int*)v14);
					sub_140472ED0(v7, v11);
				}
			}
		}
	}
	return 0i64;
}
// 1406168B5: variable 'v10' is possibly undefined
// 140B27450: using guessed type int dword_140B27450[6];
// 140B27798: using guessed type int dword_140B27798[6];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

