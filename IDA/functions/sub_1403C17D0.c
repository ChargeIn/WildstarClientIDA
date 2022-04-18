#include "../winhttp.h"

//----- (00000001403C17D0) ----------------------------------------------------
__int64 __fastcall sub_1403C17D0(__int64 a1, int* a2, int* a3, int a4)
{
	int v4; // r12d
	int v5; // edi
	unsigned int v6; // r15d
	unsigned int v7; // esi
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // r13
	int v13; // eax
	_BOOL8 v14; // rcx
	unsigned int v15; // eax
	__int64 v16; // rcx
	unsigned int v17; // ebx
	__int64 v18; // rcx
	unsigned __int64 v19; // r8
	unsigned __int64 v20; // r8
	unsigned __int64 v21; // r8
	__int64 v22; // rax
	int v23; // eax
	unsigned __int64 v24; // [rsp+28h] [rbp-30h]
	__int64 v25; // [rsp+30h] [rbp-28h]
	__int64 v26[3]; // [rsp+38h] [rbp-20h] BYREF
	unsigned __int64 v27; // [rsp+98h] [rbp+40h] BYREF
	__int64 v28; // [rsp+A0h] [rbp+48h] BYREF
	int v29; // [rsp+A8h] [rbp+50h]

	v29 = a4;
	v4 = *a3;
	v5 = *a2;
	v6 = a2[1];
	v7 = a3[1];
	LODWORD(v28) = *a2;
	HIDWORD(v28) = v6;
	v27 = __PAIR64__(v7, v4);
	if (v4 >= 300 || v7 == -1 || !v4 && v7 >= 0x1F)
	{
		sub_1403CC530(a1, 0x1Bu);
		return 27i64;
	}
	else
	{
		v25 = sub_1403AC780(a1 + 160, (int*)&v28);
		v9 = sub_1403AC780(a1 + 160, (int*)&v27);
		v10 = *(_QWORD*)(a1 + 120);
		v11 = v9;
		if (v10 && !*(_DWORD*)(v10 + 592) && *(_DWORD*)(v10 + 128) != 23)
		{
			if (sub_14053BC30(v10, (__int64)&v27))
				return 32i64;
			v13 = *(_DWORD*)(a1 + 26180);
			v14 = v13 == 67;
			if (!v25)
			{
				sub_1403A6770(v14, 1u);
				return 1i64;
			}
			v15 = sub_1403AD100(a1, (_QWORD*)v25, v11, (int*)&v27, v13 == 66, v14);
			v17 = v15;
			if (v15)
			{
				sub_1403A6770(v16, v15);
				return v17;
			}
			if (!v29)
			{
				if ((v4 & 0xFFFFFFF6) == 0 && v4 != 1)
				{
					v18 = v25;
					if ((*(_BYTE*)(*(_QWORD*)(v25 + 64) + 336i64) & 0x10) != 0 && !(unsigned int)sub_14056A3F0(v25))
					{
						if (v5 < 300)
							v19 = (unsigned __int8)v6 | ((unsigned __int64)(unsigned __int8)v28 << 8);
						else
							v19 = -1i64;
						Apollo_LUAEvent(
							*(_QWORD*)(qword_140C65898 + 29504),
							"ItemConfirmSoulboundOnEquip",
							byte_1409E9FAC,
							v7,
							v19,
							(unsigned __int8)v7 | ((unsigned __int64)(unsigned __int8)v27 << 8));
						return 0i64;
					}
					if ((unsigned int)sub_1403D8BC0(v18))
					{
						v24 = (unsigned __int8)v7 | ((unsigned __int64)(unsigned __int8)v27 << 8);
						if (v5 < 300)
							Apollo_LUAEvent(
								*(_QWORD*)(qword_140C65898 + 29504),
								"ItemConfirmClearRestockOnEquip",
								byte_1409EA01C,
								v7,
								(unsigned __int8)v6 | ((unsigned __int64)(unsigned __int8)v28 << 8),
								v24);
						else
							Apollo_LUAEvent(
								*(_QWORD*)(qword_140C65898 + 29504),
								"ItemConfirmClearRestockOnEquip",
								byte_1409EA01C,
								v7,
								-1i64,
								v24);
						return 0i64;
					}
				}
				if ((v5 & 0xFFFFFFF6) == 0 && v5 != 1 && v11)
				{
					if ((*(_BYTE*)(*(_QWORD*)(v11 + 64) + 336i64) & 0x10) != 0 && !(unsigned int)sub_14056A3F0(v11))
					{
						if (v5 < 300)
							v20 = (unsigned __int8)v6 | ((unsigned __int64)(unsigned __int8)v28 << 8);
						else
							v20 = -1i64;
						Apollo_LUAEvent(
							*(_QWORD*)(qword_140C65898 + 29504),
							"ItemConfirmSoulboundOnEquip",
							byte_1409E9FAC,
							v6,
							(unsigned __int8)v7 | ((unsigned __int64)(unsigned __int8)v27 << 8),
							v20);
						return 0i64;
					}
					if ((unsigned int)sub_1403D8BC0(v11))
					{
						if (v5 < 300)
							v21 = (unsigned __int8)v6 | ((unsigned __int64)(unsigned __int8)v28 << 8);
						else
							v21 = -1i64;
						Apollo_LUAEvent(
							*(_QWORD*)(qword_140C65898 + 29504),
							"ItemConfirmClearRestockOnEquip",
							byte_1409EA01C,
							v6,
							(unsigned __int8)v7 | ((unsigned __int64)(unsigned __int8)v27 << 8),
							v21);
						return 0i64;
					}
				}
			}
			if (*(_DWORD*)(*(_QWORD*)(a1 + 120) + 684i64) && (!v5 || !v4))
			{
				if ((dword_140DC2280 & 1) != 0)
				{
					v23 = dword_140DC2284;
				}
				else
				{
					dword_140DC2280 |= 1u;
					v22 = sub_140200220(0x149u);
					if (v22)
					{
						v23 = *(_DWORD*)(v22 + 4);
						dword_140DC2284 = v23;
					}
					else
					{
						v23 = 1500;
						dword_140DC2284 = 1500;
					}
				}
				sub_14046A3D0(*(_QWORD*)(a1 + 120), 0, 0, 0, v23);
			}
			sub_14046A3D0(*(_QWORD*)(a1 + 120), 3, 0, 777, 10000);
			v26[0] = v28;
			v26[1] = v27;
			sub_1403F4900(a1, 0x182u, (__int64)v26);
			*(_DWORD*)(v25 + 140) = 0;
			if (v11)
				*(_DWORD*)(v11 + 140) = 0;
			return 0i64;
		}
		return 57i64;
	}
}
// 1403C18F5: variable 'v16' is possibly undefined
// 1403C1989: variable 'v18' is possibly undefined
// 1409E9FAC: using guessed type _BYTE byte_1409E9FAC[32];
// 1409EA01C: using guessed type _BYTE byte_1409EA01C[24];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC2280: using guessed type int dword_140DC2280;
// 140DC2284: using guessed type int dword_140DC2284;

