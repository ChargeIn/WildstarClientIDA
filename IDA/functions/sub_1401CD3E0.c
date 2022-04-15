//----- (00000001401CD3E0) ----------------------------------------------------
__int64 __fastcall sub_1401CD3E0(unsigned int a1, unsigned __int8* a2, unsigned int a3)
{
	unsigned int v3; // r9d
	unsigned __int8* v4; // r10
	unsigned int v5; // r9d
	int v7; // eax
	__int64 v8; // r11
	int v9; // edx
	int v10; // eax
	int v11; // ecx
	int v12; // r9d
	int v13; // ecx
	int v14; // r9d
	int v15; // ecx
	int v16; // r9d
	int v17; // ecx
	int v18; // r9d
	int v19; // ecx
	int v20; // r9d
	int v21; // ecx
	int v22; // r9d
	int v23; // ecx
	int v24; // r9d
	int v25; // ecx
	int v26; // r9d
	int v27; // ecx
	int v28; // r9d
	int v29; // ecx
	int v30; // r9d
	int v31; // ecx
	int v32; // r9d
	int v33; // ecx
	int v34; // r9d
	int v35; // ecx
	int v36; // r9d
	int v37; // ecx
	int v38; // r9d
	int v39; // ecx
	int v40; // r9d
	unsigned __int64 v41; // rdx
	int v42; // eax
	int v43; // ecx
	int v44; // r9d
	int v45; // ecx
	int v46; // r9d
	int v47; // ecx
	int v48; // r9d
	int v49; // ecx
	int v50; // r9d
	int v51; // ecx
	int v52; // r9d
	int v53; // ecx
	int v54; // r9d
	int v55; // ecx
	int v56; // r9d
	int v57; // ecx
	int v58; // r9d
	int v59; // ecx
	int v60; // r9d
	int v61; // ecx
	int v62; // r9d
	int v63; // ecx
	int v64; // r9d
	int v65; // ecx
	int v66; // r9d
	int v67; // ecx
	int v68; // r9d
	int v69; // ecx
	int v70; // r9d
	int v71; // ecx
	int v72; // r9d
	int v73; // eax

	v3 = a1;
	v4 = a2;
	a1 = (unsigned __int16)a1;
	v5 = HIWORD(v3);
	if (a3 == 1)
	{
		a1 = *a2 + (unsigned __int16)a1;
		if (a1 >= 0xFFF1)
			a1 -= 65521;
		v5 += a1;
		if (v5 >= 0xFFF1)
			return a1 | ((v5 - 65521) << 16);
		return a1 | (v5 << 16);
	}
	if (!a2)
		return 1i64;
	if (a3 >= 0x10)
	{
		if (a3 >= 0x15B0)
		{
			v8 = a3 / 0x15B0;
			do
			{
				a3 -= 5552;
				v9 = 347;
				do
				{
					v10 = *v4;
					v4 += 16;
					v11 = v10 + a1;
					v12 = v11 + v5;
					v13 = *(v4 - 15) + v11;
					v14 = v13 + v12;
					v15 = *(v4 - 14) + v13;
					v16 = v15 + v14;
					v17 = *(v4 - 13) + v15;
					v18 = v17 + v16;
					v19 = *(v4 - 12) + v17;
					v20 = v19 + v18;
					v21 = *(v4 - 11) + v19;
					v22 = v21 + v20;
					v23 = *(v4 - 10) + v21;
					v24 = v23 + v22;
					v25 = *(v4 - 9) + v23;
					v26 = v25 + v24;
					v27 = *(v4 - 8) + v25;
					v28 = v27 + v26;
					v29 = *(v4 - 7) + v27;
					v30 = v29 + v28;
					v31 = *(v4 - 6) + v29;
					v32 = v31 + v30;
					v33 = *(v4 - 5) + v31;
					v34 = v33 + v32;
					v35 = *(v4 - 4) + v33;
					v36 = v35 + v34;
					v37 = *(v4 - 3) + v35;
					v38 = v37 + v36;
					v39 = *(v4 - 2) + v37;
					v40 = v39 + v38;
					a1 = *(v4 - 1) + v39;
					v5 = a1 + v40;
					--v9;
				} while (v9);
				a1 %= 0xFFF1u;
				v5 %= 0xFFF1u;
				--v8;
			} while (v8);
		}
		if (a3)
		{
			if (a3 >= 0x10)
			{
				v41 = (unsigned __int64)a3 >> 4;
				do
				{
					v42 = *v4;
					a3 -= 16;
					v4 += 16;
					v43 = v42 + a1;
					v44 = v43 + v5;
					v45 = *(v4 - 15) + v43;
					v46 = v45 + v44;
					v47 = *(v4 - 14) + v45;
					v48 = v47 + v46;
					v49 = *(v4 - 13) + v47;
					v50 = v49 + v48;
					v51 = *(v4 - 12) + v49;
					v52 = v51 + v50;
					v53 = *(v4 - 11) + v51;
					v54 = v53 + v52;
					v55 = *(v4 - 10) + v53;
					v56 = v55 + v54;
					v57 = *(v4 - 9) + v55;
					v58 = v57 + v56;
					v59 = *(v4 - 8) + v57;
					v60 = v59 + v58;
					v61 = *(v4 - 7) + v59;
					v62 = v61 + v60;
					v63 = *(v4 - 6) + v61;
					v64 = v63 + v62;
					v65 = *(v4 - 5) + v63;
					v66 = v65 + v64;
					v67 = *(v4 - 4) + v65;
					v68 = v67 + v66;
					v69 = *(v4 - 3) + v67;
					v70 = v69 + v68;
					v71 = *(v4 - 2) + v69;
					v72 = v71 + v70;
					a1 = *(v4 - 1) + v71;
					v5 = a1 + v72;
					--v41;
				} while (v41);
			}
			for (; a3; --a3)
			{
				v73 = *v4++;
				a1 += v73;
				v5 += a1;
			}
			a1 %= 0xFFF1u;
			v5 %= 0xFFF1u;
		}
		return a1 | (v5 << 16);
	}
	for (; a3; --a3)
	{
		v7 = *v4++;
		a1 += v7;
		v5 += a1;
	}
	if (a1 >= 0xFFF1)
		a1 -= 65521;
	return a1 | ((v5 + 15 * (v5 / 0xFFF1)) << 16);
}

