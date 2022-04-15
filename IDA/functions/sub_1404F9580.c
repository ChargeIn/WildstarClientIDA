//----- (00000001404F9580) ----------------------------------------------------
__int64 __fastcall sub_1404F9580(_QWORD* a1)
{
	__int64 v2; // r14
	__int64 v3; // rcx
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // r15
	__int64 v8; // r13
	_DWORD* v9; // rdx
	int* v10; // rdi
	int* v11; // rsi
	_DWORD* v12; // rbx
	__int64 v13; // rdx
	unsigned __int64 v14; // rcx
	unsigned int* v15; // r12
	unsigned int v16; // ebx
	__int64 v17; // rax
	__int64 v18; // r14
	unsigned __int64 v19; // r13
	int* v20; // rax
	int* v21; // rbx
	int v22; // eax
	__int64 v23; // r13
	__int64 v24; // r12
	int v25; // ebx
	int* v26; // rax
	int* v27; // r14
	__int64 v28; // rdx
	__int64 v30; // [rsp+30h] [rbp-D0h]
	__int64(__fastcall * *v31)(); // [rsp+38h] [rbp-C8h] BYREF
	int v32; // [rsp+40h] [rbp-C0h]
	_QWORD* v33; // [rsp+48h] [rbp-B8h]
	int v34; // [rsp+50h] [rbp-B0h]
	__int64 v35; // [rsp+58h] [rbp-A8h]
	__int64 v36; // [rsp+60h] [rbp-A0h]
	__int64 v37[3]; // [rsp+68h] [rbp-98h]
	const wchar_t* v38; // [rsp+80h] [rbp-80h] BYREF
	int v39; // [rsp+88h] [rbp-78h]
	int v40; // [rsp+8Ch] [rbp-74h]
	__int64 v41; // [rsp+90h] [rbp-70h]
	int v42; // [rsp+98h] [rbp-68h]
	int v43[16]; // [rsp+9Ch] [rbp-64h] BYREF
	__int64 v44; // [rsp+DCh] [rbp-24h]
	__int64 v45; // [rsp+E4h] [rbp-1Ch]
	__int64 v46; // [rsp+ECh] [rbp-14h]
	__int64 v47; // [rsp+F8h] [rbp-8h]
	__int64 v48; // [rsp+100h] [rbp+0h]
	__int64 v49; // [rsp+108h] [rbp+8h]
	__int64 v50; // [rsp+110h] [rbp+10h]
	__int64 v51; // [rsp+118h] [rbp+18h]
	__int64 v52; // [rsp+120h] [rbp+20h]
	int v53; // [rsp+128h] [rbp+28h]
	__int64 v54; // [rsp+130h] [rbp+30h]
	__int64 v55; // [rsp+138h] [rbp+38h]
	__int64 v56; // [rsp+140h] [rbp+40h]
	__int64 v57; // [rsp+148h] [rbp+48h]
	__int64 v58; // [rsp+150h] [rbp+50h]
	__int64 v59; // [rsp+158h] [rbp+58h]
	__int64 v60; // [rsp+160h] [rbp+60h]
	int v61; // [rsp+168h] [rbp+68h]
	char v62[16]; // [rsp+170h] [rbp+70h] BYREF
	char v63; // [rsp+180h] [rbp+80h] BYREF
	char v64; // [rsp+190h] [rbp+90h] BYREF

	v2 = sub_1404F87C0(a1, 1u);
	v36 = v2;
	if (v2)
	{
		v3 = a1[4];
		v31 = off_140B569F0;
		v33 = a1;
		v34 = 1;
		v32 = -2;
		if (*(_QWORD*)(v3 + 120) >= *(_QWORD*)(v3 + 112))
			sub_14005E2C0((__int64)a1);
		v4 = a1[2];
		v5 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v4 + 8) = 5;
		*(_QWORD*)v4 = v5;
		a1[2] += 16i64;
		v6 = sub_1400578C0((__int64)a1);
		v7 = 0i64;
		v32 = v6;
		v8 = 0i64;
		v30 = 0i64;
		v9 = (_DWORD*)(v33[3] + 16i64);
		v10 = 0i64;
		v35 = 0i64;
		v11 = 0i64;
		if ((unsigned __int64)v9 < v33[2])
		{
			v12 = dword_140A12138;
			if (v9 != dword_140A12138 && v9[2] == 5)
			{
				sub_1400579E0((__int64)v33, (__int64)v9, v6);
				v13 = (__int64)v33;
				v14 = v33[2];
				if (v33[3] + 16i64 < v14)
					v12 = (_DWORD*)(v33[3] + 16i64);
				*(_QWORD*)v14 = *(_QWORD*)v12;
				*(_DWORD*)(v14 + 8) = v12[2];
				*(_QWORD*)(v13 + 16) += 16i64;
				v32 = sub_1400578C0((__int64)v33);
				sub_14069D750((__int64)v62, (__int64*)&v31);
				v37[0] = (__int64)v62;
				v37[1] = (__int64)&v63;
				v37[2] = (__int64)&v64;
				while (1)
				{
					v15 = (unsigned int*)v37[v7];
					v16 = *v15;
					if (qword_140C63840)
						break;
					if (!dword_140C63B20 && (int)sub_140202600() >= 0)
					{
						v17 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64AA0 + 24i64))(
							qword_140C64AA0,
							v16);
					LABEL_15:
						v18 = v17;
						if (v17)
						{
							v19 = v8 + 1;
							v20 = sub_14018DB00((__int64)v10, v19, 4i64);
							v21 = v20;
							v20[v30] = *(_DWORD*)(v18 + 12);
							if (v10 != v20)
							{
								sub_1407DB590(v20, v10, 4 * v30);
								if (v10)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 4);
								v10 = v21;
							}
							v30 = v19;
							v22 = sub_14057AA00(v15);
							v23 = v35;
							v24 = v35 + 1;
							v25 = v22;
							v26 = sub_14018DB00((__int64)v11, v35 + 1, 4i64);
							v26[v23] = v25;
							v27 = v26;
							if (v11 != v26)
							{
								sub_1407DB590(v26, v11, 4 * v23);
								if (v11)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
								v11 = v27;
							}
							v8 = v30;
							v35 = v24;
						}
					}
					if ((unsigned __int64)++v7 >= 3)
					{
						v2 = v36;
						goto LABEL_27;
					}
				}
				v17 = qword_140C63840(off_140A6A600, v16, qword_140C63858);
				goto LABEL_15;
			}
		}
	LABEL_27:
		v40 = 0;
		v41 = 2i64;
		v42 = 1065353216;
		sub_1407E4830(v43, 0i64, 0x40ui64);
		v44 = 0i64;
		v45 = 0i64;
		v46 = 0i64;
		v47 = 0i64;
		v48 = 0i64;
		v49 = 0i64;
		v50 = 0i64;
		v51 = 0i64;
		v52 = 0i64;
		v55 = 0i64;
		v56 = 0i64;
		v57 = 0i64;
		v58 = 0i64;
		v59 = 0i64;
		v60 = 0i64;
		v61 = 0;
		v38 = L"Art\\Prop\\Custom_Banners\\Models\\PRP_HoloBanner_000.m3";
		v53 = 0;
		v54 = 0i64;
		v39 = 1;
		sub_1404F75D0(v2, (__int64)&v38, (__int64)v10, v11, v8, 0i64);
		*(_DWORD*)(v2 + 2080) = 5;
		if (v11)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
		if (v10)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 4);
		v31 = off_140B56A08;
		if (v33)
			sub_1400579E0((__int64)v33, v28, v32);
	}
	return 0i64;
}
// 1404F9944: variable 'v28' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6A600: using guessed type wchar_t *off_140A6A600[2];
// 140B0F170: using guessed type wchar_t aArtPropCustomB[53];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B20: using guessed type int dword_140C63B20;
// 140C64AA0: using guessed type __int64 qword_140C64AA0;
// 1404F9580: using guessed type int var_134[16];

