#include "../winhttp.h"

//----- (000000014003B7B0) ----------------------------------------------------
__int64 __fastcall sub_14003B7B0(__int64 a1, int a2, __int64 a3, _QWORD* a4)
{
	int v4; // r12d
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // rdi
	unsigned __int64 v10; // rbx
	void(__fastcall * **v11)(_QWORD, _QWORD); // rbx
	__int64 v12; // rdi
	int v13; // eax
	__int64 v14; // rcx
	__int64 v15; // rbx
	_WORD* v16; // rax
	__int64 v17; // rbx
	int* v18; // rax
	__int64 v19; // r15
	unsigned __int64 v20; // rbx
	void(__fastcall * **v21)(_QWORD, _QWORD); // rbx
	__int64 v22; // rdi
	int v23; // eax
	int v24; // r12d
	__int64 v25; // rcx
	__int64 v26; // rbx
	_WORD* v27; // rax
	void(__fastcall * **v28)(_QWORD, _QWORD); // rbx
	__int64 v29; // rdi
	int v30; // eax
	int v31; // r12d
	_QWORD* v32; // rbx
	__int64 v33; // r9
	__int64 v34; // rdi
	void(__fastcall * **v35)(_QWORD, _QWORD); // rbx
	__int64 v36; // rdi
	__int64 v37; // rbx
	unsigned __int64 v38; // rbx
	int* v39; // rax
	unsigned __int16* v40; // r15
	unsigned __int64 v41; // rbx
	__int64 v42; // rcx
	void(__fastcall * **v43)(_QWORD, _QWORD); // rbx
	unsigned __int16* v44; // rsi
	__int64 v45; // rdi
	int v46; // eax
	__int64 v47; // rax
	int v48; // r12d
	__int64* v49; // rax
	__int64 v50; // r14
	__int64 v51; // rcx
	__int64 v52; // rbx
	int* v53; // rdi
	unsigned __int64 v54; // rbx
	int* v55; // rax
	unsigned __int64 v56; // rbx
	__int64 v57; // rbx
	int* v58; // rax
	int* v59; // r13
	unsigned __int64 v60; // rbx
	__int64 v61; // rcx
	__int64 v62; // rcx
	void(__fastcall * **v63)(_QWORD, _QWORD); // rbx
	int* v64; // rdi
	int v65; // eax
	int v66; // r12d
	__int64* v67; // rax
	__int64 v68; // r15
	__int64 v69; // rcx
	__int64 v70; // rbx
	int* v71; // r14
	__int64 v72; // rbx
	int* v73; // rax
	unsigned __int64 v74; // rbx
	__int64 v75; // rbx
	int* v76; // rax
	int* v77; // r14
	unsigned __int64 v78; // rbx
	__int64 v79; // rax
	__int64 v80; // rcx
	int* v81; // rbx
	void(__fastcall * **v82)(_QWORD, _QWORD); // r14
	int v83; // eax
	int v84; // r12d
	__int64(__fastcall * **v85)(); // rax
	__int64(__fastcall * *v86)(); // r13
	__int64(__fastcall * v87)(); // rcx
	__int64(__fastcall * v88)(); // rbx
	int* v89; // r15
	__int64 v90; // r14
	int* v91; // rax
	unsigned __int64 v92; // r14
	__int64 v93; // rcx
	_QWORD* v94; // rax
	unsigned int v95; // eax
	u_long v96; // r14d
	int* v97; // rax
	int* v98; // r12
	__int64 v99; // r13
	__int64 v100; // r14
	int* v101; // rax
	int* v102; // r15
	unsigned __int64 v103; // r14
	__int64 v104; // r13
	__int64 v105; // r14
	int* v106; // rax
	int* v107; // r15
	unsigned __int64 v108; // r14
	__int64 v109; // r13
	__int64 v110; // r14
	int* v111; // rax
	int* v112; // r15
	unsigned __int64 v113; // r14
	__int64 v114; // rcx
	__int64 v115; // rax
	__int64(__fastcall * *v116)(); // [rsp+20h] [rbp-E0h] BYREF
	__int64 v117; // [rsp+28h] [rbp-D8h]
	__int64(__fastcall * *v118)(); // [rsp+30h] [rbp-D0h] BYREF
	__int64 v119; // [rsp+38h] [rbp-C8h]
	__int64 v120; // [rsp+40h] [rbp-C0h]
	__int64 v121; // [rsp+48h] [rbp-B8h]
	__int64 v122; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v123; // [rsp+58h] [rbp-A8h]
	__int64 v124; // [rsp+60h] [rbp-A0h]
	__int64 v125; // [rsp+68h] [rbp-98h]
	void(__fastcall * **v126)(_QWORD, _QWORD); // [rsp+70h] [rbp-90h]
	int* v127; // [rsp+78h] [rbp-88h]
	char v128[8]; // [rsp+80h] [rbp-80h] BYREF
	void(__fastcall * **v129)(_QWORD, _QWORD); // [rsp+88h] [rbp-78h]
	void(__fastcall * **v130)(_QWORD, _QWORD); // [rsp+90h] [rbp-70h]
	__int64 v131; // [rsp+98h] [rbp-68h]
	__int64 v132[2]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v133[2]; // [rsp+B0h] [rbp-50h] BYREF
	int* v134; // [rsp+C0h] [rbp-40h]
	__int64 v135[2]; // [rsp+C8h] [rbp-38h] BYREF
	__int64 v136[3]; // [rsp+D8h] [rbp-28h] BYREF
	__int64 v137; // [rsp+130h] [rbp+30h] BYREF
	unsigned int v138; // [rsp+138h] [rbp+38h] BYREF
	_QWORD* v139; // [rsp+148h] [rbp+48h]

	v139 = a4;
	v137 = a1;
	v4 = 2;
	v138 = 0;
	LODWORD(qword_140C66780) = 2;
	if (a2)
	{
		if (*a4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a4 - 16i64) + 8i64))(*a4 - 16i64);
		return 2147500037i64;
	}
	v7 = 0i64;
	do
		++v7;
	while (asc_1409F64C8[v7]);
	v8 = sub_14018B280(2 * v7 + 18, 0);
	if (v8)
	{
		*(_QWORD*)v8 = off_140B55060;
		*((_QWORD*)v8 + 1) = v7;
	}
	else
	{
		v8 = 0i64;
	}
	v9 = v8 + 4;
	v10 = 2 * v7;
	v127 = v8 + 4;
	sub_1407DB590(v8 + 4, (int*)L"????", v10);
	*(_WORD*)((char*)v9 + v10) = 0;
	v11 = 0i64;
	v12 = 0i64;
	v120 = 0i64;
	v121 = 0i64;
	v119 = 0i64;
	if (a3
		&& (v13 = sub_1401B1580(a3, (int*)L"TotalPage", (__int64)&v118, 1),
			v12 = v120,
			v11 = (void(__fastcall***)(_QWORD, _QWORD))v119,
			v13 >= 0)
		&& (v120 - v119) >> 4)
	{
		v4 = 1;
		v117 = *(_QWORD*)(v119 + 8);
	}
	else
	{
		v117 = 0i64;
	}
	v116 = off_140B68F20;
	if ((v4 & 2) != 0)
		v4 &= ~2u;
	if ((v4 & 1) != 0)
		v4 &= ~1u;
	if (v11 != (void(__fastcall***)(_QWORD, _QWORD))v12)
	{
		do
		{
			(**v11)(v11, 0i64);
			v11 += 2;
		} while (v11 != (void(__fastcall***)(_QWORD, _QWORD))v12);
		v11 = (void(__fastcall***)(_QWORD, _QWORD))v119;
	}
	if (v11)
		sub_14018B900((__int64)v11, 0);
	if (v117)
	{
		v14 = *(_QWORD*)(v117 + 48);
		if (v14
			&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 16i64))(v14)
			&& (v15 = *(_QWORD*)(v117 + 48), !(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 48i64))(v15)))
		{
			v16 = (_WORD*)sub_1401A4F40(v15 + 24);
		}
		else
		{
			v16 = 0i64;
		}
		sub_1407DF428(v16, (__int64)L"%d", &v138);
	}
	v17 = 0i64;
	do
		++v17;
	while (asc_1409F64C8[v17]);
	v18 = sub_14018B280(2 * v17 + 18, 0);
	if (v18)
	{
		*((_QWORD*)v18 + 1) = v17;
		*(_QWORD*)v18 = off_140B55060;
	}
	else
	{
		v18 = 0i64;
	}
	v19 = (__int64)(v18 + 4);
	v20 = 2 * v17;
	v134 = v18 + 4;
	sub_1407DB590(v18 + 4, (int*)L"????", v20);
	*(_WORD*)(v20 + v19) = 0;
	v21 = 0i64;
	v22 = 0i64;
	v120 = 0i64;
	v121 = 0i64;
	v119 = 0i64;
	if (a3
		&& (v23 = sub_1401B1580(a3, (int*)L"TotalCount", (__int64)&v118, 1),
			v22 = v120,
			v21 = (void(__fastcall***)(_QWORD, _QWORD))v119,
			v23 >= 0)
		&& (v120 - v119) >> 4)
	{
		v24 = v4 | 4;
		v117 = *(_QWORD*)(v119 + 8);
	}
	else
	{
		v24 = v4 | 8;
		v117 = 0i64;
	}
	v116 = off_140B68F20;
	if ((v24 & 8) != 0)
		v24 &= ~8u;
	if ((v24 & 4) != 0)
		v24 &= ~4u;
	if (v21 != (void(__fastcall***)(_QWORD, _QWORD))v22)
	{
		do
		{
			(**v21)(v21, 0i64);
			v21 += 2;
		} while (v21 != (void(__fastcall***)(_QWORD, _QWORD))v22);
		v21 = (void(__fastcall***)(_QWORD, _QWORD))v119;
	}
	if (v21)
		sub_14018B900((__int64)v21, 0);
	if (v117)
	{
		v25 = *(_QWORD*)(v117 + 48);
		if (v25
			&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v25 + 16i64))(v25)
			&& (v26 = *(_QWORD*)(v117 + 48), !(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 48i64))(v26)))
		{
			v27 = (_WORD*)sub_1401A4F40(v26 + 24);
		}
		else
		{
			v27 = 0i64;
		}
		sub_1407DF428(v27, (__int64)L"%d", &v138);
	}
	v28 = 0i64;
	v119 = 0i64;
	v29 = 0i64;
	v120 = 0i64;
	v121 = 0i64;
	if (a3
		&& (v30 = sub_1401B1580(a3, (int*)L"Items", (__int64)&v118, 1),
			v29 = v120,
			v28 = (void(__fastcall***)(_QWORD, _QWORD))v119,
			v30 >= 0)
		&& (v120 - v119) >> 4)
	{
		v31 = v24 | 0x10;
		v117 = *(_QWORD*)(v119 + 8);
	}
	else
	{
		v31 = v24 | 0x20;
		v117 = 0i64;
	}
	v116 = off_140B68F20;
	if ((v31 & 0x20) != 0)
		v31 &= ~0x20u;
	if ((v31 & 0x10) != 0)
		v31 &= ~0x10u;
	if (v28 != (void(__fastcall***)(_QWORD, _QWORD))v29)
	{
		do
		{
			(**v28)(v28, 0i64);
			v28 += 2;
		} while (v28 != (void(__fastcall***)(_QWORD, _QWORD))v29);
		v28 = (void(__fastcall***)(_QWORD, _QWORD))v119;
	}
	if (v28)
		sub_14018B900((__int64)v28, 0);
	if (!v117)
	{
		v32 = v139;
		v33 = *v139;
		v137 = 0x141CF0BA0i64;
		sub_1401A3130(22, 0, &v137, v33, v116);
		if (v19)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
		if (v127)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v127 - 2) + 8i64))(v127 - 4);
	LABEL_87:
		if (*v32)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v32 - 16i64) + 8i64))(*v32 - 16i64);
		return 2147500037i64;
	}
	v129 = 0i64;
	v130 = 0i64;
	v131 = 0i64;
	if ((int)sub_1401B1580(v117, (int*)L"Item", (__int64)v128, 0) < 0)
	{
		v34 = (__int64)v130;
		v35 = v129;
		if (v129 != v130)
		{
			do
			{
				(**v35)(v35, 0i64);
				v35 += 2;
			} while (v35 != (void(__fastcall***)(_QWORD, _QWORD))v34);
			v35 = v129;
		}
		if (v35)
			sub_14018B900((__int64)v35, 0);
		if (v19)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
		if (v127)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v127 - 2) + 8i64))(v127 - 4);
		v32 = v139;
		goto LABEL_87;
	}
	sub_140019590((__int64)&unk_140C66750);
	v36 = (__int64)v129;
	v37 = (__int64)v130;
	v126 = v129;
	if (v129 != v130)
	{
		do
		{
			v38 = 0i64;
			do
				++v38;
			while (asc_1409F64C8[v38]);
			v39 = sub_14018B280(2 * v38 + 18, 0);
			if (v39)
			{
				*((_QWORD*)v39 + 1) = v38;
				*(_QWORD*)v39 = off_140B55060;
			}
			else
			{
				v39 = 0i64;
			}
			v40 = (unsigned __int16*)(v39 + 4);
			v41 = v38;
			sub_1407DB590(v39 + 4, (int*)L"????", v41 * 2);
			v40[v41] = 0;
			v42 = *(_QWORD*)(v36 + 8);
			v43 = 0i64;
			v44 = v40;
			v45 = 0i64;
			v124 = 0i64;
			v125 = 0i64;
			v123 = 0i64;
			if (v42
				&& (v46 = sub_1401B1580(v42, (int*)L"NetAddress", (__int64)&v122, 1),
					v45 = v124,
					v43 = (void(__fastcall***)(_QWORD, _QWORD))v123,
					v46 >= 0)
				&& (v124 - v123) >> 4)
			{
				v47 = *(_QWORD*)(v123 + 8);
				v48 = v31 | 0x40;
				v133[0] = (__int64)off_140B68F20;
				v133[1] = v47;
				v49 = v133;
			}
			else
			{
				v48 = v31 | 0x80;
				v135[0] = (__int64)off_140B68F20;
				v135[1] = 0i64;
				v49 = v135;
			}
			v50 = v49[1];
			if ((v48 & 0x80u) != 0)
			{
				v48 &= ~0x80u;
				v135[0] = (__int64)off_140B68F20;
			}
			if ((v48 & 0x40) != 0)
			{
				v48 &= ~0x40u;
				v133[0] = (__int64)off_140B68F20;
			}
			if (v43 != (void(__fastcall***)(_QWORD, _QWORD))v45)
			{
				do
				{
					(**v43)(v43, 0i64);
					v43 += 2;
				} while (v43 != (void(__fastcall***)(_QWORD, _QWORD))v45);
				v43 = (void(__fastcall***)(_QWORD, _QWORD))v123;
			}
			if (v43)
				sub_14018B900((__int64)v43, 0);
			if (v50)
			{
				v51 = *(_QWORD*)(v50 + 48);
				if (!v51
					|| !(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v51 + 16i64))(v51)
					|| (v52 = *(_QWORD*)(v50 + 48), (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v52 + 48i64))(v52))
					|| (v53 = (int*)sub_1401A4F40(v52 + 24)) == 0i64)
				{
					v53 = (int*)L"????";
				}
				v50 = 0i64;
				v54 = 0i64;
				if (*(_WORD*)v53)
				{
					do
						++v54;
					while (*((_WORD*)v53 + v54));
				}
				v55 = sub_14018B280(2 * v54 + 18, 0);
				if (v55)
				{
					*((_QWORD*)v55 + 1) = v54;
					*(_QWORD*)v55 = off_140B55060;
				}
				else
				{
					v55 = 0i64;
				}
				v44 = (unsigned __int16*)(v55 + 4);
				v56 = v54;
				sub_1407DB590(v55 + 4, v53, v56 * 2);
				v44[v56] = 0;
				if (v40)
					(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v40 - 2) + 8i64))(v40 - 8);
			}
			v57 = v50;
			do
				++v57;
			while (asc_1409F64C8[v57]);
			v58 = sub_14018B280(2 * v57 + 18, 0);
			if (v58)
			{
				*((_QWORD*)v58 + 1) = v57;
				*(_QWORD*)v58 = off_140B55060;
			}
			else
			{
				v58 = (int*)v50;
			}
			v59 = v58 + 4;
			v60 = 2 * v57;
			sub_1407DB590(v58 + 4, (int*)L"????", v60);
			v61 = (__int64)v126;
			*(_WORD*)((char*)v59 + v60) = v50;
			v62 = *(_QWORD*)(v61 + 8);
			v63 = (void(__fastcall***)(_QWORD, _QWORD))v50;
			v64 = v59;
			v124 = v50;
			v123 = v50;
			v125 = 0i64;
			if (v62
				&& (v65 = sub_1401B1580(v62, (int*)L"Registered", (__int64)&v122, 1),
					v50 = v124,
					v63 = (void(__fastcall***)(_QWORD, _QWORD))v123,
					v65 >= 0)
				&& (v124 - v123) >> 4)
			{
				v66 = v48 | 0x100;
				v136[1] = *(_QWORD*)(v123 + 8);
				v67 = v136;
				v136[0] = (__int64)off_140B68F20;
			}
			else
			{
				v66 = v48 | 0x200;
				v132[1] = 0i64;
				v132[0] = (__int64)off_140B68F20;
				v67 = v132;
			}
			v68 = v67[1];
			if ((v66 & 0x200) != 0)
			{
				v66 &= ~0x200u;
				v132[0] = (__int64)off_140B68F20;
			}
			if ((v66 & 0x100) != 0)
			{
				v66 &= ~0x100u;
				v136[0] = (__int64)off_140B68F20;
			}
			if (v63 != (void(__fastcall***)(_QWORD, _QWORD))v50)
			{
				do
				{
					(**v63)(v63, 0i64);
					v63 += 2;
				} while (v63 != (void(__fastcall***)(_QWORD, _QWORD))v50);
				v63 = (void(__fastcall***)(_QWORD, _QWORD))v123;
			}
			if (v63)
				sub_14018B900((__int64)v63, 0);
			if (v68)
			{
				v69 = *(_QWORD*)(v68 + 48);
				if (!v69
					|| !(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v69 + 16i64))(v69)
					|| (v70 = *(_QWORD*)(v68 + 48), (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v70 + 48i64))(v70))
					|| (v71 = (int*)sub_1401A4F40(v70 + 24)) == 0i64)
				{
					v71 = (int*)L"????";
				}
				v68 = 0i64;
				v72 = 0i64;
				if (*(_WORD*)v71)
				{
					do
						++v72;
					while (*((_WORD*)v71 + v72));
				}
				v73 = sub_14018B280(2 * v72 + 18, 0);
				if (v73)
				{
					*((_QWORD*)v73 + 1) = v72;
					*(_QWORD*)v73 = off_140B55060;
				}
				else
				{
					v73 = 0i64;
				}
				v64 = v73 + 4;
				v74 = 2 * v72;
				sub_1407DB590(v73 + 4, v71, v74);
				*(_WORD*)((char*)v64 + v74) = 0;
				if (v59)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v59 - 2) + 8i64))(v59 - 4);
			}
			v75 = v68;
			do
				++v75;
			while (asc_1409F64C8[v75]);
			v76 = sub_14018B280(2 * v75 + 18, 0);
			if (v76)
			{
				*((_QWORD*)v76 + 1) = v75;
				*(_QWORD*)v76 = off_140B55060;
			}
			else
			{
				v76 = (int*)v68;
			}
			v77 = v76 + 4;
			v78 = 2 * v75;
			v137 = (__int64)(v76 + 4);
			sub_1407DB590(v76 + 4, (int*)L"????", v78);
			v79 = (__int64)v126;
			*(_WORD*)((char*)v77 + v78) = v68;
			v80 = *(_QWORD*)(v79 + 8);
			v81 = v77;
			v82 = (void(__fastcall***)(_QWORD, _QWORD))v68;
			v123 = v68;
			v124 = v68;
			v125 = 0i64;
			if (v80
				&& (v83 = sub_1401B1580(v80, (int*)L"Expired", (__int64)&v122, 1),
					v68 = v124,
					v82 = (void(__fastcall***)(_QWORD, _QWORD))v123,
					v83 >= 0)
				&& (v124 - v123) >> 4)
			{
				v84 = v66 | 0x400;
				v117 = *(_QWORD*)(v123 + 8);
				v85 = &v116;
				v116 = off_140B68F20;
			}
			else
			{
				v84 = v66 | 0x800;
				v119 = 0i64;
				v118 = off_140B68F20;
				v85 = &v118;
			}
			v86 = v85[1];
			v138 = v84;
			if ((v84 & 0x800) != 0)
			{
				v84 &= ~0x800u;
				v118 = off_140B68F20;
				v138 = v84;
			}
			if ((v84 & 0x400) != 0)
			{
				v116 = off_140B68F20;
				v138 = v84 & 0xFFFFFBFF;
			}
			if (v82 != (void(__fastcall***)(_QWORD, _QWORD))v68)
			{
				do
				{
					(**v82)(v82, 0i64);
					v82 += 2;
				} while (v82 != (void(__fastcall***)(_QWORD, _QWORD))v68);
				v82 = (void(__fastcall***)(_QWORD, _QWORD))v123;
			}
			if (v82)
				sub_14018B900((__int64)v82, 0);
			if (v86)
			{
				v87 = v86[6];
				if (!v87
					|| !(*(__int64(__fastcall**)(__int64(__fastcall*)()))(*(_QWORD*)v87 + 16i64))(v87)
					|| (v88 = v86[6], (*(__int64(__fastcall**)(__int64(__fastcall*)()))(*(_QWORD*)v88 + 48i64))(v88))
					|| (v89 = (int*)sub_1401A4F40((__int64)v88 + 24)) == 0i64)
				{
					v89 = (int*)L"????";
				}
				v90 = 0i64;
				if (*(_WORD*)v89)
				{
					do
						++v90;
					while (*((_WORD*)v89 + v90));
				}
				v91 = sub_14018B280(2 * v90 + 18, 0);
				if (v91)
				{
					*((_QWORD*)v91 + 1) = v90;
					*(_QWORD*)v91 = off_140B55060;
				}
				else
				{
					v91 = 0i64;
				}
				v81 = v91 + 4;
				v92 = 2 * v90;
				sub_1407DB590(v91 + 4, v89, v92);
				v93 = v137;
				*(_WORD*)((char*)v81 + v92) = 0;
				if (v93)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v93 - 16) + 8i64))(v93 - 16);
			}
			v94 = sub_14018F0E0(&v122, v44);
			v95 = inet_addr((const char*)v94[1]);
			v96 = ntohl(v95);
			if (v123)
				sub_14018B900(v123, 0);
			LODWORD(v137) = v96;
			v97 = sub_14003CC10((__int64)&unk_140C66750, (unsigned int*)&v137);
			v98 = v97;
			v99 = *(_QWORD*)v97;
			if (v44)
			{
				v100 = *((_QWORD*)v44 - 1);
				v101 = sub_14018B280(2 * v100 + 18, 0);
				if (v101)
				{
					*((_QWORD*)v101 + 1) = v100;
					*(_QWORD*)v101 = off_140B55060;
				}
				v102 = v101 + 4;
				v103 = 2 * v100;
				sub_1407DB590(v101 + 4, (int*)v44, v103);
				*(_WORD*)((char*)v102 + v103) = 0;
				*(_QWORD*)v98 = v102;
			}
			else
			{
				*(_QWORD*)v97 = 0i64;
			}
			if (v99)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v99 - 16) + 8i64))(v99 - 16);
			v104 = *((_QWORD*)v98 + 1);
			if (v64)
			{
				v105 = *((_QWORD*)v64 - 1);
				v106 = sub_14018B280(2 * v105 + 18, 0);
				if (v106)
				{
					*((_QWORD*)v106 + 1) = v105;
					*(_QWORD*)v106 = off_140B55060;
				}
				v107 = v106 + 4;
				v108 = 2 * v105;
				sub_1407DB590(v106 + 4, v64, v108);
				*(_WORD*)((char*)v107 + v108) = 0;
				*((_QWORD*)v98 + 1) = v107;
			}
			else
			{
				*((_QWORD*)v98 + 1) = 0i64;
			}
			if (v104)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v104 - 16) + 8i64))(v104 - 16);
			v109 = *((_QWORD*)v98 + 2);
			if (v81)
			{
				v110 = *((_QWORD*)v81 - 1);
				v111 = sub_14018B280(2 * v110 + 18, 0);
				if (v111)
				{
					*((_QWORD*)v111 + 1) = v110;
					*(_QWORD*)v111 = off_140B55060;
				}
				v112 = v111 + 4;
				v113 = 2 * v110;
				sub_1407DB590(v111 + 4, v81, v113);
				*(_WORD*)((char*)v112 + v113) = 0;
				*((_QWORD*)v98 + 2) = v112;
			}
			else
			{
				*((_QWORD*)v98 + 2) = 0i64;
			}
			if (v109)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v109 - 16) + 8i64))(v109 - 16);
			if (v81)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v81 - 2) + 8i64))(v81 - 4);
			if (v64)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v64 - 2) + 8i64))(v64 - 4);
			if (v44)
				(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v44 - 2) + 8i64))(v44 - 8);
			v37 = (__int64)v130;
			v31 = v138;
			v36 = (__int64)(v126 + 2);
			v126 = (void(__fastcall***)(_QWORD, _QWORD))v36;
		} while ((void(__fastcall***)(_QWORD, _QWORD))v36 != v130);
		v36 = (__int64)v129;
		v19 = (__int64)v134;
	}
	v114 = qword_140C66DA8;
	LODWORD(qword_140C66780) = 3;
	v115 = qword_140C66DA8;
	if (qword_140C66DA8)
	{
		while (*(_DWORD*)(v115 + 368) == 5)
		{
			v115 = *(_QWORD*)(v115 + 176);
			if (!v115)
				goto LABEL_226;
		}
		if (qword_140C66DA8)
		{
			do
			{
				if (*(_DWORD*)(v114 + 368) != 5)
					break;
				v114 = *(_QWORD*)(v114 + 176);
			} while (v114);
		}
		Apollo_LUAEvent(*(_QWORD*)(v114 + 72), "TrustedIPListReady", &unk_1409D01D6);
		v37 = (__int64)v130;
		v36 = (__int64)v129;
	}
