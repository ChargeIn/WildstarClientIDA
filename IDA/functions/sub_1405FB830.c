//----- (00000001405FB830) ----------------------------------------------------
__int64 __fastcall sub_1405FB830(__int64 a1, unsigned int* a2)
{
	__int64 v4; // rsi
	__int64 v6; // r8
	unsigned int v7; // edx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rdi
	unsigned int v11; // ebx
	int v12; // edx
	__int64 i; // rbx
	unsigned int v14; // ecx
	__int64* v15; // rcx
	unsigned int v16; // ebx
	__int64 v17; // rcx
	unsigned int v18; // ecx
	int v19; // edx
	int v20; // eax
	int v21; // eax
	int v22; // eax
	__int64 v23; // rcx
	__int64 v24; // [rsp+20h] [rbp-38h]
	__int64 v25; // [rsp+68h] [rbp+10h]
	__int64(__fastcall * *v26)(); // [rsp+70h] [rbp+18h] BYREF

	v4 = sub_1405A8A40(a1, *a2);
	if (!v4)
		return 2685075457i64;
	v6 = *(_QWORD*)(a1 + 8);
	v7 = *a2;
	v8 = *(_QWORD*)(v6 + 8);
	v9 = v6;
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < v7)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v9 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v9 == v6 || (v25 = v9, v7 < *(_DWORD*)(v9 + 32)))
		v25 = *(_QWORD*)(a1 + 8);
	if (v25 == v6)
		return 2685075457i64;
	v10 = v25 + 40;
	if (v25 == -40)
		return 2685075457i64;
	sub_1406115A0(v25 + 40, a2[1], a2[2]);
	v11 = a2[1];
	if (v11 < 6)
	{
		v12 = 1 << (v11 + 2);
		if (v12)
		{
			if ((v12 & *(_DWORD*)(v25 + 108)) != 0)
			{
				for (i = v11 + 1; (unsigned int)i < *(_DWORD*)(v4 + 16); i = (unsigned int)(i + 1))
				{
					if ((unsigned int)sub_140553790(v4, i))
					{
						if (*(_QWORD*)v10)
						{
							v14 = *(_DWORD*)(*(_QWORD*)v10 + 16i64);
							if ((_DWORD)i != v14
								&& (unsigned int)i <= v14
								&& !*(_DWORD*)(v10 + 4 * i + 80)
								&& (_DWORD)i != v14
								&& (unsigned int)i <= v14)
							{
								*(_DWORD*)(v10 + 4 * i + 80) = dword_140C636A8;
							}
						}
					}
				}
			}
		}
	}
	sub_1405512F0(v4, *a2, a2[1]);
	v15 = (__int64*)qword_140C65B80;
	*(_DWORD*)(qword_140C65898 + 28568) = 1;
	v16 = *a2;
	sub_1405FCCB0(*v15);
	v26 = off_140B66F70;
	sub_14043B4E0(v17, v16, (__int64)&unk_140C7CD10, (unsigned int(__fastcall***)(_QWORD, __int64)) & v26);
	v18 = a2[1];
	if (v18 < 6)
	{
		v19 = 1 << (v18 + 2);
		if (v19)
		{
			if ((v19 & *(_DWORD*)(v25 + 108)) != 0)
				sub_1405F9E30((_QWORD*)qword_140C65BA8, qword_140C65BA8 + 160, *a2);
		}
	}
	v20 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v4 + 8));
	if (v20 == 2)
	{
		sub_140437A10((_QWORD*)qword_140C658D8, 0x40u, 0, 0i64, 0, 0, 1);
		if ((*(_BYTE*)(*(_QWORD*)(v4 + 8) + 12i64) & 8) != 0)
			sub_140437A10((_QWORD*)qword_140C658D8, 0x42u, 0, 0i64, 0, 0, 1);
		v21 = dword_140C4DFC0;
		if (*(_DWORD*)qword_140C63750 < dword_140C4DFC0)
			v21 = *(_DWORD*)qword_140C63750;
		if (!byte_140C4DFD0[v21])
			goto LABEL_42;
	}
	else
	{
		if (v20 != 1)
			goto LABEL_42;
		v22 = dword_140C4DF80;
		if (*(_DWORD*)qword_140C63750 < dword_140C4DF80)
			v22 = *(_DWORD*)qword_140C63750;
		if (!byte_140C4DF90[v22])
			goto LABEL_42;
	}
	sub_140553890(v4, 0xFFFFFFFF);
LABEL_42:
	if (qword_140C65B78)
		sub_140575DD0();
	v23 = *(_QWORD*)(qword_140C65898 + 29504);
	if ((*(_DWORD*)(*(_QWORD*)(v4 + 8) + 12i64) & 0x80000) != 0)
	{
		LODWORD(v24) = a2[1];
		sub_1400EA3E0(v23, "ContractObjectiveUpdated", byte_1409E91BC, *a2, v24);
	}
	else
	{
		sub_140426240(v23, *a2, a2[1]);
	}
	return 0i64;
}
// 1405FB97C: variable 'v17' is possibly undefined
// 1405FBACB: variable 'v24' is possibly undefined
// 1409E91BC: using guessed type _BYTE byte_1409E91BC[24];
// 140B66F70: using guessed type __int64 (__fastcall *off_140B66F70[2])();
// 140C4DF80: using guessed type int dword_140C4DF80;
// 140C4DF90: using guessed type _BYTE[32];
// 140C4DFC0: using guessed type int dword_140C4DFC0;
// 140C4DFD0: using guessed type _BYTE[32];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C65BA8: using guessed type __int64 qword_140C65BA8;

