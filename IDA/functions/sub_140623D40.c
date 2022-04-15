//----- (0000000140623D40) ----------------------------------------------------
void __fastcall sub_140623D40(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	int v4; // eax
	__int64 v5; // rcx
	__int128* v6; // rax
	__int128 v7; // xmm1
	__int128 v8; // xmm0
	unsigned __int64 v9; // rax
	__int64 v10; // rax
	unsigned __int64 v11; // rax
	__int64 v12; // rax
	unsigned __int64 v13; // rax
	__int64 v14; // rax
	unsigned __int64 v15; // rax
	__int64 v16; // rax
	unsigned __int64 v17; // rax
	__int64 v18; // rax
	unsigned __int64 v19; // rax
	__int64 v20; // rax
	int v21; // xmm0_4
	float v22; // xmm1_4
	float v23; // xmm0_4
	float v24; // xmm1_4
	float v25; // xmm0_4
	int v26; // eax
	int v27; // edx
	int v28; // eax
	unsigned __int64 v29; // rax
	__int64 v30; // rax
	int v31; // xmm0_4
	int v32; // eax
	unsigned __int64 v33; // rax
	__int64 v34; // rax
	float v35; // xmm1_4
	int v36; // xmm0_4
	__int64 v37; // rbx
	int* v38; // rax
	__int64 v39; // rsi
	__int64 v40; // rbx
	int* v41; // rax
	_QWORD* v42; // rax
	__int64* v43; // rcx
	__int64 v44; // rax
	int v45; // edx
	int v46; // edx
	int v47; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v48; // [rsp+28h] [rbp-D8h]
	__int64(__fastcall * v49)(); // [rsp+30h] [rbp-D0h]
	__int64 v50; // [rsp+38h] [rbp-C8h]
	int v51[4]; // [rsp+40h] [rbp-C0h] BYREF
	__int128 v52; // [rsp+50h] [rbp-B0h]
	__int128 v53; // [rsp+60h] [rbp-A0h]
	__int128 v54; // [rsp+70h] [rbp-90h]
	__int128 v55; // [rsp+80h] [rbp-80h]
	__int128 v56; // [rsp+90h] [rbp-70h]
	__int64 v57; // [rsp+B0h] [rbp-50h]
	__int64 v58; // [rsp+B8h] [rbp-48h]
	__int64 v59; // [rsp+C0h] [rbp-40h]
	__int64 v60; // [rsp+C8h] [rbp-38h]
	__int64 v61; // [rsp+D0h] [rbp-30h]
	__int64 v62; // [rsp+E0h] [rbp-20h]
	__int64 v63; // [rsp+E8h] [rbp-18h]
	int v64; // [rsp+F4h] [rbp-Ch]
	int v65; // [rsp+F8h] [rbp-8h]
	int v66; // [rsp+FCh] [rbp-4h]
	float v67; // [rsp+104h] [rbp+4h]
	float v68; // [rsp+108h] [rbp+8h]
	int v69; // [rsp+10Ch] [rbp+Ch]
	int v70; // [rsp+114h] [rbp+14h]
	int v71; // [rsp+118h] [rbp+18h]
	int v72; // [rsp+11Ch] [rbp+1Ch]
	int v73; // [rsp+120h] [rbp+20h]
	int v74; // [rsp+12Ch] [rbp+2Ch]
	int v75; // [rsp+130h] [rbp+30h]
	unsigned int v76; // [rsp+138h] [rbp+38h]
	int v77; // [rsp+13Ch] [rbp+3Ch]
	int v78; // [rsp+140h] [rbp+40h]
	int v79; // [rsp+144h] [rbp+44h]
	int v80; // [rsp+14Ch] [rbp+4Ch]
	int v81; // [rsp+150h] [rbp+50h]
	int v82; // [rsp+154h] [rbp+54h]
	int v83; // [rsp+158h] [rbp+58h]
	float v84; // [rsp+164h] [rbp+64h]
	int v85; // [rsp+168h] [rbp+68h]

	if (!*(_DWORD*)(a1 + 676) && !*(_DWORD*)(a1 + 684))
	{
		v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904));
		if (!v2
			|| *(_DWORD*)(v2 + 592)
			|| *(_QWORD*)(qword_140C65898 + 25744) == v2
			&& (*(_DWORD*)(qword_140C65898 + 26448) & *(_DWORD*)(qword_140C65898 + 26444)) == 0)
		{
			v46 = *(_DWORD*)(a1 + 992);
			v47 = 0;
			v48 = a1;
			v49 = sub_140623D40;
			v50 = 0i64;
			sub_140195960(a1 + 1216, v46, (__int64)&v47, 4);
		}
		else
		{
			v3 = sub_140237680(*(_DWORD*)(a1 + 996));
			if (v3)
			{
				sub_1407E4830(v51, 0i64, 0x160ui64);
				v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 112) + 48i64))(*(_QWORD*)(a1 + 112));
				v5 = *(_QWORD*)(a1 + 112);
				v64 = v4;
				v6 = (__int128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 56i64))(v5);
				v52 = *v6;
				v53 = v6[1];
				v54 = v6[2];
				v7 = v6[3];
				v8 = *(_OWORD*)(a1 + 800);
				v65 = *(_DWORD*)(a1 + 904);
				v66 = *(_DWORD*)(a1 + 908);
				v9 = *(_QWORD*)(v3 + 24);
				v55 = v7;
				v56 = v8;
				if (v9)
				{
					if (v9 <= qword_140C3FE70)
						v10 = qword_140C3FE68 + v9;
					else
						v10 = 0i64;
				}
				else
				{
					v10 = 0i64;
				}
				v57 = v10;
				v11 = *(_QWORD*)(v3 + 40);
				if (v11)
				{
					if (v11 <= qword_140C3FE70)
						v12 = qword_140C3FE68 + v11;
					else
						v12 = 0i64;
				}
				else
				{
					v12 = 0i64;
				}
				v62 = v12;
				v70 = *(_DWORD*)(v3 + 48);
				v71 = *(_DWORD*)(v3 + 52);
				v13 = *(_QWORD*)(v3 + 32);
				if (v13)
				{
					if (v13 <= qword_140C3FE70)
						v14 = qword_140C3FE68 + v13;
					else
						v14 = 0i64;
				}
				else
				{
					v14 = 0i64;
				}
				v58 = v14;
				v15 = *(_QWORD*)(v3 + 128);
				if (v15)
				{
					if (v15 <= qword_140C3FE70)
						v16 = qword_140C3FE68 + v15;
					else
						v16 = 0i64;
				}
				else
				{
					v16 = 0i64;
				}
				v59 = v16;
				v17 = *(_QWORD*)(v3 + 136);
				if (v17)
				{
					if (v17 <= qword_140C3FE70)
						v18 = qword_140C3FE68 + v17;
					else
						v18 = 0i64;
				}
				else
				{
					v18 = 0i64;
				}
				v60 = v18;
				v19 = *(_QWORD*)(v3 + 144);
				if (v19)
				{
					if (v19 <= qword_140C3FE70)
						v20 = qword_140C3FE68 + v19;
					else
						v20 = 0i64;
				}
				else
				{
					v20 = 0i64;
				}
				v21 = *(_DWORD*)(v3 + 152);
				v22 = *(float*)(v3 + 160);
				v61 = v20;
				v69 = v21;
				v23 = sub_1401AE760(*(float*)(v3 + 156), v22);
				v24 = *(float*)(v3 + 168);
				v67 = v23;
				v25 = sub_1401AE760(*(float*)(v3 + 164), v24);
				v26 = *(_DWORD*)(v3 + 64);
				v27 = *(_DWORD*)(v3 + 4);
				v68 = v25;
				v72 = v26;
				v73 = *(_DWORD*)(v3 + 68);
				v28 = *(_DWORD*)(v3 + 72);
				v77 = 0;
				v74 = v28;
				v75 = *(_DWORD*)(v3 + 84);
				v76 = (~(_BYTE)v27 & 2 | 4u) >> 1;
				if ((v27 & 1) != 0)
				{
					v29 = *(_QWORD*)(v3 + 24);
					v76 = 2;
					v57 = 0i64;
					if (v29)
					{
						if (v29 <= qword_140C3FE70)
							v30 = qword_140C3FE68 + v29;
						else
							v30 = 0i64;
					}
					else
					{
						v30 = 0i64;
					}
					v62 = v30;
				}
				v31 = *(_DWORD*)(v3 + 96);
				v78 = *(_DWORD*)(v3 + 92);
				v32 = *(_DWORD*)(v3 + 100);
				v79 = v31;
				v80 = v32;
				v81 = *(_DWORD*)(v3 + 104);
				v82 = *(_DWORD*)(v3 + 108);
				v33 = *(_QWORD*)(v3 + 112);
				if (v33)
				{
					if (v33 <= qword_140C3FE70)
						v34 = qword_140C3FE68 + v33;
					else
						v34 = 0i64;
				}
				else
				{
					v34 = 0i64;
				}
				v35 = *(float*)(v3 + 184);
				v63 = v34;
				v83 = *(_DWORD*)(v3 + 120);
				if (v35 == 0.0)
					v84 = 0.0;
				else
					v84 = 1.0 / (float)(v35 * v35);
				v36 = *(_DWORD*)(v3 + 188);
				v37 = qword_140C65BB0;
				v85 = v36;
				v38 = sub_14018B280(1648i64, 0);
				if (v38)
					v39 = sub_140619900((__int64)v38);
				else
					v39 = 0i64;
				if ((int)sub_14061A840(v39, v51) >= 0)
				{
					v40 = *(_QWORD*)(v37 + 8);
					v41 = sub_14018B280(24i64, 0);
					if (v41 != (int*)-16i64)
						*((_QWORD*)v41 + 2) = v39;
					*(_QWORD*)v41 = v40;
					*((_QWORD*)v41 + 1) = *(_QWORD*)(v40 + 8);
					**(_QWORD**)(v40 + 8) = v41;
					*(_QWORD*)(v40 + 8) = v41;
					if (!*(_QWORD*)v39)
					{
						*(_QWORD*)v39 = a1 + 8;
						*(_QWORD*)(v39 + 8) = *(_QWORD*)(a1 + 8);
						*(_QWORD*)(a1 + 8) = v39;
						v42 = *(_QWORD**)(v39 + 8);
						if (v42)
							*v42 = v39 + 8;
					}
					v43 = (__int64*)(a1 + 1472);
					if (!*(_QWORD*)(v39 + 32))
					{
						*(_QWORD*)(v39 + 32) = v43;
						*(_QWORD*)(v39 + 40) = *v43;
						*v43 = v39;
						v44 = *(_QWORD*)(v39 + 40);
						if (v44)
							*(_QWORD*)(v44 + 32) = v39 + 40;
					}
					*(_DWORD*)(v39 + 1432) = 0;
					*(_QWORD*)(v39 + 1440) = a1;
					*(_QWORD*)(v39 + 1448) = sub_140623670;
					*(_QWORD*)(v39 + 1456) = 0i64;
				}
				else if (v39)
				{
					sub_140619BB0(v39);
					sub_14018B900(v39, 0);
				}
				v45 = *(_DWORD*)(a1 + 992);
				v49 = sub_140623D40;
				v47 = 0;
				v48 = a1;
				v50 = 0i64;
				sub_140195960(a1 + 1216, v45, (__int64)&v47, 4);
			}
		}
	}
}
// 14061A840: using guessed type __int64 __fastcall sub_14061A840(_QWORD, _QWORD);
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65BB0: using guessed type __int64 qword_140C65BB0;
// 140623D40: using guessed type int var_160[4];

