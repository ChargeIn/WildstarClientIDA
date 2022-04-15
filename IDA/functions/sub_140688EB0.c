//----- (0000000140688EB0) ----------------------------------------------------
__int64 __fastcall sub_140688EB0(__int64 a1)
{
	__int64 v2; // rax
	_QWORD* v3; // r14
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // r13d
	_QWORD* v9; // rax
	__int64 v10; // rdx
	unsigned __int16* v11; // r10
	float v12; // xmm6_4
	_QWORD* v13; // rax
	__int64 v14; // r10
	unsigned __int64* v15; // rdx
	unsigned __int64 v16; // r8
	__int64 v17; // rax
	__int64* v18; // rax
	__int64 v19; // rcx
	_QWORD* v20; // rax
	__int64 v21; // rdx
	unsigned __int16* v22; // r10
	__int64 v23; // rcx
	_QWORD* v24; // rax
	__int64 v25; // rdx
	unsigned __int16* v26; // r10
	__int64 v27; // rcx
	unsigned __int64 v28; // rax
	__int64 v29; // rbx
	__int64 v30; // rax
	__int64 v31; // rcx
	unsigned int v32; // ebp
	__int64 v33; // r15
	int v34; // edx
	__int16* v35; // rax
	unsigned __int16* v36; // rsi
	int v37; // edx
	__int16* v38; // r12
	__int64 v39; // rbx
	__int64 v40; // rax
	int v41; // ebx
	_QWORD* v42; // rax
	__int64 v43; // rdx
	_QWORD* v44; // rax
	__int64 v45; // r10
	__int64 v46; // rdx
	_QWORD* v47; // rax
	__int64 v48; // r10
	__int64 v49; // rdx
	__int64 v50; // rax
	_QWORD* v51; // rax
	__int64 v52; // r11
	__int64 v53; // rdx
	int v54; // r10d
	__int64 v55; // rdx
	int v56; // ebx
	_QWORD* v57; // rax
	__int64 v58; // rdx
	__int64 v59; // rcx
	__int64(__fastcall * *v61)(); // [rsp+20h] [rbp-88h] BYREF
	__int64 v62; // [rsp+28h] [rbp-80h]
	__int64 v63; // [rsp+30h] [rbp-78h]
	int v64; // [rsp+38h] [rbp-70h]
	__int64(__fastcall * *v65)(); // [rsp+40h] [rbp-68h] BYREF
	int v66; // [rsp+48h] [rbp-60h]
	__int64 v67; // [rsp+50h] [rbp-58h]
	int v68; // [rsp+58h] [rbp-50h]

	v2 = *(_QWORD*)(qword_140C65980 + 48);
	if (*(_QWORD*)v2 == v2 || (v3 = *(_QWORD**)(*(_QWORD*)v2 + 16i64)) == 0i64)
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		v4 = *(_QWORD*)(a1 + 32);
		v5 = *(_QWORD*)(v4 + 112);
		v67 = a1;
		v65 = off_140B569F0;
		v68 = 1;
		if (*(_QWORD*)(v4 + 120) >= v5)
			sub_14005E2C0(a1);
		v6 = *(_QWORD*)(a1 + 16);
		v7 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		*(_QWORD*)(a1 + 16) += 16i64;
		v8 = sub_1400578C0(a1);
		v66 = v8;
		v9 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v8);
		v10 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v10 = *v9;
		*(_DWORD*)(v10 + 8) = *((_DWORD*)v9 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F0870(a1, v10, L"strSprite", v11);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v12 = (float)(*((_DWORD*)v3 + 5) + *(_DWORD*)(*v3 + 52i64) - dword_140C636A8) * 0.001;
		v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v8);
		*(_QWORD*)v14 = *v13;
		*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		v15 = (unsigned __int64*)sub_14018F0E0(&v61, L"fTimeRemaining")[1];
		if (v15)
		{
			v16 = -1i64;
			do
				++v16;
			while (*((_BYTE*)v15 + v16));
			sub_140058710(a1, v15, v16);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		if (v62)
			sub_14018B900(v62, 0);
		v17 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v17 + 8) = 3;
		*(double*)v17 = v12;
		*(_QWORD*)(a1 + 16) += 16i64;
		v18 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v18, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 48i64;
		sub_14034BDD0(v19, *(_DWORD*)(*v3 + 4i64));
		v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v8);
		v21 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v21 = *v20;
		*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F0870(a1, v21, L"strTitle", v22);
		*(_QWORD*)(a1 + 16) -= 16i64;
		sub_14034BDD0(v23, *(_DWORD*)(*v3 + 8i64));
		v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v8);
		v25 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v25 = *v24;
		*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F0870(a1, v25, L"strDescription", v26);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v27 = *(_QWORD*)(a1 + 32);
		v28 = *(_QWORD*)(v27 + 112);
		v61 = off_140B569F0;
		v63 = a1;
		v64 = 1;
		if (*(_QWORD*)(v27 + 120) >= v28)
			sub_14005E2C0(a1);
		v29 = *(_QWORD*)(a1 + 16);
		v30 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v29 + 8) = 5;
		*(_QWORD*)v29 = v30;
		*(_QWORD*)(a1 + 16) += 16i64;
		LODWORD(v62) = sub_1400578C0(a1);
		v32 = 0;
		v33 = 32i64;
		do
		{
			v34 = *(_DWORD*)(*v3 + v33 - 20);
			if (v34)
			{
				v35 = sub_14034BDD0(v31, v34);
				v36 = (unsigned __int16*)v35;
				if (v35)
				{
					v31 = 0i64;
					if (*v35)
					{
						do
							++v31;
						while (v35[v31]);
						if (v31)
						{
							v37 = *(_DWORD*)(v33 + *v3);
							if (v37)
								v38 = sub_14034BDD0(v31, v37);
							else
								v38 = 0i64;
							if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
								sub_14005E2C0(a1);
							v39 = *(_QWORD*)(a1 + 16);
							v40 = sub_14005C1B0(a1, 0, 0);
							*(_DWORD*)(v39 + 8) = 5;
							*(_QWORD*)v39 = v40;
							*(_QWORD*)(a1 + 16) += 16i64;
							v41 = sub_1400578C0(a1);
							v42 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v41);
							v43 = *(_QWORD*)(a1 + 16);
							*(_QWORD*)v43 = *v42;
							*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
							*(_QWORD*)(a1 + 16) += 16i64;
							sub_1400F06F0(a1, v43, L"nChoice", v32);
							*(_QWORD*)(a1 + 16) -= 16i64;
							v44 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v41);
							*(_QWORD*)v45 = *v44;
							*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
							*(_QWORD*)(a1 + 16) += 16i64;
							sub_1400F0870(a1, v46, L"strChoiceDescription", v36);
							*(_QWORD*)(a1 + 16) -= 16i64;
							v47 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v41);
							*(_QWORD*)v48 = *v47;
							*(_DWORD*)(v48 + 8) = *((_DWORD*)v47 + 2);
							*(_QWORD*)(a1 + 16) += 16i64;
							sub_1400F0870(a1, v49, L"strLabel", (unsigned __int16*)v38);
							*(_QWORD*)(a1 + 16) -= 16i64;
							v50 = *(_QWORD*)(v3[4] + 8i64);
							while (v50)
							{
								if (*(_DWORD*)(v50 + 32) < v32)
									v50 = *(_QWORD*)(v50 + 24);
								else
									v50 = *(_QWORD*)(v50 + 16);
							}
							v51 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v41);
							*(_QWORD*)v52 = *v51;
							*(_DWORD*)(v52 + 8) = *((_DWORD*)v51 + 2);
							*(_QWORD*)(a1 + 16) += 16i64;
							sub_1400F06F0(a1, v53, L"nTally", v54);
							*(_QWORD*)(a1 + 16) -= 16i64;
							sub_1400FB1D0((__int64)&v61);
							sub_1400579E0(a1, v55, v41);
						}
					}
				}
			}
			++v32;
			v33 += 4i64;
		} while (v32 < 5);
		v56 = v62;
		sub_1400FB2A0((__int64)&v65, (__int64)L"arOptions", v62);
		v57 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v8);
		v58 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v58 = *v57;
		*(_DWORD*)(v58 + 8) = *((_DWORD*)v57 + 2);
		v59 = v63;
		*(_QWORD*)(a1 + 16) += 16i64;
		if (v59)
			sub_1400579E0(v59, v58, v56);
		sub_1400579E0(a1, v58, v8);
		return 1i64;
	}
}
// 140688FB6: variable 'v11' is possibly undefined
// 140689001: variable 'v14' is possibly undefined
// 1406890A2: variable 'v19' is possibly undefined
// 1406890DF: variable 'v22' is possibly undefined
// 1406890EF: variable 'v23' is possibly undefined
// 14068912C: variable 'v26' is possibly undefined
// 1406891B0: variable 'v31' is possibly undefined
// 14068929C: variable 'v45' is possibly undefined
// 1406892AE: variable 'v46' is possibly undefined
// 1406892DB: variable 'v48' is possibly undefined
// 1406892ED: variable 'v49' is possibly undefined
// 140689383: variable 'v52' is possibly undefined
// 140689395: variable 'v53' is possibly undefined
// 140689395: variable 'v54' is possibly undefined
// 1406893B1: variable 'v55' is possibly undefined
// 14068943A: variable 'v58' is possibly undefined
// 140B32C30: using guessed type wchar_t aNtally[7];
// 140B32C40: using guessed type wchar_t aAroptions[10];
// 140B32C58: using guessed type wchar_t aStrchoicedescr[21];
// 140B32C88: using guessed type wchar_t aStrlabel[9];
// 140B32CA0: using guessed type wchar_t aStrdescription_18[15];
// 140B32CC0: using guessed type wchar_t aNchoice[8];
// 140B32CD0: using guessed type wchar_t aFtimeremaining_0[15];
// 140B32CF0: using guessed type wchar_t aStrtitle_4[9];
// 140B32D20: using guessed type wchar_t aStrsprite_4[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65980: using guessed type __int64 qword_140C65980;

