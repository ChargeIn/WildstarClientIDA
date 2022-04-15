//----- (00000001403B1780) ----------------------------------------------------
__int64 __fastcall sub_1403B1780(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 result; // rax
	int* v8; // rbp
	unsigned __int64 v9; // r15
	float v10; // xmm6_4
	float v11; // xmm7_4
	unsigned int v12; // esi
	int v13; // r14d
	float v14; // xmm8_4
	unsigned int v15; // ebx
	int v16; // edx
	unsigned int* v17; // rcx
	double v18; // xmm0_8
	int v19; // edx
	unsigned int* v20; // rcx
	double v21; // xmm0_8
	int v22; // edx
	unsigned int* v23; // rcx
	double v24; // xmm0_8
	int v25; // edx
	unsigned int* v26; // rcx
	double v27; // xmm0_8
	int v28; // edx
	unsigned int* v29; // rcx
	double v30; // xmm0_8
	int v31; // edx
	unsigned int* v32; // rcx
	double v33; // xmm0_8
	int v34; // edx
	unsigned int* v35; // rcx
	double v36; // xmm0_8
	int v37; // edx
	unsigned int* v38; // rcx
	double v39; // xmm0_8
	int v40; // edx
	unsigned int* v41; // rcx
	double v42; // xmm0_8
	int v43; // edx
	unsigned int* v44; // rcx
	double v45; // xmm0_8
	int v46; // edx
	unsigned int* v47; // rcx
	double v48; // xmm0_8
	__int64 v49; // rax
	__int64 v50; // rbx
	__int64 v51; // rax
	__int64 v52; // rbx
	int v53; // eax
	__int64 v54; // rax
	__int64 v55; // rbx
	__int64 v56; // rax
	__int64 v57; // rbx
	int v58; // eax
	__int64 v59; // rax
	__int64 v60; // rbx
	__int64 v61; // rax
	__int64 v62; // rbx
	int v63; // eax
	__int64 v64; // rcx
	float v65; // xmm1_4
	__int64 v66; // rax
	__int64 v67; // r8
	float v68; // [rsp+3Ch] [rbp-8Ch]
	float v69; // [rsp+40h] [rbp-88h]

	result = *(_QWORD*)(a1 + 64);
	if (result)
	{
		v8 = (int*)(result + 16);
		v9 = 0i64;
		v10 = v69;
		v11 = v68;
		while (1)
		{
			v12 = *(v8 - 4);
			v13 = *(v8 - 2);
			v14 = (float)*v8;
			switch (v12)
			{
			case 1u:
				v11 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)a2 + 64i64))(a2);
				v15 = 44;
				v10 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)a2 + 72i64))(a2);
				break;
			case 3u:
				v11 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)a2 + 112i64))(a2);
				v15 = 176;
				v10 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)a2 + 120i64))(a2);
				break;
			case 5u:
				v11 = sub_140466340(a2, 0);
				v18 = sub_140466360(v17, v16);
				v15 = 50;
				v10 = *(float*)&v18;
				break;
			case 6u:
				v11 = sub_140466340(a2, 1);
				v21 = sub_140466360(v20, v19);
				v15 = 51;
				v10 = *(float*)&v21;
				break;
			case 7u:
				v11 = sub_140466340(a2, 2);
				v24 = sub_140466360(v23, v22);
				v15 = 52;
				v10 = *(float*)&v24;
				break;
			case 8u:
				v11 = sub_140466340(a2, 3);
				v27 = sub_140466360(v26, v25);
				v15 = 53;
				v10 = *(float*)&v27;
				break;
			case 9u:
				v11 = sub_140466340(a2, 4);
				v30 = sub_140466360(v29, v28);
				v15 = 54;
				v10 = *(float*)&v30;
				break;
			case 0xAu:
				v11 = sub_140466340(a2, 5);
				v33 = sub_140466360(v32, v31);
				v15 = 55;
				v10 = *(float*)&v33;
				break;
			case 0xBu:
				v11 = sub_140466340(a2, 6);
				v36 = sub_140466360(v35, v34);
				v15 = 56;
				v10 = *(float*)&v36;
				break;
			case 0xFu:
				v11 = *(float*)(a2 + 536);
				v10 = *(float*)(a2 + 1516);
				v15 = 167;
				break;
			case 0x10u:
				v11 = sub_140466340(a2, 7);
				v39 = sub_140466360(v38, v37);
				v15 = 177;
				v10 = *(float*)&v39;
				break;
			case 0x14u:
				v11 = (float)*(int*)(a2 + 1200);
				v15 = 250;
				v10 = (float)(int)sub_14045E720(a2);
				break;
			case 0x15u:
				v11 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)a2 + 136i64))(a2);
				v15 = 254;
				v10 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)a2 + 144i64))(a2);
				break;
			case 0x16u:
				v49 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
					qword_140C65980,
					*(unsigned int*)(qword_140C65980 + 56),
					0i64);
				v50 = v49;
				if (!v49 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v49 + 64i64))(v49))
					v11 = 0.0;
				else
					v11 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v50 + 152i64))(v50);
				v51 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
					qword_140C65980,
					*(unsigned int*)(qword_140C65980 + 56),
					0i64);
				v52 = v51;
				if (!v51 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v51 + 64i64))(v51))
				{
					v10 = 0.0;
					v15 = 275;
				}
				else
				{
					v53 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v52 + 128i64))(v52);
					v15 = 275;
					v10 = (float)v53;
				}
				break;
			case 0x17u:
				v54 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
					qword_140C65980,
					*(unsigned int*)(qword_140C65980 + 60),
					0i64);
				v55 = v54;
				if (v54 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v54 + 64i64))(v54) == 1)
					v11 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v55 + 152i64))(v55);
				else
					v11 = 0.0;
				v56 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
					qword_140C65980,
					*(unsigned int*)(qword_140C65980 + 60),
					0i64);
				v57 = v56;
				if (v56 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v56 + 64i64))(v56) == 1)
				{
					v58 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v57 + 128i64))(v57);
					v15 = 276;
					v10 = (float)v58;
				}
				else
				{
					v10 = 0.0;
					v15 = 276;
				}
				break;
			case 0x18u:
				v59 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
					qword_140C65980,
					*(unsigned int*)(qword_140C65980 + 64),
					0i64);
				v60 = v59;
				if (v59 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v59 + 64i64))(v59) == 2)
					v11 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v60 + 152i64))(v60);
				else
					v11 = 0.0;
				v61 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
					qword_140C65980,
					*(unsigned int*)(qword_140C65980 + 64),
					0i64);
				v62 = v61;
				if (v61 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v61 + 64i64))(v61) == 2)
				{
					v63 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v62 + 128i64))(v62);
					v15 = 277;
					v10 = (float)v63;
				}
				else
				{
					v10 = 0.0;
					v15 = 277;
				}
				break;
			case 0x1Bu:
				v11 = sub_140466340(a2, 8);
				v42 = sub_140466360(v41, v40);
				v15 = 327;
				v10 = *(float*)&v42;
				break;
			case 0x1Cu:
				v11 = sub_140466340(a2, 9);
				v45 = sub_140466360(v44, v43);
				v15 = 328;
				v10 = *(float*)&v45;
				break;
			case 0x1Du:
				v11 = sub_140466340(a2, 10);
				v48 = sub_140466360(v47, v46);
				v15 = 329;
				v10 = *(float*)&v48;
				break;
			default:
				if (*(_QWORD*)(qword_140C65898 + 120) == a2 && (v64 = *(_QWORD*)(qword_140C65898 + 28048)) != 0)
					v15 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v64 + 120i64))(v64, v12);
				else
					v15 = 175;
				break;
			}
			if (v12)
			{
				v65 = v11;
				if (v13 > 4)
					v65 = (float)(v11 * 100.0) / v10;
				if (!(unsigned int)sub_1407A1750(v13, v65, v14))
					break;
			}
			++v9;
			++v8;
			if (v9 >= 2)
				return 0i64;
		}
		v66 = *(_QWORD*)(a1 + 112);
		if ((*(_BYTE*)(v66 + 264) & 2) != 0)
		{
			v67 = *(unsigned int*)(v66 + 360);
			if ((_DWORD)v67)
			{
				if ((*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)a4 + 24i64))(
					a4,
					a2,
					v67,
					a3,
					0i64,
					0))
				{
					return 0i64;
				}
			}
		}
		return v15;
	}
	return result;
}
// 1403B17DF: variable 'v69' is possibly undefined
// 1403B17ED: variable 'v68' is possibly undefined
// 1403B18D8: variable 'v17' is possibly undefined
// 1403B18D8: variable 'v16' is possibly undefined
// 1403B18FA: variable 'v20' is possibly undefined
// 1403B18FA: variable 'v19' is possibly undefined
// 1403B191C: variable 'v23' is possibly undefined
// 1403B191C: variable 'v22' is possibly undefined
// 1403B193E: variable 'v26' is possibly undefined
// 1403B193E: variable 'v25' is possibly undefined
// 1403B1960: variable 'v29' is possibly undefined
// 1403B1960: variable 'v28' is possibly undefined
// 1403B1982: variable 'v32' is possibly undefined
// 1403B1982: variable 'v31' is possibly undefined
// 1403B19A4: variable 'v35' is possibly undefined
// 1403B19A4: variable 'v34' is possibly undefined
// 1403B19C6: variable 'v38' is possibly undefined
// 1403B19C6: variable 'v37' is possibly undefined
// 1403B19E8: variable 'v41' is possibly undefined
// 1403B19E8: variable 'v40' is possibly undefined
// 1403B1A0A: variable 'v44' is possibly undefined
// 1403B1A0A: variable 'v43' is possibly undefined
// 1403B1A2C: variable 'v47' is possibly undefined
// 1403B1A2C: variable 'v46' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