LABEL_226:
	if (v36 != v37)
	{
		do
		{
			(**(void(__fastcall***)(__int64, _QWORD))v36)(v36, 0i64);
			v36 += 16i64;
		} while (v36 != v37);
		v36 = (__int64)v129;
	}
	if (v36)
		sub_14018B900(v36, 0);
	if (v19)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
	if (v127)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v127 - 2) + 8i64))(v127 - 4);
	if (*v139)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v139 - 16i64) + 8i64))(*v139 - 16i64);
	return 0i64;
}
// 1409E4A3C: using guessed type wchar_t aD_2[3];
// 1409F6458: using guessed type wchar_t aTotalcount[11];
// 1409F64C8: using guessed type wchar_t asc_1409F64C8[5];
// 1409F64D8: using guessed type wchar_t aTotalpage[10];
// 1409F6548: using guessed type wchar_t aNetaddress[11];
// 1409F65E0: using guessed type wchar_t aItems[6];
// 1409F65F0: using guessed type wchar_t aItem[5];
// 1409F6600: using guessed type wchar_t aExpired[8];
// 1409F6610: using guessed type wchar_t aRegistered[11];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B68F20: using guessed type __int64 (__fastcall *off_140B68F20[7])();
// 140C66780: using guessed type __int64 qword_140C66780;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;
// 14003B7B0: using guessed type char var_A0[8];

