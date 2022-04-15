//----- (000000014055C2C0) ----------------------------------------------------
__int64 __fastcall sub_14055C2C0(__int64 a1, __int64 a2, _DWORD* a3, int a4)
{
	__int64 result; // rax
	__int64* v5; // r8
	__int64 v6; // [rsp+20h] [rbp-E0h] BYREF
	int v7; // [rsp+28h] [rbp-D8h]
	__int64 v8; // [rsp+2Ch] [rbp-D4h]
	__int64 v9; // [rsp+34h] [rbp-CCh]
	int v10; // [rsp+3Ch] [rbp-C4h]
	__int64 v11; // [rsp+40h] [rbp-C0h] BYREF
	int v12; // [rsp+48h] [rbp-B8h]
	__int64 v13; // [rsp+4Ch] [rbp-B4h]
	__int64 v14; // [rsp+54h] [rbp-ACh]
	int v15; // [rsp+5Ch] [rbp-A4h]
	__int64 v16; // [rsp+60h] [rbp-A0h] BYREF
	int v17; // [rsp+68h] [rbp-98h]
	__int64 v18; // [rsp+6Ch] [rbp-94h]
	__int64 v19; // [rsp+74h] [rbp-8Ch]
	int v20; // [rsp+7Ch] [rbp-84h]
	__int64 v21; // [rsp+80h] [rbp-80h] BYREF
	int v22; // [rsp+88h] [rbp-78h]
	__int64 v23; // [rsp+8Ch] [rbp-74h]
	__int64 v24; // [rsp+94h] [rbp-6Ch]
	int v25; // [rsp+9Ch] [rbp-64h]
	__int64 v26; // [rsp+A0h] [rbp-60h] BYREF
	int v27; // [rsp+A8h] [rbp-58h]
	__int64 v28; // [rsp+ACh] [rbp-54h]
	__int64 v29; // [rsp+B4h] [rbp-4Ch]
	int v30; // [rsp+BCh] [rbp-44h]
	__int64 v31; // [rsp+C0h] [rbp-40h] BYREF
	int v32; // [rsp+C8h] [rbp-38h]
	__int64 v33; // [rsp+CCh] [rbp-34h]
	__int64 v34; // [rsp+D4h] [rbp-2Ch]
	int v35; // [rsp+DCh] [rbp-24h]
	__int64 v36; // [rsp+E0h] [rbp-20h] BYREF
	int v37; // [rsp+E8h] [rbp-18h]
	__int64 v38; // [rsp+ECh] [rbp-14h]
	__int64 v39; // [rsp+F4h] [rbp-Ch]
	int v40; // [rsp+FCh] [rbp-4h]
	__int64 v41; // [rsp+100h] [rbp+0h] BYREF
	int v42; // [rsp+108h] [rbp+8h]
	__int64 v43; // [rsp+10Ch] [rbp+Ch]
	__int64 v44; // [rsp+114h] [rbp+14h]
	int v45; // [rsp+11Ch] [rbp+1Ch]

	if (!a4)
	{
		result = *a3 - 1222;
		switch (*a3)
		{
		case 0x4C6:
			v21 = 1216i64;
			v22 = 1065353216;
			v23 = 0i64;
			v24 = 0i64;
			v25 = 0;
			v5 = &v21;
			goto LABEL_11;
		case 0x4C7:
			v31 = 1217i64;
			v32 = 1065353216;
			v33 = 0i64;
			v34 = 0i64;
			v35 = 0;
			v5 = &v31;
			goto LABEL_11;
		case 0x4C8:
			v41 = 1218i64;
			v42 = 1065353216;
			v43 = 0i64;
			v44 = 0i64;
			v45 = 0;
			v5 = &v41;
			goto LABEL_11;
		case 0x4C9:
			v26 = 1219i64;
			v27 = 1065353216;
			v28 = 0i64;
			v29 = 0i64;
			v30 = 0;
			v5 = &v26;
			goto LABEL_11;
		case 0x4CA:
			v16 = 1220i64;
			v17 = 1065353216;
			v18 = 0i64;
			v19 = 0i64;
			v20 = 0;
			v5 = &v16;
			goto LABEL_11;
		case 0x4CB:
			v36 = 1221i64;
			v37 = 1065353216;
			v38 = 0i64;
			v39 = 0i64;
			v40 = 0;
			v5 = &v36;
			goto LABEL_11;
		case 0x505:
			v6 = 1286i64;
			v7 = 1065353216;
			v8 = 0i64;
			v9 = 0i64;
			v10 = 0;
			v5 = &v6;
			goto LABEL_11;
		case 0x547:
			v11 = 1352i64;
			v12 = 1065353216;
			v13 = 0i64;
			v14 = 0i64;
			v15 = 0;
			v5 = &v11;
		LABEL_11:
			result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)a1 + 584i64))(a1, 0i64, v5);
			break;
		default:
			return result;
		}
	}
	return result;
}

