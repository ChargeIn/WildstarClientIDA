//----- (000000014088A960) ----------------------------------------------------
__int64 __fastcall sub_14088A960(
	__int64 a1,
	__int64* a2,
	__int64 a3,
	__int64 a4,
	__int64* a5,
	__int64 a6,
	__int64 a7,
	int a8,
	int a9,
	__int64* a10)
{
	unsigned int v13; // esi
	int v15; // eax
	__int64 v16; // r12
	int v17; // ebx
	__int64 v18; // rax
	int v19; // eax
	bool v20; // cl
	int v21; // eax
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64* v24; // rbx
	__int64 v25; // rdx
	__int64 v26; // rdi
	int v27; // r14d
	__int64 v28; // rax
	int v29; // [rsp+70h] [rbp-90h] BYREF
	int v30; // [rsp+78h] [rbp-88h] BYREF
	__int64 v31; // [rsp+80h] [rbp-80h]
	__int64 v32; // [rsp+88h] [rbp-78h]
	__int64 v33; // [rsp+90h] [rbp-70h]
	int v34; // [rsp+98h] [rbp-68h]
	__int16 v35; // [rsp+9Ch] [rbp-64h]
	__int128 v36; // [rsp+A0h] [rbp-60h] BYREF
	int v37[4]; // [rsp+B0h] [rbp-50h] BYREF
	int v38; // [rsp+C0h] [rbp-40h] BYREF
	__int64 v39; // [rsp+C8h] [rbp-38h]
	__int64 v40; // [rsp+D0h] [rbp-30h]
	__int64 v41; // [rsp+D8h] [rbp-28h]
	int v42; // [rsp+E0h] [rbp-20h]
	__int16 v43; // [rsp+E4h] [rbp-1Ch]
	int v44; // [rsp+104h] [rbp+4h]
	__int64 v45; // [rsp+110h] [rbp+10h] BYREF
	int v46; // [rsp+118h] [rbp+18h]
	__int128 v47; // [rsp+120h] [rbp+20h] BYREF
	int v49; // [rsp+178h] [rbp+78h] BYREF

	v13 = 2;
	if (!a2)
		return 31i64;
	sub_140845010((__int64)&v36, a2, a4, (float*)&v29);
	v15 = sub_140844D10(*(float*)&v36, &v49);
	v16 = a6;
	v17 = v15;
	if (v15 == 2)
	{
		v13 = 3;
		goto LABEL_21;
	}
	v32 = 0i64;
	v33 = 0i64;
	v18 = *a2;
	v30 = v36;
	v34 = 3;
	v35 = 256;
	v31 = a4;
	v19 = (*(__int64(__fastcall**)(__int64*, int*))(v18 + 272))(a2, &v30);
	v20 = v19 != 2;
	if (v19 == 80 || v17 == 80)
	{
		v21 = sub_14084ECE0((__int64)a2, v37);
		v20 = sub_140843EB0(v21);
	}
	if (!v20)
	{
		v13 = 3;
		v49 = 32;
		goto LABEL_18;
	}
	v45 = 0i64;
	v46 = 0;
	v44 = 0;
	v38 = 0;
	v22 = sub_1408819F0(dword_140C10F20, 592i64);
	if (v22)
	{
		v47 = v36;
		v23 = sub_14088BCA0(v22, a1, (__int64)a2, a3, a4, v16, a7, &v38, 0, &v47, a8, v32, v33);
	}
	else
	{
		v23 = 0i64;
	}
	v24 = a10;
	*a10 = v23;
	if (!v23)
	{
	LABEL_18:
		v40 = 0i64;
		v41 = 0i64;
		v28 = *a2;
		v38 = 0;
		v42 = 3;
		v43 = 256;
		v39 = a4;
		(*(void(__fastcall**)(__int64*, int*))(v28 + 280))(a2, &v38);
		if (v13 != 3)
			return v13;
	LABEL_21:
		v44 = 0;
		v38 = 0;
		nullsub_1(a2);
		return v13;
	}
	if ((*(unsigned int(__fastcall**)(__int64, __int64*))(*(_QWORD*)v23 + 16i64))(v23, &v45) == 1)
	{
		*(_DWORD*)(*v24 + 428) = v29;
		*(_DWORD*)(*v24 + 408) = a9;
		sub_14088A920(*v24, a5);
		return 1i64;
	}
	LOBYTE(v25) = 1;
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)*v24 + 24i64))(*v24, v25);
	v26 = *v24;
	v27 = dword_140C10F20;
	if (*v24)
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v26 + 8i64))(*v24, 0i64);
		sub_140881720(v27, v26);
	}
	*v24 = 0i64;
	return v13;
}
// 14088AB3E: variable 'v25' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C10F20: using guessed type int dword_140C10F20;
// 14088A960: using guessed type int var_B0[4];

