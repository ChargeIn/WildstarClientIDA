#include "../winhttp.h"

//----- (0000000140607A00) ----------------------------------------------------
void __fastcall sub_140607A00(__int64* a1, __int64 a2, int* a3, int a4, int a5, __int64 a6)
{
	int v6; // eax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // [rsp+20h] [rbp-E0h] BYREF
	int v16; // [rsp+28h] [rbp-D8h]
	__int64 v17; // [rsp+2Ch] [rbp-D4h]
	__int64 v18; // [rsp+34h] [rbp-CCh]
	int v19; // [rsp+3Ch] [rbp-C4h]
	__int64 v20; // [rsp+40h] [rbp-C0h] BYREF
	int v21; // [rsp+48h] [rbp-B8h]
	__int64 v22; // [rsp+4Ch] [rbp-B4h]
	__int64 v23; // [rsp+54h] [rbp-ACh]
	int v24; // [rsp+5Ch] [rbp-A4h]
	__int64 v25; // [rsp+60h] [rbp-A0h] BYREF
	int v26; // [rsp+68h] [rbp-98h]
	__int64 v27; // [rsp+6Ch] [rbp-94h]
	__int64 v28; // [rsp+74h] [rbp-8Ch]
	int v29; // [rsp+7Ch] [rbp-84h]
	__int64 v30; // [rsp+80h] [rbp-80h] BYREF
	int v31; // [rsp+88h] [rbp-78h]
	__int64 v32; // [rsp+8Ch] [rbp-74h]
	__int64 v33; // [rsp+94h] [rbp-6Ch]
	int v34; // [rsp+9Ch] [rbp-64h]
	__int64 v35; // [rsp+A0h] [rbp-60h] BYREF
	int v36; // [rsp+A8h] [rbp-58h]
	__int64 v37; // [rsp+ACh] [rbp-54h]
	__int64 v38; // [rsp+B4h] [rbp-4Ch]
	int v39; // [rsp+BCh] [rbp-44h]
	__int64 v40; // [rsp+C0h] [rbp-40h] BYREF
	int v41; // [rsp+C8h] [rbp-38h]
	__int64 v42; // [rsp+CCh] [rbp-34h]
	__int64 v43; // [rsp+D4h] [rbp-2Ch]
	int v44; // [rsp+DCh] [rbp-24h]
	__int64 v45; // [rsp+E0h] [rbp-20h] BYREF
	int v46; // [rsp+E8h] [rbp-18h]
	__int64 v47; // [rsp+ECh] [rbp-14h]
	__int64 v48; // [rsp+F4h] [rbp-Ch]
	int v49; // [rsp+FCh] [rbp-4h]
	__int64 v50; // [rsp+100h] [rbp+0h] BYREF
	int v51; // [rsp+108h] [rbp+8h]
	__int64 v52; // [rsp+10Ch] [rbp+Ch]
	__int64 v53; // [rsp+114h] [rbp+14h]
	int v54; // [rsp+11Ch] [rbp+1Ch]

	if (!a4)
	{
		v6 = *a3;
		if (*a3 > 1222)
		{
			switch (v6)
			{
			case 1223:
				v42 = 0i64;
				v43 = 0i64;
				v44 = 0;
				v41 = 1065353216;
				v13 = *a1;
				v40 = 1217i64;
				(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v13 + 584))(a1, 0i64, &v40);
				break;
			case 1224:
				v52 = 0i64;
				v53 = 0i64;
				v54 = 0;
				v51 = 1065353216;
				v14 = *a1;
				v50 = 1218i64;
				(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v14 + 584))(a1, 0i64, &v50);
				break;
			case 1225:
				v27 = 0i64;
				v28 = 0i64;
				v29 = 0;
				v26 = 1065353216;
				v8 = *a1;
				v25 = 1219i64;
				(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v8 + 584))(a1, 0i64, &v25);
				break;
			case 1226:
				v47 = 0i64;
				v48 = 0i64;
				v49 = 0;
				v46 = 1065353216;
				v9 = *a1;
				v45 = 1220i64;
				(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v9 + 584))(a1, 0i64, &v45);
				break;
			case 1227:
				v17 = 0i64;
				v18 = 0i64;
				v19 = 0;
				v16 = 1065353216;
				v10 = *a1;
				v15 = 1221i64;
				(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v10 + 584))(a1, 0i64, &v15);
				break;
			case 1231:
			case 1287:
				goto LABEL_5;
			case 1285:
				v22 = 0i64;
				v23 = 0i64;
				v24 = 0;
				v21 = 1065353216;
				v11 = *a1;
				v20 = 1286i64;
				(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v11 + 584))(a1, 0i64, &v20);
				break;
			case 1351:
				v32 = 0i64;
				v33 = 0i64;
				v34 = 0;
				v31 = 1065353216;
				v12 = *a1;
				v30 = 1352i64;
				(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v12 + 584))(a1, 0i64, &v30);
				break;
			default:
				return;
			}
		}
		else if (v6 == 1222)
		{
			v37 = 0i64;
			v38 = 0i64;
			v39 = 0;
			v36 = 1065353216;
			v7 = *a1;
			v35 = 1216i64;
			(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v7 + 584))(a1, 0i64, &v35);
		}
		else if (v6 == 46)
		{
		LABEL_5:
			sub_14060A4C0(a6);
		}
	}
}

