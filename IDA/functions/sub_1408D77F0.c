#include "../winhttp.h"

//----- (00000001408D77F0) ----------------------------------------------------
void** __fastcall sub_1408D77F0(float* a1, __int64 a2, __int64 a3, int a4)
{
	void** result; // rax
	float v5; // xmm3_4
	float v6; // xmm4_4
	float v7; // xmm5_4
	float v8; // xmm6_4
	float v9; // xmm7_4
	float v10; // xmm8_4
	float v11; // xmm9_4
	float v12; // xmm10_4
	float v13; // xmm11_4
	float v14; // xmm12_4
	float v15; // xmm13_4
	float v16; // xmm14_4
	float v17; // xmm15_4
	float v18; // xmm2_4
	float v19; // xmm1_4
	float v20; // xmm0_4
	__int64 v21; // rdx
	float v22; // xmm3_4
	float v23; // xmm1_4
	float v24; // xmm0_4
	float v25; // xmm1_4
	float v26; // xmm0_4
	float v27; // xmm2_4
	float v28; // xmm0_4
	float v29; // xmm2_4
	float v30; // xmm0_4
	float v31; // xmm1_4
	float v32; // xmm0_4
	float v33; // xmm1_4
	float v34; // xmm0_4
	float v35; // xmm2_4
	float v36; // xmm0_4
	float v37; // xmm2_4
	float v38; // xmm0_4
	float v39; // xmm1_4
	float v40; // xmm0_4
	float v41; // xmm2_4
	float v42; // xmm0_4
	float v43; // xmm2_4
	float v44; // xmm0_4
	float v45; // xmm1_4
	float v46; // [rsp+0h] [rbp-178h]
	float v47; // [rsp+4h] [rbp-174h]
	float v48; // [rsp+8h] [rbp-170h]
	float v49; // [rsp+Ch] [rbp-16Ch]
	float v50; // [rsp+10h] [rbp-168h]
	float v51; // [rsp+14h] [rbp-164h]
	float v52; // [rsp+18h] [rbp-160h]
	float v53; // [rsp+1Ch] [rbp-15Ch]
	float v54; // [rsp+20h] [rbp-158h]
	float v55; // [rsp+24h] [rbp-154h]
	float v56; // [rsp+28h] [rbp-150h]
	float v57; // [rsp+2Ch] [rbp-14Ch]
	float v58; // [rsp+30h] [rbp-148h]
	float v59; // [rsp+34h] [rbp-144h]
	float v60; // [rsp+38h] [rbp-140h]
	float v61; // [rsp+3Ch] [rbp-13Ch]
	float v62; // [rsp+40h] [rbp-138h]
	float v63; // [rsp+44h] [rbp-134h]
	float v64; // [rsp+48h] [rbp-130h]
	float v65; // [rsp+4Ch] [rbp-12Ch]
	float v66; // [rsp+50h] [rbp-128h]
	float v67; // [rsp+54h] [rbp-124h]
	float v68; // [rsp+58h] [rbp-120h]
	float v69; // [rsp+5Ch] [rbp-11Ch]
	float v70; // [rsp+60h] [rbp-118h]
	float v71; // [rsp+64h] [rbp-114h]
	float v72; // [rsp+68h] [rbp-110h]
	float v73; // [rsp+6Ch] [rbp-10Ch]
	float v74; // [rsp+70h] [rbp-108h]
	float v75; // [rsp+74h] [rbp-104h]
	float v76; // [rsp+78h] [rbp-100h]
	float v77; // [rsp+7Ch] [rbp-FCh]
	float v78; // [rsp+80h] [rbp-F8h]
	float v79; // [rsp+84h] [rbp-F4h]
	float v80; // [rsp+88h] [rbp-F0h]
	float v81; // [rsp+8Ch] [rbp-ECh]
	float v82; // [rsp+90h] [rbp-E8h]
	float v83; // [rsp+94h] [rbp-E4h]
	float v84; // [rsp+98h] [rbp-E0h]
	float v85; // [rsp+9Ch] [rbp-DCh]
	float v86; // [rsp+A0h] [rbp-D8h]
	float v87; // [rsp+A4h] [rbp-D4h]
	float v88; // [rsp+A8h] [rbp-D0h]
	float v89; // [rsp+ACh] [rbp-CCh]
	float v90; // [rsp+B0h] [rbp-C8h]
	float v91; // [rsp+B4h] [rbp-C4h]
	float v92; // [rsp+B8h] [rbp-C0h]
	float v93; // [rsp+BCh] [rbp-BCh]
	float v94; // [rsp+C0h] [rbp-B8h]
	float v95; // [rsp+C4h] [rbp-B4h]
	float v96; // [rsp+C8h] [rbp-B0h]
	void* retaddr; // [rsp+178h] [rbp+0h] BYREF
	float v98; // [rsp+180h] [rbp+8h]
	float v99; // [rsp+198h] [rbp+20h]

	result = &retaddr;
	v5 = a1[48];
	v79 = a1[2];
	v6 = a1[45];
	v93 = a1[3];
	v7 = a1[47];
	v8 = a1[51];
	v9 = a1[53];
	v10 = a1[57];
	v11 = a1[59];
	v12 = a1[63];
	v13 = a1[65];
	v63 = a1[4];
	v99 = a1[46];
	v95 = a1[5];
	v48 = v5;
	v65 = a1[6];
	v67 = a1[7];
	v81 = a1[8];
	v89 = a1[9];
	v69 = a1[10];
	v83 = a1[11];
	v54 = a1[52];
	v50 = a1[54];
	v60 = a1[12];
	v71 = a1[13];
	v73 = a1[14];
	v85 = a1[15];
	v75 = a1[16];
	v58 = a1[58];
	v52 = a1[60];
	v77 = a1[17];
	v91 = a1[18];
	v87 = a1[19];
	v61 = a1[20];
	v62 = a1[21];
	v46 = a1[64];
	v47 = a1[66];
	v66 = a1[22];
	v64 = a1[23];
	v68 = a1[24];
	v14 = a1[69];
	v15 = a1[71];
	v16 = a1[75];
	v17 = a1[77];
	v70 = a1[25];
	v59 = a1[84];
	v72 = a1[26];
	v49 = a1[70];
	v94 = a1[38];
	v51 = a1[72];
	v76 = a1[27];
	v57 = a1[82];
	v18 = a1[83];
	v74 = a1[28];
	v78 = a1[29];
	v96 = a1[39];
	v19 = v99;
	v80 = a1[30];
	v82 = a1[31];
	v56 = v18;
	v53 = a1[76];
	v55 = a1[78];
	v86 = a1[32];
	v84 = a1[33];
	v88 = a1[34];
	v90 = a1[35];
	v92 = a1[36];
	v20 = a1[81];
	v98 = v20;
	if (a4)
	{
		v21 = a2 - a3;
		do
		{
			v22 = *(float*)(v21 + a3);
			v23 = (float)(v6 * v93) + (float)(v79 * v22);
			v24 = v99;
			v99 = v6;
			v6 = v22;
			v25 = (float)(v23 + (float)(v24 * v63)) - (float)(v7 * v95);
			v26 = v48;
			v48 = v7;
			v7 = v25 - (float)(v26 * v65);
			v27 = (float)(v8 * v81) + (float)(v67 * v7);
			v28 = v54;
			v54 = v8;
			v8 = v7;
			v29 = (float)(v27 + (float)(v28 * v89)) - (float)(v9 * v69);
			v30 = v50;
			v50 = v9;
			v9 = v29 - (float)(v30 * v83);
			v31 = (float)(v10 * v71) + (float)(v60 * v9);
			v32 = v58;
			v58 = v10;
			v10 = v9;
			v33 = (float)(v31 + (float)(v32 * v73)) - (float)(v11 * v85);
			v34 = v52;
			v52 = v11;
			v11 = v33 - (float)(v34 * v75);
			v35 = (float)(v12 * v91) + (float)(v77 * v11);
			v36 = v46;
			v46 = v12;
			v12 = v11;
			v37 = (float)(v35 + (float)(v36 * v87)) - (float)(v13 * v61);
			v38 = v47;
			v47 = v13;
			v13 = v37 - (float)(v38 * v62);
			v39 = (float)((float)(v14 * v64) + (float)(v66 * v13)) + (float)(v49 * v68);
			v49 = v14;
			v14 = v13;
			a3 += 4i64;
			v40 = v51;
			v51 = v15;
			v15 = (float)(v39 - (float)(v15 * v70)) - (float)(v40 * v72);
			v41 = (float)(v16 * v74) + (float)(v76 * v15);
			v42 = v53;
			v53 = v16;
			v16 = v15;
			v43 = (float)(v41 + (float)(v42 * v78)) - (float)(v17 * v80);
			v44 = v55;
			v55 = v17;
			v17 = v43 - (float)(v44 * v82);
			v45 = (float)((float)((float)((float)(v98 * v84) + (float)(v86 * v17)) + (float)(v57 * v88)) - (float)(v56 * v90))
				- (float)(v59 * v92);
			v57 = v98;
			v20 = v17;
			v98 = v17;
			v59 = v56;
			v18 = v45;
			v56 = v45;
			*(float*)(a3 - 4) = (float)(v45 * v94) + (float)(v22 * v96);
			--a4;
		} while (a4);
		v19 = v99;
		v5 = v48;
	}
	a1[51] = v8;
	a1[81] = v20;
	a1[57] = v10;
	a1[63] = v12;
	a1[45] = v6;
	a1[46] = v19;
	a1[52] = v54;
	a1[69] = v14;
	a1[75] = v16;
	a1[53] = v9;
	a1[54] = v50;
	a1[82] = v57;
	a1[58] = v58;
	a1[59] = v11;
	a1[60] = v52;
	a1[47] = v7;
	a1[64] = v46;
	a1[65] = v13;
	a1[66] = v47;
	a1[83] = v18;
	a1[70] = v49;
	a1[71] = v15;
	a1[72] = v51;
	a1[48] = v5;
	a1[76] = v53;
	a1[77] = v17;
	a1[78] = v55;
	a1[84] = v59;
	return result;
}

