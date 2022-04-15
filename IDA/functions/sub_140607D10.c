//----- (0000000140607D10) ----------------------------------------------------
void __fastcall sub_140607D10(__int64* a1, __int64 a2, _DWORD* a3, int a4, int a5, __int64 a6)
{
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	_QWORD* v14; // rdi
	__int64 v15; // rsi
	__int64 v16; // [rsp+20h] [rbp-E0h] BYREF
	int v17; // [rsp+28h] [rbp-D8h]
	__int64 v18; // [rsp+2Ch] [rbp-D4h]
	__int64 v19; // [rsp+34h] [rbp-CCh]
	int v20; // [rsp+3Ch] [rbp-C4h]
	__int64 v21; // [rsp+40h] [rbp-C0h] BYREF
	int v22; // [rsp+48h] [rbp-B8h]
	__int64 v23; // [rsp+4Ch] [rbp-B4h]
	__int64 v24; // [rsp+54h] [rbp-ACh]
	int v25; // [rsp+5Ch] [rbp-A4h]
	__int64 v26; // [rsp+60h] [rbp-A0h] BYREF
	int v27; // [rsp+68h] [rbp-98h]
	__int64 v28; // [rsp+6Ch] [rbp-94h]
	__int64 v29; // [rsp+74h] [rbp-8Ch]
	int v30; // [rsp+7Ch] [rbp-84h]
	__int64 v31; // [rsp+80h] [rbp-80h] BYREF
	int v32; // [rsp+88h] [rbp-78h]
	__int64 v33; // [rsp+8Ch] [rbp-74h]
	__int64 v34; // [rsp+94h] [rbp-6Ch]
	int v35; // [rsp+9Ch] [rbp-64h]
	__int64 v36; // [rsp+A0h] [rbp-60h] BYREF
	int v37; // [rsp+A8h] [rbp-58h]
	__int64 v38; // [rsp+ACh] [rbp-54h]
	__int64 v39; // [rsp+B4h] [rbp-4Ch]
	int v40; // [rsp+BCh] [rbp-44h]
	__int64 v41; // [rsp+C0h] [rbp-40h] BYREF
	int v42; // [rsp+C8h] [rbp-38h]
	__int64 v43; // [rsp+CCh] [rbp-34h]
	__int64 v44; // [rsp+D4h] [rbp-2Ch]
	int v45; // [rsp+DCh] [rbp-24h]
	__int64 v46; // [rsp+E0h] [rbp-20h] BYREF
	int v47; // [rsp+E8h] [rbp-18h]
	__int64 v48; // [rsp+ECh] [rbp-14h]
	__int64 v49; // [rsp+F4h] [rbp-Ch]
	int v50; // [rsp+FCh] [rbp-4h]
	__int64 v51; // [rsp+100h] [rbp+0h] BYREF
	int v52; // [rsp+108h] [rbp+8h]
	__int64 v53; // [rsp+10Ch] [rbp+Ch]
	__int64 v54; // [rsp+114h] [rbp+14h]
	int v55; // [rsp+11Ch] [rbp+1Ch]
	__int64 v56; // [rsp+120h] [rbp+20h] BYREF
	int v57; // [rsp+128h] [rbp+28h]
	__int64 v58; // [rsp+12Ch] [rbp+2Ch]
	__int64 v59; // [rsp+134h] [rbp+34h]
	int v60; // [rsp+13Ch] [rbp+3Ch]

	if (!a4)
	{
		switch (*a3)
		{
		case 0x4C6:
			v11 = *a1;
			v26 = 1216i64;
			v27 = 1065353216;
			v28 = 0i64;
			v29 = 0i64;
			v30 = 0;
			(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v11 + 584))(a1, 0i64, &v26);
			break;
		case 0x4C7:
			v12 = *a1;
			v36 = 1217i64;
			v37 = 1065353216;
			v38 = 0i64;
			v39 = 0i64;
			v40 = 0;
			(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v12 + 584))(a1, 0i64, &v36);
			break;
		case 0x4C8:
			v13 = *a1;
			v46 = 1218i64;
			v47 = 1065353216;
			v48 = 0i64;
			v49 = 0i64;
			v50 = 0;
			(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v13 + 584))(a1, 0i64, &v46);
			break;
		case 0x4C9:
			v6 = *a1;
			v21 = 1219i64;
			v22 = 1065353216;
			v23 = 0i64;
			v24 = 0i64;
			v25 = 0;
			(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v6 + 584))(a1, 0i64, &v21);
			break;
		case 0x4CA:
			v7 = *a1;
			v41 = 1220i64;
			v42 = 1065353216;
			v43 = 0i64;
			v44 = 0i64;
			v45 = 0;
			(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v7 + 584))(a1, 0i64, &v41);
			break;
		case 0x4CB:
			v8 = *a1;
			v31 = 1221i64;
			v32 = 1065353216;
			v33 = 0i64;
			v34 = 0i64;
			v35 = 0;
			(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v8 + 584))(a1, 0i64, &v31);
			break;
		case 0x4CF:
		case 0x507:
			if (*(_DWORD*)(a6 + 408))
			{
				*(_BYTE*)(a6 + 412) = 1;
				v56 = 1231i64;
				v57 = 1065353216;
				v58 = 0i64;
				v59 = 0i64;
				v60 = 0;
				v14 = (_QWORD*)(a6 + 8);
				v15 = 13i64;
				do
				{
					if (*v14)
						(*(void(__fastcall**)(_QWORD, _QWORD, __int64*))(*(_QWORD*)*v14 + 584i64))(*v14, 0i64, &v56);
					++v14;
					--v15;
				} while (v15);
				*(_DWORD*)(a6 + 408) = 0;
			}
			break;
		case 0x505:
			v9 = *a1;
			v51 = 1286i64;
			v52 = 1065353216;
			v53 = 0i64;
			v54 = 0i64;
			v55 = 0;
			(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v9 + 584))(a1, 0i64, &v51);
			break;
		case 0x547:
			v10 = *a1;
			v16 = 1352i64;
			v17 = 1065353216;
			v18 = 0i64;
			v19 = 0i64;
			v20 = 0;
			(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v10 + 584))(a1, 0i64, &v16);
			break;
		default:
			return;
		}
	}
}

