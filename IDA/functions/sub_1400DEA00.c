#include "../winhttp.h"

//----- (00000001400DEA00) ----------------------------------------------------
__int64 __fastcall sub_1400DEA00(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rsi
	__int64 v5; // rcx
	int v6; // edi
	_DWORD* v7; // rax
	__int64 v8; // rax
	int v9; // ecx
	int v10; // r14d
	int v11; // r14d
	__int64 v12; // rax
	int v13; // ecx
	int v14; // edx
	int v16; // [rsp+20h] [rbp-18h] BYREF
	int v17; // [rsp+24h] [rbp-14h]
	int v18; // [rsp+2Ch] [rbp-Ch]

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = sub_1400D6530((__int64)a1, 2);
		v4 = v3;
		if (v3)
		{
			v5 = *(_QWORD*)(v3 + 16);
			if (v5)
			{
				if ((v5 == v2 || sub_1400D1A90(v5, v2)) && v2 != v4)
				{
					v6 = 0;
					if (*(char*)(v2 + 29) >= 0)
					{
						v7 = sub_1400CB0E0(v2, &v16, v2 + 64);
						*(_DWORD*)(v2 + 396) = *v7;
						*(_DWORD*)(v2 + 400) = v7[1];
						*(_DWORD*)(v2 + 404) = v7[2];
						*(_DWORD*)(v2 + 408) = v7[3];
						*(_BYTE*)(v2 + 29) |= 0x80u;
						v8 = v2;
						do
						{
							if (!*(_DWORD*)(v8 + 392))
								break;
							*(_DWORD*)(v8 + 392) = 0;
							v8 = *(_QWORD*)(v8 + 16);
						} while (v8);
					}
					v9 = *(_DWORD*)(v2 + 400);
					v10 = *(_DWORD*)(v2 + 408);
					if ((*(_DWORD*)(v4 + 656) & 0x100) != 0)
					{
						v9 = *(_DWORD*)(v2 + 720);
						v10 = *(_DWORD*)(v2 + 728);
					}
					v11 = v10 - v9;
					sub_1400CB3D0(v4, &v16);
					if ((*(_BYTE*)(v2 + 656) & 2) != 0)
					{
						v12 = *(_QWORD*)(v2 + 472);
						if (v12)
							v13 = *(_DWORD*)(v12 + 1300);
						else
							v13 = 0;
						if (v17 > v11 + v13)
						{
							v14 = v18 - v11;
						LABEL_23:
							sub_1400CAC30((_QWORD*)v2, v14);
							return 0i64;
						}
						if (v18 < v13)
						{
							if (v17 > 0)
								v6 = v17;
							v14 = v6;
							goto LABEL_23;
						}
					}
				}
			}
		}
	}
	return 0i64;
}

