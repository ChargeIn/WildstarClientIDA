//----- (000000014075DB50) ----------------------------------------------------
__int64 __fastcall sub_14075DB50(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v3; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // eax
	__int64 v9; // r13
	int v10; // r10d
	_QWORD* v11; // rax
	int v12; // r10d
	__int64 v13; // rdx
	int** v14; // r14
	int* v15; // r15
	__int64 v16; // rbx
	__int64 v17; // rax
	int v18; // eax
	int v19; // ebx
	int v20; // r12d
	_QWORD* v21; // rax
	__int64 v22; // rdx
	unsigned __int64* v23; // rbp
	unsigned __int64 v24; // rsi
	__int64 v25; // rbx
	__int64 v26; // rax
	__int64 v27; // rcx
	__int64 v28; // rax
	__int64* v29; // rax
	__int64 v30; // rcx
	_QWORD* v31; // rax
	__int64 v32; // rdx
	unsigned __int16* v33; // r10
	__int64 v34; // rdx
	_QWORD* v35; // rax
	__int64 v36; // r8
	__int64(__fastcall * *v38)(); // [rsp+20h] [rbp-68h] BYREF
	int v39; // [rsp+28h] [rbp-60h]
	__int64 v40; // [rsp+30h] [rbp-58h]
	int v41; // [rsp+38h] [rbp-50h]
	_QWORD v42[4]; // [rsp+40h] [rbp-48h] BYREF
	int v43; // [rsp+90h] [rbp+8h]

	v2 = a1;
	v40 = a1;
	v3 = *(_QWORD*)(a1 + 32);
	v38 = off_140B569F0;
	v5 = *(_QWORD*)(v3 + 112);
	v41 = 1;
	if (*(_QWORD*)(v3 + 120) >= v5)
		sub_14005E2C0(v2);
	v6 = *(_QWORD*)(v2 + 16);
	v7 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(v2 + 16) += 16i64;
	v8 = sub_1400578C0(v2);
	v9 = a2 + 40;
	v10 = v8;
	v39 = v8;
	if (a2 == -40)
	{
		v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v8);
		v13 = *(_QWORD*)(v2 + 16);
		*(_QWORD*)v13 = *v11;
		*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
	}
	else
	{
		v14 = *(int***)(a2 + 48);
		if (v14 != *(int***)(a2 + 56))
		{
			do
			{
				v15 = *v14;
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v16 = *(_QWORD*)(v2 + 16);
				v17 = sub_14005C1B0(v2, 0, 0);
				*(_DWORD*)(v16 + 8) = 5;
				*(_QWORD*)v16 = v17;
				*(_QWORD*)(v2 + 16) += 16i64;
				v18 = sub_1400578C0(v2);
				v19 = *v15;
				v20 = v18;
				v43 = *v15;
				v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v18);
				v22 = *(_QWORD*)(v2 + 16);
				*(_QWORD*)v22 = *v21;
				*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
				*(_QWORD*)(v2 + 16) += 16i64;
				v23 = (unsigned __int64*)sub_14018F0E0(v42, L"nId")[1];
				if (v23)
				{
					v24 = -1i64;
					do
						++v24;
					while (*((_BYTE*)v23 + v24));
					if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
						sub_14005E2C0(v2);
					v25 = *(_QWORD*)(v2 + 16);
					v26 = sub_140062650(v2, v23, v24);
					*(_DWORD*)(v25 + 8) = 4;
					*(_QWORD*)v25 = v26;
					v19 = v43;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
				}
				v27 = v42[1];
				*(_QWORD*)(v2 + 16) += 16i64;
				if (v27)
					sub_14018B900(v27, 0);
				v28 = *(_QWORD*)(v2 + 16);
				*(_DWORD*)(v28 + 8) = 3;
				*(double*)v28 = (double)v19;
				*(_QWORD*)(v2 + 16) += 16i64;
				v29 = (__int64*)sub_1400580E0(v2, -3);
				sub_14005EA50(v2, v29, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
				*(_QWORD*)(v2 + 16) -= 48i64;
				sub_14034BDD0(v30, v15[1]);
				v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v20);
				v32 = *(_QWORD*)(v2 + 16);
				*(_QWORD*)v32 = *v31;
				*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
				*(_QWORD*)(v2 + 16) += 16i64;
				sub_1400F0870(v2, v32, L"strName", v33);
				*(_QWORD*)(v2 + 16) -= 16i64;
				sub_1400FB1D0((__int64)&v38);
				sub_1400579E0(v2, v34, v20);
				++v14;
			} while (v14 != *(int***)(v9 + 16));
			v2 = v40;
			v10 = v39;
		}
		v35 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v10);
		v36 = *(_QWORD*)(v2 + 16);
		*(_QWORD*)v36 = *v35;
		v13 = *((unsigned int*)v35 + 2);
		*(_DWORD*)(v36 + 8) = v13;
	}
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400579E0(v2, v13, v12);
	return 1i64;
}
// 14075DD61: variable 'v30' is possibly undefined
// 14075DD9E: variable 'v33' is possibly undefined
// 14075DDBB: variable 'v34' is possibly undefined
// 14075DE24: variable 'v12' is possibly undefined
// 140B4CB70: using guessed type wchar_t aStrname_105[8];
// 140B4CB80: using guessed type wchar_t aNid_39[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

