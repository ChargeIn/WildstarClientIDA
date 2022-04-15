//----- (00000001405A2A60) ----------------------------------------------------
void __fastcall sub_1405A2A60(_QWORD* a1, __int64 a2, __int64* a3)
{
	__int64 v3; // rax
	__int64 v5; // rsi
	unsigned int* v6; // r12
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // eax
	unsigned int v12; // ecx
	int v13; // r15d
	__int64 v14; // rdx
	unsigned __int64 v15; // rcx
	__int64 v16; // rsi
	__int64 v17; // rbx
	__int64 v18; // rax
	__int64 v19; // rdx
	int v20; // ebx
	__int64 v21; // r14
	__int64 v22; // rcx
	unsigned __int64 v23; // rax
	__int64 v24; // rbx
	__int64 v25; // rax
	int v26; // r15d
	int v27; // r13d
	__int64 v28; // rcx
	unsigned int v29; // edx
	int* v30; // rsi
	_QWORD* v31; // rax
	__int64 v32; // rbx
	__int64 v33; // rax
	__int64 v34; // r9
	_QWORD* v35; // rax
	__int64 v36; // rbx
	__int64 v37; // rax
	__int64 v38; // r9
	_QWORD* v39; // rax
	__int64 v40; // rbx
	__int64 v41; // rax
	__int64 v42; // r9
	_QWORD* v43; // rax
	__int64 v44; // rdx
	unsigned __int64* v45; // rdx
	unsigned __int64 v46; // r8
	_DWORD* v47; // rcx
	__int64* v48; // rax
	__int64 v49; // rdx
	__int64 v50; // [rsp+38h] [rbp-D0h] BYREF
	__int64 v51; // [rsp+40h] [rbp-C8h]
	__int64 v52; // [rsp+48h] [rbp-C0h]
	__int64(__fastcall * *v53)(); // [rsp+50h] [rbp-B8h] BYREF
	__int64 v54; // [rsp+58h] [rbp-B0h]
	_QWORD* v55; // [rsp+60h] [rbp-A8h]
	__int64 v56; // [rsp+68h] [rbp-A0h]
	__int64(__fastcall * *v57)(); // [rsp+70h] [rbp-98h] BYREF
	__int64 v58; // [rsp+78h] [rbp-90h]
	_QWORD* v59; // [rsp+80h] [rbp-88h]
	int v60; // [rsp+88h] [rbp-80h]
	__int64(__fastcall * *v61)(); // [rsp+90h] [rbp-78h] BYREF
	int v62; // [rsp+98h] [rbp-70h]
	_QWORD* v63; // [rsp+A0h] [rbp-68h]
	int v64; // [rsp+A8h] [rbp-60h]
	__int64 v65; // [rsp+B0h] [rbp-58h] BYREF
	int v66; // [rsp+B8h] [rbp-50h]
	__int64 v67; // [rsp+C0h] [rbp-48h] BYREF
	int v68; // [rsp+C8h] [rbp-40h]
	__int64 v69; // [rsp+D0h] [rbp-38h] BYREF
	int v70; // [rsp+D8h] [rbp-30h]
	int v73; // [rsp+140h] [rbp+38h]

	if (a3)
	{
		v3 = *a3;
		if (*a3 && *(_DWORD*)(v3 + 1184))
			v5 = *(_QWORD*)(v3 + 8);
		else
			v5 = 0i64;
		v6 = v3 && *(_DWORD*)(v3 + 1176) ? (unsigned int*)(v3 + 32) : 0i64;
		if (v5 && v6)
		{
			v63 = a1;
			v7 = a1[4];
			v8 = *(_QWORD*)(v7 + 112);
			v61 = off_140B569F0;
			v64 = 1;
			if (*(_QWORD*)(v7 + 120) >= v8)
				sub_14005E2C0((__int64)a1);
			v9 = a1[2];
			v10 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v9 + 8) = 5;
			*(_QWORD*)v9 = v10;
			a1[2] += 16i64;
			v11 = sub_1400578C0((__int64)a1);
			v12 = *(_DWORD*)(v5 + 368);
			v13 = v11;
			v62 = v11;
			sub_14020DF20(v12);
			v14 = a1[4];
			v53 = off_140B569F0;
			v15 = *(_QWORD*)(v14 + 112);
			v16 = (__int64)a1;
			v55 = a1;
			LODWORD(v56) = 1;
			if (*(_QWORD*)(v14 + 120) >= v15)
				sub_14005E2C0((__int64)a1);
			v17 = a1[2];
			v18 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v17 + 8) = 5;
			*(_QWORD*)v17 = v18;
			a1[2] += 16i64;
			v20 = sub_1400578C0((__int64)a1);
			LODWORD(v54) = v20;
			v21 = 0i64;
			v73 = 0;
			if (v6[76])
			{
				do
				{
					v22 = a1[4];
					v57 = off_140B569F0;
					v59 = a1;
					v23 = *(_QWORD*)(v22 + 112);
					v60 = 1;
					if (*(_QWORD*)(v22 + 120) >= v23)
						sub_14005E2C0((__int64)a1);
					v24 = a1[2];
					v25 = sub_14005C1B0((__int64)a1, 0, 0);
					*(_DWORD*)(v24 + 8) = 5;
					*(_QWORD*)v24 = v25;
					a1[2] += 16i64;
					v26 = sub_1400578C0((__int64)a1);
					LODWORD(v58) = v26;
					v27 = 0;
					v28 = *a3;
					if (*a3 && *(_DWORD*)(v28 + 1192) && (unsigned int)v21 < 8 && *(_DWORD*)(v28 + 4 * v21 + 1144))
					{
						v29 = *(_DWORD*)(v28 + 1192) ? *(_DWORD*)(v28 + 4 * v21 + 1144) : 0;
						v30 = sub_1400B5DF0(qword_140C658F0, v29, 0i64);
						if (v30)
						{
							v27 = 1;
							v73 = 1;
							v50 = 0i64;
							v52 = 0i64;
							v51 = 1i64;
							v31 = (_QWORD*)sub_140059170(a1, 0x18ui64);
							*v31 = 0i64;
							v31[1] = 1i64;
							v31[2] = 0i64;
							v32 = a1[4];
							v33 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
							v34 = a1[2];
							v65 = v33;
							v66 = 4;
							sub_14005E8E0((__int64)a1, v32 + 160, (int*)&v65, v34);
							a1[2] += 16i64;
							sub_140058BF0((__int64)a1, -2);
							sub_1400FB540((__int64)&v57);
							a1[2] -= 16i64;
							if ((unsigned int)sub_1405143C0(v6, &v50, (__int64)v30, 1, 0))
							{
								v35 = (_QWORD*)sub_140059170(a1, 0x18ui64);
								*v35 = v50;
								v35[1] = v51;
								v35[2] = v52;
								v36 = a1[4];
								v37 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
								v38 = a1[2];
								v67 = v37;
								v68 = 4;
								sub_14005E8E0((__int64)a1, v36 + 160, (int*)&v67, v38);
								a1[2] += 16i64;
								sub_140058BF0((__int64)a1, -2);
								sub_1400FB540((__int64)&v57);
								a1[2] -= 16i64;
							}
							if ((unsigned int)sub_1405143C0(v6, &v50, (__int64)v30, 1, 1))
							{
								v39 = (_QWORD*)sub_140059170(a1, 0x18ui64);
								*v39 = v50;
								v39[1] = v51;
								v39[2] = v52;
								v40 = a1[4];
								v41 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
								v42 = a1[2];
								v69 = v41;
								v70 = 4;
								sub_14005E8E0((__int64)a1, v40 + 160, (int*)&v69, v42);
								a1[2] += 16i64;
								sub_140058BF0((__int64)a1, -2);
								sub_1400FB540((__int64)&v57);
								a1[2] -= 16i64;
							}
						}
					}
					v43 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v26);
					v44 = a1[2];
					*(_QWORD*)v44 = *v43;
					*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
					a1[2] += 16i64;
					v45 = (unsigned __int64*)sub_14018F0E0(&v57, L"bAllowed")[1];
					if (v45)
					{
						v46 = -1i64;
						do
							++v46;
						while (*((_BYTE*)v45 + v46));
						sub_140058710((__int64)a1, v45, v46);
					}
					else
					{
						*(_DWORD*)(a1[2] + 8i64) = 0;
						a1[2] += 16i64;
					}
					if (v58)
						sub_14018B900(v58, 0);
					v47 = (_DWORD*)a1[2];
					v47[2] = 1;
					*v47 = v27 != 0;
					a1[2] += 16i64;
					v48 = (__int64*)sub_1400580E0((__int64)a1, -3);
					sub_14005EA50((__int64)a1, v48, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
					a1[2] -= 48i64;
					sub_1400FB1D0((__int64)&v53);
					sub_1400579E0((__int64)a1, v49, v26);
					v21 = (unsigned int)(v21 + 1);
				} while ((unsigned int)v21 < v6[76]);
				v20 = v54;
				if (v73)
				{
					sub_1400FB2A0((__int64)&v61, (__int64)L"arSlot", v54);
					v13 = v62;
					sub_1400FB2A0(a2, (__int64)L"tClearInfo", v62);
				}
				else
				{
					v13 = v62;
				}
				v16 = (__int64)v55;
			}
			if (v16)
				sub_1400579E0(v16, v19, v20);
			sub_1400579E0((__int64)a1, v19, v13);
		}
	}
}
// 1405A2F49: variable 'v49' is possibly undefined
// 1405A2FC1: variable 'v19' is possibly undefined
// 140B20920: using guessed type wchar_t aTclearinfo[11];
// 140B209B8: using guessed type wchar_t aArslot[7];
// 140B209C8: using guessed type wchar_t aBallowed[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C658F0: using guessed type __int64 qword_140C658F0;

