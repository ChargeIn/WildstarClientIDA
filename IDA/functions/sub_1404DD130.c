//----- (00000001404DD130) ----------------------------------------------------
__int64* __fastcall sub_1404DD130(__int64* a1, int a2)
{
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64* v7; // rsi
	__int64 v8; // rax
	__int16* v9; // rax
	unsigned int v10; // eax
	_QWORD* v11; // rax
	int* v12; // rax
	int* v13; // r12
	int* v14; // rax
	__int64 v15; // rax
	unsigned int v16; // r14d
	int v17; // xmm6_4
	unsigned int v18; // ecx
	__int64 v19; // rax
	__int64 v20; // rcx
	unsigned int v21; // edx
	unsigned int v22; // r15d
	__int64 v23; // rcx
	__int64 v24; // rax
	int v25; // ebx
	_QWORD* v26; // rdi
	__int64 v27; // rcx
	__int16* v28; // rax
	__int64 v29; // rcx
	__int64 v30; // rax
	int v31; // ebx
	_QWORD* v32; // rdi
	__int64 v33; // rcx
	__int16* v34; // rax
	int* v35; // rdi
	int* v36; // rbx
	__int64 v37; // rcx
	int* v38; // rbx
	__int64 v39; // rcx
	__int64 v41[2]; // [rsp+30h] [rbp-49h] BYREF
	__int64 v42[2]; // [rsp+40h] [rbp-39h] BYREF
	char v43[8]; // [rsp+50h] [rbp-29h] BYREF
	int* v44; // [rsp+58h] [rbp-21h]
	__int64 v45; // [rsp+60h] [rbp-19h] BYREF
	int* v46; // [rsp+68h] [rbp-11h]
	__int64 v47; // [rsp+80h] [rbp+7h] BYREF
	__int64 v48; // [rsp+88h] [rbp+Fh]
	int v49; // [rsp+E0h] [rbp+67h] BYREF

	sub_1400B6390(a1);
	*a1 = (__int64)off_140B69300;
	sub_1400B67E0((__int64)a1, (int*)L"quest");
	v5 = sub_1405A8A40(v4, a2);
	v7 = (__int64*)v5;
	if (v5)
	{
		v8 = *(_QWORD*)(v5 + 8);
		if (v8)
		{
			v9 = sub_14034BDD0(v6, *(_DWORD*)(v8 + 4));
			sub_1400B6BD0((__int64)a1, (int*)L"name", (int*)v9);
			v10 = sub_1405535D0((__int64)v7);
			v11 = sub_14018EFA0(&v45, (__int64)L"%d", v10);
			(*(void(__fastcall**)(__int64*, const wchar_t*, _QWORD))(*a1 + 160))(a1, L"cash", v11[1]);
			if (v46)
				sub_14018B900((__int64)v46, 0);
			v12 = sub_14018B280(24i64, 0);
			*(_QWORD*)v12 = v12;
			v13 = v12;
			v46 = v12;
			*((_QWORD*)v12 + 1) = v12;
			v14 = sub_14018B280(24i64, 0);
			*(_QWORD*)v14 = v14;
			*((_QWORD*)v14 + 1) = v14;
			v44 = v14;
			sub_140551AC0(v7, (__int64)&v45, (__int64)v43);
			v15 = v7[1];
			v16 = 0;
			v17 = 1065353216;
			v49 = 1065353216;
			v18 = *(_DWORD*)(v15 + 56);
			v41[1] = 0i64;
			v41[0] = 0i64;
			v42[1] = 0i64;
			v42[0] = 0i64;
			v19 = sub_14024DB80(v18);
			if (qword_140C65C20)
			{
				if (v19)
				{
					v21 = *(_DWORD*)(v19 + 36);
					if (v21)
					{
						sub_140638AD0(v20, v21, a2, v41, v42, (__int64)&v49);
						v17 = v49;
					}
				}
			}
			sub_1404DC7F0(a1, (__int64)&v45, v41, 0i64, *(float*)&v17, (__int64)L"choice");
			sub_1404DC7F0(a1, (__int64)v43, v41, v42, *(float*)&v17, (__int64)L"given");
			v22 = 0;
			if (v7[16])
			{
				v23 = 0i64;
				do
				{
					v24 = sub_1404835C0(qword_140C65918, *(_DWORD*)(v7[15] + 4 * v23));
					if (v24)
					{
						v25 = *(_DWORD*)(v24 + 8);
						v26 = sub_14018EFA0(&v45, (__int64)L"giver%d", v22);
						v28 = sub_14034BDD0(v27, v25);
						(*(void(__fastcall**)(__int64*, _QWORD, __int16*))(*a1 + 160))(a1, v26[1], v28);
						if (v46)
							sub_14018B900((__int64)v46, 0);
					}
					v23 = ++v22;
				} while (v22 < (unsigned __int64)v7[16]);
			}
			if (v7[18])
			{
				v29 = 0i64;
				do
				{
					v30 = sub_1404835C0(qword_140C65918, *(_DWORD*)(v7[17] + 4 * v29));
					if (v30)
					{
						v31 = *(_DWORD*)(v30 + 8);
						v32 = sub_14018EFA0(&v47, (__int64)L"receiver%d", v16);
						v34 = sub_14034BDD0(v33, v31);
						(*(void(__fastcall**)(__int64*, _QWORD, __int16*))(*a1 + 160))(a1, v32[1], v34);
						if (v48)
							sub_14018B900(v48, 0);
					}
					v29 = ++v16;
				} while (v16 < (unsigned __int64)v7[18]);
			}
			if (v42[0])
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v42[0] - 16) + 8i64))(v42[0] - 16);
			if (v41[0])
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v41[0] - 16) + 8i64))(v41[0] - 16);
			v35 = v44;
			v36 = *(int**)v44;
			while (v36 != v35)
			{
				v37 = (__int64)v36;
				v36 = *(int**)v36;
				sub_14018B900(v37, 0);
			}
			*(_QWORD*)v35 = v35;
			*((_QWORD*)v35 + 1) = v35;
			sub_14018B900((__int64)v35, 0);
			v38 = *(int**)v13;
			while (v38 != v13)
			{
				v39 = (__int64)v38;
				v38 = *(int**)v38;
				sub_14018B900(v39, 0);
			}
			*(_QWORD*)v13 = v13;
			*((_QWORD*)v13 + 1) = v13;
			sub_14018B900((__int64)v13, 0);
		}
	}
	return a1;
}
// 1404DD168: variable 'v4' is possibly undefined
// 1404DD1B1: variable 'v6' is possibly undefined
// 1404DD2A3: variable 'v20' is possibly undefined
// 1404DD343: variable 'v27' is possibly undefined
// 1404DD3C6: variable 'v33' is possibly undefined
// 1409D3314: using guessed type wchar_t aD_3[3];
// 140B0AB60: using guessed type wchar_t aChoice[7];
// 140B0AB70: using guessed type wchar_t aGiven[6];
// 140B0AB80: using guessed type wchar_t aGiverD[8];
// 140B0AB90: using guessed type wchar_t aReceiverD[11];
// 140B0ABC0: using guessed type wchar_t aQuest_0[6];
// 140B0ABD0: using guessed type wchar_t aName_18[5];
// 140B0ABE0: using guessed type wchar_t aCash_0[5];
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65C20: using guessed type __int64 qword_140C65C20;
// 1404DD130: using guessed type char var_80[8];

