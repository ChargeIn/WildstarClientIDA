//----- (0000000140610CF0) ----------------------------------------------------
void __fastcall sub_140610CF0(__int64 a1)
{
	_QWORD* v2; // rdi
	__int64 v3; // rdx
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned int v6; // eax
	int v7; // edx
	unsigned int v8; // ebx
	__int64 v9; // rax
	__int64 v10; // rax
	int v11; // edx
	_QWORD* v12; // rax
	__int64 v13; // rdx
	int v14; // r10d
	__int64 v15; // rcx
	__int64 v16; // rdx
	__int64(__fastcall * *v17)(); // [rsp+20h] [rbp-28h] BYREF
	__int64 v18; // [rsp+28h] [rbp-20h]
	_QWORD* v19; // [rsp+30h] [rbp-18h]
	__int64 v20; // [rsp+38h] [rbp-10h]

	LODWORD(v20) = 1;
	v2 = *(_QWORD**)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	v17 = off_140B569F0;
	v3 = v2[4];
	v19 = v2;
	if (*(_QWORD*)(v3 + 120) >= *(_QWORD*)(v3 + 112))
		sub_14005E2C0((__int64)v2);
	v4 = v2[2];
	v5 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	v2[2] += 16i64;
	v6 = sub_1400578C0((__int64)v2);
	v7 = *(_DWORD*)(a1 + 8);
	v8 = v6;
	LODWORD(v18) = v6;
	if ((unsigned int)sub_140649870(v2, v7))
	{
		sub_1400FB540((__int64)&v17);
		v2[2] -= 16i64;
	}
	v9 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 8));
	if (v9)
	{
		v10 = sub_14047DCA0(v9);
		if (v10)
		{
			v11 = *(_DWORD*)(v10 + 8);
			if (v11 != *(_DWORD*)(a1 + 8))
			{
				if ((unsigned int)sub_140649870(v2, v11))
				{
					sub_1400FB540((__int64)&v17);
					v2[2] -= 16i64;
				}
			}
		}
	}
	v12 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v8);
	v13 = v2[2];
	*(_QWORD*)v13 = *v12;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
	v2[2] += 16i64;
	sub_1400F06F0((__int64)v2, v13, L"nNewSpecIndex", v14 + 1);
	v15 = qword_140C65898;
	v2[2] -= 16i64;
	sub_1400EA3E0(*(_QWORD*)(v15 + 29504), "CombatLogBuildSwitch", byte_1409EB7E4, v8, v17, v18, v19, v20);
	sub_1400579E0((__int64)v2, v16, v8);
}
// 140610DFE: variable 'v14' is possibly undefined
// 140610E60: variable 'v16' is possibly undefined
// 1409EB7E4: using guessed type _BYTE byte_1409EB7E4[32];
// 140B26EA0: using guessed type wchar_t aNnewspecindex[14];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

