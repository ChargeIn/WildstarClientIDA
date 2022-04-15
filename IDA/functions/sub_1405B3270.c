#include "../winhttp.h"

//----- (00000001405B3270) ----------------------------------------------------
__int64 sub_1405B3270()
{
	__int64* v0; // rsi
	__int64 v1; // rdi
	__int64* v2; // rbx
	int* v3; // rax
	__int64 v4; // rax
	int* v5; // rax
	__int64 v6; // rax
	int* v7; // rax
	__int64 v8; // rax
	int* v9; // rax
	int* v10; // rbx
	int* v11; // rax
	int* v12; // rbx
	int* v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rcx
	int* v16; // rax
	int* v17; // rbx
	int* v18; // rax
	int* v19; // rbx
	int* v20; // rax
	int* v21; // rbx
	int* v22; // rax
	int* v23; // rbx
	int* v24; // rax
	int* v25; // rbx
	int* v26; // rax
	int* v27; // rbx
	int* v28; // rax
	int* v29; // rbx
	int* v30; // rax
	int* v31; // rbx
	int* v32; // rax
	int* v33; // rbx
	int* v34; // rax
	int* v35; // rbx
	int* v36; // rax
	int* v37; // rbx
	int* v38; // rax
	int* v39; // rbx
	int* v40; // rax
	int* v41; // rbx
	int* v42; // rax
	int* v43; // rbx
	int* v44; // rax
	int* v45; // rbx
	int* v46; // rax
	int* v47; // rbx
	int* v48; // rax
	int* v49; // rbx
	int* v50; // rax
	int* v51; // rbx
	int* v52; // rax
	int* v53; // rbx
	int* v54; // rax
	int* v55; // rbx
	int* v56; // rax
	__int64 v57; // rbx
	int* v58; // rax
	__int64 v59; // rbx
	int* v60; // rax
	__int64 v61; // rbx
	int* v62; // rax
	__int64 v63; // rbx
	int* v64; // rax
	__int64 v65; // rbx
	int* v66; // rax
	__int64 v67; // rbx
	unsigned int i; // edi
	__int64 v69; // rbx
	__int64 v70; // rax
	__int64 v71; // rcx
	int* v72; // rax
	__int64 v73; // rcx

	v0 = &qword_140C89D80;
	v1 = 36i64;
	v2 = &qword_140C89D80;
	do
	{
		if (*v2)
			(**(void(__fastcall***)(__int64, __int64)) * v2)(*v2, 1i64);
		*v2++ = 0i64;
		--v1;
	} while (v1);
	v3 = sub_14018B280(544i64, 0);
	if (v3)
		v4 = sub_14077E0C0((__int64)v3);
	else
		v4 = 0i64;
	qword_140C89D80 = v4;
	v5 = sub_14018B280(544i64, 0);
	if (v5)
		v6 = sub_14077DD90((__int64)v5);
	else
		v6 = 0i64;
	qword_140C89D88 = v6;
	v7 = sub_14018B280(544i64, 0);
	if (v7)
		v8 = sub_14077DFA0((__int64)v7);
	else
		v8 = 0i64;
	qword_140C89D90 = v8;
	v9 = sub_14018B280(544i64, 0);
	v10 = v9;
	if (v9)
	{
		sub_1405C7150((__int64)v9, 3);
		*(_QWORD*)v10 = off_140B6D510;
	}
	else
	{
		v10 = 0i64;
	}
	qword_140C89D98 = (__int64)v10;
	v11 = sub_14018B280(544i64, 0);
	v12 = v11;
	if (v11)
	{
		sub_1405C7150((__int64)v11, 3);
		*(_QWORD*)v12 = off_140B6D5D0;
	}
	else
	{
		v12 = 0i64;
	}
	qword_140C89DA0 = (__int64)v12;
	v13 = sub_14018B280(544i64, 0);
	v14 = (__int64)v13;
	if (v13)
	{
		sub_1405C7150((__int64)v13, 3);
		v15 = qword_140C65898;
		*(_QWORD*)v14 = off_140B77C70;
		*(_DWORD*)(v14 + 276) = sub_1403982A0(v15, 1);
	}
	else
	{
		v14 = 0i64;
	}
	qword_140C89DA8 = v14;
	v16 = sub_14018B280(544i64, 0);
	v17 = v16;
	if (v16)
	{
		sub_1405C7150((__int64)v16, 3);
		*(_QWORD*)v17 = off_140B6D690;
	}
	else
	{
		v17 = 0i64;
	}
	qword_140C89DC8 = (__int64)v17;
	v18 = sub_14018B280(544i64, 0);
	v19 = v18;
	if (v18)
	{
		sub_1405C7150((__int64)v18, 3);
		*(_QWORD*)v19 = off_140B6D150;
	}
	else
	{
		v19 = 0i64;
	}
	qword_140C89DD0 = (__int64)v19;
	v20 = sub_14018B280(544i64, 0);
	v21 = v20;
	if (v20)
	{
		sub_1405C7150((__int64)v20, 3);
		*(_QWORD*)v21 = off_140B6D210;
	}
	else
	{
		v21 = 0i64;
	}
	qword_140C89E00 = (__int64)v21;
	v22 = sub_14018B280(544i64, 0);
	v23 = v22;
	if (v22)
	{
		sub_1405C7150((__int64)v22, 3);
		*(_QWORD*)v23 = off_140B6D2D0;
	}
	else
	{
		v23 = 0i64;
	}
	qword_140C89DD8 = (__int64)v23;
	v24 = sub_14018B280(544i64, 0);
	v25 = v24;
	if (v24)
	{
		sub_1405C7150((__int64)v24, 3);
		*(_QWORD*)v25 = off_140B6D390;
	}
	else
	{
		v25 = 0i64;
	}
	qword_140C89DB0 = (__int64)v25;
	v26 = sub_14018B280(544i64, 0);
	v27 = v26;
	if (v26)
	{
		sub_1405C7150((__int64)v26, 3);
		*(_QWORD*)v27 = off_140B6D450;
	}
	else
	{
		v27 = 0i64;
	}
	qword_140C89DC0 = (__int64)v27;
	v28 = sub_14018B280(544i64, 0);
	v29 = v28;
	if (v28)
	{
		sub_1405C7150((__int64)v28, 3);
		*(_QWORD*)v29 = off_140B77730;
	}
	else
	{
		v29 = 0i64;
	}
	qword_140C89DE0 = (__int64)v29;
	v30 = sub_14018B280(544i64, 0);
	v31 = v30;
	if (v30)
	{
		sub_1405C7150((__int64)v30, 3);
		*(_QWORD*)v31 = off_140B777F0;
	}
	else
	{
		v31 = 0i64;
	}
	qword_140C89DE8 = (__int64)v31;
	v32 = sub_14018B280(544i64, 0);
	v33 = v32;
	if (v32)
	{
		sub_1405C7150((__int64)v32, 3);
		*(_QWORD*)v33 = off_140B778B0;
	}
	else
	{
		v33 = 0i64;
	}
	qword_140C89DF0 = (__int64)v33;
	v34 = sub_14018B280(544i64, 0);
	v35 = v34;
	if (v34)
	{
		sub_1405C7150((__int64)v34, 3);
		*(_QWORD*)v35 = off_140B77970;
	}
	else
	{
		v35 = 0i64;
	}
	qword_140C89DF8 = (__int64)v35;
	v36 = sub_14018B280(544i64, 0);
	v37 = v36;
	if (v36)
	{
		sub_1405C7150((__int64)v36, 3);
		*(_QWORD*)v37 = off_140B772B0;
	}
	else
	{
		v37 = 0i64;
	}
	qword_140C89E08 = (__int64)v37;
	v38 = sub_14018B280(544i64, 0);
	v39 = v38;
	if (v38)
	{
		sub_1405C7150((__int64)v38, 3);
		*(_QWORD*)v39 = off_140B77370;
	}
	else
	{
		v39 = 0i64;
	}
	qword_140C89E10 = (__int64)v39;
	v40 = sub_14018B280(544i64, 0);
	v41 = v40;
	if (v40)
	{
		sub_1405C7150((__int64)v40, 3);
		*(_QWORD*)v41 = off_140B77430;
	}
	else
	{
		v41 = 0i64;
	}
	qword_140C89E18 = (__int64)v41;
	v42 = sub_14018B280(544i64, 0);
	v43 = v42;
	if (v42)
	{
		sub_1405C7150((__int64)v42, 3);
		*(_QWORD*)v43 = off_140B775B0;
	}
	else
	{
		v43 = 0i64;
	}
	qword_140C89E20 = (__int64)v43;
	v44 = sub_14018B280(544i64, 0);
	v45 = v44;
	if (v44)
	{
		sub_1405C7150((__int64)v44, 3);
		*(_QWORD*)v45 = off_140B774F0;
	}
	else
	{
		v45 = 0i64;
	}
	qword_140C89E28 = (__int64)v45;
	v46 = sub_14018B280(544i64, 0);
	v47 = v46;
	if (v46)
	{
		sub_1405C7150((__int64)v46, 3);
		*(_QWORD*)v47 = off_140B77670;
	}
	else
	{
		v47 = 0i64;
	}
	qword_140C89E38 = (__int64)v47;
	v48 = sub_14018B280(544i64, 0);
	v49 = v48;
	if (v48)
	{
		sub_1405C7150((__int64)v48, 3);
		*(_QWORD*)v49 = off_140B76E30;
	}
	else
	{
		v49 = 0i64;
	}
	qword_140C89E50 = (__int64)v49;
	v50 = sub_14018B280(544i64, 0);
	v51 = v50;
	if (v50)
	{
		sub_1405C7150((__int64)v50, 3);
		*(_QWORD*)v51 = off_140B76EF0;
	}
	else
	{
		v51 = 0i64;
	}
	qword_140C89E58 = (__int64)v51;
	v52 = sub_14018B280(544i64, 0);
	v53 = v52;
	if (v52)
	{
		sub_1405C7150((__int64)v52, 3);
		*(_QWORD*)v53 = off_140B76FB0;
	}
	else
	{
		v53 = 0i64;
	}
	qword_140C89E60 = (__int64)v53;
	v54 = sub_14018B280(544i64, 0);
	v55 = v54;
	if (v54)
	{
		sub_1405C7150((__int64)v54, 3);
		*(_QWORD*)v55 = off_140B77070;
	}
	else
	{
		v55 = 0i64;
	}
	qword_140C89E68 = (__int64)v55;
	v56 = sub_14018B280(560i64, 0);
	v57 = (__int64)v56;
	if (v56)
	{
		sub_1405C7150((__int64)v56, 3);
		*(_DWORD*)(v57 + 544) = 0;
		*(_QWORD*)v57 = off_140B77130;
	}
	else
	{
		v57 = 0i64;
	}
	qword_140C89E70 = v57;
	v58 = sub_14018B280(560i64, 0);
	v59 = (__int64)v58;
	if (v58)
	{
		sub_1405C7150((__int64)v58, 3);
		*(_DWORD*)(v59 + 544) = 0;
		*(_QWORD*)v59 = off_140B771F0;
	}
	else
	{
		v59 = 0i64;
	}
	qword_140C89E78 = v59;
	v60 = sub_14018B280(560i64, 0);
	v61 = (__int64)v60;
	if (v60)
	{
		sub_1405C7150((__int64)v60, 3);
		*(_DWORD*)(v61 + 544) = 0;
		*(_QWORD*)v61 = off_140B76B30;
	}
	else
	{
		v61 = 0i64;
	}
	qword_140C89E80 = v61;
	v62 = sub_14018B280(560i64, 0);
	v63 = (__int64)v62;
	if (v62)
	{
		sub_1405C7150((__int64)v62, 3);
		*(_DWORD*)(v63 + 544) = 0;
		*(_QWORD*)v63 = off_140B76BF0;
	}
	else
	{
		v63 = 0i64;
	}
	qword_140C89E88 = v63;
	v64 = sub_14018B280(560i64, 0);
	v65 = (__int64)v64;
	if (v64)
	{
		sub_1405C7150((__int64)v64, 3);
		*(_DWORD*)(v65 + 544) = 0;
		*(_QWORD*)v65 = off_140B76CB0;
	}
	else
	{
		v65 = 0i64;
	}
	qword_140C89E90 = v65;
	v66 = sub_14018B280(560i64, 0);
	v67 = (__int64)v66;
	if (v66)
	{
		sub_1405C7150((__int64)v66, 3);
		*(_DWORD*)(v67 + 544) = 0;
		*(_QWORD*)v67 = off_140B76D70;
	}
	else
	{
		v67 = 0i64;
	}
	qword_140C89E98 = v67;
	for (i = 0; i < 0x24; ++i)
	{
		v69 = *v0;
		if (*v0)
		{
			v70 = *(_QWORD*)v69;
			v71 = *v0;
			*(_DWORD*)(v69 + 528) = i;
			v72 = (int*)(*(__int64(__fastcall**)(__int64))(v70 + 176))(v71);
			v73 = 0i64;
			if (*(_WORD*)v72)
			{
				do
					++v73;
				while (*((_WORD*)v72 + v73));
			}
			sub_14001C480(v69 + 16, v72, (int*)((char*)v72 + 2 * v73));
		}
		++v0;
	}
	return 0i64;
}
// 140B6D150: using guessed type __int64 (__fastcall *off_140B6D150[23])();
// 140B6D210: using guessed type __int64 (__fastcall *off_140B6D210[23])();
// 140B6D2D0: using guessed type __int64 (__fastcall *off_140B6D2D0[23])();
// 140B6D390: using guessed type __int64 (__fastcall *off_140B6D390[47])();
// 140B6D450: using guessed type __int64 (__fastcall *off_140B6D450[23])();
// 140B6D510: using guessed type __int64 (__fastcall *off_140B6D510[23])();
// 140B6D5D0: using guessed type __int64 (__fastcall *off_140B6D5D0[23])();
// 140B6D690: using guessed type __int64 (__fastcall *off_140B6D690[23])();
// 140B76B30: using guessed type __int64 (__fastcall *off_140B76B30[23])();
// 140B76BF0: using guessed type __int64 (__fastcall *off_140B76BF0[23])();
// 140B76CB0: using guessed type __int64 (__fastcall *off_140B76CB0[23])();
// 140B76D70: using guessed type __int64 (__fastcall *off_140B76D70[23])();
// 140B76E30: using guessed type __int64 (__fastcall *off_140B76E30[23])();
// 140B76EF0: using guessed type __int64 (__fastcall *off_140B76EF0[23])();
// 140B76FB0: using guessed type __int64 (__fastcall *off_140B76FB0[23])();
// 140B77070: using guessed type __int64 (__fastcall *off_140B77070[23])();
// 140B77130: using guessed type __int64 (__fastcall *off_140B77130[23])();
// 140B771F0: using guessed type __int64 (__fastcall *off_140B771F0[23])();
// 140B772B0: using guessed type __int64 (__fastcall *off_140B772B0[23])();
// 140B77370: using guessed type __int64 (__fastcall *off_140B77370[23])();
// 140B77430: using guessed type __int64 (__fastcall *off_140B77430[23])();
// 140B774F0: using guessed type __int64 (__fastcall *off_140B774F0[23])();
// 140B775B0: using guessed type __int64 (__fastcall *off_140B775B0[23])();
// 140B77670: using guessed type __int64 (__fastcall *off_140B77670[23])();
// 140B77730: using guessed type __int64 (__fastcall *off_140B77730[23])();
// 140B777F0: using guessed type __int64 (__fastcall *off_140B777F0[23])();
// 140B778B0: using guessed type __int64 (__fastcall *off_140B778B0[23])();
// 140B77970: using guessed type __int64 (__fastcall *off_140B77970[23])();
// 140B77C70: using guessed type __int64 (__fastcall *off_140B77C70[33])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C89D80: using guessed type __int64 qword_140C89D80;
// 140C89D88: using guessed type __int64 qword_140C89D88;
// 140C89D90: using guessed type __int64 qword_140C89D90;
// 140C89D98: using guessed type __int64 qword_140C89D98;
// 140C89DA0: using guessed type __int64 qword_140C89DA0;
// 140C89DA8: using guessed type __int64 qword_140C89DA8;
// 140C89DB0: using guessed type __int64 qword_140C89DB0;
// 140C89DC0: using guessed type __int64 qword_140C89DC0;
// 140C89DC8: using guessed type __int64 qword_140C89DC8;
// 140C89DD0: using guessed type __int64 qword_140C89DD0;
// 140C89DD8: using guessed type __int64 qword_140C89DD8;
// 140C89DE0: using guessed type __int64 qword_140C89DE0;
// 140C89DE8: using guessed type __int64 qword_140C89DE8;
// 140C89DF0: using guessed type __int64 qword_140C89DF0;
// 140C89DF8: using guessed type __int64 qword_140C89DF8;
// 140C89E00: using guessed type __int64 qword_140C89E00;
// 140C89E08: using guessed type __int64 qword_140C89E08;
// 140C89E10: using guessed type __int64 qword_140C89E10;
// 140C89E18: using guessed type __int64 qword_140C89E18;
// 140C89E20: using guessed type __int64 qword_140C89E20;
// 140C89E28: using guessed type __int64 qword_140C89E28;
// 140C89E38: using guessed type __int64 qword_140C89E38;
// 140C89E50: using guessed type __int64 qword_140C89E50;
// 140C89E58: using guessed type __int64 qword_140C89E58;
// 140C89E60: using guessed type __int64 qword_140C89E60;
// 140C89E68: using guessed type __int64 qword_140C89E68;
// 140C89E70: using guessed type __int64 qword_140C89E70;
// 140C89E78: using guessed type __int64 qword_140C89E78;
// 140C89E80: using guessed type __int64 qword_140C89E80;
// 140C89E88: using guessed type __int64 qword_140C89E88;
// 140C89E90: using guessed type __int64 qword_140C89E90;
// 140C89E98: using guessed type __int64 qword_140C89E98;

