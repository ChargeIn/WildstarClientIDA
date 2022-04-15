#include "../winhttp.h"

//----- (000000014039F600) ----------------------------------------------------
void __fastcall sub_14039F600(__int64 a1, int a2)
{
	__int64 v4; // r13
	__int64 v5; // rdi
	int v6; // ecx
	int v7; // edx
	BOOL v8; // r8d
	__int64 v9; // rcx
	__int64 v10; // rbp
	int v11; // eax
	int v12; // edi
	int v13; // r10d
	__int64 v14; // r15
	__int64 v15; // r12
	__int64 v16; // rax
	__int64 v17; // rbp
	__int64 v18; // rcx
	__int64 v19; // r8
	__int64 v20; // r8
	__int64 v21; // r11
	__int64 v22; // r9
	int v23; // eax
	int v24[7]; // [rsp+30h] [rbp-F8h] BYREF
	int v25; // [rsp+4Ch] [rbp-DCh]
	int v26; // [rsp+54h] [rbp-D4h]
	int v27; // [rsp+88h] [rbp-A0h]
	int v28; // [rsp+130h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 + 120) && *(_QWORD*)(a1 + 25744) && !*(_DWORD*)(a1 + 30956) && !*(_DWORD*)(a1 + 30168))
	{
		if (!a2)
		{
			*(_DWORD*)(a1 + 30956) = 0;
			return;
		}
		v4 = sub_14039F590(a1, a2);
		if (v4)
		{
			sub_1407E4830(v24, 0i64, 0xC8ui64);
			v5 = *(_QWORD*)(a1 + 120);
			v6 = *(_DWORD*)(v5 + 8);
			v27 = 1;
			v25 = v6;
			v7 = **(_DWORD**)(v4 + 112);
			v24[0] = v7;
			if (v7)
			{
				if (v5)
				{
					v8 = *(_QWORD*)(qword_140C65898 + 120) == v5 || *(_QWORD*)(qword_140C65898 + 25744) == v5;
					v9 = 0i64;
					if (v8)
						v9 = qword_140C65898;
					if (v9 && sub_1405A5B90(v9, v7))
						goto LABEL_18;
				}
				if (sub_1407A0FD0(qword_140C65B70, v7))
				{
				LABEL_18:
					if (v5)
						v26 = *(_DWORD*)(v5 + 8);
					v10 = qword_140C65B70;
					v11 = sub_1403AE8C0(qword_140C65B70, (__int64)v24, 0i64, 0i64, qword_140C659A0, 1);
					v12 = v11;
					if (v11)
					{
						if (v11 == 317)
						{
							v13 = 317;
						LABEL_35:
							v21 = *(_QWORD*)(a1 + 120);
							if (!v21
								|| !*(_QWORD*)(a1 + 25744)
								|| !(unsigned int)sub_14045E630(*(_QWORD*)(a1 + 25744))
								|| *(_QWORD*)(v22 + 856) && !*(_QWORD*)(v22 + 1224))
							{
								v23 = dword_140C636A8;
								*(_QWORD*)(a1 + 30956) = 1i64;
								*(_DWORD*)(a1 + 30968) = a2;
								*(_DWORD*)(a1 + 30964) = v23;
								if (v13 != 317)
									sub_14046AFC0(v21, v4, 0i64);
								v28 = a2;
								sub_1403F4900(a1, 0x15Cu, (__int64)&v28);
							}
							return;
						}
					LABEL_34:
						v13 = v12;
						if (v12)
							return;
						goto LABEL_35;
					}
					v14 = sub_1403D90D0(qword_140C65898, v25);
					v15 = sub_1403D90D0(qword_140C65898, v26);
					if (v14)
					{
						v16 = sub_1403ACD90(v10, v24[0], v14);
						v17 = v16;
						if (v16)
						{
							if ((v18 = *(_QWORD*)(v16 + 112), v19 = *(unsigned int*)(v18 + 360), !(_DWORD)v19)
								|| *(_QWORD*)(v16 + 64) && (*(_BYTE*)(v18 + 264) & 2) != 0
								|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
									qword_140C659A0,
									v14,
									v19,
									v15,
									0i64,
									0))
							{
								v20 = *(unsigned int*)(*(_QWORD*)(v17 + 112) + 364i64);
								if (!(_DWORD)v20
									|| !v15
									|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
										qword_140C659A0,
										v15,
										v20,
										v14,
										0i64,
										0))
								{
									goto LABEL_34;
								}
							}
						}
					}
				}
			}
		}
	}
}
// 14039F708: variable 'v7' is possibly undefined
// 14039F87E: variable 'v22' is possibly undefined
// 14039F8B5: variable 'v13' is possibly undefined
// 14039F8C0: variable 'v21' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

