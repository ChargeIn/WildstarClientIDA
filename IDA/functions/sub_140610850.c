//----- (0000000140610850) ----------------------------------------------------
void __fastcall sub_140610850(__int64 a1)
{
	__int64 v2; // rdx
	_QWORD* v3; // rdi
	__int64 v4; // rdx
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned int v7; // eax
	int v8; // edx
	unsigned int v9; // ebx
	__int64 v10; // rax
	__int64 v11; // rax
	int v12; // edx
	float v13; // xmm6_4
	_QWORD* v14; // rax
	__int64 v15; // rdx
	unsigned __int64* v16; // rdx
	unsigned __int64 v17; // r8
	__int64 v18; // rax
	__int64* v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rdx
	__int64(__fastcall * *v22)(); // [rsp+20h] [rbp-38h] BYREF
	__int64 v23; // [rsp+28h] [rbp-30h]
	_QWORD* v24; // [rsp+30h] [rbp-28h]
	int v25; // [rsp+38h] [rbp-20h]

	v2 = *(_QWORD*)(qword_140C65898 + 29504);
	v25 = 1;
	v3 = *(_QWORD**)(v2 + 400);
	v22 = off_140B569F0;
	v4 = v3[4];
	v24 = v3;
	if (*(_QWORD*)(v4 + 120) >= *(_QWORD*)(v4 + 112))
		sub_14005E2C0((__int64)v3);
	v5 = v3[2];
	v6 = sub_14005C1B0((__int64)v3, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	v3[2] += 16i64;
	v7 = sub_1400578C0((__int64)v3);
	v8 = *(_DWORD*)(a1 + 8);
	v9 = v7;
	LODWORD(v23) = v7;
	if ((unsigned int)sub_140649870(v3, v8))
	{
		sub_1400FB540((__int64)&v22);
		v3[2] -= 16i64;
	}
	v10 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 8));
	if (v10)
	{
		v11 = sub_14047DCA0(v10);
		if (v11)
		{
			v12 = *(_DWORD*)(v11 + 8);
			if (v12 != *(_DWORD*)(a1 + 8))
			{
				if ((unsigned int)sub_140649870(v3, v12))
				{
					sub_1400FB540((__int64)&v22);
					v3[2] -= 16i64;
				}
			}
		}
	}
	v13 = *(float*)(a1 + 16);
	v14 = sub_14005C3C0(*(_QWORD*)(v3[4] + 160i64), v9);
	v15 = v3[2];
	*(_QWORD*)v15 = *v14;
	*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
	v3[2] += 16i64;
	v16 = (unsigned __int64*)sub_14018F0E0(&v22, L"nAmount")[1];
	if (v16)
	{
		v17 = -1i64;
		do
			++v17;
		while (*((_BYTE*)v16 + v17));
		sub_140058710((__int64)v3, v16, v17);
	}
	else
	{
		*(_DWORD*)(v3[2] + 8i64) = 0;
		v3[2] += 16i64;
	}
	if (v23)
		sub_14018B900(v23, 0);
	v18 = v3[2];
	*(_DWORD*)(v18 + 8) = 3;
	*(double*)v18 = v13;
	v3[2] += 16i64;
	v19 = (__int64*)sub_1400580E0((__int64)v3, -3);
	sub_14005EA50((__int64)v3, v19, (int*)(v3[2] - 32i64), (unsigned int*)(v3[2] - 16i64));
	v20 = qword_140C65898;
	v3[2] -= 48i64;
	sub_1400EA3E0(*(_QWORD*)(v20 + 29504), "CombatLogDurabilityLoss", byte_1409EB814, v9, v22);
	sub_1400579E0((__int64)v3, v21, v9);
}
// 140610A46: variable 'v21' is possibly undefined
// 1409EB814: using guessed type _BYTE byte_1409EB814[32];
// 140B26E90: using guessed type wchar_t aNamount_4[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

