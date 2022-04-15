#include "../winhttp.h"

//----- (000000014042C760) ----------------------------------------------------
void __fastcall sub_14042C760(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rsi
	_QWORD* v3; // rdi
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	unsigned int v8; // ebx
	__int64 v9; // r13
	__int64 v10; // rcx
	unsigned __int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // r12d
	int v15; // r15d
	__int64 v16; // rcx
	_QWORD* v17; // rax
	__int64 v18; // rdx
	unsigned __int64* v19; // r14
	unsigned __int64 v20; // rsi
	__int64 v21; // rbx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rax
	__int64* v25; // rax
	int v26; // r15d
	_QWORD* v27; // rax
	__int64 v28; // r10
	unsigned __int64* v29; // r14
	unsigned __int64 v30; // rsi
	__int64 v31; // rbx
	__int64 v32; // rax
	_DWORD* v33; // rcx
	int v34; // eax
	__int64* v35; // rax
	__int64 v36; // rbx
	__int64 v37; // rax
	__int64 v38; // r8
	_QWORD* v39; // rax
	__int64 v40; // rcx
	__int64 v41; // rbx
	__int64 v42; // rax
	__int64 v43; // r9
	float v44; // xmm6_4
	unsigned __int64 v45; // rbx
	float v46; // xmm3_4
	unsigned __int64 v47; // rax
	signed __int64 v48; // rax
	unsigned __int64 v49; // rtt
	double v50; // xmm0_8
	float v51; // xmm2_4
	float v52; // xmm1_4
	_QWORD* v53; // rax
	__int64 v54; // rdx
	unsigned __int64* v55; // r14
	unsigned __int64 v56; // rsi
	__int64 v57; // rbx
	__int64 v58; // rax
	__int64 v59; // rcx
	__int64 v60; // rax
	__int64* v61; // rax
	_QWORD* v62; // rax
	__int64 v63; // rdx
	int v64; // r10d
	__int64 v65; // rdx
	__int64 v66; // rdx
	__int64(__fastcall * *v67)(); // [rsp+40h] [rbp-C8h] BYREF
	__int64 v68; // [rsp+48h] [rbp-C0h]
	_QWORD* v69; // [rsp+50h] [rbp-B8h]
	int v70; // [rsp+58h] [rbp-B0h]
	__int64 v71; // [rsp+60h] [rbp-A8h] BYREF
	__int64 v72; // [rsp+68h] [rbp-A0h]
	__int64 v73; // [rsp+80h] [rbp-88h] BYREF
	int v74; // [rsp+88h] [rbp-80h]
	__int64(__fastcall * *v75)(); // [rsp+90h] [rbp-78h] BYREF
	int v76; // [rsp+98h] [rbp-70h]
	_QWORD* v77; // [rsp+A0h] [rbp-68h]
	int v78; // [rsp+A8h] [rbp-60h]
	__int64 v81; // [rsp+188h] [rbp+80h]
	struct _FILETIME SystemTimeAsFileTime; // [rsp+190h] [rbp+88h] BYREF

	v2 = a2;
	if (!*(_DWORD*)(qword_140C635F0 + 5896))
	{
		v3 = *(_QWORD**)(a1 + 400);
		v4 = v3[4];
		v5 = *(_QWORD*)(v4 + 112);
		v67 = off_140B569F0;
		v69 = v3;
		v70 = 1;
		if (*(_QWORD*)(v4 + 120) >= v5)
			sub_14005E2C0((__int64)v3);
		v6 = v3[2];
		v7 = sub_14005C1B0((__int64)v3, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		v3[2] += 16i64;
		v8 = sub_1400578C0((__int64)v3);
		LODWORD(v68) = v8;
		v81 = v2[1];
		if (v81)
		{
			v9 = 0i64;
			do
			{
				v10 = v3[4];
				v75 = off_140B569F0;
				v77 = v3;
				v11 = *(_QWORD*)(v10 + 112);
				v78 = 1;
				if (*(_QWORD*)(v10 + 120) >= v11)
					sub_14005E2C0((__int64)v3);
				v12 = v3[2];
				v13 = sub_14005C1B0((__int64)v3, 0, 0);
				*(_DWORD*)(v12 + 8) = 5;
				*(_QWORD*)v12 = v13;
				v3[2] += 16i64;
				v14 = sub_1400578C0((__int64)v3);
				v15 = *(_DWORD*)(v9 + *v2);
				v16 = v3[4];
				v76 = v14;
				v17 = sub_14005C3C0(*(_QWORD*)(v16 + 160), v14);
				v18 = v3[2];
				*(_QWORD*)v18 = *v17;
				*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
				v3[2] += 16i64;
				v19 = (unsigned __int64*)sub_14018F0E0(&v71, L"eOperation")[1];
				if (v19)
				{
					v20 = -1i64;
					do
						++v20;
					while (*((_BYTE*)v19 + v20));
					if (*(_QWORD*)(v3[4] + 120i64) >= *(_QWORD*)(v3[4] + 112i64))
						sub_14005E2C0((__int64)v3);
					v21 = v3[2];
					v22 = sub_140062650((__int64)v3, v19, v20);
					v2 = a2;
					*(_DWORD*)(v21 + 8) = 4;
					*(_QWORD*)v21 = v22;
				}
				else
				{
					*(_DWORD*)(v3[2] + 8i64) = 0;
				}
				v23 = v72;
				v3[2] += 16i64;
				if (v23)
					sub_14018B900(v23, 0);
				v24 = v3[2];
				*(_DWORD*)(v24 + 8) = 3;
				*(double*)v24 = (double)v15;
				v3[2] += 16i64;
				v25 = (__int64*)sub_1400580E0((__int64)v3, -3);
				sub_14005EA50((__int64)v3, v25, (int*)(v3[2] - 32i64), (unsigned int*)(v3[2] - 16i64));
				v3[2] -= 48i64;
				v26 = *(_DWORD*)(v9 + *v2 + 4);
				v27 = sub_14005C3C0(*(_QWORD*)(v3[4] + 160i64), v14);
				*(_QWORD*)v28 = *v27;
				*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
				v3[2] += 16i64;
				v29 = (unsigned __int64*)sub_14018F0E0(&v71, L"bInitiator")[1];
				if (v29)
				{
					v30 = -1i64;
					do
						++v30;
					while (*((_BYTE*)v29 + v30));
					if (*(_QWORD*)(v3[4] + 120i64) >= *(_QWORD*)(v3[4] + 112i64))
						sub_14005E2C0((__int64)v3);
					v31 = v3[2];
					v32 = sub_140062650((__int64)v3, v29, v30);
					v2 = a2;
					*(_DWORD*)(v31 + 8) = 4;
					*(_QWORD*)v31 = v32;
					v3[2] += 16i64;
					LODWORD(v29) = 0;
				}
				else
				{
					*(_DWORD*)(v3[2] + 8i64) = 0;
					v3[2] += 16i64;
				}
				if (v72)
					sub_14018B900(v72, 0);
				v33 = (_DWORD*)v3[2];
				v34 = (int)v29;
				LOBYTE(v34) = v26 != 0;
				v33[2] = 1;
				*v33 = v34;
				v3[2] += 16i64;
				v35 = (__int64*)sub_1400580E0((__int64)v3, -3);
				sub_14005EA50((__int64)v3, v35, (int*)(v3[2] - 32i64), (unsigned int*)(v3[2] - 16i64));
				v3[2] -= 48i64;
				v36 = *(_QWORD*)(v9 + *v2 + 16);
				if (*(_QWORD*)(v3[4] + 120i64) >= *(_QWORD*)(v3[4] + 112i64))
					sub_14005E2C0((__int64)v3);
				v37 = v3[5];
				if (v37 == v3[10])
					v38 = v3[15];
				else
					v38 = *(_QWORD*)(**(_QWORD**)(v37 + 8) + 24i64);
				v39 = (_QWORD*)sub_1400627D0((__int64)v3, 0x18ui64, v38);
				v40 = v3[2];
				*(_QWORD*)v40 = v39;
				*(_DWORD*)(v40 + 8) = 7;
				v3[2] += 16i64;
				v39[6] = v36;
				v39[7] = 1i64;
				v39[8] = 0i64;
				v41 = v3[4];
				v42 = sub_140062650((__int64)v3, (unsigned __int64*)"Game.Money", 0xAui64);
				v43 = v3[2];
				v73 = v42;
				v74 = 4;
				sub_14005E8E0((__int64)v3, v41 + 160, (int*)&v73, v43);
				v3[2] += 16i64;
				sub_140058BF0((__int64)v3, -2);
				sub_1400FB540((__int64)&v75);
				v3[2] -= 16i64;
				v44 = 0.0;
				v45 = *(_QWORD*)(v9 + *v2 + 8);
				if (v45)
				{
					GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
					if (*(_QWORD*)&SystemTimeAsFileTime <= v45)
						v46 = 1.0;
					else
						v46 = -1.0;
					if (*(_QWORD*)&SystemTimeAsFileTime <= v45)
						v47 = v45 - *(_QWORD*)&SystemTimeAsFileTime;
					else
						v47 = *(_QWORD*)&SystemTimeAsFileTime - v45;
					v49 = v47;
					v48 = v47 / 0xC92A69C000i64;
					v50 = (double)(int)(v49 % 0xC92A69C000i64);
					if (((v49 % 0xC92A69C000i64) & 0x8000000000000000ui64) != 0i64)
						v50 = v50 + 1.844674407370955e19;
					v51 = (float)(int)v48;
					if (v48 < 0)
						v51 = v51 + 1.8446744e19;
					v52 = v50 * 1.157407407407407e-12;
					v44 = fmaxf((float)(v52 + v51) * v46, 0.000001);
				}
				v53 = sub_14005C3C0(*(_QWORD*)(v3[4] + 160i64), v14);
				v54 = v3[2];
				*(_QWORD*)v54 = *v53;
				*(_DWORD*)(v54 + 8) = *((_DWORD*)v53 + 2);
				v3[2] += 16i64;
				v55 = (unsigned __int64*)sub_14018F0E0(&v71, L"nLogAge")[1];
				if (v55)
				{
					v56 = -1i64;
					do
						++v56;
					while (*((_BYTE*)v55 + v56));
					if (*(_QWORD*)(v3[4] + 120i64) >= *(_QWORD*)(v3[4] + 112i64))
						sub_14005E2C0((__int64)v3);
					v57 = v3[2];
					v58 = sub_140062650((__int64)v3, v55, v56);
					v2 = a2;
					*(_DWORD*)(v57 + 8) = 4;
					*(_QWORD*)v57 = v58;
				}
				else
				{
					*(_DWORD*)(v3[2] + 8i64) = 0;
				}
				v59 = v72;
				v3[2] += 16i64;
				if (v59)
					sub_14018B900(v59, 0);
				v60 = v3[2];
				*(_DWORD*)(v60 + 8) = 3;
				*(double*)v60 = v44;
				v3[2] += 16i64;
				v61 = (__int64*)sub_1400580E0((__int64)v3, -3);
				sub_14005EA50((__int64)v3, v61, (int*)(v3[2] - 32i64), (unsigned int*)(v3[2] - 16i64));
				v3[2] -= 48i64;
				if (sub_1405E2120(qword_140C65898 + 26680, *(_QWORD*)(v9 + *v2 + 56)))
				{
					v62 = sub_14005C3C0(*(_QWORD*)(v3[4] + 160i64), v14);
					v63 = v3[2];
					*(_QWORD*)v63 = *v62;
					*(_DWORD*)(v63 + 8) = *((_DWORD*)v62 + 2);
					v3[2] += 16i64;
					sub_1400F06F0((__int64)v3, v63, L"nFriendId", v64);
					v3[2] -= 16i64;
				}
				sub_1400FB1D0((__int64)&v67);
				sub_1400579E0((__int64)v3, v65, v14);
				v9 += 64i64;
				--v81;
			} while (v81);
			v3 = v69;
			v8 = v68;
		}
		sub_1400EA3E0(a1, "CREDDOperationHistoryResults", byte_1409ECC8C, v8);
		if (v3)
			sub_1400579E0((__int64)v3, v66, v8);
	}
}
// 14042CA15: variable 'v28' is possibly undefined
// 14042CDB2: variable 'v64' is possibly undefined
// 14042CDCF: variable 'v65' is possibly undefined
// 14042CE77: variable 'v66' is possibly undefined
// 1409ECC8C: using guessed type _BYTE byte_1409ECC8C[4];
// 140B01008: using guessed type wchar_t aBinitiator[11];
// 140B01020: using guessed type wchar_t aEoperation[11];
// 140B01038: using guessed type wchar_t aNfriendid[10];
// 140B01050: using guessed type wchar_t aNlogage[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

