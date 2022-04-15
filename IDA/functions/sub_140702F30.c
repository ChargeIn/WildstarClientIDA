//----- (0000000140702F30) ----------------------------------------------------
__int64 __fastcall sub_140702F30(__int64 a1)
{
	unsigned int v2; // eax
	unsigned int v3; // esi
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // r10d
	unsigned int v9; // r12d
	__int64 v10; // rax
	int* v11; // r14
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // eax
	int v15; // ebx
	int v16; // r13d
	_QWORD* v17; // rax
	__int64 v18; // rdx
	unsigned __int64* v19; // rbp
	unsigned __int64 v20; // rsi
	__int64 v21; // rbx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rax
	__int64* v25; // rax
	__int64 v26; // rcx
	_QWORD* v27; // rax
	__int64 v28; // rdx
	unsigned __int16* v29; // r10
	__int64 v30; // rdx
	_QWORD* v31; // rax
	__int64 v32; // r8
	__int64 v33; // rdx
	int v34; // r10d
	__int64(__fastcall * *v36)(); // [rsp+20h] [rbp-78h] BYREF
	int v37; // [rsp+28h] [rbp-70h]
	__int64 v38; // [rsp+30h] [rbp-68h]
	int v39; // [rsp+38h] [rbp-60h]
	_QWORD v40[4]; // [rsp+40h] [rbp-58h] BYREF
	unsigned int v41; // [rsp+A8h] [rbp+10h]
	int v42; // [rsp+B0h] [rbp+18h]

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6B0B8, qword_140C63858);
	}
	else
	{
		if (dword_140C63CD4 || (int)sub_14020F6A0() < 0)
			goto LABEL_32;
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C646F8 + 40i64))(qword_140C646F8);
	}
	v3 = v2;
	v41 = v2;
	if (!v2)
	{
	LABEL_32:
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 0i64;
	}
	v4 = *(_QWORD*)(a1 + 32);
	v36 = off_140B569F0;
	v5 = *(_QWORD*)(v4 + 112);
	v38 = a1;
	v39 = 1;
	if (*(_QWORD*)(v4 + 120) >= v5)
		sub_14005E2C0(a1);
	v6 = *(_QWORD*)(a1 + 16);
	v7 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(a1 + 16) += 16i64;
	v8 = sub_1400578C0(a1);
	v37 = v8;
	v9 = 0;
	if (v3)
	{
		while (!qword_140C63848)
		{
			if (dword_140C63CD4)
			{
				v11 = 0i64;
			}
			else
			{
				if ((int)sub_14020F6A0() >= 0)
				{
					v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C646F8 + 32i64))(qword_140C646F8, v9);
					goto LABEL_17;
				}
				v11 = 0i64;
			}
		LABEL_18:
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v12 = *(_QWORD*)(a1 + 16);
			v13 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v12 + 8) = 5;
			*(_QWORD*)v12 = v13;
			*(_QWORD*)(a1 + 16) += 16i64;
			v14 = sub_1400578C0(a1);
			v15 = *v11;
			v16 = v14;
			v42 = *v11;
			v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v14);
			v18 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v18 = *v17;
			*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			v19 = (unsigned __int64*)sub_14018F0E0(v40, L"nTypeId")[1];
			if (v19)
			{
				v20 = -1i64;
				do
					++v20;
				while (*((_BYTE*)v19 + v20));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v21 = *(_QWORD*)(a1 + 16);
				v22 = sub_140062650(a1, v19, v20);
				v3 = v41;
				*(_DWORD*)(v21 + 8) = 4;
				*(_QWORD*)v21 = v22;
				v15 = v42;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v23 = v40[1];
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v23)
				sub_14018B900(v23, 0);
			v24 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v24 + 8) = 3;
			*(double*)v24 = (double)v15;
			*(_QWORD*)(a1 + 16) += 16i64;
			v25 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v25, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 48i64;
			sub_14034BDD0(v26, v11[1]);
			v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v16);
			v28 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v28 = *v27;
			*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400F0870(a1, v28, L"strHeader", v29);
			*(_QWORD*)(a1 + 16) -= 16i64;
			sub_1400FB1D0((__int64)&v36);
			sub_1400579E0(a1, v30, v16);
			if (++v9 >= v3)
			{
				a1 = v38;
				v8 = v37;
				goto LABEL_31;
			}
		}
		v10 = qword_140C63848(off_140A6B0B8, v9, qword_140C63858);
	LABEL_17:
		v11 = (int*)v10;
		goto LABEL_18;
	}
LABEL_31:
	v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v8);
	v32 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v32 = *v31;
	v33 = *((unsigned int*)v31 + 2);
	*(_DWORD*)(v32 + 8) = v33;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v33, v34);
	return 1i64;
}
// 1407031B8: variable 'v26' is possibly undefined
// 1407031F5: variable 'v29' is possibly undefined
// 140703212: variable 'v30' is possibly undefined
// 14070326B: variable 'v34' is possibly undefined
// 140A6B0B8: using guessed type wchar_t *off_140A6B0B8[2];
// 140B41D50: using guessed type wchar_t aStrheader_0[10];
// 140B41D68: using guessed type wchar_t aNtypeid[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63CD4: using guessed type int dword_140C63CD4;
// 140C646F8: using guessed type __int64 qword_140C646F8;

