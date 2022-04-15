//----- (000000014045E740) ----------------------------------------------------
void __fastcall sub_14045E740(__int64 a1, unsigned int a2, double a3, double a4)
{
	__int64 v6; // r8
	__int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rax
	int v12; // eax
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64(__fastcall * *v17)(); // [rsp+40h] [rbp-28h] BYREF
	int v18; // [rsp+48h] [rbp-20h]
	int v19; // [rsp+4Ch] [rbp-1Ch]
	__int64(__fastcall * *v20)(); // [rsp+50h] [rbp-18h] BYREF
	int v21; // [rsp+58h] [rbp-10h]
	int v22; // [rsp+5Ch] [rbp-Ch]

	sub_140579860((const void**)a1, *(_DWORD*)(a1 + 8));
	sub_14045EC90(a1, a2, a3, a4);
	v6 = qword_140C65898;
	*(_DWORD*)(a1 + 6312) = 1;
	v7 = *(_QWORD*)(v6 + 120);
	if (v7 && *(_DWORD*)(a1 + 8) == *(_DWORD*)(v7 + 8))
		*(_DWORD*)(v6 + 28568) = 1;
	v8 = *(_QWORD*)(v6 + 25744);
	if (v8)
	{
		v9 = sub_140561C30(qword_140C65B70, *(_DWORD*)(v8 + 5632));
		if (v9)
			goto LABEL_9;
		v6 = qword_140C65898;
		if (*(_QWORD*)(qword_140C65898 + 120) != v8)
			goto LABEL_12;
		v10 = sub_14039DF50(qword_140C65898);
		if (v10)
		{
			v9 = sub_1404695E0(v10);
			if (v9)
			{
			LABEL_9:
				if (*(_DWORD*)(v9 + 344) == *(_DWORD*)(a1 + 8))
					sub_14039CCE0(qword_140C65898, *(_DWORD*)(v9 + 92), 6u);
			}
		}
		v6 = qword_140C65898;
	}
LABEL_12:
	if (*(_DWORD*)(a1 + 3408))
	{
		if ((dword_140DC2920 & 1) == 0)
		{
			dword_140DC2920 |= 1u;
			v11 = sub_140200220(0x142u);
			if (v11)
				v12 = *(_DWORD*)(v11 + 4);
			else
				v12 = 5000;
			dword_140DC2924 = v12;
		}
		sub_1403EAC90();
		v6 = qword_140C65898;
	}
	if (*(_QWORD*)(v6 + 120) == a1)
	{
		if (a2)
		{
			v18 = *(_DWORD*)(a1 + 8);
			v17 = off_140B6F460;
			v19 = 22;
			if (sub_14060AF20((__int64)&v17))
			{
				v13 = sub_1403D90D0(qword_140C65898, v18);
				if (v13)
				{
					if (sub_14047DCA0(v13))
						sub_14060AFE0((int*)&v17, v18);
				}
			}
			sub_140437A10((_QWORD*)qword_140C658D8, 0x121u, 0, 0i64, 0, 0, 1);
			sub_1403A71F0(qword_140C65898, 0, 0x65u, 1);
		}
		else
		{
			v21 = *(_DWORD*)(a1 + 8);
			v20 = off_140B6F490;
			v22 = 23;
			if (sub_14060AF20((__int64)&v20))
			{
				v14 = sub_1403D90D0(qword_140C65898, v21);
				if (v14)
				{
					if (sub_14047DCA0(v14))
						sub_14060AFE0((int*)&v20, v21);
				}
			}
			v15 = qword_140C65898;
			v16 = *(_QWORD*)(qword_140C65898 + 120);
			if (*(_QWORD*)(qword_140C65898 + 25744) != v16)
			{
				*(_QWORD*)(qword_140C65898 + 25744) = v16;
				*(_QWORD*)(v15 + 25736) = 0i64;
			}
			if (qword_140C65B78)
			{
				sub_140575DD0();
				v15 = qword_140C65898;
			}
			sub_14055B0E0(v15, 0, a3, a4);
		}
		sub_1405F9E30((_QWORD*)qword_140C65BA8, qword_140C65BA8 + 192, a2);
		if (qword_140C65B78)
			sub_140575DD0();
	}
}
// 140B6F460: using guessed type __int64 (__fastcall *off_140B6F460[225])();
// 140B6F490: using guessed type __int64 (__fastcall *off_140B6F490[219])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C65BA8: using guessed type __int64 qword_140C65BA8;
// 140DC2920: using guessed type int dword_140DC2920;
// 140DC2924: using guessed type int dword_140DC2924;

