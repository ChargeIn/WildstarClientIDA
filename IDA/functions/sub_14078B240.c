//----- (000000014078B240) ----------------------------------------------------
void __fastcall sub_14078B240(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	int v6; // edx
	int v7; // edx
	int v8; // edx
	__int64* v9; // r8
	__int64* v10; // r8
	void(__fastcall * v11)(_QWORD); // rax
	__int64* v12; // r8
	void(__fastcall * v13)(_QWORD); // rax
	__int64 v14; // [rsp+20h] [rbp-99h] BYREF
	int v15; // [rsp+28h] [rbp-91h]
	__int64 v16; // [rsp+2Ch] [rbp-8Dh]
	__int64 v17; // [rsp+34h] [rbp-85h]
	int v18; // [rsp+3Ch] [rbp-7Dh]
	__int64 v19; // [rsp+40h] [rbp-79h] BYREF
	int v20; // [rsp+48h] [rbp-71h]
	__int64 v21; // [rsp+4Ch] [rbp-6Dh]
	__int64 v22; // [rsp+54h] [rbp-65h]
	int v23; // [rsp+5Ch] [rbp-5Dh]
	__int64 v24; // [rsp+60h] [rbp-59h] BYREF
	int v25; // [rsp+68h] [rbp-51h]
	__int64 v26; // [rsp+6Ch] [rbp-4Dh]
	__int64 v27; // [rsp+74h] [rbp-45h]
	int v28; // [rsp+7Ch] [rbp-3Dh]
	__int64 v29; // [rsp+80h] [rbp-39h] BYREF
	int v30; // [rsp+88h] [rbp-31h]
	__int64 v31; // [rsp+8Ch] [rbp-2Dh]
	__int64 v32; // [rsp+94h] [rbp-25h]
	int v33; // [rsp+9Ch] [rbp-1Dh]
	__int64 v34; // [rsp+A0h] [rbp-19h] BYREF
	int v35; // [rsp+A8h] [rbp-11h]
	__int64 v36; // [rsp+ACh] [rbp-Dh]
	__int64 v37; // [rsp+B4h] [rbp-5h]
	int v38; // [rsp+BCh] [rbp+3h]
	__int64 v39; // [rsp+C0h] [rbp+7h] BYREF
	int v40; // [rsp+C8h] [rbp+Fh]
	__int64 v41; // [rsp+CCh] [rbp+13h]
	__int64 v42; // [rsp+D4h] [rbp+1Bh]
	int v43; // [rsp+DCh] [rbp+23h]
	__int64 v44; // [rsp+E0h] [rbp+27h] BYREF
	int v45; // [rsp+E8h] [rbp+2Fh]
	__int64 v46; // [rsp+ECh] [rbp+33h]
	__int64 v47; // [rsp+F4h] [rbp+3Bh]
	int v48; // [rsp+FCh] [rbp+43h]

	if (!a4 && a6)
	{
		v6 = *(_DWORD*)(a6 + 72);
		if (!v6)
		{
			v45 = 1065353216;
			v44 = 1118i64;
			v46 = 0i64;
			v47 = 0i64;
			v48 = 0;
			v9 = &v44;
			goto LABEL_20;
		}
		v7 = v6 - 1;
		if (v7)
		{
			v8 = v7 - 1;
			if (!v8)
			{
				v15 = 1065353216;
				v14 = 1120i64;
				v16 = 0i64;
				v17 = 0i64;
				v18 = 0;
				v9 = &v14;
				goto LABEL_20;
			}
			if (v8 != 1)
			{
				v20 = 1065353216;
				v19 = 1118i64;
				v21 = 0i64;
				v22 = 0i64;
				v23 = 0;
				v9 = &v19;
			LABEL_20:
				(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)a1 + 584i64))(a1, 0i64, v9);
				return;
			}
			if (*(_BYTE*)(a6 + 76))
			{
				v40 = 1065353216;
				*(_DWORD*)(a6 + 72) = 1;
				v39 = 1109i64;
				v41 = 0i64;
				v42 = 0i64;
				v43 = 0;
				v10 = &v39;
			}
			else
			{
				v30 = 1065353216;
				*(_DWORD*)(a6 + 72) = 0;
				v29 = 1118i64;
				v31 = 0i64;
				v32 = 0i64;
				v33 = 0;
				v10 = &v29;
			}
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)a1 + 584i64))(a1, 0i64, v10);
			v11 = *(void(__fastcall**)(_QWORD))(a6 + 56);
			if (v11)
				v11(*(_QWORD*)(a6 + 64));
		}
		else
		{
			if (*(_BYTE*)(a6 + 76))
			{
				v35 = 1065353216;
				*(_DWORD*)(a6 + 72) = 2;
				v34 = 1120i64;
				v36 = 0i64;
				v37 = 0i64;
				v38 = 0;
				v12 = &v34;
			}
			else
			{
				v25 = 1065353216;
				*(_DWORD*)(a6 + 72) = 3;
				v24 = 1112i64;
				v26 = 0i64;
				v27 = 0i64;
				v28 = 0;
				v12 = &v24;
			}
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)a1 + 584i64))(a1, 0i64, v12);
			v13 = *(void(__fastcall**)(_QWORD))(a6 + 48);
			if (v13)
				v13(*(_QWORD*)(a6 + 64));
		}
	}
}

