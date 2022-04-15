//----- (0000000140563DC0) ----------------------------------------------------
void __fastcall sub_140563DC0(__int64 a1, __int64 a2)
{
	__int64 v3; // rdi
	int v4; // r8d
	int v5; // ecx
	int v6; // eax
	int v7; // ecx
	float v8; // xmm1_4
	int v9; // eax
	int v10; // ecx
	int v11; // eax
	_DWORD* v12; // r8
	int v13; // ecx
	int v14; // eax
	int v15; // eax
	__int64(__fastcall * **v16)(); // rcx
	int v17; // eax
	int v18; // eax
	int v19; // eax
	int v20; // ecx
	float v21; // xmm1_4
	int v22; // eax
	_DWORD* v23; // r9
	int v24; // ecx
	int v25; // eax
	int v26; // eax
	int v27; // eax
	int v28; // eax
	int v29; // eax
	int v30; // eax
	__int64 v31; // r9
	int v32; // ecx
	int v33; // eax
	int v34; // eax
	__int64(__fastcall * *v35)(); // [rsp+20h] [rbp-79h] BYREF
	int v36; // [rsp+28h] [rbp-71h]
	int v37; // [rsp+2Ch] [rbp-6Dh]
	int v38; // [rsp+30h] [rbp-69h]
	int v39; // [rsp+34h] [rbp-65h]
	int v40; // [rsp+38h] [rbp-61h]
	__int64 v41; // [rsp+40h] [rbp-59h]
	__int64 v42; // [rsp+48h] [rbp-51h]
	int v43; // [rsp+50h] [rbp-49h]
	__int128 v44; // [rsp+54h] [rbp-45h]
	int v45; // [rsp+64h] [rbp-35h]
	__int64(__fastcall * *v46)(); // [rsp+70h] [rbp-29h] BYREF
	int v47; // [rsp+78h] [rbp-21h]
	int v48; // [rsp+7Ch] [rbp-1Dh]
	int v49; // [rsp+80h] [rbp-19h]
	int v50; // [rsp+84h] [rbp-15h]
	int v51; // [rsp+88h] [rbp-11h]
	int v52; // [rsp+90h] [rbp-9h]
	int v53; // [rsp+94h] [rbp-5h]
	int v54; // [rsp+98h] [rbp-1h]
	int v55; // [rsp+9Ch] [rbp+3h]
	__int64(__fastcall * *v56)(); // [rsp+A0h] [rbp+7h] BYREF
	int v57; // [rsp+A8h] [rbp+Fh]
	int v58; // [rsp+ACh] [rbp+13h]
	int v59; // [rsp+B0h] [rbp+17h]
	int v60; // [rsp+B4h] [rbp+1Bh]
	int v61; // [rsp+B8h] [rbp+1Fh]
	int v62; // [rsp+C0h] [rbp+27h]
	int v63; // [rsp+C4h] [rbp+2Bh]
	int v64; // [rsp+C8h] [rbp+2Fh]
	int v65; // [rsp+CCh] [rbp+33h]
	int v66; // [rsp+D0h] [rbp+37h]
	int v67; // [rsp+D4h] [rbp+3Bh]
	int v68; // [rsp+D8h] [rbp+3Fh]
	int v69; // [rsp+DCh] [rbp+43h]
	int v70; // [rsp+E0h] [rbp+47h]
	int v71; // [rsp+E4h] [rbp+4Bh]
	int v72; // [rsp+E8h] [rbp+4Fh]

	v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)a2);
	sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 4));
	v4 = *(_DWORD*)(a2 + 8);
	if (v4 == 10 || *(_DWORD*)(a2 + 8) == 118)
	{
		v29 = *(_DWORD*)(a2 + 4);
		v48 = 12;
		v47 = v29;
		v30 = *(_DWORD*)a2;
		v55 = v4;
		v49 = v30;
		v46 = off_140B6F880;
		v50 = *(_DWORD*)(a2 + 72);
		v51 = *(_DWORD*)(a2 + 48);
		v52 = *(_DWORD*)(a2 + 32);
		v53 = *(_DWORD*)(a2 + 36);
		v54 = *(_DWORD*)(a2 + 24);
		sub_14060B2B0((int*)&v46);
		if (*(_BYTE*)(a2 + 56))
		{
			v31 = *(_QWORD*)(a2 + 64);
			v32 = 0;
			if (*(_DWORD*)(v31 + 28) == 2)
			{
				v32 = 2;
			}
			else if (*(_DWORD*)(v31 + 28) == 3)
			{
				v32 = 1;
			}
			v33 = *(_DWORD*)(a2 + 4);
			v41 = 0i64;
			v42 = 0i64;
			v36 = v33;
			v34 = *(_DWORD*)a2;
			v43 = 152;
			v38 = v34;
			v40 = v32;
			v37 = 13;
			v16 = &v35;
			v35 = off_140B6F5B0;
			v39 = *(_DWORD*)(a2 + 72);
			v41 = *(_QWORD*)(v31 + 4);
			v43 = *(_DWORD*)(a2 + 8);
			HIDWORD(v42) = *(_DWORD*)(a2 + 88);
			LODWORD(v42) = *(_DWORD*)(v31 + 12);
			goto LABEL_36;
		}
	}
	else
	{
		v5 = *(_DWORD*)qword_140C63750;
		v6 = dword_140C4E040;
		if (*(_DWORD*)(a2 + 8) == 138)
		{
			if (v5 < dword_140C4E040)
				v6 = *(_DWORD*)qword_140C63750;
			if (!*((_BYTE*)&off_140C4E030 + v6 + 32))
			{
				v20 = *(_DWORD*)(a2 + 20);
				if (v20)
				{
					if (v3 && (*(_BYTE*)(v3 + 36) & 8) != 0)
					{
						v21 = (float)*(int*)(a2 + 16) / (float)v20;
						*(_DWORD*)(a2 + 32) = (int)(float)((float)*(int*)(a2 + 32) * v21);
						*(_DWORD*)(a2 + 28) = (int)(float)((float)*(int*)(a2 + 28) * v21);
						*(_DWORD*)(a2 + 24) = (int)(float)((float)*(int*)(a2 + 24) * v21);
					}
				}
			}
			v22 = *(_DWORD*)(a2 + 4);
			v58 = 4;
			v57 = v22;
			v59 = *(_DWORD*)a2;
			v56 = off_140B6F9A0;
			v60 = *(_DWORD*)(a2 + 72);
			v61 = *(_DWORD*)(a2 + 48);
			v62 = *(_DWORD*)(a2 + 32);
			v63 = *(_DWORD*)(a2 + 16);
			v67 = *(_DWORD*)(a2 + 40);
			v64 = *(_DWORD*)(a2 + 28);
			v65 = *(_DWORD*)(a2 + 24);
			v66 = *(_DWORD*)(a2 + 36);
			v68 = *(_DWORD*)(a2 + 96);
			v69 = *(_DWORD*)(a2 + 44);
			v70 = *(_DWORD*)(a2 + 88);
			v71 = *(_DWORD*)(a2 + 52);
			v72 = *(_DWORD*)(a2 + 8);
			sub_14060B2B0((int*)&v56);
			if (*(_BYTE*)(a2 + 56))
			{
				v23 = *(_DWORD**)(a2 + 64);
				v24 = 0;
				if (v23[7] == 2)
				{
					v24 = 2;
				}
				else if (v23[7] == 3)
				{
					v25 = *(_DWORD*)(a2 + 4);
					v48 = 17;
					v47 = v25;
					v26 = *(_DWORD*)a2;
					v51 = 1;
					v49 = v26;
					v52 = 1;
					v46 = off_140B6F670;
					v16 = &v46;
					v50 = *(_DWORD*)(a2 + 72);
					goto LABEL_36;
				}
				v27 = *(_DWORD*)(a2 + 4);
				v41 = 0i64;
				v42 = 0i64;
				v36 = v27;
				v28 = *(_DWORD*)a2;
				HIDWORD(v44) = 0;
				v38 = v28;
				v45 = 4;
				v40 = v24;
				v37 = 7;
				*(_QWORD*)((char*)&v44 + 4) = 0i64;
				v35 = off_140B6F790;
				v16 = &v35;
				v39 = *(_DWORD*)(a2 + 72);
				LODWORD(v41) = v23[1];
				HIDWORD(v41) = *v23;
				v43 = v23[3];
				LODWORD(v42) = v23[4];
				LODWORD(v44) = v23[5];
				HIDWORD(v44) = *(_DWORD*)(a2 + 88);
				HIDWORD(v42) = v23[6];
				v45 = *(_DWORD*)(a2 + 52);
				goto LABEL_36;
			}
		}
		else
		{
			if (v5 < dword_140C4E040)
				v6 = *(_DWORD*)qword_140C63750;
			if (!*((_BYTE*)&off_140C4E030 + v6 + 32))
			{
				v7 = *(_DWORD*)(a2 + 20);
				if (v7)
				{
					if (v3 && (*(_BYTE*)(v3 + 36) & 8) != 0)
					{
						v8 = (float)*(int*)(a2 + 16) / (float)v7;
						*(_DWORD*)(a2 + 32) = (int)(float)((float)*(int*)(a2 + 32) * v8);
						*(_DWORD*)(a2 + 28) = (int)(float)((float)*(int*)(a2 + 28) * v8);
						*(_DWORD*)(a2 + 24) = (int)(float)((float)*(int*)(a2 + 24) * v8);
					}
				}
			}
			v9 = *(_DWORD*)(a2 + 4);
			v10 = *(_DWORD*)(a2 + 36);
			v58 = 3;
			v57 = v9;
			v11 = *(_DWORD*)a2;
			v66 = v10;
			v59 = v11;
			v56 = off_140B6F970;
			v60 = *(_DWORD*)(a2 + 72);
			v61 = *(_DWORD*)(a2 + 48);
			v62 = *(_DWORD*)(a2 + 32) - v10;
			v63 = *(_DWORD*)(a2 + 16);
			v67 = *(_DWORD*)(a2 + 40);
			v64 = *(_DWORD*)(a2 + 28);
			v65 = *(_DWORD*)(a2 + 24);
			v68 = *(_DWORD*)(a2 + 96);
			v69 = *(_DWORD*)(a2 + 44);
			v70 = *(_DWORD*)(a2 + 88);
			v71 = *(_DWORD*)(a2 + 52);
			v72 = *(_DWORD*)(a2 + 8);
			sub_14060B2B0((int*)&v56);
			if (*(_BYTE*)(a2 + 56))
			{
				v12 = *(_DWORD**)(a2 + 64);
				if (v12[7] == 2)
				{
					v13 = 2;
				}
				else
				{
					v13 = 1;
					if (v12[7] != 3)
					{
						v14 = *(_DWORD*)(a2 + 4);
						v52 = 1;
						v47 = v14;
						v15 = *(_DWORD*)a2;
						v48 = 17;
						v49 = v15;
						v51 = 0;
						v46 = off_140B6F670;
						v16 = &v46;
						v50 = *(_DWORD*)(a2 + 72);
					LABEL_36:
						sub_14060B2B0((int*)v16);
						goto LABEL_37;
					}
				}
				v17 = *(_DWORD*)(a2 + 4);
				v45 = 4;
				v40 = v13;
				v36 = v17;
				v18 = *(_DWORD*)a2;
				v37 = 6;
				v38 = v18;
				v35 = off_140B6F760;
				v19 = *(_DWORD*)(a2 + 72);
				v41 = 0i64;
				v42 = 0i64;
				v39 = v19;
				v44 = 0ui64;
				v16 = &v35;
				LODWORD(v41) = v12[1];
				HIDWORD(v41) = *v12;
				v43 = v12[3];
				LODWORD(v42) = v12[4];
				LODWORD(v44) = v12[5];
				HIDWORD(v44) = *(_DWORD*)(a2 + 88);
				HIDWORD(v42) = v12[6];
				v45 = *(_DWORD*)(a2 + 52);
				goto LABEL_36;
			}
		}
	}
LABEL_37:
	sub_140569980(a2);
	sub_14018B900(a2, 0);
}
// 140B6F5B0: using guessed type __int64 (__fastcall *off_140B6F5B0[183])();
// 140B6F670: using guessed type __int64 (__fastcall *off_140B6F670[159])();
// 140B6F760: using guessed type __int64 (__fastcall *off_140B6F760[129])();
// 140B6F790: using guessed type __int64 (__fastcall *off_140B6F790[123])();
// 140B6F880: using guessed type __int64 (__fastcall *off_140B6F880[93])();
// 140B6F970: using guessed type __int64 (__fastcall *off_140B6F970[63])();
// 140B6F9A0: using guessed type __int64 (__fastcall *off_140B6F9A0[57])();
// 140C4E030: using guessed type __int64 (__fastcall **off_140C4E030)();
// 140C4E040: using guessed type int dword_140C4E040;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

