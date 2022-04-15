//----- (000000014047DCF0) ----------------------------------------------------
void __fastcall sub_14047DCF0(__int64 a1, int a2, double a3, double a4)
{
	int v4; // r14d
	__int64 v7; // r13
	int v8; // r15d
	__int64 v9; // rax
	int v10; // eax
	int v11; // ebx
	int v12; // eax
	int v13; // r12d
	int v14; // ecx
	unsigned int v15; // eax
	unsigned int v16; // edi
	unsigned int v17; // ebx
	unsigned int v18; // eax
	unsigned int v19; // ebx
	unsigned int v20; // edx
	unsigned int v21; // eax
	unsigned int v22; // eax
	__int64 v23; // rcx
	unsigned int v24; // eax
	unsigned int v25; // ebx
	__int64 v26; // rdi
	__int64 v27; // rax
	__int64 v28; // rbx
	unsigned int v29; // edx
	bool v30; // cf
	unsigned int v31; // edx
	__int64 v32; // rcx
	__int64 v33; // rcx
	int v34; // eax
	__int64 v35; // rcx
	__int64 v36; // r9
	int v37; // ebx
	int v38; // eax
	int v39; // r12d
	int v40; // ecx
	unsigned int v41; // eax
	unsigned int v42; // edi
	unsigned int v43; // ebx
	unsigned int v44; // eax
	unsigned int v45; // ebx
	unsigned int v46; // edx
	unsigned int v47; // eax
	unsigned int v48; // eax
	__int64 v49; // rcx
	unsigned int v50; // eax
	unsigned int v51; // ebx
	__int64 v52; // rdi
	__int64 v53; // rax
	__int64 v54; // rbx
	unsigned int v55; // edx
	unsigned int v56; // edx
	__int64 v57; // rcx
	__int64 v58; // rax
	__int64(__fastcall * *v59)(); // [rsp+20h] [rbp-58h] BYREF
	int v60; // [rsp+28h] [rbp-50h]
	__int64 v61; // [rsp+2Ch] [rbp-4Ch]
	__int64 v62; // [rsp+34h] [rbp-44h]
	int v63; // [rsp+3Ch] [rbp-3Ch]
	unsigned int v64; // [rsp+40h] [rbp-38h] BYREF
	unsigned int v65; // [rsp+44h] [rbp-34h]
	__int64 v66; // [rsp+48h] [rbp-30h]
	__int128 v67; // [rsp+50h] [rbp-28h]
	unsigned int v68; // [rsp+A0h] [rbp+28h]
	unsigned int v69; // [rsp+A0h] [rbp+28h]
	unsigned int v70; // [rsp+A8h] [rbp+30h]
	int v71; // [rsp+A8h] [rbp+30h]
	unsigned int v72; // [rsp+A8h] [rbp+30h]
	int v73; // [rsp+A8h] [rbp+30h]
	__int64 v74; // [rsp+B0h] [rbp+38h]
	__int64 v75; // [rsp+B0h] [rbp+38h]

	v4 = 0;
	if (*(_DWORD*)(a1 + 84) > 1 == a2)
		return;
	v7 = *(_QWORD*)(qword_140C65898 + 25744);
	v8 = 1;
	if ((dword_140DC3078 & 1) == 0)
	{
		dword_140DC3078 |= 1u;
		v9 = sub_140200220(0x303u);
		if (v9)
			v10 = *(_DWORD*)(v9 + 4);
		else
			v10 = 1;
		dword_140DC307C = v10;
	}
	if (a2)
	{
		if (*(int*)(a1 + 84) >= 2)
			return;
		v11 = 0;
		*(_DWORD*)(a1 + 84) = 2;
		if (*(_QWORD*)(a1 + 3264))
		{
			v12 = sub_140467ED0(a1);
			*(_DWORD*)(a1 + 5164) &= ~0x20u;
			v13 = *(_DWORD*)(a1 + 5164);
			if ((v12 & 0xFFFFFFF6) == 0 && v12 != 1)
			{
				v13 = 63;
				v11 = 1;
			}
			v14 = *(_DWORD*)(a1 + 5160);
			if (v14 != v13)
			{
				if (v13 == 63)
				{
					if (v11
						|| !*(_QWORD*)(a1 + 5864)
						|| *(_DWORD*)(a1 + 440)
						|| *(_DWORD*)(a1 + 444)
						|| (v15 = sub_140470540((_DWORD*)a1, 6708), (v16 = v15) == 0)
						|| !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
							*(_QWORD*)(a1 + 5864),
							v15))
					{
						sub_140195D70(a1 + 5168);
						sub_140195D70(a1 + 5240);
						(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 3264) + 168i64))(
							*(_QWORD*)(a1 + 3264),
							3i64,
							3i64);
						*(_DWORD*)(a1 + 5312) = 1;
						if (*(_QWORD*)(a1 + 5864))
						{
							sub_140471EF0(a1, 1, 1);
							sub_140471EF0(a1, 1, 0);
						}
					}
					else
					{
						v70 = sub_1401AE6A0(0, 0xFFFF);
						v74 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 424i64))(
							*(_QWORD*)(a1 + 5864),
							v16,
							v70);
						v17 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
							*(_QWORD*)(a1 + 5864),
							v16,
							v70,
							57i64);
						v18 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
							*(_QWORD*)(a1 + 5864),
							v16,
							v70,
							55i64);
						if (v17 < v18)
							v18 = v17;
						v68 = v18;
						v19 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
							*(_QWORD*)(a1 + 5864),
							v16,
							v70,
							56i64);
						if (v19 == -1)
							v19 = *(_DWORD*)(v74 + 20) >> 1;
						v20 = v68;
						v21 = *(_DWORD*)(v74 + 20);
						*(_QWORD*)&v67 = sub_140471DB0;
						if (v68 == -1)
							v20 = v19;
						v64 = 0;
						v66 = a1;
						if (v21 < v20)
							v20 = v21;
						*((_QWORD*)&v67 + 1) = 0i64;
						sub_140195960(a1 + 5168, v20, (__int64)&v64, 4);
						*(_QWORD*)&v67 = sub_140471E00;
						v22 = *(_DWORD*)(v74 + 20);
						v64 = 0;
						v66 = a1;
						*((_QWORD*)&v67 + 1) = 0i64;
						if (v22 < v19)
							v19 = v22;
						sub_140195960(a1 + 5240, v19, (__int64)&v64, 4);
						v23 = *(_QWORD*)(a1 + 5864);
						v60 = 1065353216;
						v59 = (__int64(__fastcall**)())__PAIR64__(v70, v16);
						v61 = 0x2100000000i64;
						v62 = 2i64;
						v63 = 0;
						(*(void(__fastcall**)(__int64, __int64, __int64(__fastcall***)()))(*(_QWORD*)v23 + 584i64))(
							v23,
							6i64,
							&v59);
					}
				}
				else if (v14 == 63)
				{
					if (v11
						|| !*(_QWORD*)(a1 + 5864)
						|| *(_DWORD*)(a1 + 440)
						|| *(_DWORD*)(a1 + 444)
						|| (v24 = sub_1404705D0((_DWORD*)a1, (unsigned int)(*(_DWORD*)(a1 + 684) != 0) + 6709, v12, 0i64),
							v25 = v24,
							(v71 = v24) == 0)
						|| !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
							*(_QWORD*)(a1 + 5864),
							v24))
					{
						v64 = 0;
						*(_QWORD*)&v67 = sub_140471E50;
						v66 = a1;
						*((_QWORD*)&v67 + 1) = 0i64;
						sub_140195960(a1 + 5168, 150, (__int64)&v64, 4);
						*(_QWORD*)&v67 = sub_140471EA0;
						v64 = 0;
						v66 = a1;
						*((_QWORD*)&v67 + 1) = 0i64;
						sub_140195960(a1 + 5240, 150, (__int64)&v64, 4);
					}
					else
					{
						v26 = (unsigned int)sub_1401AE6A0(0, 0xFFFF);
						v27 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 424i64))(
							*(_QWORD*)(a1 + 5864),
							v25,
							v26);
						v28 = v27;
						v29 = *(_DWORD*)(v27 + 24);
						v64 = 0;
						v66 = a1;
						v30 = *(_DWORD*)(v27 + 20) < v29;
						*(_QWORD*)&v67 = sub_140471E50;
						*((_QWORD*)&v67 + 1) = 0i64;
						if (v30)
							v29 = *(_DWORD*)(v27 + 20);
						sub_140195960(a1 + 5168, v29, (__int64)&v64, 4);
						v31 = *(_DWORD*)(v28 + 24);
						if (*(_DWORD*)(v28 + 20) < v31)
							v31 = *(_DWORD*)(v28 + 20);
						v64 = 0;
						v66 = a1;
						*(_QWORD*)&v67 = sub_140471EA0;
						*((_QWORD*)&v67 + 1) = 0i64;
						sub_140195960(a1 + 5240, v31, (__int64)&v64, 4);
						v32 = *(_QWORD*)(a1 + 5864);
						v66 = 1065353216i64;
						v64 = v71;
						v65 = v26;
						LODWORD(v67) = 33;
						*(_QWORD*)((char*)&v67 + 4) = 2i64;
						HIDWORD(v67) = 0;
						(*(void(__fastcall**)(__int64, __int64, unsigned int*))(*(_QWORD*)v32 + 584i64))(v32, 6i64, &v64);
					}
					*(_DWORD*)(a1 + 5312) = 1;
				}
				if ((v13 & 4) != 0)
					sub_140195D70(a1 + 5016);
				if ((v13 & 0x10) != 0)
					sub_140195D70(a1 + 5088);
				*(_DWORD*)(a1 + 5160) = v13;
			}
		}
		*(_DWORD*)(a1 + 528) = dword_140C636A8;
		if (v7 != a1)
		{
			if (!v7 || (unsigned int)sub_14045A950(v7, *(_DWORD*)(a1 + 8)))
				v8 = 0;
			if (!dword_140DC307C)
			{
				v33 = *(_QWORD*)(qword_140C65898 + 25744);
				v34 = 0;
				if (v33)
					v34 = *(_DWORD*)(v33 + 264);
				if (*(_DWORD*)(a1 + 8) == v34 && v8)
					sub_14055B0E0(qword_140C65898, 0, a3, a4);
			}
			if (v7)
			{
				v35 = *(_QWORD*)(qword_140C65898 + 25744);
				if (v35)
					v4 = *(_DWORD*)(v35 + 264);
				v36 = *(unsigned int*)(a1 + 8);
				if ((_DWORD)v36 != v4)
				{
					if (v8)
						sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "UnitDestroyed", L"U", v36);
				}
			}
			return;
		}
		v61 = 24i64;
	}
	else
	{
		if (*(int*)(a1 + 84) <= 1)
			return;
		v37 = 0;
		*(_DWORD*)(a1 + 84) = 1;
		if (*(_QWORD*)(a1 + 3264))
		{
			v38 = sub_140467ED0(a1);
			*(_DWORD*)(a1 + 5164) |= 0x20u;
			v39 = *(_DWORD*)(a1 + 5164);
			if ((v38 & 0xFFFFFFF6) == 0 && v38 != 1)
			{
				v39 = 63;
				v37 = 1;
			}
			v40 = *(_DWORD*)(a1 + 5160);
			if (v40 != v39)
			{
				if (v39 == 63)
				{
					if (v37
						|| !*(_QWORD*)(a1 + 5864)
						|| *(_DWORD*)(a1 + 440)
						|| *(_DWORD*)(a1 + 444)
						|| (v41 = sub_140470540((_DWORD*)a1, 6708), (v42 = v41) == 0)
						|| !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
							*(_QWORD*)(a1 + 5864),
							v41))
					{
						sub_140195D70(a1 + 5168);
						sub_140195D70(a1 + 5240);
						(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 3264) + 168i64))(
							*(_QWORD*)(a1 + 3264),
							3i64,
							3i64);
						*(_DWORD*)(a1 + 5312) = 1;
						if (*(_QWORD*)(a1 + 5864))
						{
							sub_140471EF0(a1, 1, 1);
							sub_140471EF0(a1, 1, 0);
						}
					}
					else
					{
						v72 = sub_1401AE6A0(0, 0xFFFF);
						v75 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 424i64))(
							*(_QWORD*)(a1 + 5864),
							v42,
							v72);
						v43 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
							*(_QWORD*)(a1 + 5864),
							v42,
							v72,
							57i64);
						v44 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
							*(_QWORD*)(a1 + 5864),
							v42,
							v72,
							55i64);
						if (v43 < v44)
							v44 = v43;
						v69 = v44;
						v45 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 432i64))(
							*(_QWORD*)(a1 + 5864),
							v42,
							v72,
							56i64);
						if (v45 == -1)
							v45 = *(_DWORD*)(v75 + 20) >> 1;
						v46 = v69;
						v47 = *(_DWORD*)(v75 + 20);
						*(_QWORD*)&v67 = sub_140471DB0;
						if (v69 == -1)
							v46 = v45;
						v64 = 0;
						v66 = a1;
						if (v47 < v46)
							v46 = v47;
						*((_QWORD*)&v67 + 1) = 0i64;
						sub_140195960(a1 + 5168, v46, (__int64)&v64, 4);
						*(_QWORD*)&v67 = sub_140471E00;
						v48 = *(_DWORD*)(v75 + 20);
						v64 = 0;
						v66 = a1;
						*((_QWORD*)&v67 + 1) = 0i64;
						if (v48 < v45)
							v45 = v48;
						sub_140195960(a1 + 5240, v45, (__int64)&v64, 4);
						v49 = *(_QWORD*)(a1 + 5864);
						v66 = 1065353216i64;
						v65 = v72;
						v64 = v42;
						LODWORD(v67) = 33;
						*(_QWORD*)((char*)&v67 + 4) = 2i64;
						HIDWORD(v67) = 0;
						(*(void(__fastcall**)(__int64, __int64, unsigned int*))(*(_QWORD*)v49 + 584i64))(v49, 6i64, &v64);
					}
				}
				else if (v40 == 63)
				{
					if (v37
						|| !*(_QWORD*)(a1 + 5864)
						|| *(_DWORD*)(a1 + 440)
						|| *(_DWORD*)(a1 + 444)
						|| (v50 = sub_1404705D0((_DWORD*)a1, (unsigned int)(*(_DWORD*)(a1 + 684) != 0) + 6709, v38, 0i64),
							v51 = v50,
							(v73 = v50) == 0)
						|| !(*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(
							*(_QWORD*)(a1 + 5864),
							v50))
					{
						v64 = 0;
						*(_QWORD*)&v67 = sub_140471E50;
						v66 = a1;
						*((_QWORD*)&v67 + 1) = 0i64;
						sub_140195960(a1 + 5168, 150, (__int64)&v64, 4);
						*(_QWORD*)&v67 = sub_140471EA0;
						v64 = 0;
						v66 = a1;
						*((_QWORD*)&v67 + 1) = 0i64;
						sub_140195960(a1 + 5240, 150, (__int64)&v64, 4);
					}
					else
					{
						v52 = (unsigned int)sub_1401AE6A0(0, 0xFFFF);
						v53 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 5864) + 424i64))(
							*(_QWORD*)(a1 + 5864),
							v51,
							v52);
						v54 = v53;
						v55 = *(_DWORD*)(v53 + 24);
						v64 = 0;
						v66 = a1;
						v30 = *(_DWORD*)(v53 + 20) < v55;
						*(_QWORD*)&v67 = sub_140471E50;
						*((_QWORD*)&v67 + 1) = 0i64;
						if (v30)
							v55 = *(_DWORD*)(v53 + 20);
						sub_140195960(a1 + 5168, v55, (__int64)&v64, 4);
						v56 = *(_DWORD*)(v54 + 24);
						if (*(_DWORD*)(v54 + 20) < v56)
							v56 = *(_DWORD*)(v54 + 20);
						v64 = 0;
						v66 = a1;
						*(_QWORD*)&v67 = sub_140471EA0;
						*((_QWORD*)&v67 + 1) = 0i64;
						sub_140195960(a1 + 5240, v56, (__int64)&v64, 4);
						v57 = *(_QWORD*)(a1 + 5864);
						v66 = 1065353216i64;
						v64 = v73;
						v65 = v52;
						LODWORD(v67) = 33;
						*(_QWORD*)((char*)&v67 + 4) = 2i64;
						HIDWORD(v67) = 0;
						(*(void(__fastcall**)(__int64, __int64, unsigned int*))(*(_QWORD*)v57 + 584i64))(v57, 6i64, &v64);
					}
					*(_DWORD*)(a1 + 5312) = 1;
				}
				if ((v39 & 4) != 0)
					sub_140195D70(a1 + 5016);
				if ((v39 & 0x10) != 0)
					sub_140195D70(a1 + 5088);
				*(_DWORD*)(a1 + 5160) = v39;
			}
		}
		*(_DWORD*)(a1 + 528) = dword_140C636A8;
		if (v7 != a1)
		{
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "UnitCreated", L"U", *(unsigned int*)(a1 + 8));
			return;
		}
		v61 = 0x100000018i64;
	}
	v60 = *(_DWORD*)(v7 + 8);
	v59 = off_140B6F4C0;
	if (sub_14060AF20((__int64)&v59))
	{
		v58 = sub_1403D90D0(qword_140C65898, v60);
		if (v58)
		{
			if (sub_14047DCA0(v58))
				sub_14060AFE0((int*)&v59, v60);
		}
	}
}
// 1409EDDFC: using guessed type wchar_t aU_5[2];
// 1409EDE34: using guessed type wchar_t aU_10[2];
// 140B6F4C0: using guessed type __int64 (__fastcall *off_140B6F4C0[213])();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3078: using guessed type int dword_140DC3078;
// 140DC307C: using guessed type int dword_140DC307C;

