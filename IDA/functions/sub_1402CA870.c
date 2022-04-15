//----- (00000001402CA870) ----------------------------------------------------
void __fastcall sub_1402CA870(__int64* a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
	__int64 v4; // r15
	__int64 v6; // r8
	__int64* v7; // rdi
	__int64* v9; // r13
	unsigned __int64 v10; // r12
	__int64 v11; // r14
	__int64 v12; // rdx
	__int64 v13; // r14
	__int64* v14; // rsi
	__int64 v15; // rbp
	void(__fastcall * **v16)(_QWORD); // r15
	int v17; // r12d
	__int64 v18; // rdi
	__int128 v19; // xmm6
	int v20; // r14d
	_QWORD* v21; // rbx
	__int64 v22; // r13
	__int128 v23; // xmm7
	__int64 v24; // rax
	__int64* v25; // rax
	__int64 v26; // r12
	int* v27; // rbp
	__int64 v28; // rax
	__int64 v29; // rax
	__int64 v30; // rax
	_QWORD* v31; // rsi
	_QWORD* v32; // rbx
	__int64 i; // r14
	__int64 v34; // rcx
	unsigned __int64 v35; // [rsp+30h] [rbp-118h] BYREF
	unsigned __int64 v36; // [rsp+38h] [rbp-110h]
	__int64 v37[3]; // [rsp+40h] [rbp-108h] BYREF
	int v38; // [rsp+58h] [rbp-F0h]
	__int64 v39; // [rsp+60h] [rbp-E8h]
	__int64 v40; // [rsp+70h] [rbp-D8h]
	__int128 v41; // [rsp+80h] [rbp-C8h]
	__int128 v42; // [rsp+90h] [rbp-B8h]
	void(__fastcall * **v43)(_QWORD); // [rsp+A0h] [rbp-A8h]
	char v44[32]; // [rsp+A8h] [rbp-A0h] BYREF
	char v45[32]; // [rsp+C8h] [rbp-80h] BYREF
	int v46; // [rsp+E8h] [rbp-60h]
	__int64 v49; // [rsp+160h] [rbp+18h] BYREF

	if (a3)
	{
		v49 = a3;
		v4 = a2;
		v6 = a1[2];
		v7 = a1;
		if ((a1[3] - v6) / 176 < a3)
		{
			v25 = &v49;
			v35 = (v6 - a1[1]) / 176;
			if (v35 >= a3)
				v25 = (__int64*)&v35;
			v26 = 44 * (sub_14018A3E0(176 * (v35 + *v25)) / 0xB0ui64);
			v27 = sub_14018B280(v26 * 4, 0);
			v28 = sub_1402CAC50(v7[1], v4, (__int64)v27);
			v29 = sub_1402CADA0(v28, a3, a4);
			v30 = sub_1402CAC50(v4, v7[2], v29);
			v31 = (_QWORD*)v7[2];
			v32 = (_QWORD*)v7[1];
			for (i = v30; v32 != v31; v32 += 22)
				sub_1402D3190(v32);
			v34 = v7[1];
			if (v34)
				sub_14018B900(v34, 0);
			v7[1] = (__int64)v27;
			v7[2] = i;
			v7[3] = (__int64)&v27[v26];
		}
		else
		{
			sub_1402CABB0((__int64)v37, a4);
			v9 = (__int64*)v7[2];
			v35 = (unsigned __int64)v9;
			v10 = ((__int64)v9 - v4) / 176;
			v36 = v10;
			if (v10 <= a3)
			{
				v13 = a3 - v10;
				v14 = v9;
				v49 = v13;
				v15 = v13;
				if (v13)
				{
					v16 = v43;
					v17 = v46;
					v18 = v40;
					v19 = v42;
					v20 = v38;
					v21 = v9 + 8;
					v22 = v39;
					v23 = v41;
					do
					{
						if (v14)
						{
							v24 = v37[0];
							*((_DWORD*)v21 - 10) = v20;
							*(v21 - 4) = v22;
							*v14 = v24;
							*(v21 - 7) = v37[1];
							*(v21 - 6) = v37[2];
							*(v21 - 2) = v18;
							*(_OWORD*)v21 = v23;
							*((_OWORD*)v21 + 1) = v19;
							v21[4] = v16;
							if (v16)
								(**v16)(v16);
							sub_1401DDFD0(v21 + 5, (__int64)v44);
							sub_140029C50(v21 + 9, (__int64)v45);
							*((_DWORD*)v21 + 26) = v17;
						}
						v14 += 22;
						v21 += 22;
						--v15;
					} while (v15);
					v7 = a1;
					v13 = v49;
					v10 = v36;
					v9 = (__int64*)v35;
					v4 = a2;
				}
				v7[2] += 176 * v13;
				sub_1402CAC50(v4, (__int64)v9, v7[2]);
				v12 = (__int64)v9;
				v7[2] += 176 * v10;
			}
			else
			{
				v11 = 176 * a3;
				sub_1402CAC50((__int64)&v9[v11 / 0xFFFFFFFFFFFFFFF8ui64], (__int64)v9, (__int64)v9);
				v7[2] += v11;
				sub_1402CADF0(v4, (__int64)&v9[v11 / 0xFFFFFFFFFFFFFFF8ui64], v9);
				v12 = v11 + v4;
			}
			sub_1402CACB0(v4, v12, (__int64)v37);
			sub_1402D3190(v37);
		}
	}
}
// 1402CA870: using guessed type char var_A0[32];
// 1402CA870: using guessed type char var_80[32];

