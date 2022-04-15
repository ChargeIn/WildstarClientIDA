#include "../winhttp.h"

//----- (00000001407E5BB8) ----------------------------------------------------
__int64 __fastcall sub_1407E5BB8(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	LPVOID v6; // rax
	int v7; // ebx
	int v8; // ebx
	int v9; // ebx
	int v10; // ebx
	int v11; // ebx
	int v12; // ebx
	int v13; // ebx
	int v14; // ebx
	int v15; // ebx
	int v16; // ebx
	int v17; // ebx
	int v18; // ebx
	int v19; // ebx
	int v20; // ebx
	int v21; // ebx
	int v22; // ebx
	int v23; // ebx
	int v24; // ebx
	int v25; // ebx
	int v26; // ebx
	int v27; // ebx
	int v28; // ebx
	int v29; // ebx
	int v30; // ebx
	int v31; // ebx
	int v32; // ebx
	int v33; // ebx
	int v34; // ebx
	int v35; // ebx
	int v36; // ebx
	int v37; // ebx
	int v38; // ebx
	int v39; // ebx
	int v40; // ebx
	int v41; // ebx
	int v42; // ebx
	int v43; // ebx
	int v44; // ebx
	int v45; // ebx
	int v46; // ebx
	int v47; // ebx
	int v48; // ebx
	int v49; // ebx
	int v50; // ebx
	int v51; // ebx
	int v52; // ebx
	int v53; // ebx
	int v54; // ebx
	int v55; // ebx
	int v56; // ebx
	int v57; // ebx
	int v58; // ebx
	int v59; // ebx
	int v60; // ebx
	int v61; // ebx
	int v62; // ebx
	int v63; // ebx
	int v64; // ebx
	int v65; // ebx
	int v66; // ebx
	int v67; // ebx
	int v68; // ebx
	int v69; // ebx
	int v70; // ebx
	int v71; // ebx
	int v72; // ebx
	int v73; // ebx
	int v74; // ebx
	int v75; // ebx
	int v76; // ebx
	int v77; // ebx
	int v78; // ebx
	int v79; // ebx
	int v80; // ebx
	int v81; // ebx
	int v82; // ebx
	int v83; // ebx
	int v84; // ebx
	int v85; // ebx
	int v86; // ebx
	int v87; // ebx
	int v88; // ebx
	int v89; // ebx
	int v90; // ebx
	int v91; // ebx
	int v92; // ebx
	__int128 v93; // [rsp+30h] [rbp-10h] BYREF

	v2 = *(_QWORD*)(a2 + 336);
	if (!a1)
		return 0xFFFFFFFFi64;
	v6 = sub_1407DC450(*(char**)(a2 + 336));
	*((_QWORD*)&v93 + 1) = 0i64;
	*(_QWORD*)(a1 + 696) = v6;
	*(_QWORD*)&v93 = a2;
	v7 = sub_1407E1FD8(&v93, 1, v2, 0x31u, (LPVOID*)(a1 + 8));
	v8 = sub_1407E1FD8(&v93, 1, v2, 0x32u, (LPVOID*)(a1 + 16)) | v7;
	v9 = sub_1407E1FD8(&v93, 1, v2, 0x33u, (LPVOID*)(a1 + 24)) | v8;
	v10 = sub_1407E1FD8(&v93, 1, v2, 0x34u, (LPVOID*)(a1 + 32)) | v9;
	v11 = sub_1407E1FD8(&v93, 1, v2, 0x35u, (LPVOID*)(a1 + 40)) | v10;
	v12 = sub_1407E1FD8(&v93, 1, v2, 0x36u, (LPVOID*)(a1 + 48)) | v11;
	v13 = sub_1407E1FD8(&v93, 1, v2, 0x37u, (LPVOID*)a1) | v12;
	v14 = sub_1407E1FD8(&v93, 1, v2, 0x2Au, (LPVOID*)(a1 + 64)) | v13;
	v15 = sub_1407E1FD8(&v93, 1, v2, 0x2Bu, (LPVOID*)(a1 + 72)) | v14;
	v16 = sub_1407E1FD8(&v93, 1, v2, 0x2Cu, (LPVOID*)(a1 + 80)) | v15;
	v17 = sub_1407E1FD8(&v93, 1, v2, 0x2Du, (LPVOID*)(a1 + 88)) | v16;
	v18 = sub_1407E1FD8(&v93, 1, v2, 0x2Eu, (LPVOID*)(a1 + 96)) | v17;
	v19 = sub_1407E1FD8(&v93, 1, v2, 0x2Fu, (LPVOID*)(a1 + 104)) | v18;
	v20 = sub_1407E1FD8(&v93, 1, v2, 0x30u, (LPVOID*)(a1 + 56)) | v19;
	v21 = sub_1407E1FD8(&v93, 1, v2, 0x44u, (LPVOID*)(a1 + 112)) | v20;
	v22 = sub_1407E1FD8(&v93, 1, v2, 0x45u, (LPVOID*)(a1 + 120)) | v21;
	v23 = sub_1407E1FD8(&v93, 1, v2, 0x46u, (LPVOID*)(a1 + 128)) | v22;
	v24 = sub_1407E1FD8(&v93, 1, v2, 0x47u, (LPVOID*)(a1 + 136)) | v23;
	v25 = sub_1407E1FD8(&v93, 1, v2, 0x48u, (LPVOID*)(a1 + 144)) | v24;
	v26 = sub_1407E1FD8(&v93, 1, v2, 0x49u, (LPVOID*)(a1 + 152)) | v25;
	v27 = sub_1407E1FD8(&v93, 1, v2, 0x4Au, (LPVOID*)(a1 + 160)) | v26;
	v28 = sub_1407E1FD8(&v93, 1, v2, 0x4Bu, (LPVOID*)(a1 + 168)) | v27;
	v29 = sub_1407E1FD8(&v93, 1, v2, 0x4Cu, (LPVOID*)(a1 + 176)) | v28;
	v30 = sub_1407E1FD8(&v93, 1, v2, 0x4Du, (LPVOID*)(a1 + 184)) | v29;
	v31 = sub_1407E1FD8(&v93, 1, v2, 0x4Eu, (LPVOID*)(a1 + 192)) | v30;
	v32 = sub_1407E1FD8(&v93, 1, v2, 0x4Fu, (LPVOID*)(a1 + 200)) | v31;
	v33 = sub_1407E1FD8(&v93, 1, v2, 0x38u, (LPVOID*)(a1 + 208)) | v32;
	v34 = sub_1407E1FD8(&v93, 1, v2, 0x39u, (LPVOID*)(a1 + 216)) | v33;
	v35 = sub_1407E1FD8(&v93, 1, v2, 0x3Au, (LPVOID*)(a1 + 224)) | v34;
	v36 = sub_1407E1FD8(&v93, 1, v2, 0x3Bu, (LPVOID*)(a1 + 232)) | v35;
	v37 = sub_1407E1FD8(&v93, 1, v2, 0x3Cu, (LPVOID*)(a1 + 240)) | v36;
	v38 = sub_1407E1FD8(&v93, 1, v2, 0x3Du, (LPVOID*)(a1 + 248)) | v37;
	v39 = sub_1407E1FD8(&v93, 1, v2, 0x3Eu, (LPVOID*)(a1 + 256)) | v38;
	v40 = sub_1407E1FD8(&v93, 1, v2, 0x3Fu, (LPVOID*)(a1 + 264)) | v39;
	v41 = sub_1407E1FD8(&v93, 1, v2, 0x40u, (LPVOID*)(a1 + 272)) | v40;
	v42 = sub_1407E1FD8(&v93, 1, v2, 0x41u, (LPVOID*)(a1 + 280)) | v41;
	v43 = sub_1407E1FD8(&v93, 1, v2, 0x42u, (LPVOID*)(a1 + 288)) | v42;
	v44 = sub_1407E1FD8(&v93, 1, v2, 0x43u, (LPVOID*)(a1 + 296)) | v43;
	v45 = sub_1407E1FD8(&v93, 1, v2, 0x28u, (LPVOID*)(a1 + 304)) | v44;
	v46 = sub_1407E1FD8(&v93, 1, v2, 0x29u, (LPVOID*)(a1 + 312)) | v45;
	v47 = sub_1407E1FD8(&v93, 1, v2, 0x1Fu, (LPVOID*)(a1 + 320)) | v46;
	v48 = sub_1407E1FD8(&v93, 1, v2, 0x20u, (LPVOID*)(a1 + 328)) | v47;
	v49 = sub_1407E1FD8(&v93, 1, v2, 0x1003u, (LPVOID*)(a1 + 336)) | v48;
	v50 = sub_1407E1FD8(&v93, 0, v2, 0x1009u, (LPVOID*)(a1 + 344)) | v49;
	v51 = sub_1407E1FD8(&v93, 2, v2, 0x31u, (LPVOID*)(a1 + 360)) | v50;
	v52 = sub_1407E1FD8(&v93, 2, v2, 0x32u, (LPVOID*)(a1 + 368)) | v51;
	v53 = sub_1407E1FD8(&v93, 2, v2, 0x33u, (LPVOID*)(a1 + 376)) | v52;
	v54 = sub_1407E1FD8(&v93, 2, v2, 0x34u, (LPVOID*)(a1 + 384)) | v53;
	v55 = sub_1407E1FD8(&v93, 2, v2, 0x35u, (LPVOID*)(a1 + 392)) | v54;
	v56 = sub_1407E1FD8(&v93, 2, v2, 0x36u, (LPVOID*)(a1 + 400)) | v55;
	v57 = sub_1407E1FD8(&v93, 2, v2, 0x37u, (LPVOID*)(a1 + 352)) | v56;
	v58 = sub_1407E1FD8(&v93, 2, v2, 0x2Au, (LPVOID*)(a1 + 416)) | v57;
	v59 = sub_1407E1FD8(&v93, 2, v2, 0x2Bu, (LPVOID*)(a1 + 424)) | v58;
	v60 = sub_1407E1FD8(&v93, 2, v2, 0x2Cu, (LPVOID*)(a1 + 432)) | v59;
	v61 = sub_1407E1FD8(&v93, 2, v2, 0x2Du, (LPVOID*)(a1 + 440)) | v60;
	v62 = sub_1407E1FD8(&v93, 2, v2, 0x2Eu, (LPVOID*)(a1 + 448)) | v61;
	v63 = sub_1407E1FD8(&v93, 2, v2, 0x2Fu, (LPVOID*)(a1 + 456)) | v62;
	v64 = sub_1407E1FD8(&v93, 2, v2, 0x30u, (LPVOID*)(a1 + 408)) | v63;
	v65 = sub_1407E1FD8(&v93, 2, v2, 0x44u, (LPVOID*)(a1 + 464)) | v64;
	v66 = sub_1407E1FD8(&v93, 2, v2, 0x45u, (LPVOID*)(a1 + 472)) | v65;
	v67 = sub_1407E1FD8(&v93, 2, v2, 0x46u, (LPVOID*)(a1 + 480)) | v66;
	v68 = sub_1407E1FD8(&v93, 2, v2, 0x47u, (LPVOID*)(a1 + 488)) | v67;
	v69 = sub_1407E1FD8(&v93, 2, v2, 0x48u, (LPVOID*)(a1 + 496)) | v68;
	v70 = sub_1407E1FD8(&v93, 2, v2, 0x49u, (LPVOID*)(a1 + 504)) | v69;
	v71 = sub_1407E1FD8(&v93, 2, v2, 0x4Au, (LPVOID*)(a1 + 512)) | v70;
	v72 = sub_1407E1FD8(&v93, 2, v2, 0x4Bu, (LPVOID*)(a1 + 520)) | v71;
	v73 = sub_1407E1FD8(&v93, 2, v2, 0x4Cu, (LPVOID*)(a1 + 528)) | v72;
	v74 = sub_1407E1FD8(&v93, 2, v2, 0x4Du, (LPVOID*)(a1 + 536)) | v73;
	v75 = sub_1407E1FD8(&v93, 2, v2, 0x4Eu, (LPVOID*)(a1 + 544)) | v74;
	v76 = sub_1407E1FD8(&v93, 2, v2, 0x4Fu, (LPVOID*)(a1 + 552)) | v75;
	v77 = sub_1407E1FD8(&v93, 2, v2, 0x38u, (LPVOID*)(a1 + 560)) | v76;
	v78 = sub_1407E1FD8(&v93, 2, v2, 0x39u, (LPVOID*)(a1 + 568)) | v77;
	v79 = sub_1407E1FD8(&v93, 2, v2, 0x3Au, (LPVOID*)(a1 + 576)) | v78;
	v80 = sub_1407E1FD8(&v93, 2, v2, 0x3Bu, (LPVOID*)(a1 + 584)) | v79;
	v81 = sub_1407E1FD8(&v93, 2, v2, 0x3Cu, (LPVOID*)(a1 + 592)) | v80;
	v82 = sub_1407E1FD8(&v93, 2, v2, 0x3Du, (LPVOID*)(a1 + 600)) | v81;
	v83 = sub_1407E1FD8(&v93, 2, v2, 0x3Eu, (LPVOID*)(a1 + 608)) | v82;
	v84 = sub_1407E1FD8(&v93, 2, v2, 0x3Fu, (LPVOID*)(a1 + 616)) | v83;
	v85 = sub_1407E1FD8(&v93, 2, v2, 0x40u, (LPVOID*)(a1 + 624)) | v84;
	v86 = sub_1407E1FD8(&v93, 2, v2, 0x41u, (LPVOID*)(a1 + 632)) | v85;
	v87 = sub_1407E1FD8(&v93, 2, v2, 0x42u, (LPVOID*)(a1 + 640)) | v86;
	v88 = sub_1407E1FD8(&v93, 2, v2, 0x43u, (LPVOID*)(a1 + 648)) | v87;
	v89 = sub_1407E1FD8(&v93, 2, v2, 0x28u, (LPVOID*)(a1 + 656)) | v88;
	v90 = sub_1407E1FD8(&v93, 2, v2, 0x29u, (LPVOID*)(a1 + 664)) | v89;
	v91 = sub_1407E1FD8(&v93, 2, v2, 0x1Fu, (LPVOID*)(a1 + 672)) | v90;
	v92 = sub_1407E1FD8(&v93, 2, v2, 0x20u, (LPVOID*)(a1 + 680)) | v91;
	return v92 | (unsigned int)sub_1407E1FD8(&v93, 2, v2, 0x1003u, (LPVOID*)(a1 + 688));
}

