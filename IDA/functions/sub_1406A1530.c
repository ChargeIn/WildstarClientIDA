//----- (00000001406A1530) ----------------------------------------------------
__int64 __fastcall sub_1406A1530(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r14
	__int64 v4; // r14
	int* v5; // rax
	unsigned int v6; // ecx
	char v7; // al
	char v8; // al
	char v9; // al
	char v10; // al
	char v11; // al
	char v12; // al
	char v13; // al
	char v14; // al
	char v15; // al
	__int64 v16; // rax
	unsigned __int64 v17; // rcx
	__int16 v18; // ax
	unsigned __int64 v19; // rax
	unsigned __int64 v20; // rax
	__int64 v21; // rbx
	__int64* v22; // rax
	int v23; // ecx
	__int64 v24; // rdx
	int* v25; // rax
	int* v26; // rdx
	__int64 v27; // rcx
	__int128 v28; // xmm0
	__int128 v29; // xmm1
	__int128 v30; // xmm0
	__int128 v31; // xmm1
	__int128 v32; // xmm0
	__int128 v33; // xmm1
	__int128 v34; // xmm0
	__int128 v35; // xmm1
	__int128 v36; // xmm1
	__int64 v37; // rcx
	__int128 v38; // xmm0
	char v40[32]; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v41; // [rsp+50h] [rbp-B0h] BYREF
	int v42; // [rsp+58h] [rbp-A8h]
	__int64 v43; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v44; // [rsp+68h] [rbp-98h]
	__int64 v45; // [rsp+70h] [rbp-90h] BYREF
	__int64(__fastcall * *v46)(); // [rsp+80h] [rbp-80h] BYREF
	int v47; // [rsp+88h] [rbp-78h]
	__int64 v48; // [rsp+90h] [rbp-70h]
	__int64 v49; // [rsp+98h] [rbp-68h]
	__int64 v50; // [rsp+A0h] [rbp-60h]
	__int64 v51; // [rsp+A8h] [rbp-58h]
	__int64 v52; // [rsp+B0h] [rbp-50h]
	__int64* v53; // [rsp+B8h] [rbp-48h]
	__int64 v54; // [rsp+C0h] [rbp-40h]
	int v55; // [rsp+C8h] [rbp-38h]
	__int128 v56; // [rsp+D0h] [rbp-30h]
	int v57; // [rsp+E0h] [rbp-20h]
	__int64 v58; // [rsp+E8h] [rbp-18h]
	__int64* v59; // [rsp+F0h] [rbp-10h]
	__int64 v60; // [rsp+FCh] [rbp-4h]
	int v61; // [rsp+104h] [rbp+4h]
	__int64 v62; // [rsp+108h] [rbp+8h]
	__int64 v63; // [rsp+110h] [rbp+10h]
	__int64 v64; // [rsp+118h] [rbp+18h]
	__int128 v65; // [rsp+120h] [rbp+20h]
	__int64 v66; // [rsp+130h] [rbp+30h]
	int v67; // [rsp+14Ch] [rbp+4Ch]
	__int64 v68; // [rsp+198h] [rbp+98h]
	__int64 v69; // [rsp+1A0h] [rbp+A0h]
	__int64 v70; // [rsp+1A8h] [rbp+A8h]
	__int64 v71; // [rsp+1B0h] [rbp+B0h]
	__int64 v72; // [rsp+1B8h] [rbp+B8h]
	_QWORD* v73; // [rsp+1F0h] [rbp+F0h] BYREF
	__int64 v74; // [rsp+1F8h] [rbp+F8h]
	int v75[178]; // [rsp+210h] [rbp+110h] BYREF
	__int64 v76; // [rsp+4D8h] [rbp+3D8h]
	__int64 v77; // [rsp+4E0h] [rbp+3E0h]
	__int64 v78; // [rsp+4F0h] [rbp+3F0h]
	int v79; // [rsp+688h] [rbp+588h]
	int v80; // [rsp+690h] [rbp+590h]
	int v81; // [rsp+694h] [rbp+594h]
	int v82[80]; // [rsp+6B0h] [rbp+5B0h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = v3 + 8) != 0)
	{
		sub_14040FAE0((__int64)&v73);
		v5 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v4 + 56), 0i64);
		sub_140412470((__int64)&v73, (__int64)v5, 0, 6);
		if (v80 && v74)
		{
			v43 = 0i64;
			v44 = 0i64;
			v6 = *(_DWORD*)(v4 + 88);
			v7 = v6 & 7;
			v6 >>= 3;
			BYTE1(v44) = v7;
			v8 = v6;
			v6 >>= 3;
			LOBYTE(v44) = v8 & 7;
			v9 = v6;
			v6 >>= 1;
			HIDWORD(v44) = v9 & 1;
			v10 = v6;
			v6 >>= 3;
			v43 = v10 & 7;
			v11 = v6;
			v6 >>= 3;
			BYTE1(v43) = v11 & 7;
			v12 = v6;
			v6 >>= 3;
			BYTE2(v43) = v12 & 7;
			v13 = v6;
			v6 >>= 3;
			BYTE3(v43) = v13 & 7;
			v14 = v6;
			v6 >>= 3;
			BYTE4(v43) = v14 & 7;
			v15 = v6;
			v6 >>= 3;
			BYTE5(v43) = v15 & 7;
			HIBYTE(v43) = (v6 >> 3) & 7;
			BYTE6(v43) = v6 & 7;
			if (v81 <= 6)
			{
				v81 = 6;
				v76 = v43;
				v77 = v44;
				if (v73)
				{
					v16 = v73[11];
					if (v16)
					{
						if (*(int*)(v16 + 8) < 1)
						{
							v81 = 0;
							v76 = 0i64;
							v77 = 0i64;
						}
					}
				}
			}
			v45 = 0i64;
			v17 = *(_QWORD*)(v4 + 96) >> 4;
			LOBYTE(v45) = *(_QWORD*)(v4 + 96) & 0xF;
			v18 = v17;
			v17 >>= 10;
			*(_DWORD*)((char*)&v45 + 2) = v18 & 0x3FF;
			HIWORD(v45) = (v17 >> 10) & 0x3FF;
			WORD2(v45) = v17 & 0x3FF;
			v42 = 1;
			v41 = 0i64;
			v19 = *(_QWORD*)(v4 + 80);
			if (v19)
			{
				LOBYTE(v41) = *(_QWORD*)(v4 + 80);
				v20 = v19 >> 8;
				BYTE1(v41) = v20;
				v20 >>= 8;
				BYTE2(v41) = v20;
				v20 >>= 8;
				BYTE3(v41) = v20;
				v20 >>= 8;
				BYTE4(v41) = v20;
				v20 >>= 8;
				BYTE5(v41) = v20;
				v20 >>= 8;
				BYTE6(v41) = v20;
				v42 = BYTE1(v20);
			}
			else
			{
				v41 = 0i64;
				v42 = (unsigned int)(*(_DWORD*)(v74 + 320) - 1) > 1;
			}
			v46 = off_140B66A40;
			v56 = 0i64;
			v65 = 0i64;
			v47 = 0;
			v61 = 1;
			v48 = 0i64;
			v49 = 1i64;
			v21 = v74;
			v50 = 0i64;
			v51 = 0i64;
			v52 = 0i64;
			v53 = 0i64;
			v54 = 0i64;
			v55 = 0;
			v57 = 0;
			v58 = 0i64;
			v59 = 0i64;
			v60 = 0i64;
			v62 = 0i64;
			v63 = 0i64;
			v64 = 0i64;
			v66 = 0i64;
			v67 = 0;
			v68 = 0i64;
			v69 = 0i64;
			v70 = 0i64;
			v71 = 0i64;
			v72 = 0i64;
			v22 = (__int64*)sub_140445210((__int64)v40);
			v48 = v21;
			v49 = *v22;
			v50 = v22[1];
			v51 = v22[2];
			v52 = v22[3];
			v23 = *(unsigned __int8*)(v4 + 68);
			v24 = *(_QWORD*)(v4 + 72);
			LODWORD(v54) = *(_DWORD*)(v4 + 64);
			*((_QWORD*)&v56 + 1) = &v41;
			v55 = v23;
			v53 = &v45;
			HIDWORD(v54) = 1;
			*(_QWORD*)&v56 = v24;
			v57 = 0;
			v59 = &v43;
			v58 = 0i64;
			sub_1400B52A0((__int64)v82);
			if (!(unsigned int)sub_14040C310((__int64)&v46, (__int64)v82, qword_140C658F0, 0i64, 0i64, 0i64) && v79 <= 6)
			{
				v25 = v82;
				v26 = v75;
				if ((((unsigned __int8)v75 | (unsigned __int8)v82) & 0xF) != 0)
				{
					sub_1407DB590(v75, v82, 0x138ui64);
				}
				else
				{
					v27 = 2i64;
					do
					{
						v28 = *(_OWORD*)v25;
						v29 = *((_OWORD*)v25 + 1);
						v26 += 32;
						v25 += 32;
						*((_OWORD*)v26 - 8) = v28;
						v30 = *((_OWORD*)v25 - 6);
						*((_OWORD*)v26 - 7) = v29;
						v31 = *((_OWORD*)v25 - 5);
						*((_OWORD*)v26 - 6) = v30;
						v32 = *((_OWORD*)v25 - 4);
						*((_OWORD*)v26 - 5) = v31;
						v33 = *((_OWORD*)v25 - 3);
						*((_OWORD*)v26 - 4) = v32;
						v34 = *((_OWORD*)v25 - 2);
						*((_OWORD*)v26 - 3) = v33;
						v35 = *((_OWORD*)v25 - 1);
						*((_OWORD*)v26 - 2) = v34;
						*((_OWORD*)v26 - 1) = v35;
						--v27;
					} while (v27);
					v36 = *((_OWORD*)v25 + 1);
					v37 = *((_QWORD*)v25 + 6);
					*(_OWORD*)v26 = *(_OWORD*)v25;
					v38 = *((_OWORD*)v25 + 2);
					*((_OWORD*)v26 + 1) = v36;
					*((_OWORD*)v26 + 2) = v38;
					*((_QWORD*)v26 + 6) = v37;
				}
				v79 = 6;
			}
			sub_140415BB0(a1, (__int64)&v73);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v73)
		{
			(*(void(__fastcall**)(_QWORD*))(*v73 + 8i64))(v73);
			v73 = 0i64;
		}
		if (v78)
			sub_14018B900(v78, 0);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 1406A1746: conditional instruction was optimized away because %var_180.4!=0
// 1406A1763: conditional instruction was optimized away because rcx.8!=0
// 1406A17F5: conditional instruction was optimized away because %var_180.4!=0
// 140B66A40: using guessed type __int64 (__fastcall *off_140B66A40[121])();
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 1406A1530: using guessed type char var_7E0[32];
// 1406A1530: using guessed type int var_160[80];
// 1406A1530: using guessed type int var_600[178];

