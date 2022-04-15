//----- (0000000140612F70) ----------------------------------------------------
__int64 __fastcall sub_140612F70(__int64 a1, unsigned int* a2, __int64 a3, int a4, int a5, int a6, int a7)
{
	unsigned int* v8; // r15
	__int64 v9; // rdi
	unsigned int v10; // r13d
	unsigned __int64 v11; // rsi
	unsigned __int64 v12; // r12
	int* v13; // rax
	int* v14; // rbp
	int* v15; // rax
	__int64* v16; // rcx
	int* v17; // r14
	unsigned int v18; // eax
	unsigned int v19; // ebx
	__int64 v20; // rax
	__int64 v21; // r13
	unsigned __int64 v22; // rdi
	int* v23; // rax
	unsigned __int64 v24; // r12
	int* v25; // rbx
	unsigned int v26; // r8d
	__int64 v27; // rax
	__int64 v28; // rdx
	__int64 v29; // rcx
	unsigned __int64 v30; // rdi
	int* v31; // rax
	unsigned __int64 v32; // rsi
	int* v33; // rbx
	__int64 v34; // rsi
	_DWORD* v35; // rbx
	unsigned __int64 v36; // rdi
	unsigned int v37; // eax
	__int64 v38; // rbx
	__int64 v40; // [rsp+30h] [rbp-68h] BYREF
	char v41[8]; // [rsp+38h] [rbp-60h] BYREF
	__int64 v42; // [rsp+40h] [rbp-58h]
	__int64 v44; // [rsp+A8h] [rbp+10h] BYREF
	__int64 v45; // [rsp+B0h] [rbp+18h]
	int v46; // [rsp+B8h] [rbp+20h]

	v46 = a4;
	v45 = a3;
	v8 = a2;
	v9 = a1;
	if (!a2 || !a3)
		return 0i64;
	v10 = 0;
	v11 = 0i64;
	v12 = 0i64;
	v13 = sub_14018DBC0(0i64, a3, 16i64);
	v14 = 0i64;
	if (v13)
		v14 = v13;
	v15 = sub_14018DBC0(0i64, a3, 16i64);
	v17 = 0i64;
	if (v15)
		v17 = v15;
	if (a3)
	{
		while (1)
		{
			v18 = sub_140612E30((__int64)v16, *v8, a5, a6, a7);
			v19 = v18;
			if (qword_140C63840)
				break;
			if (!dword_140C64AF4 && (int)sub_140211020() >= 0)
			{
				v20 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64188 + 24i64))(qword_140C64188, v19);
			LABEL_13:
				v21 = v20;
				if (v20)
				{
					v22 = v12 + 1;
					LODWORD(v42) = *v8;
					v23 = sub_14018DB00((__int64)v17, v12 + 1, 16i64);
					v24 = 4 * v12;
					v25 = v23;
					*(_QWORD*)&v23[v24] = v21;
					*(_QWORD*)&v23[v24 + 2] = v42;
					if (v17 != v23)
					{
						sub_1407DB590(v23, v17, v24 * 4);
						if (v17)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v17 - 2) + 8i64))(v17 - 4);
						v17 = v25;
					}
					v26 = *v8;
					v12 = v22;
					v9 = a1;
					if (*v8 != v46)
					{
						v27 = *(_QWORD*)(a1 + 31536);
						v28 = v27;
						v29 = *(_QWORD*)(v27 + 8);
						while (v29)
						{
							if (*(_DWORD*)(v29 + 32) < v26)
							{
								v29 = *(_QWORD*)(v29 + 24);
							}
							else
							{
								v28 = v29;
								v29 = *(_QWORD*)(v29 + 16);
							}
						}
						if (v28 == v27 || v26 < *(_DWORD*)(v28 + 32))
						{
							v40 = *(_QWORD*)(a1 + 31536);
							v16 = &v40;
						}
						else
						{
							v44 = v28;
							v16 = &v44;
						}
						if (*v16 == v27)
						{
							v30 = v11 + 1;
							v31 = sub_14018DB00((__int64)v14, v11 + 1, 16i64);
							v32 = 4 * v11;
							v33 = v31;
							*(_QWORD*)&v31[v32] = v21;
							*(_QWORD*)&v31[v32 + 2] = v42;
							if (v14 != v31)
							{
								sub_1407DB590(v31, v14, v32 * 4);
								if (v14)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v14 - 2) + 8i64))(v14 - 4);
								v14 = v33;
							}
							v11 = v30;
							v9 = a1;
						}
					}
				}
			}
			++v8;
			if (!--v45)
			{
				if (v12)
				{
					if (!v11)
					{
						v34 = v9 + 31528;
						v35 = v17 + 2;
						v36 = v12;
						do
						{
							sub_1400EE810(v34, v35);
							v35 += 4;
							--v36;
						} while (v36);
						if (v14)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v14 - 2) + 8i64))(v14 - 4);
						v14 = v17;
						v11 = v12;
						v17 = 0i64;
					}
					if (v11 <= 1)
						v37 = 0;
					else
						v37 = (int)((double)(*(int(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890)
							* 2.328306436538696e-10
							* ((double)((int)v11 - 1) + 1.0));
					v38 = 4i64 * v37;
					sub_1400293C0(a1 + 31528, (__int64)v41, &v14[v38 + 2]);
					v10 = **(_DWORD**)&v14[v38];
				}
				else
				{
					v10 = 0;
				}
				goto LABEL_47;
			}
		}
		v20 = qword_140C63840(off_140A6B208, v18, qword_140C63858);
		goto LABEL_13;
	}
LABEL_47:
	if (v17)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v17 - 2) + 8i64))(v17 - 4);
	if (v14)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v14 - 2) + 8i64))(v14 - 4);
	return v10;
}
// 1406131C4: conditional instruction was optimized away because r12.8!=0
// 14061301E: variable 'v16' is possibly undefined
// 140A6B208: using guessed type wchar_t *off_140A6B208[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64188: using guessed type __int64 qword_140C64188;
// 140C64AF4: using guessed type int dword_140C64AF4;
// 140C77890: using guessed type __int64 qword_140C77890;
// 140612F70: using guessed type char var_60[8];

