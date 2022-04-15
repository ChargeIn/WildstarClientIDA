//----- (000000014065D040) ----------------------------------------------------
__int64 __fastcall sub_14065D040(__int64 a1)
{
	_QWORD* v1; // rsi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // edi
	int* v7; // rax
	__int64 v8; // rax
	_QWORD* v9; // rax
	__int64 v10; // rdx
	unsigned __int64 v11; // rbx
	unsigned __int64 v12; // rbp
	__int64(__fastcall * *v13)(); // r15
	__int64(__fastcall * v14)(); // r14
	__int64 v15; // rcx
	unsigned __int64 v16; // rax
	__int64 v17; // rdi
	__int64 v18; // rax
	int v19; // eax
	__int64 v20; // rcx
	int v21; // edi
	_QWORD* v22; // rax
	__int64 v23; // r8
	__int64 v24; // rdx
	int v25; // r10d
	__int64 v26; // rdx
	_QWORD* v27; // rax
	_QWORD* v28; // rax
	__int64 v29; // r8
	__int64(__fastcall * *v31)(); // [rsp+20h] [rbp-68h] BYREF
	unsigned __int64 v32; // [rsp+28h] [rbp-60h]
	_QWORD* v33; // [rsp+30h] [rbp-58h]
	int v34; // [rsp+38h] [rbp-50h]
	__int64(__fastcall * *v35)(); // [rsp+40h] [rbp-48h] BYREF
	int v36; // [rsp+48h] [rbp-40h]
	_QWORD* v37; // [rsp+50h] [rbp-38h]
	int v38; // [rsp+58h] [rbp-30h]
	char v39; // [rsp+90h] [rbp+8h] BYREF

	v1 = (_QWORD*)a1;
	v37 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v3 = *(_QWORD*)(v2 + 112);
	v38 = 1;
	v35 = off_140B569F0;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0((__int64)v1);
	v4 = v1[2];
	v5 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	v1[2] += 16i64;
	v6 = sub_1400578C0((__int64)v1);
	v36 = v6;
	v7 = (int*)sub_1406622C0((__int64)v1, 1);
	if (!v7 || (v8 = sub_1403D90D0(qword_140C65898, *v7)) == 0)
	{
		v28 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v6);
		v29 = v1[2];
		*(_QWORD*)v29 = *v28;
		v10 = *((unsigned int*)v28 + 2);
		*(_DWORD*)(v29 + 8) = v10;
		goto LABEL_19;
	}
	if (v8 != *(_QWORD*)(qword_140C65898 + 120))
	{
		v9 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v6);
		v10 = v1[2];
		*(_QWORD*)v10 = *v9;
		*(_DWORD*)(v10 + 8) = *((_DWORD*)v9 + 2);
	LABEL_19:
		v1[2] += 16i64;
		goto LABEL_20;
	}
	v11 = 0i64;
	v32 = 0i64;
	v31 = 0i64;
	sub_1403D6710(qword_140C65898 + 208, (__int64*)&v31);
	v12 = v32;
	v13 = v31;
	if (v32)
	{
		do
		{
			v14 = v13[v11];
			if (v14)
			{
				(*(void(__fastcall**)(__int64(__fastcall*)(), char*))(*(_QWORD*)v14 + 32i64))(v13[v11], &v39);
				v15 = v1[4];
				v31 = off_140B569F0;
				v16 = *(_QWORD*)(v15 + 112);
				v33 = v1;
				v34 = 1;
				if (*(_QWORD*)(v15 + 120) >= v16)
					sub_14005E2C0((__int64)v1);
				v17 = v1[2];
				v18 = sub_14005C1B0((__int64)v1, 0, 0);
				*(_DWORD*)(v17 + 8) = 5;
				*(_QWORD*)v17 = v18;
				v1[2] += 16i64;
				v19 = sub_1400578C0((__int64)v1);
				v20 = *(_QWORD*)(v1[4] + 160i64);
				v21 = v19;
				LODWORD(v32) = v19;
				v22 = sub_14005C3C0(v20, v19);
				v23 = v1[2];
				*(_QWORD*)v23 = *v22;
				*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
				v1[2] += 16i64;
				sub_1400F06F0((__int64)v1, v24, L"nBagSlot", v25);
				v1[2] -= 16i64;
				if ((unsigned int)sub_140415D60(v1, (void(__fastcall***)(_QWORD))v14))
				{
					sub_1400FB540((__int64)&v31);
					v1[2] -= 16i64;
				}
				sub_1400FB1D0((__int64)&v35);
				sub_1400579E0((__int64)v1, v26, v21);
			}
			++v11;
		} while (v11 < v12);
		v1 = v37;
		v6 = v36;
	}
	v27 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v6);
	v10 = v1[2];
	*(_QWORD*)v10 = *v27;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v27 + 2);
	v1[2] += 16i64;
	if (v13)
		(*((void(__fastcall**)(__int64(__fastcall**)())) * (v13 - 2) + 1))(v13 - 2);
LABEL_20:
	sub_1400579E0((__int64)v1, v10, v6);
	return 1i64;
}
// 14065D201: variable 'v24' is possibly undefined
// 14065D201: variable 'v25' is possibly undefined
// 14065D242: variable 'v26' is possibly undefined
// 14065D2D3: variable 'v10' is possibly undefined
// 140B2D648: using guessed type wchar_t aNbagslot_0[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

