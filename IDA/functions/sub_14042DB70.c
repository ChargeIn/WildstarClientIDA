//----- (000000014042DB70) ----------------------------------------------------
void __fastcall sub_14042DB70(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rdi
	__int64 v4; // r8
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned __int64 v9; // rbx
	int v10; // ebp
	__int64 v11; // rax
	__int64 v12; // rdx
	int v13; // [rsp+20h] [rbp-38h]
	__int64(__fastcall * *v14)(); // [rsp+30h] [rbp-28h] BYREF
	int v15; // [rsp+38h] [rbp-20h]
	_QWORD* v16; // [rsp+40h] [rbp-18h]
	int v17; // [rsp+48h] [rbp-10h]

	v2 = *(_QWORD**)(a1 + 400);
	v4 = v2[4];
	v14 = off_140B569F0;
	v6 = *(_QWORD*)(v4 + 112);
	v16 = v2;
	v17 = 1;
	if (*(_QWORD*)(v4 + 120) >= v6)
		sub_14005E2C0((__int64)v2);
	v7 = v2[2];
	v8 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	v2[2] += 16i64;
	v9 = 0i64;
	v10 = sub_1400578C0((__int64)v2);
	v15 = v10;
	if (*(_DWORD*)(a2 + 4))
	{
		do
		{
			v11 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(*(_QWORD*)(a2 + 8) + 4 * v9));
			if (v11 && (unsigned int)sub_140649930(v2, v11))
			{
				sub_1400FB470((__int64)&v14);
				v2 = v16;
				v16[2] -= 16i64;
			}
			++v9;
		} while (v9 < *(unsigned int*)(a2 + 4));
		v10 = v15;
	}
	v13 = v10;
	sub_1400EA3E0(a1, "PlayerPathSoldierNewWhackAMoleBurrows", "fT", (float)((float)*(int*)a2 * 0.001), v13);
	if (v2)
		sub_1400579E0((__int64)v2, v12, v10);
}
// 14042DC89: variable 'v12' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

