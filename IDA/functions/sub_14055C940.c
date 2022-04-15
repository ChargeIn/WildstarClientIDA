#include "../winhttp.h"

//----- (000000014055C940) ----------------------------------------------------
__int64 __fastcall sub_14055C940(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax
	int* v5; // rax
	int* v6; // rax
	int* v7; // rax
	int* v8; // rax
	int* v9; // rax
	int* v10; // rax
	int* v11; // rdi
	unsigned int v12; // eax
	unsigned __int64 v13; // rax
	__int64 v14; // rax
	unsigned __int64 v15; // kr00_8
	int* v16; // rax
	unsigned __int64 v17; // r8
	int* v18; // rdi
	unsigned int v19; // eax
	unsigned __int64 v20; // rax
	__int64 v21; // rax
	unsigned __int64 v22; // kr10_8
	int* v23; // rax
	unsigned __int64 v24; // r8
	int* v25; // rdi
	unsigned int v26; // eax
	unsigned __int64 v27; // rax
	__int64 v28; // rax
	unsigned __int64 v29; // kr20_8
	int* v30; // rax
	unsigned __int64 v31; // r8
	int* v32; // rdi
	unsigned int v33; // eax
	unsigned __int64 v34; // rax
	__int64 v35; // rax
	unsigned __int64 v36; // kr30_8
	int* v37; // rax
	unsigned __int64 v38; // r8
	int* v39; // rdi
	unsigned int v40; // eax
	unsigned __int64 v41; // rax
	__int64 v42; // rax
	unsigned __int64 v43; // kr40_8
	int* v44; // rax
	unsigned __int64 v45; // r8
	int* v46; // rdi
	unsigned int v47; // eax
	unsigned __int64 v48; // rax
	__int64 v49; // rax
	unsigned __int64 v50; // kr50_8
	int* v51; // rax
	unsigned __int64 v52; // r8
	int* v53; // rdi
	unsigned int v54; // eax
	_QWORD* v55; // rax
	unsigned int v56; // eax
	int* v57; // rdi
	unsigned int v58; // eax
	unsigned __int64 v59; // rax
	__int64 v60; // rax
	unsigned __int64 v61; // kr60_8
	int* v62; // rax
	unsigned __int64 v63; // r8
	int* v64; // rdi
	unsigned int v65; // eax
	unsigned __int64 v66; // rax
	__int64 v67; // rax
	unsigned __int64 v68; // kr70_8
	int* v69; // rax
	unsigned __int64 v70; // r8
	int* v71; // rdi
	unsigned int v72; // eax
	unsigned __int64 v73; // rax
	__int64 v74; // rax
	unsigned __int64 v75; // kr80_8
	int* v76; // rax
	unsigned __int64 v77; // r8
	int* v78; // rdi
	unsigned int v79; // eax
	unsigned __int64 v80; // rax
	__int64 v81; // rax
	unsigned __int64 v82; // kr90_8
	int* v83; // rax
	unsigned __int64 v84; // r8

	sub_1407A0980(a1);
	*(_QWORD*)a1 = off_140B6C720;
	sub_1403FB600((_QWORD*)(a1 + 1568));
	*(_QWORD*)(a1 + 1608) = 0i64;
	v2 = sub_14018B280(64i64, 0);
	*(_QWORD*)(a1 + 1632) = 0i64;
	*(_QWORD*)(a1 + 1624) = v2;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1624) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 1624) + 16i64) = *(_QWORD*)(a1 + 1624);
	*(_QWORD*)(*(_QWORD*)(a1 + 1624) + 24i64) = *(_QWORD*)(a1 + 1624);
	v3 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 1664) = 0i64;
	*(_QWORD*)(a1 + 1656) = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1656) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 1656) + 16i64) = *(_QWORD*)(a1 + 1656);
	*(_QWORD*)(*(_QWORD*)(a1 + 1656) + 24i64) = *(_QWORD*)(a1 + 1656);
	v4 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 1696) = 0i64;
	*(_QWORD*)(a1 + 1688) = v4;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1688) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 1688) + 16i64) = *(_QWORD*)(a1 + 1688);
	*(_QWORD*)(*(_QWORD*)(a1 + 1688) + 24i64) = *(_QWORD*)(a1 + 1688);
	sub_1400B6000((_QWORD*)(a1 + 1712), 0i64);
	v5 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 1768) = 0i64;
	*(_QWORD*)(a1 + 1760) = v5;
	*(_BYTE*)v5 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1760) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 1760) + 16i64) = *(_QWORD*)(a1 + 1760);
	*(_QWORD*)(*(_QWORD*)(a1 + 1760) + 24i64) = *(_QWORD*)(a1 + 1760);
	v6 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 1800) = 0i64;
	*(_QWORD*)(a1 + 1792) = v6;
	*(_BYTE*)v6 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1792) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 1792) + 16i64) = *(_QWORD*)(a1 + 1792);
	*(_QWORD*)(*(_QWORD*)(a1 + 1792) + 24i64) = *(_QWORD*)(a1 + 1792);
	v7 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 1832) = 0i64;
	*(_QWORD*)(a1 + 1824) = v7;
	*(_BYTE*)v7 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1824) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 1824) + 16i64) = *(_QWORD*)(a1 + 1824);
	*(_QWORD*)(*(_QWORD*)(a1 + 1824) + 24i64) = *(_QWORD*)(a1 + 1824);
	v8 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 1864) = 0i64;
	*(_QWORD*)(a1 + 1856) = v8;
	*(_BYTE*)v8 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1856) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 1856) + 16i64) = *(_QWORD*)(a1 + 1856);
	*(_QWORD*)(*(_QWORD*)(a1 + 1856) + 24i64) = *(_QWORD*)(a1 + 1856);
	v9 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 1896) = 0i64;
	*(_QWORD*)(a1 + 1888) = v9;
	*(_BYTE*)v9 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1888) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 1888) + 16i64) = *(_QWORD*)(a1 + 1888);
	*(_QWORD*)(*(_QWORD*)(a1 + 1888) + 24i64) = *(_QWORD*)(a1 + 1888);
	v10 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 1936) = 0i64;
	*(_QWORD*)(a1 + 1928) = v10;
	*(_BYTE*)v10 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1928) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 1928) + 16i64) = *(_QWORD*)(a1 + 1928);
	*(_QWORD*)(*(_QWORD*)(a1 + 1928) + 24i64) = *(_QWORD*)(a1 + 1928);
	sub_1405662D0((_QWORD*)(a1 + 1952));
	*(_QWORD*)(a1 + 1992) = 0i64;
	*(_QWORD*)(a1 + 2000) = 0i64;
	*(_QWORD*)(a1 + 2008) = 0i64;
	*(_QWORD*)(a1 + 2024) = 0i64;
	*(_QWORD*)(a1 + 2016) = 0i64;
	*(_QWORD*)(a1 + 2040) = 0i64;
	*(_QWORD*)(a1 + 2032) = 0i64;
	*(_QWORD*)(a1 + 2056) = 0i64;
	*(_QWORD*)(a1 + 2048) = 0i64;
	v11 = sub_14018B280(40i64, 0);
	if (v11)
	{
		if (qword_140C63838)
		{
			v12 = qword_140C63838(off_140A6D0A8, qword_140C63858);
		}
		else if (dword_140C64D94)
		{
			v12 = 0;
		}
		else if ((int)sub_140236320() >= 0)
		{
			v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C653F0 + 40i64))(qword_140C653F0);
		}
		else
		{
			v12 = 0;
		}
		*(_QWORD*)v11 = 0i64;
		v13 = sub_1401A40C0(v12);
		*((_QWORD*)v11 + 1) = v13;
		v15 = v13;
		v14 = 8 * v13;
		if (!is_mul_ok(v15, 8ui64))
			v14 = -1i64;
		v16 = sub_14018B280(v14, 0);
		v17 = 8i64 * *((_QWORD*)v11 + 1);
		*((_QWORD*)v11 + 2) = v16;
		sub_1407E4830(v16, 0i64, v17);
		*((_QWORD*)v11 + 3) = sub_1400522D0;
		*((_QWORD*)v11 + 4) = sub_1400522E0;
	}
	else
	{
		v11 = 0i64;
	}
	*(_QWORD*)(a1 + 1344) = v11;
	v18 = sub_14018B280(40i64, 0);
	if (v18)
	{
		if (qword_140C63838)
		{
			v19 = qword_140C63838(off_140A6D0A8, qword_140C63858);
		}
		else if (dword_140C64D94)
		{
			v19 = 0;
		}
		else if ((int)sub_140236320() >= 0)
		{
			v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C653F0 + 40i64))(qword_140C653F0);
		}
		else
		{
			v19 = 0;
		}
		*(_QWORD*)v18 = 0i64;
		v20 = sub_1401A40C0(v19);
		*((_QWORD*)v18 + 1) = v20;
		v22 = v20;
		v21 = 8 * v20;
		if (!is_mul_ok(v22, 8ui64))
			v21 = -1i64;
		v23 = sub_14018B280(v21, 0);
		v24 = 8i64 * *((_QWORD*)v18 + 1);
		*((_QWORD*)v18 + 2) = v23;
		sub_1407E4830(v23, 0i64, v24);
		*((_QWORD*)v18 + 3) = sub_1400522D0;
		*((_QWORD*)v18 + 4) = sub_1400522E0;
	}
	else
	{
		v18 = 0i64;
	}
	*(_QWORD*)(a1 + 1352) = v18;
	v25 = sub_14018B280(40i64, 0);
	if (v25)
	{
		if (qword_140C63838)
		{
			v26 = qword_140C63838(off_140A6D0A8, qword_140C63858);
		}
		else if (dword_140C64D94)
		{
			v26 = 0;
		}
		else if ((int)sub_140236320() >= 0)
		{
			v26 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C653F0 + 40i64))(qword_140C653F0);
		}
		else
		{
			v26 = 0;
		}
		*(_QWORD*)v25 = 0i64;
		v27 = sub_1401A40C0(v26);
		*((_QWORD*)v25 + 1) = v27;
		v29 = v27;
		v28 = 8 * v27;
		if (!is_mul_ok(v29, 8ui64))
			v28 = -1i64;
		v30 = sub_14018B280(v28, 0);
		v31 = 8i64 * *((_QWORD*)v25 + 1);
		*((_QWORD*)v25 + 2) = v30;
		sub_1407E4830(v30, 0i64, v31);
		*((_QWORD*)v25 + 3) = sub_1400522D0;
		*((_QWORD*)v25 + 4) = sub_1400522E0;
	}
	else
	{
		v25 = 0i64;
	}
	*(_QWORD*)(a1 + 1360) = v25;
	v32 = sub_14018B280(40i64, 0);
	if (v32)
	{
		if (qword_140C63838)
		{
			v33 = qword_140C63838(off_140A6D0A8, qword_140C63858);
		}
		else if (dword_140C64D94)
		{
			v33 = 0;
		}
		else if ((int)sub_140236320() >= 0)
		{
			v33 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C653F0 + 40i64))(qword_140C653F0);
		}
		else
		{
			v33 = 0;
		}
		*(_QWORD*)v32 = 0i64;
		v34 = sub_1401A40C0(v33);
		*((_QWORD*)v32 + 1) = v34;
		v36 = v34;
		v35 = 8 * v34;
		if (!is_mul_ok(v36, 8ui64))
			v35 = -1i64;
		v37 = sub_14018B280(v35, 0);
		v38 = 8i64 * *((_QWORD*)v32 + 1);
		*((_QWORD*)v32 + 2) = v37;
		sub_1407E4830(v37, 0i64, v38);
		*((_QWORD*)v32 + 3) = sub_1400522D0;
		*((_QWORD*)v32 + 4) = sub_1400522E0;
	}
	else
	{
		v32 = 0i64;
	}
	*(_QWORD*)(a1 + 1368) = v32;
	v39 = sub_14018B280(40i64, 0);
	if (v39)
	{
		if (qword_140C63838)
		{
			v40 = qword_140C63838(off_140A6D0A8, qword_140C63858);
		}
		else if (dword_140C64D94)
		{
			v40 = 0;
		}
		else if ((int)sub_140236320() >= 0)
		{
			v40 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C653F0 + 40i64))(qword_140C653F0);
		}
		else
		{
			v40 = 0;
		}
		*(_QWORD*)v39 = 0i64;
		v41 = sub_1401A40C0(v40);
		*((_QWORD*)v39 + 1) = v41;
		v43 = v41;
		v42 = 8 * v41;
		if (!is_mul_ok(v43, 8ui64))
			v42 = -1i64;
		v44 = sub_14018B280(v42, 0);
		v45 = 8i64 * *((_QWORD*)v39 + 1);
		*((_QWORD*)v39 + 2) = v44;
		sub_1407E4830(v44, 0i64, v45);
		*((_QWORD*)v39 + 3) = sub_1400522D0;
		*((_QWORD*)v39 + 4) = sub_1400522E0;
	}
	else
	{
		v39 = 0i64;
	}
	*(_QWORD*)(a1 + 1376) = v39;
	v46 = sub_14018B280(40i64, 0);
	if (v46)
	{
		if (qword_140C63838)
		{
			v47 = qword_140C63838(off_140A6D0A8, qword_140C63858);
		}
		else if (dword_140C64D94)
		{
			v47 = 0;
		}
		else if ((int)sub_140236320() >= 0)
		{
			v47 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C653F0 + 40i64))(qword_140C653F0);
		}
		else
		{
			v47 = 0;
		}
		*(_QWORD*)v46 = 0i64;
		v48 = sub_1401A40C0(v47);
		*((_QWORD*)v46 + 1) = v48;
		v50 = v48;
		v49 = 8 * v48;
		if (!is_mul_ok(v50, 8ui64))
			v49 = -1i64;
		v51 = sub_14018B280(v49, 0);
		v52 = 8i64 * *((_QWORD*)v46 + 1);
		*((_QWORD*)v46 + 2) = v51;
		sub_1407E4830(v51, 0i64, v52);
		*((_QWORD*)v46 + 3) = sub_1400522D0;
		*((_QWORD*)v46 + 4) = sub_1400522E0;
	}
	else
	{
		v46 = 0i64;
	}
	*(_QWORD*)(a1 + 1384) = v46;
	v53 = sub_14018B280(40i64, 0);
	if (v53)
	{
		if (qword_140C63838)
		{
			v54 = qword_140C63838(off_140A6D0A8, qword_140C63858);
			v55 = sub_1400B6000(v53, v54);
		}
		else if (dword_140C64D94 || (int)sub_140236320() < 0)
		{
			v55 = sub_1400B6000(v53, 0i64);
		}
		else
		{
			v56 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C653F0 + 40i64))(qword_140C653F0);
			v55 = sub_1400B6000(v53, v56);
		}
	}
	else
	{
		v55 = 0i64;
	}
	*(_QWORD*)(a1 + 1392) = v55;
	v57 = sub_14018B280(40i64, 0);
	if (v57)
	{
		if (qword_140C63838)
		{
			v58 = qword_140C63838(off_140A6D268, qword_140C63858);
		}
		else if (dword_140C644E4)
		{
			v58 = 0;
		}
		else if ((int)sub_140238520() >= 0)
		{
			v58 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63BA0 + 40i64))(qword_140C63BA0);
		}
		else
		{
			v58 = 0;
		}
		*(_QWORD*)v57 = 0i64;
		v59 = sub_1401A40C0(v58);
		*((_QWORD*)v57 + 1) = v59;
		v61 = v59;
		v60 = 8 * v59;
		if (!is_mul_ok(v61, 8ui64))
			v60 = -1i64;
		v62 = sub_14018B280(v60, 0);
		v63 = 8i64 * *((_QWORD*)v57 + 1);
		*((_QWORD*)v57 + 2) = v62;
		sub_1407E4830(v62, 0i64, v63);
		*((_QWORD*)v57 + 3) = sub_1400522D0;
		*((_QWORD*)v57 + 4) = sub_1400522E0;
	}
	else
	{
		v57 = 0i64;
	}
	*(_QWORD*)(a1 + 1400) = v57;
	v64 = sub_14018B280(40i64, 0);
	if (v64)
	{
		if (qword_140C63838)
		{
			v65 = qword_140C63838(off_140A6D658, qword_140C63858);
		}
		else if (dword_140C64C94)
		{
			v65 = 0;
		}
		else if ((int)sub_14023D1A0() >= 0)
		{
			v65 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64FE8 + 40i64))(qword_140C64FE8);
		}
		else
		{
			v65 = 0;
		}
		*(_QWORD*)v64 = 0i64;
		v66 = sub_1401A40C0(v65);
		*((_QWORD*)v64 + 1) = v66;
		v68 = v66;
		v67 = 8 * v66;
		if (!is_mul_ok(v68, 8ui64))
			v67 = -1i64;
		v69 = sub_14018B280(v67, 0);
		v70 = 8i64 * *((_QWORD*)v64 + 1);
		*((_QWORD*)v64 + 2) = v69;
		sub_1407E4830(v69, 0i64, v70);
		*((_QWORD*)v64 + 3) = sub_1400522D0;
		*((_QWORD*)v64 + 4) = sub_1400522E0;
	}
	else
	{
		v64 = 0i64;
	}
	*(_QWORD*)(a1 + 1912) = v64;
	v71 = sub_14018B280(40i64, 0);
	if (v71)
	{
		if (qword_140C63838)
		{
			v72 = qword_140C63838(off_140A6D118, qword_140C63858);
		}
		else if (dword_140C64510)
		{
			v72 = 0;
		}
		else if ((int)sub_140236BA0() >= 0)
		{
			v72 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C654E0 + 40i64))(qword_140C654E0);
		}
		else
		{
			v72 = 0;
		}
		*(_QWORD*)v71 = 0i64;
		v73 = sub_1401A40C0(v72);
		*((_QWORD*)v71 + 1) = v73;
		v75 = v73;
		v74 = 8 * v73;
		if (!is_mul_ok(v75, 8ui64))
			v74 = -1i64;
		v76 = sub_14018B280(v74, 0);
		v77 = 8i64 * *((_QWORD*)v71 + 1);
		*((_QWORD*)v71 + 2) = v76;
		sub_1407E4830(v76, 0i64, v77);
		*((_QWORD*)v71 + 3) = sub_1400522D0;
		*((_QWORD*)v71 + 4) = sub_1400522E0;
	}
	else
	{
		v71 = 0i64;
	}
	*(_QWORD*)(a1 + 1560) = v71;
	v78 = sub_14018B280(40i64, 0);
	if (v78)
	{
		if (qword_140C63838)
		{
			v79 = qword_140C63838(off_140A6A130, qword_140C63858);
		}
		else if (dword_140C64920 || (int)sub_1401FC880() < 0)
		{
			v79 = 0;
		}
		else
		{
			v79 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65540 + 40i64))(qword_140C65540);
		}
		*(_QWORD*)v78 = 0i64;
		v80 = sub_1401A40C0(v79);
		*((_QWORD*)v78 + 1) = v80;
		v82 = v80;
		v81 = 8 * v80;
		if (!is_mul_ok(v82, 8ui64))
			v81 = -1i64;
		v83 = sub_14018B280(v81, 0);
		v84 = 8i64 * *((_QWORD*)v78 + 1);
		*((_QWORD*)v78 + 2) = v83;
		sub_1407E4830(v83, 0i64, v84);
		*((_QWORD*)v78 + 3) = sub_1400522D0;
		*((_QWORD*)v78 + 4) = sub_1400522E0;
	}
	else
	{
		v78 = 0i64;
	}
	*(_QWORD*)(a1 + 1416) = v78;
	sub_1407E4830((int*)(a1 + 1264), 0i64, 0x2Cui64);
	return a1;
}
// 140A6A130: using guessed type wchar_t *off_140A6A130[2];
// 140A6D0A8: using guessed type wchar_t *off_140A6D0A8[2];
// 140A6D118: using guessed type wchar_t *off_140A6D118[2];
// 140A6D268: using guessed type wchar_t *off_140A6D268[2];
// 140A6D658: using guessed type wchar_t *off_140A6D658[2];
// 140B6C720: using guessed type __int64 (__fastcall *off_140B6C720[17])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BA0: using guessed type __int64 qword_140C63BA0;
// 140C644E4: using guessed type int dword_140C644E4;
// 140C64510: using guessed type int dword_140C64510;
// 140C64920: using guessed type int dword_140C64920;
// 140C64C94: using guessed type int dword_140C64C94;
// 140C64D94: using guessed type int dword_140C64D94;
// 140C64FE8: using guessed type __int64 qword_140C64FE8;
// 140C653F0: using guessed type __int64 qword_140C653F0;
// 140C654E0: using guessed type __int64 qword_140C654E0;
// 140C65540: using guessed type __int64 qword_140C65540;

