#include "../winhttp.h"

//----- (00000001405C9900) ----------------------------------------------------
void __fastcall sub_1405C9900(__int64 a1, int a2)
{
	int v2; // r9d
	unsigned __int64 v5; // rcx
	__int64 v6; // r8
	__int64* i; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rsi
	int v11; // edx
	int v12; // eax
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // r14
	int v16; // eax
	__int64 v17; // rcx
	int v18; // eax
	__int64 v19; // rcx
	__int64 v20; // rcx

	v2 = *(_DWORD*)(a1 + 280);
	if (v2)
	{
		v5 = *(_QWORD*)(qword_140C65898 + 2712);
		v6 = 0i64;
		if (v5)
		{
			for (i = *(__int64**)(qword_140C65898 + 2704); ; ++i)
			{
				v8 = *i;
				if (*i)
				{
					if (*(_DWORD*)(v8 + 64) == v2)
						break;
				}
				if (++v6 >= v5)
					return;
			}
			v9 = sub_1405A4B80(*i, 1);
			v10 = v9;
			if (v9)
			{
				if (a2 == 3)
				{
					v11 = *(_DWORD*)(*(_QWORD*)(v9 + 112) + 24i64);
					if (((v11 - 2) & 0xFFFFFFFA) != 0 || v11 == 3)
					{
						sub_1403BDAC0(qword_140C65898);
						sub_1405CA990(v13, (__int64*)(a1 + 416));
						sub_1405CA990(v14, (__int64*)(a1 + 408));
						v15 = qword_140C65898;
						*(_DWORD*)(qword_140C65898 + 25444) = 0;
						if (!(unsigned int)sub_1403D8C10(v10))
						{
							v16 = dword_140C45E40;
							if (*(_DWORD*)qword_140C63750 < dword_140C45E40)
								v16 = *(_DWORD*)qword_140C63750;
							if (*((_BYTE*)&off_140C45E30 + v16 + 32))
								sub_1403BD8B0(v15, *(_DWORD*)(a1 + 280), (__int64*)v8, v10);
						}
						goto LABEL_32;
					}
					if (((v11 - 2) & 0xFFFFFFFA) != 0)
					{
					LABEL_32:
						*(_DWORD*)(a1 + 272) = a2;
						return;
					}
				}
				else if (a2)
				{
					if (a2 == 2)
					{
						v17 = qword_140C65898;
						*(_DWORD*)(qword_140C65898 + 25444) = **(_DWORD**)(v9 + 112);
						v18 = sub_14039A040(v17, *(_DWORD*)(v8 + 36), a1 + 288, 1, 0, 0i64);
						if (!v18 || v18 == 317)
						{
							sub_1403BD3D0(qword_140C65898, *(_DWORD*)(a1 + 280), a1);
						}
						else
						{
							sub_1403A12A0(qword_140C65898, v18, v10, 0);
							sub_1405CA990(v19, (__int64*)(a1 + 416));
							sub_1405CA990(v20, (__int64*)(a1 + 408));
						}
					}
					goto LABEL_32;
				}
				if ((unsigned int)sub_1403D8C10(v9))
					goto LABEL_30;
				v12 = dword_140C45E40;
				if (*(_DWORD*)qword_140C63750 < dword_140C45E40)
					v12 = *(_DWORD*)qword_140C63750;
				if (*((_BYTE*)&off_140C45E30 + v12 + 32) && *(_DWORD*)(a1 + 272) == 2)
					sub_1403BD8B0(qword_140C65898, *(_DWORD*)(a1 + 280), (__int64*)v8, v10);
				else
					LABEL_30:
				sub_1403BD6D0((__int64*)qword_140C65898, *(_DWORD*)(a1 + 280), a1);
				*(_DWORD*)(qword_140C65898 + 25444) = 0;
				goto LABEL_32;
			}
		}
	}
}
// 1405C99CD: conditional instruction was optimized away because edx.4!=3
// 1405C9A48: variable 'v13' is possibly undefined
// 1405C9A54: variable 'v14' is possibly undefined
// 1405C9B1F: variable 'v19' is possibly undefined
// 1405C9B2B: variable 'v20' is possibly undefined
// 140C45E30: using guessed type __int64 (__fastcall *off_140C45E30)();
// 140C45E40: using guessed type int dword_140C45E40;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

