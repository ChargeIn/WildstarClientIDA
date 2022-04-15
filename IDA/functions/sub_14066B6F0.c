//----- (000000014066B6F0) ----------------------------------------------------
__int64 __fastcall sub_14066B6F0(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // esi
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // eax
	__int64 v9; // rax
	__int64 v10; // r14
	__int64 v11; // rax
	_QWORD* v12; // rbx
	__int64 v13; // rax
	__int64 v14; // rsi
	__int64 v15; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v18; // rax
	_QWORD* v19; // rax
	__int64 v20; // rdx
	__int64(__fastcall * *v22)(); // [rsp+20h] [rbp-28h] BYREF
	int v23; // [rsp+28h] [rbp-20h]
	_QWORD* v24; // [rsp+30h] [rbp-18h]
	int v25; // [rsp+38h] [rbp-10h]

	v1 = (_QWORD*)a1;
	v24 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v22 = off_140B569F0;
	v25 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v23 = v5;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v6 = sub_140056AB0(v1, 1u)) != 0
		&& (v7 = *(_QWORD*)(v6 + 8)) != 0
		&& (v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v7 + 8) + 48i64))(*(_QWORD*)(v7 + 8)),
			v9 = sub_14048D310(qword_140C65990, v8),
			(v10 = v9) != 0)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 72i64))(v9))
	{
		v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10);
		v12 = *(_QWORD**)(*(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 32i64))(v11) + 8) + 16i64);
		v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10);
		if (v12 != *(_QWORD**)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 32i64))(v13) + 8))
		{
			do
			{
				v14 = v12[5];
				if (((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v10 + 88i64))(
					v10,
					**(unsigned int**)(v14 + 8))
					|| (*(_BYTE*)(*(_QWORD*)(v14 + 8) + 84i64) & 2) == 0)
					&& (unsigned int)sub_140433000(v1, v14))
				{
					sub_1400FB470((__int64)&v22);
					v1 = v24;
					v24[2] -= 16i64;
				}
				v15 = v12[3];
				if (v15)
				{
					v12 = (_QWORD*)v12[3];
					for (i = *(_QWORD**)(v15 + 16); i; i = (_QWORD*)i[2])
						v12 = i;
				}
				else
				{
					for (j = v12[1]; v12 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v12 = (_QWORD*)j;
					if (v12[3] != j)
						v12 = (_QWORD*)j;
				}
				v18 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10);
			} while (v12 != *(_QWORD**)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 32i64))(v18) + 8));
			v5 = v23;
		}
		v19 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v20 = v1[2];
		*(_QWORD*)v20 = *v19;
		*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
	}
	else
	{
		v20 = v1[2];
		*(_DWORD*)(v20 + 8) = 0;
	}
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v20, v5);
	return 1i64;
}
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65990: using guessed type __int64 qword_140C65990;

