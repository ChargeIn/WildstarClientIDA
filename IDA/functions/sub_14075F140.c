//----- (000000014075F140) ----------------------------------------------------
_BOOL8 __fastcall sub_14075F140(__int64 a1, __int64 a2)
{
	unsigned int v4; // edi
	__int64 v5; // rcx
	int v6; // eax
	__int64(__fastcall * **v7)(); // rcx
	unsigned int v8; // ecx
	__int64 v9; // rcx
	int v10; // eax
	__int64(__fastcall * **v11)(); // rcx
	__int64 v12; // rcx
	int v13; // eax
	__int64(__fastcall * **v14)(); // rcx
	double v15; // xmm0_8
	float v16; // xmm1_4
	_BOOL8 result; // rax
	__int64 v18; // rcx
	int v19; // eax
	__int64(__fastcall * **v20)(); // rcx
	__int64 v21; // rcx
	int v22; // eax
	__int64(__fastcall * **v23)(); // rcx
	double v24; // xmm0_8
	int v25; // r15d
	int v26; // r14d
	int v27; // r12d
	__int64 v28; // rcx
	int v29; // eax
	__int64(__fastcall * **v30)(); // rcx
	int v31; // eax
	__int64 v32; // rcx
	int v33; // eax
	__int64(__fastcall * **v34)(); // rcx
	int v35; // r14d
	int v36; // r15d
	int v37; // r12d
	__int64 v38; // rcx
	int v39; // eax
	__int64(__fastcall * **v40)(); // rcx
	int v41; // eax
	__int64 v42; // rcx
	int v43; // eax
	__int64(__fastcall * **v44)(); // rcx
	__int64 v46; // rcx
	int v47; // eax
	__int64(__fastcall * **v48)(); // rcx
	unsigned int v49; // r14d
	__int64 v50; // rcx
	int v51; // eax
	__int64(__fastcall * **v52)(); // rcx
	__int64 v53; // rax
	_QWORD* v54; // rax
	__int64 v55; // r10
	__int64 v56; // rdx
	__int64 v57; // r14
	unsigned __int64* v58; // rdx
	unsigned __int64 v59; // r8
	_QWORD* v60; // rax
	__int64 v61; // r10
	__int64 v62; // rdx
	__int64* v63; // rax
	__int64 v64; // rdx
	__int64 v65; // rcx
	int v66; // r13d
	unsigned int v67; // r12d
	unsigned int v68; // r15d
	unsigned int v69; // r14d
	__int64 v70; // rcx
	int v71; // eax
	__int64(__fastcall * **v72)(); // rcx
	__int64 v73; // rax
	__int64 v74; // rcx
	int v75; // eax
	__int64(__fastcall * **v76)(); // rcx
	__int64 v77; // rax
	__int64 v78; // rcx
	int v79; // eax
	__int64(__fastcall * **v80)(); // rcx
	__int64 v81; // rax
	int v82; // eax
	__int64 v83; // rcx
	int v84; // eax
	__int64(__fastcall * **v85)(); // rcx
	_DWORD* v86; // rax
	__int64 v87; // rcx
	int v88; // eax
	__int64(__fastcall * *v89)(); // [rsp+20h] [rbp-60h] BYREF
	__int64(__fastcall * *v90)(); // [rsp+28h] [rbp-58h] BYREF
	int v91; // [rsp+30h] [rbp-50h]
	__int64 v92; // [rsp+38h] [rbp-48h]
	__int64 v93; // [rsp+40h] [rbp-40h] BYREF
	__int64 v94; // [rsp+48h] [rbp-38h]
	__int64(__fastcall * *v95)(); // [rsp+B0h] [rbp+30h] BYREF
	__int64(__fastcall * *v96)(); // [rsp+B8h] [rbp+38h] BYREF

	if ((int)sub_1400FB720(a1, L"nType", 3) < 0)
		sub_140056830(*(_QWORD**)(a1 + 16), (unsigned __int64*)"auction filter missing key: 'nType'");
	v4 = 0;
	v5 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
	v6 = *(_DWORD*)(v5 - 8);
	v7 = (__int64(__fastcall***)())(v5 - 16);
	if (v6 == 3)
		goto LABEL_6;
	if (v6 == 4 && sub_14005AC80((char*)*v7 + 32, (unsigned __int64*)&v95))
	{
		v91 = 3;
		v7 = &v90;
		v90 = v95;
	LABEL_6:
		v8 = (int)*(double*)v7;
		goto LABEL_7;
	}
	v8 = 0;
LABEL_7:
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
	if (v8 > 6)
		sub_140056830(*(_QWORD**)(a1 + 16), (unsigned __int64*)"auction filter bad value for 'nType': %d", v8);
	*(_DWORD*)a2 = v8;
	switch (v8)
	{
	case 0u:
		if ((int)sub_1400FB720(a1, L"eProperty", 3) < 0)
			goto LABEL_28;
		v9 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v10 = *(_DWORD*)(v9 - 8);
		v11 = (__int64(__fastcall***)())(v9 - 16);
		if (v10 == 3)
			goto LABEL_16;
		if (v10 == 4 && sub_14005AC80((char*)*v11 + 32, (unsigned __int64*)&v95))
		{
			v91 = 3;
			v11 = &v90;
			v90 = v95;
		LABEL_16:
			v4 = (int)*(double*)v11;
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
		if ((int)sub_1400FB720(a1, L"fMin", 3) < 0)
			LABEL_28:
		sub_140056830(
			*(_QWORD**)(a1 + 16),
			(unsigned __int64*)"auction filter type %d requires 'eProperty' and 'fMin'",
			0i64);
		v12 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v13 = *(_DWORD*)(v12 - 8);
		v14 = (__int64(__fastcall***)())(v12 - 16);
		if (v13 == 3)
			goto LABEL_22;
		if (v13 == 4 && sub_14005AC80((char*)*v14 + 32, (unsigned __int64*)&v95))
		{
			v91 = 3;
			v14 = &v90;
			v90 = v95;
		LABEL_22:
			v15 = *(double*)v14;
		}
		else
		{
			v15 = 0.0;
		}
		v16 = v15;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
		if (v4 > 0xC4)
			sub_140056830(
				*(_QWORD**)(a1 + 16),
				(unsigned __int64*)"auction filter type %d bad value for 'eProperty': %d",
				0i64,
				v4);
		goto LABEL_26;
	case 1u:
		if ((int)sub_1400FB720(a1, L"eProperty", 3) < 0)
			goto LABEL_44;
		v18 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v19 = *(_DWORD*)(v18 - 8);
		v20 = (__int64(__fastcall***)())(v18 - 16);
		if (v19 == 3)
			goto LABEL_34;
		if (v19 == 4 && sub_14005AC80((char*)*v20 + 32, (unsigned __int64*)&v95))
		{
			v91 = 3;
			v20 = &v90;
			v90 = v95;
		LABEL_34:
			v4 = (int)*(double*)v20;
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
		if ((int)sub_1400FB720(a1, L"fMax", 3) < 0)
			LABEL_44:
		sub_140056830(
			*(_QWORD**)(a1 + 16),
			(unsigned __int64*)"auction filter type %d requires 'eProperty' and 'fMax'",
			1i64);
		v21 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v22 = *(_DWORD*)(v21 - 8);
		v23 = (__int64(__fastcall***)())(v21 - 16);
		if (v22 == 3)
			goto LABEL_40;
		if (v22 == 4 && sub_14005AC80((char*)*v23 + 32, (unsigned __int64*)&v95))
		{
			v91 = 3;
			v23 = &v90;
			v90 = v95;
		LABEL_40:
			v24 = *(double*)v23;
		}
		else
		{
			v24 = 0.0;
		}
		v16 = v24;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
		if (v4 > 0xC4)
			sub_140056830(
				*(_QWORD**)(a1 + 16),
				(unsigned __int64*)"auction filter type %d bad value for 'eProperty': %d",
				1i64,
				v4);
	LABEL_26:
		*(float*)(a2 + 12) = v16;
		*(_DWORD*)(a2 + 8) = v4;
		return 0i64;
	case 2u:
		v25 = 0;
		v26 = 0x7FFFFFFF;
		v27 = sub_1400FB720(a1, L"nMin", 3);
		if (v27 < 0)
			goto LABEL_52;
		v28 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v29 = *(_DWORD*)(v28 - 8);
		v30 = (__int64(__fastcall***)())(v28 - 16);
		if (v29 == 3)
			goto LABEL_50;
		if (v29 == 4 && sub_14005AC80((char*)*v30 + 32, (unsigned __int64*)&v95))
		{
			v91 = 3;
			v30 = &v90;
			v90 = v95;
		LABEL_50:
			v25 = (int)*(double*)v30;
		}
		v27 = 0;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
	LABEL_52:
		v31 = sub_1400FB720(a1, L"nMax", 3);
		if (v31 < 0)
			goto LABEL_59;
		v32 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v33 = *(_DWORD*)(v32 - 8);
		v34 = (__int64(__fastcall***)())(v32 - 16);
		if (v33 == 3)
			goto LABEL_57;
		if (v33 == 4 && sub_14005AC80((char*)*v34 + 32, (unsigned __int64*)&v95))
		{
			v91 = 3;
			v34 = &v90;
			v90 = v95;
		LABEL_57:
			v26 = (int)*(double*)v34;
		}
		else
		{
			v26 = 0;
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
		v31 = 0;
	LABEL_59:
		if (v27 < 0 && v31 < 0)
			sub_140056830(
				*(_QWORD**)(a1 + 16),
				(unsigned __int64*)"auction filter type %d requires 'nMin' and/or 'nMax'",
				2i64);
		if (v25 > v26)
			sub_140056830(
				*(_QWORD**)(a1 + 16),
				(unsigned __int64*)"auction filter type %d expects 'nMin' <= 'nMax'",
				2i64);
		if (v25 < 0)
			v25 = 0;
		if (v26 < 0)
			v26 = 0;
		*(_DWORD*)(a2 + 8) = v25;
		result = 0i64;
		*(_DWORD*)(a2 + 12) = v26;
		return result;
	case 3u:
		v35 = 0;
		v36 = 7;
		v37 = sub_1400FB720(a1, L"nMin", 3);
		if (v37 < 0)
			goto LABEL_77;
		v38 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v39 = *(_DWORD*)(v38 - 8);
		v40 = (__int64(__fastcall***)())(v38 - 16);
		if (v39 == 3)
			goto LABEL_75;
		if (v39 == 4 && sub_14005AC80((char*)*v40 + 32, (unsigned __int64*)&v95))
		{
			v91 = 3;
			v40 = &v90;
			v90 = v95;
		LABEL_75:
			v35 = (int)*(double*)v40;
		}
		v37 = 0;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
	LABEL_77:
		v41 = sub_1400FB720(a1, L"nMax", 3);
		if (v41 < 0)
			goto LABEL_84;
		v42 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v43 = *(_DWORD*)(v42 - 8);
		v44 = (__int64(__fastcall***)())(v42 - 16);
		if (v43 == 3)
			goto LABEL_82;
		if (v43 == 4 && sub_14005AC80((char*)*v44 + 32, (unsigned __int64*)&v95))
		{
			v91 = 3;
			v44 = &v90;
			v90 = v95;
		LABEL_82:
			v36 = (int)*(double*)v44;
		}
		else
		{
			v36 = 0;
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
		v41 = 0;
	LABEL_84:
		if (v37 < 0 && v41 < 0)
			sub_140056830(
				*(_QWORD**)(a1 + 16),
				(unsigned __int64*)"auction filter type %d requires 'nMin' and/or 'nMax'",
				3i64);
		if (v35 > v36)
			sub_140056830(
				*(_QWORD**)(a1 + 16),
				(unsigned __int64*)"auction filter type %d expects 'nMin' <= 'nMax'",
				3i64);
		if (v35 >= 0)
		{
			if (v35 > 7)
				v35 = 7;
		}
		else
		{
			v35 = 0;
		}
		*(_DWORD*)(a2 + 8) = v35;
		if (v36 >= 0)
		{
			if (v36 > 7)
				v36 = 7;
			v4 = v36;
		}
		*(_DWORD*)(a2 + 12) = v4;
		if (v35)
			return 0i64;
		return v4 == 7;
	case 4u:
		if ((int)sub_1400FB720(a1, L"eMicrochipType", 3) < 0)
			sub_140056830(
				*(_QWORD**)(a1 + 16),
				(unsigned __int64*)"auction filter type %d requires 'eMicrochipType'",
				4i64);
		v46 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v47 = *(_DWORD*)(v46 - 8);
		v48 = (__int64(__fastcall***)())(v46 - 16);
		if (v47 == 3)
			goto LABEL_108;
		if (v47 == 4 && sub_14005AC80((char*)*v48 + 32, (unsigned __int64*)&v95))
		{
			v91 = 3;
			v48 = &v90;
			v90 = v95;
		LABEL_108:
			v49 = (int)*(double*)v48;
		}
		else
		{
			v49 = 0;
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
		if (v49 > 0x11)
			sub_140056830(
				*(_QWORD**)(a1 + 16),
				(unsigned __int64*)"auction filter type %d bad value for 'eMicrochipType': %d",
				4i64,
				v49);
		if ((int)sub_1400FB720(a1, L"nMin", 3) >= 0)
		{
			v50 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
			v51 = *(_DWORD*)(v50 - 8);
			v52 = (__int64(__fastcall***)())(v50 - 16);
			if (v51 != 3)
			{
				if (v51 != 4 || !sub_14005AC80((char*)*v52 + 32, (unsigned __int64*)&v95))
					goto LABEL_118;
				v91 = 3;
				v52 = &v90;
				v90 = v95;
			}
			v4 = (int)*(double*)v52;
		LABEL_118:
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
			goto LABEL_120;
		}
		v4 = 1;
	LABEL_120:
		*(_DWORD*)(a2 + 8) = v49;
		if (v4 > 8)
			v4 = 8;
		*(_DWORD*)(a2 + 12) = v4;
		return v4 == 0;
	case 5u:
		v53 = *(_QWORD*)a1;
		v92 = 0i64;
		v91 = -2;
		v90 = off_140B56A08;
		if (!(*(unsigned int(__fastcall**)(__int64))(v53 + 8))(a1))
			sub_140056830(*(_QWORD**)(a1 + 16), (unsigned __int64*)"auction filter type %d requires 'monMax'", 5i64);
		v54 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v56 = *(_QWORD*)(v55 + 16);
		*(_QWORD*)v56 = *v54;
		*(_DWORD*)(v56 + 8) = *((_DWORD*)v54 + 2);
		*(_QWORD*)(v55 + 16) += 16i64;
		v57 = *(_QWORD*)(a1 + 16);
		v58 = (unsigned __int64*)sub_14018F0E0(&v93, L"monMax")[1];
		if (v58)
		{
			v59 = -1i64;
			do
				++v59;
			while (*((_BYTE*)v58 + v59));
			sub_140058710(v57, v58, v59);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v57 + 16) + 8i64) = 0;
			*(_QWORD*)(v57 + 16) += 16i64;
		}
		if (v94)
			sub_14018B900(v94, 0);
		sub_14005E8E0(
			*(_QWORD*)(a1 + 16),
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) - 32i64,
			(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) - 16i64),
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) - 16i64);
		v92 = *(_QWORD*)(a1 + 16);
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v90[2])(&v90, 0xFFFFFFFFi64);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
		v60 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v92 + 32) + 160i64), v91);
		v62 = *(_QWORD*)(v61 + 16);
		*(_QWORD*)v62 = *v60;
		*(_DWORD*)(v62 + 8) = *((_DWORD*)v60 + 2);
		*(_QWORD*)(v61 + 16) += 16i64;
		v63 = (__int64*)sub_14069DFE0(*(_QWORD*)(a1 + 16), -1);
		if (v63)
			v65 = *v63;
		else
			v65 = (int)sub_140056E70(*(_QWORD**)(a1 + 16), -1);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		if (v65 <= 0)
			sub_140056830(
				*(_QWORD**)(a1 + 16),
				(unsigned __int64*)"auction filter type %d bad value for 'monMax': expects positive Money or number",
				5i64);
		*(_QWORD*)(a2 + 8) = v65;
		v90 = off_140B56A08;
		if (!v92)
			return 0i64;
		sub_1400579E0(v92, v64, v91);
		return 0i64;
	case 6u:
		v66 = 0;
		v67 = 0;
		v68 = 0;
		v69 = 0;
		LODWORD(v95) = sub_1400FB720(a1, L"nLevel", 3);
		if ((int)v95 < 0)
			goto LABEL_147;
		v70 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v71 = *(_DWORD*)(v70 - 8);
		v72 = (__int64(__fastcall***)())(v70 - 16);
		if (v71 == 3)
			goto LABEL_145;
		if (v71 == 4 && sub_14005AC80((char*)*v72 + 32, (unsigned __int64*)&v95))
		{
			v91 = 3;
			v72 = &v90;
			v90 = v95;
		LABEL_145:
			v66 = (int)*(double*)v72;
		}
		v73 = *(_QWORD*)(a1 + 16);
		LODWORD(v95) = 0;
		*(_QWORD*)(v73 + 16) -= 32i64;
	LABEL_147:
		LODWORD(v96) = sub_1400FB720(a1, L"eClass", 3);
		if ((int)v96 < 0)
			goto LABEL_154;
		v74 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v75 = *(_DWORD*)(v74 - 8);
		v76 = (__int64(__fastcall***)())(v74 - 16);
		if (v75 == 3)
			goto LABEL_152;
		if (v75 == 4 && sub_14005AC80((char*)*v76 + 32, (unsigned __int64*)&v96))
		{
			v91 = 3;
			v76 = &v90;
			v90 = v96;
		LABEL_152:
			v67 = (int)*(double*)v76;
		}
		v77 = *(_QWORD*)(a1 + 16);
		LODWORD(v96) = 0;
		*(_QWORD*)(v77 + 16) -= 32i64;
	LABEL_154:
		LODWORD(v89) = sub_1400FB720(a1, L"eRace", 3);
		if ((int)v89 < 0)
			goto LABEL_161;
		v78 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v79 = *(_DWORD*)(v78 - 8);
		v80 = (__int64(__fastcall***)())(v78 - 16);
		if (v79 == 3)
			goto LABEL_159;
		if (v79 == 4 && sub_14005AC80((char*)*v80 + 32, (unsigned __int64*)&v89))
		{
			v91 = 3;
			v80 = &v90;
			v90 = v89;
		LABEL_159:
			v68 = (int)*(double*)v80;
		}
		v81 = *(_QWORD*)(a1 + 16);
		LODWORD(v89) = 0;
		*(_QWORD*)(v81 + 16) -= 32i64;
	LABEL_161:
		v82 = sub_1400FB720(a1, L"eFaction", 3);
		if (v82 < 0)
			goto LABEL_168;
		v83 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
		v84 = *(_DWORD*)(v83 - 8);
		v85 = (__int64(__fastcall***)())(v83 - 16);
		if (v84 == 3)
			goto LABEL_166;
		if (v84 == 4 && sub_14005AC80((char*)*v85 + 32, (unsigned __int64*)&v90))
		{
			v91 = 3;
			v85 = &v90;
		LABEL_166:
			v69 = (int)*(double*)v85;
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
		v82 = 0;
	LABEL_168:
		if ((int)v95 < 0 && (int)v96 < 0 && (int)v89 < 0 && v82 < 0)
		{
			v86 = *(_DWORD**)(qword_140C65898 + 120);
			if (v86)
				v66 = v86[14];
			else
				v66 = 0;
			if (v86)
				v67 = v86[55];
			else
				v67 = 23;
			if (v86)
				v68 = v86[54];
			else
				v68 = 17;
			v87 = *(_QWORD*)(qword_140C65898 + 7152);
			if (v87)
				v69 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v87 + 24i64))(v87);
			else
				v69 = 0;
		}
		if (v67 && !sub_1401F31E0(v67))
			sub_140056830(*(_QWORD**)(a1 + 16), (unsigned __int64*)"auction filter type %d bad value for 'eClass'", 6i64);
		if (v68 && !sub_14022D500(v68))
			sub_140056830(*(_QWORD**)(a1 + 16), (unsigned __int64*)"auction filter type %d bad value for 'eRace'", 6i64);
		if (v69 && !sub_1401FF120(v69))
			sub_140056830(
				*(_QWORD**)(a1 + 16),
				(unsigned __int64*)"auction filter type %d bad value for 'eFaction'",
				6i64);
		v88 = v66;
		*(_DWORD*)(a2 + 12) = v67;
		if (v66 < 0)
			v88 = 0;
		*(_DWORD*)(a2 + 8) = v68;
		*(_DWORD*)(a2 + 16) = v69;
		*(_DWORD*)(a2 + 20) = v88;
		if (v66 || v67 || v68)
			return 0i64;
		return v69 == 0;
	default:
		return 0i64;
	}
}
// 14075F8F0: variable 'v55' is possibly undefined
// 14075F9A3: variable 'v61' is possibly undefined
// 14075FA13: variable 'v64' is possibly undefined
// 140B4CBF8: using guessed type wchar_t aFmin[5];
// 140B4CC08: using guessed type wchar_t aEproperty_4[10];
// 140B4CC78: using guessed type wchar_t aNtype_0[6];
// 140B4CCF8: using guessed type wchar_t aNmin_2[5];
// 140B4CD80: using guessed type wchar_t aEmicrochiptype[15];
// 140B4CE08: using guessed type wchar_t aNmax_6[5];
// 140B4CE18: using guessed type wchar_t aNmin_1[5];
// 140B4CE90: using guessed type wchar_t aNmax_5[5];
// 140B4CEA0: using guessed type wchar_t aNmin_0[5];
// 140B4CF20: using guessed type wchar_t aFmax_1[5];
// 140B4CF30: using guessed type wchar_t aEproperty_5[10];
// 140B4D0C8: using guessed type wchar_t aEfaction[9];
// 140B4D0E0: using guessed type wchar_t aErace[6];
// 140B4D0F0: using guessed type wchar_t aEclass_1[7];
// 140B4D100: using guessed type wchar_t aNlevel_17[7];
// 140B4D190: using guessed type wchar_t aMonmax[7];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;

