#include "../winhttp.h"

//----- (00000001400275B0) ----------------------------------------------------
__int64 __fastcall sub_1400275B0(_QWORD* a1)
{
	int v1; // r12d
	unsigned __int64 v3; // r15
	__int64 v4; // rbx
	int* v5; // r15
	__int64 v6; // r13
	int* v7; // rdx
	int* v8; // rcx
	__int64 v9; // rax
	__int128 v10; // xmm0
	__int128 v11; // xmm1
	__int128 v12; // xmm0
	__int128 v13; // xmm1
	__int128 v14; // xmm0
	__int128 v15; // xmm1
	__int128 v16; // xmm0
	__int128 v17; // xmm1
	__int128 v18; // xmm1
	int* v19; // rdx
	int* v20; // rcx
	__int128 v21; // xmm0
	__int128 v22; // xmm1
	__int128 v23; // xmm0
	__int128 v24; // xmm1
	__int128 v25; // xmm0
	__int128 v26; // xmm1
	__int128 v27; // xmm0
	__int128 v28; // xmm1
	__int128 v29; // xmm1
	unsigned __int64 v30; // rbx
	int* v31; // rdi
	int v32; // esi
	__int64 v33; // rax
	__int64 v34; // r14
	int v35; // eax
	int v36; // eax
	__int64 v38; // [rsp+30h] [rbp-D0h] BYREF
	int v39; // [rsp+38h] [rbp-C8h]
	int v40; // [rsp+3Ch] [rbp-C4h]
	int v41; // [rsp+40h] [rbp-C0h]
	int v42; // [rsp+44h] [rbp-BCh]
	int v43; // [rsp+48h] [rbp-B8h]
	int v44[16]; // [rsp+4Ch] [rbp-B4h] BYREF
	__int64 v45; // [rsp+8Ch] [rbp-74h]
	__int64 v46; // [rsp+94h] [rbp-6Ch]
	__int64 v47; // [rsp+9Ch] [rbp-64h]
	__int64 v48; // [rsp+A8h] [rbp-58h]
	__int64 v49; // [rsp+B0h] [rbp-50h]
	__int64 v50; // [rsp+B8h] [rbp-48h]
	__int64 v51; // [rsp+C0h] [rbp-40h]
	__int64 v52; // [rsp+C8h] [rbp-38h]
	__int64 v53; // [rsp+D0h] [rbp-30h]
	int v54; // [rsp+D8h] [rbp-28h]
	__int64 v55; // [rsp+E0h] [rbp-20h]
	__int64 v56; // [rsp+E8h] [rbp-18h]
	__int64 v57; // [rsp+F0h] [rbp-10h]
	__int64 v58; // [rsp+F8h] [rbp-8h]
	__int64 v59; // [rsp+100h] [rbp+0h]
	__int64 v60; // [rsp+108h] [rbp+8h]
	__int64 v61; // [rsp+110h] [rbp+10h]
	int v62; // [rsp+118h] [rbp+18h]
	int v63[72]; // [rsp+120h] [rbp+20h] BYREF
	int v64[72]; // [rsp+240h] [rbp+140h] BYREF

	v1 = 1;
	v3 = (int)sub_140056D60(a1, 1u) - 1i64;
	if (v3 < *(_QWORD*)(qword_140C66DA8 + 272))
	{
		v4 = 2i64;
		v5 = (int*)(*(_QWORD*)(qword_140C66DA8 + 264) + 816 * v3);
		v6 = sub_1404F87C0(a1, 2u);
		if (v6)
		{
			v7 = v5 + 25;
			v8 = v64;
			if ((((unsigned __int8)v64 | (unsigned __int8)((_BYTE)v5 + 100)) & 0xF) != 0)
			{
				sub_1407DB590(v64, v7, 0x120ui64);
			}
			else
			{
				v9 = 2i64;
				do
				{
					v10 = *(_OWORD*)v7;
					v11 = *((_OWORD*)v7 + 1);
					v8 += 32;
					v7 += 32;
					*((_OWORD*)v8 - 8) = v10;
					v12 = *((_OWORD*)v7 - 6);
					*((_OWORD*)v8 - 7) = v11;
					v13 = *((_OWORD*)v7 - 5);
					*((_OWORD*)v8 - 6) = v12;
					v14 = *((_OWORD*)v7 - 4);
					*((_OWORD*)v8 - 5) = v13;
					v15 = *((_OWORD*)v7 - 3);
					*((_OWORD*)v8 - 4) = v14;
					v16 = *((_OWORD*)v7 - 2);
					*((_OWORD*)v8 - 3) = v15;
					v17 = *((_OWORD*)v7 - 1);
					*((_OWORD*)v8 - 2) = v16;
					*((_OWORD*)v8 - 1) = v17;
					--v9;
				} while (v9);
				v18 = *((_OWORD*)v7 + 1);
				*(_OWORD*)v8 = *(_OWORD*)v7;
				*((_OWORD*)v8 + 1) = v18;
			}
			v19 = v5 + 97;
			v20 = v63;
			if ((((unsigned __int8)v63 | (unsigned __int8)((_BYTE)v5 - 124)) & 0xF) != 0)
			{
				sub_1407DB590(v63, v19, 0x120ui64);
			}
			else
			{
				do
				{
					v21 = *(_OWORD*)v19;
					v22 = *((_OWORD*)v19 + 1);
					v20 += 32;
					v19 += 32;
					*((_OWORD*)v20 - 8) = v21;
					v23 = *((_OWORD*)v19 - 6);
					*((_OWORD*)v20 - 7) = v22;
					v24 = *((_OWORD*)v19 - 5);
					*((_OWORD*)v20 - 6) = v23;
					v25 = *((_OWORD*)v19 - 4);
					*((_OWORD*)v20 - 5) = v24;
					v26 = *((_OWORD*)v19 - 3);
					*((_OWORD*)v20 - 4) = v25;
					v27 = *((_OWORD*)v19 - 2);
					*((_OWORD*)v20 - 3) = v26;
					v28 = *((_OWORD*)v19 - 1);
					*((_OWORD*)v20 - 2) = v27;
					*((_OWORD*)v20 - 1) = v28;
					--v4;
				} while (v4);
				v29 = *((_OWORD*)v19 + 1);
				*(_OWORD*)v20 = *(_OWORD*)v19;
				*((_OWORD*)v20 + 1) = v29;
			}
			v30 = 0i64;
			v31 = v5 + 187;
			do
			{
				v32 = 20;
				if ((_DWORD)v30 != 6)
					v32 = v30 + 1;
				if (((1 << v30) & v5[179]) != 0)
				{
					v33 = sub_1402096E0(*(v31 - 7));
					v34 = v33;
					if (v33 && sub_14020BD20(*(_DWORD*)(v33 + 40)))
					{
						v64[v32] = *(_DWORD*)(v34 + 40);
						v63[v32] = *v31;
					}
				}
				else
				{
					v64[v32] = 0;
					v63[v32] = 0;
				}
				++v30;
				++v31;
			} while (v30 < 7);
			v35 = v5[22];
			if (v35 != 1 && (unsigned int)(v35 - 10) > 2)
				v1 = 0;
			v36 = v5[21];
			v41 = v5[19];
			v43 = 1065353216;
			v38 = 0i64;
			v40 = v36;
			v42 = v1;
			v39 = 0;
			sub_1407E4830(v44, 0i64, 0x40ui64);
			v45 = 0i64;
			v46 = 0i64;
			v47 = 0i64;
			v48 = 0i64;
			v49 = 0i64;
			v50 = 0i64;
			v51 = 0i64;
			v52 = 0i64;
			v53 = 0i64;
			v54 = 0;
			v55 = 0i64;
			v56 = 0i64;
			v57 = 0i64;
			v58 = 0i64;
			v59 = 0i64;
			v60 = 0i64;
			v61 = 0i64;
			v62 = 0;
			sub_1404F75D0(v6, (__int64)&v38, (__int64)v64, v63, 72i64, (__int64)(v5 + 194));
		}
	}
	return 0i64;
}
// 140C66DA8: using guessed type __int64 qword_140C66DA8;
// 1400275B0: using guessed type int var_150[72];
// 1400275B0: using guessed type int var_270[72];
// 1400275B0: using guessed type int var_344[16];

