//----- (000000014003A620) ----------------------------------------------------
__int64 __fastcall sub_14003A620(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v3; // rbx
	__int64 v4; // rdx
	_WORD* v5; // rax
	__int16 v6; // cx
	u_long v7; // eax
	__int64 v8; // rdi
	_DWORD* v9; // rbx
	__int64 v10; // r14
	__int64 v11; // rbx
	int v12; // eax
	__int64 v13; // r9
	__int64 v14; // rax
	__int64 v15; // rdx
	__int64 v17; // [rsp+28h] [rbp-E0h] BYREF
	UUID Uuid; // [rsp+30h] [rbp-D8h] BYREF
	__int64 v19[2]; // [rsp+48h] [rbp-C0h] BYREF
	_BYTE v20[504]; // [rsp+58h] [rbp-B0h] BYREF
	UUID v21; // [rsp+250h] [rbp+148h]
	UUID v22; // [rsp+260h] [rbp+158h]
	u_long v23; // [rsp+270h] [rbp+168h]
	int v24; // [rsp+274h] [rbp+16Ch]
	int v25; // [rsp+278h] [rbp+170h]
	int v26; // [rsp+27Ch] [rbp+174h]
	__int64 v27[3]; // [rsp+280h] [rbp+178h] BYREF
	int v28; // [rsp+298h] [rbp+190h]
	int v29; // [rsp+29Ch] [rbp+194h]
	int v30; // [rsp+2A0h] [rbp+198h]
	int v31; // [rsp+2A4h] [rbp+19Ch]
	int v32; // [rsp+2A8h] [rbp+1A0h]
	int v33; // [rsp+2B0h] [rbp+1A8h]
	_DWORD* v34; // [rsp+2B8h] [rbp+1B0h]
	int v35; // [rsp+2C0h] [rbp+1B8h]
	int v36; // [rsp+2C4h] [rbp+1BCh]
	int v37; // [rsp+2C8h] [rbp+1C0h]
	int v38; // [rsp+2CCh] [rbp+1C4h]
	int v39; // [rsp+2D0h] [rbp+1C8h]
	int v40; // [rsp+2D8h] [rbp+1D0h]
	int v41; // [rsp+2DCh] [rbp+1D4h]
	int v42; // [rsp+2E0h] [rbp+1D8h]
	int v43; // [rsp+2E4h] [rbp+1DCh]
	int v44; // [rsp+2E8h] [rbp+1E0h]

	v1 = *(_QWORD*)(a1 + 176);
	if (v1 && *(_DWORD*)(a1 + 168) == 5)
	{
		sub_1407E4830((int*)v19, 0i64, 0x2A8ui64);
		LODWORD(v19[0]) = 16042;
		v3 = v1 - (_QWORD)v20;
		v4 = 502i64;
		v5 = v20;
		while (v4 != -2147483144)
		{
			v6 = *(_WORD*)((char*)v5 + v3);
			if (!v6)
				break;
			*v5++ = v6;
			if (!--v4)
			{
				--v5;
				break;
			}
		}
		*v5 = 0;
		UuidFromStringA(StringUuid, &Uuid);
		v21 = Uuid;
		UuidFromStringA(xmmword_140C67200, &Uuid);
		v22 = Uuid;
		v7 = sub_140335360((int*)xmmword_140C66FF0);
		v8 = qword_140C635F0;
		v23 = v7;
		v19[1] = *(_QWORD*)(qword_140C635F0 + 5672);
		v9 = (_DWORD*)(qword_140C635F0 + 348);
		v24 = *(_DWORD*)(qword_140C7AAC0 + 8);
		v25 = *(_DWORD*)(qword_140C635F0 + 5896);
		v44 = **(_DWORD**)(qword_140C635F0 + 5864);
		v26 = dword_140C67244;
		sub_1407E4830((int*)v27, 0i64, 0x68ui64);
		v10 = *(_QWORD*)(a1 + 232);
		v27[0] = (__int64)v9;
		v27[1] = (__int64)(v9 + 256);
		v27[2] = (__int64)(v9 + 512);
		v28 = v9[768];
		v29 = v9[769];
		v30 = v9[770];
		v31 = v9[771];
		v32 = v9[772];
		v33 = v9[773];
		v34 = v9 + 774;
		v35 = v9[1286];
		v36 = v9[1287];
		v37 = v9[1288];
		v38 = v9[1289];
		v39 = v9[1290];
		v40 = v9[1291];
		v41 = v9[1292];
		v42 = v9[1293];
		v43 = v9[1294];
		v17 = *(_QWORD*)(v8 + 280);
		if (!(*(unsigned int(__fastcall**)(__int64, __int64*, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 264i64))(
			qword_140C65808,
			&v17,
			1426i64,
			v19))
		{
			v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 16i64))(v17);
			v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 32i64))(v17);
			v13 = *(_QWORD*)(v10 + 16);
			if (v13)
				(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v13 + 16))(
					*(_QWORD*)(v13 + 8),
					v11 + 4,
					(unsigned int)(v12 - 4));
			*(_QWORD*)&Uuid.Data1 = 0i64;
			v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 16i64))(v17);
			v15 = *(unsigned int*)(v10 + 152);
			*(_QWORD*)&Uuid.Data1 = v14;
			(*(void(__fastcall**)(__int64, __int64, __int64, UUID*))(*(_QWORD*)qword_140C65808 + 240i64))(
				qword_140C65808,
				v15,
				580i64,
				&Uuid);
		}
		*(_DWORD*)(a1 + 168) = 6;
	}
	else
	{
		sub_1400383A0(a1, 215, 0);
	}
	return 0i64;
}
// 14003A6C6: conditional instruction was optimized away because rdx.8!=0
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C66FF0: using guessed type __int128 xmmword_140C66FF0;
// 140C67244: using guessed type int dword_140C67244;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

