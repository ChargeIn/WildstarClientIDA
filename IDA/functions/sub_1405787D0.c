#include "../winhttp.h"

//----- (00000001405787D0) ----------------------------------------------------
__int64 __fastcall sub_1405787D0(
	__int64 a1,
	int a2,
	unsigned int a3,
	__int64 a4,
	__int64 a5,
	__int64 a6,
	__int128* a7,
	int a8,
	_QWORD* a9,
	__int128* a10,
	int a11)
{
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // r8
	__int64 v16; // rsi
	__int64 result; // rax
	__int64 v18; // rbx
	int v19; // ecx
	float v20; // ecx
	int v21; // ecx
	__int64 v22; // rcx
	__int64 v23; // rcx
	int v24; // eax
	int v25; // xmm1_4
	float v26; // xmm0_4
	int v27; // eax
	float v28; // xmm1_4
	int v29; // eax
	__int64 v30; // rcx
	int v31; // ebx
	__int64 v32; // rcx
	float v33; // xmm1_4
	int v34; // eax
	int v35; // ebx
	__int64 v36; // rcx
	unsigned __int64 v37; // rcx
	int v38; // eax
	int v39; // xmm0_4
	int v40; // eax
	int v41; // eax
	int v42; // xmm0_4
	float v43; // xmm1_4
	__int128 v44; // xmm0
	int v45; // eax
	int v46; // eax
	__int128 v47; // xmm1
	unsigned __int64 v48; // rcx
	__int128 v49; // xmm0
	__int128 v50; // xmm1
	int v51; // xmm0_4
	int v52; // eax
	int v53; // xmm0_4
	float v54; // xmm1_4
	__int128 v55; // xmm0
	__int64 v56; // rcx
	int v57; // eax
	__int64 v58; // rcx
	__int64 v59; // rdx
	__int64 v60; // rcx
	__int64 v61; // rcx
	int v62[8]; // [rsp+40h] [rbp-C0h] BYREF
	int v63; // [rsp+60h] [rbp-A0h]
	int v64; // [rsp+90h] [rbp-70h]
	int v65; // [rsp+C8h] [rbp-38h]
	_QWORD* v66; // [rsp+D0h] [rbp-30h]
	__int64 v67; // [rsp+D8h] [rbp-28h]
	unsigned int v68; // [rsp+E0h] [rbp-20h]
	int v69; // [rsp+E4h] [rbp-1Ch]
	float v70; // [rsp+E8h] [rbp-18h]
	float v71; // [rsp+ECh] [rbp-14h]
	__int128 v72; // [rsp+F0h] [rbp-10h]
	int v73; // [rsp+100h] [rbp+0h]
	int v74; // [rsp+108h] [rbp+8h]
	unsigned int v75; // [rsp+110h] [rbp+10h]
	int v76; // [rsp+114h] [rbp+14h]
	int v77; // [rsp+118h] [rbp+18h]
	int v78; // [rsp+11Ch] [rbp+1Ch]
	__int128 v79; // [rsp+120h] [rbp+20h]
	__int128 v80; // [rsp+130h] [rbp+30h]
	__int128 v81; // [rsp+140h] [rbp+40h]
	__int128 v82; // [rsp+150h] [rbp+50h]
	unsigned int v83; // [rsp+1A0h] [rbp+A0h]
	int v84; // [rsp+1A4h] [rbp+A4h]
	int v85; // [rsp+1C4h] [rbp+C4h]

	v13 = sub_1403D90D0(qword_140C65898, a3);
	v15 = *(unsigned int*)(a5 + 148);
	v16 = 0i64;
	if (!(_DWORD)v15
		|| (result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				v13,
				v15,
				0i64,
				0i64,
				0),
			(_DWORD)result))
	{
		result = *(unsigned int*)(a5 + 4);
		switch ((int)result)
		{
		case 0:
			result = sub_1403D90D0(qword_140C65898, a3);
			v18 = result;
			if (result)
			{
				sub_140579F60((__int64)v62, a5, a6);
				v19 = *(_DWORD*)(a5 + 40);
				v67 = a3;
				v69 = v19;
				v70 = *(float*)(a5 + 44);
				v20 = *(float*)(a5 + 48);
				v63 = a2;
				v71 = v20;
				v21 = *(_DWORD*)(a5 + 88);
				HIDWORD(v72) = (v21 & 0x1000) == 0;
				if (*(_DWORD*)(v18 + 3416) && (v21 & 0x800) == 0 || (LODWORD(v72) = 5, (v21 & 0x400) != 0))
					LODWORD(v72) = 4;
				DWORD1(v72) = *(_DWORD*)(a5 + 36);
				DWORD2(v72) = sub_1401AE6A0(0, 0xFFFF);
				v64 = a11;
				v66 = a9;
				v65 = a8;
				result = sub_1405765A0(v22, (__int64)v62, a9);
			}
			break;
		case 1:
			sub_1407E4830(v62, 0i64, 0xA0ui64);
			sub_140579F60((__int64)v62, a5, a6);
			v64 = a11;
			LODWORD(v67) = a3;
			v63 = a2;
			v66 = a9;
			v65 = a8;
			result = sub_140576670(v23, v62, (int**)a9);
			break;
		case 2:
			result = sub_140396850(v14, a3);
			if ((_DWORD)result || *(float*)(a5 + 84) > 0.0000099999997)
			{
				sub_1407E4830(v62, 0i64, 0xB8ui64);
				sub_140579F60((__int64)v62, a5, a6);
				v24 = *(_DWORD*)(a5 + 40);
				v25 = *(_DWORD*)(a5 + 72);
				HIDWORD(v67) = *(_DWORD*)(a5 + 68);
				v26 = *(float*)(a5 + 80);
				v68 = v25;
				LODWORD(v67) = v24;
				v27 = *(_DWORD*)(a5 + 36);
				v28 = *(float*)(a5 + 84);
				v70 = v26;
				LODWORD(v72) = v27;
				v63 = a2;
				v29 = (int)*(float*)(a5 + 76);
				v71 = v28;
				v66 = a9;
				v69 = v29;
				v64 = a11;
				v65 = a8;
				result = sub_1405767D0(v30, a3, (__int64)v62, a9);
			}
			break;
		case 3:
			result = sub_140396850(v14, a3);
			if ((_DWORD)result)
			{
				v31 = (int)*(float*)(a5 + 68);
				sub_140579F60((__int64)v62, a5, a6);
				LODWORD(v67) = v31;
				v33 = *(float*)(a5 + 72);
				if (v33 == 0.0)
					HIDWORD(v67) = 0;
				else
					*((float*)&v67 + 1) = 1000.0 / v33;
				v34 = (int)*(float*)(a5 + 76);
				v63 = a2;
				v66 = a9;
				v68 = v34;
				v69 = (int)*(float*)(a5 + 80);
				v64 = a11;
				v65 = a8;
				result = sub_140576950(v32, v62, a9);
			}
			break;
		case 4:
			result = sub_140396850(v14, a3);
			if ((_DWORD)result)
			{
				v35 = (int)*(float*)(a5 + 68);
				sub_140579F60((__int64)v62, a5, a6);
				LODWORD(v67) = v35;
				v64 = a11;
				v63 = a2;
				v65 = a8;
				result = qword_140C65898;
				v66 = a9;
				v36 = *(_QWORD*)(qword_140C65898 + 120);
				if (v36)
				{
					LOBYTE(v16) = a3 == *(_DWORD*)(v36 + 8);
					if ((_DWORD)v16)
						result = sub_140576AA0((__int64*)qword_140C65B78, v62, a9);
				}
			}
			break;
		case 5:
			result = sub_1403D90D0(qword_140C65898, a3);
			if (result)
			{
				sub_1407E4830(v62, 0i64, 0x100ui64);
				sub_140579F60((__int64)v62, a5, a6);
				v37 = *(_QWORD*)(a5 + 24);
				v38 = *(_DWORD*)(a5 + 88) & 1;
				v63 = a2;
				v75 = a3;
				v74 = v38;
				v76 = *(_DWORD*)(a5 + 16);
				v77 = *(_DWORD*)(a5 + 20);
				if (v37 && v37 <= qword_140C3FE70)
					v16 = v37 + qword_140C3FE68;
				v39 = *(_DWORD*)(a5 + 52);
				v78 = *(_DWORD*)(a5 + 32);
				v40 = *(_DWORD*)(a5 + 40);
				v68 = v39;
				v73 = v40;
				v41 = *(_DWORD*)(a5 + 152);
				*(float*)&v42 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *(float*)(a5 + 56);
				v43 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *(float*)(a5 + 60);
				v71 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *(float*)(a5 + 64);
				HIDWORD(v80) = v41;
				v67 = v16;
				v69 = v42;
				v44 = *a10;
				v70 = v43;
				v72 = v44;
				v64 = a11;
				v66 = a9;
				v65 = a8;
				result = sub_140576BF0(v37, (__int64)v62, a9);
			}
			break;
		case 6:
			if (a7)
			{
				sub_1407E4830(v62, 0i64, 0x190ui64);
				sub_140579F60((__int64)v62, a5, a6);
				v45 = *(_DWORD*)(a5 + 88);
				v63 = a2;
				v74 = v45 & 1;
				v46 = *(_DWORD*)(a5 + 32);
				if (v46 && a3)
				{
					v83 = a3;
					v75 = 1;
					v84 = v46;
				}
				else
				{
					v75 = 0;
				}
				v47 = a7[1];
				v48 = *(_QWORD*)(a5 + 24);
				v79 = *a7;
				v49 = a7[2];
				v80 = v47;
				v50 = a7[3];
				v81 = v49;
				v82 = v50;
				if (v48 && v48 <= qword_140C3FE70)
					v16 = v48 + qword_140C3FE68;
				v51 = *(_DWORD*)(a5 + 52);
				v73 = *(_DWORD*)(a5 + 40);
				v52 = *(_DWORD*)(a5 + 152);
				v68 = v51;
				v85 = v52;
				*(float*)&v53 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *(float*)(a5 + 56);
				v54 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *(float*)(a5 + 60);
				v71 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *(float*)(a5 + 64);
				v67 = v16;
				v66 = a9;
				v69 = v53;
				v55 = *a10;
				v70 = v54;
				v72 = v55;
				v64 = a11;
				v65 = a8;
				result = sub_140576E50(v48, (__int64)v62, a9);
			}
			break;
		case 7:
			sub_140579F60((__int64)v62, a5, a6);
			v62[0] = *(_DWORD*)(a5 + 8);
			v62[1] = *(_DWORD*)(a5 + 12);
			LODWORD(v67) = a3;
			v64 = a11;
			v63 = a2;
			v65 = a8;
			v66 = a9;
			result = sub_140576F90(v56, v62, a9);
			break;
		case 8:
			if (a6)
				v57 = *(_DWORD*)(a6 + 144);
			else
				v57 = *(_DWORD*)(a5 + 144);
			LODWORD(v67) = v57;
			sub_140579F60((__int64)v62, a5, a6);
			v65 = a8;
			result = qword_140C65898;
			v63 = a2;
			v58 = *(_QWORD*)(qword_140C65898 + 120);
			v66 = a9;
			if (v58)
			{
				LOBYTE(v16) = a3 == *(_DWORD*)(v58 + 8);
				if ((_DWORD)v16)
					result = sub_1405770F0((int**)qword_140C65B78, v62, (int**)a9);
			}
			break;
		case 9:
			sub_140579F60((__int64)v62, a5, a6);
			LODWORD(v67) = (int)*(float*)(a5 + 68);
			v63 = a2;
			HIDWORD(v67) = a3;
			v69 = (int)*(float*)(a5 + 72);
			v68 = a3;
			v66 = a9;
			LODWORD(v70) = (int)*(float*)(a5 + 76);
			v64 = a11;
			v65 = a8;
			result = sub_140577250(v60, v59, v62, a9);
			break;
		case 12:
			sub_140579F60((__int64)v62, a5, a6);
			v64 = a11;
			LODWORD(v67) = a3;
			v66 = a9;
			v65 = a8;
			result = sub_140577510(v61, v62, a9);
			break;
		default:
			return result;
		}
	}
	return result;
}
// 140578936: variable 'v22' is possibly undefined
// 140578989: variable 'v23' is possibly undefined
// 140578996: variable 'v14' is possibly undefined
// 140578A36: variable 'v30' is possibly undefined
// 140578ABF: variable 'v32' is possibly undefined
// 140578DB1: variable 'v56' is possibly undefined
// 140578E87: variable 'v60' is possibly undefined
// 140578E87: variable 'v59' is possibly undefined
// 140578EC0: variable 'v61' is possibly undefined
// 140C3B438: using guessed type int dword_140C3B438;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B78: using guessed type __int64 qword_140C65B78;

