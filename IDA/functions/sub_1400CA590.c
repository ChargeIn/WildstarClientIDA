#include "../winhttp.h"

//----- (00000001400CA590) ----------------------------------------------------
__int64 __fastcall sub_1400CA590(__int64 a1, __int64 a2)
{
	int v2; // r15d
	char v4; // al
	int v6; // edi
	__int64 v7; // rbx
	int v8; // ebp
	int v9; // ebp
	int v10; // r12d
	__int64 v11; // rdi
	int v12; // ebx
	int v13; // ebx
	int v14; // r13d
	__int64 v15; // r12
	int v16; // edi
	int v17; // edi
	int v18; // ebp
	__int64 v19; // rbx
	int v20; // edi
	int v21; // edi
	int v22; // ebp
	__int64 v23; // rbx
	int v24; // ebx
	int v25; // ebx
	int v26; // r12d
	__int64 v27; // rbp
	int v28; // eax
	int v29; // eax
	int v30; // edi
	__int64 v31; // rbp
	int v32; // ebx
	int v33; // edi
	int v34; // ebx
	__int64 v35; // rbp
	int v36; // r12d
	int v37; // ebx
	int v38; // ebp
	__int64 v39; // r12
	int v40; // r13d
	int v41; // ebp
	_DWORD* v42; // rax
	int v43; // edi
	_DWORD* v44; // rax
	int v45; // ebx
	_DWORD* v46; // rax
	int v47; // ecx
	__int64 v48; // rcx
	int v49; // eax
	__int64 v50; // rcx
	int v52; // [rsp+20h] [rbp-58h] BYREF
	int v53; // [rsp+28h] [rbp-50h]
	int v54; // [rsp+30h] [rbp-48h] BYREF
	int v55; // [rsp+38h] [rbp-40h]
	int v56; // [rsp+40h] [rbp-38h] BYREF
	int v57; // [rsp+48h] [rbp-30h]

	v2 = 0;
	v4 = *(_BYTE*)(a1 + 656) >> 3;
	*(_QWORD*)a2 = 0i64;
	if ((v4 & 1) != 0)
	{
		sub_1400CB3D0(a1, &v56);
		v6 = qword_140C77760;
		if ((*(_BYTE*)(a1 + 656) & 8) != 0 && (v7 = *(_QWORD*)(a1 + 48)) != 0)
		{
			v8 = v6 + sub_14010CF80(*(_QWORD*)(a1 + 48));
			sub_14010D1C0(v7);
			sub_14010D2F0(v7);
		}
		else
		{
			v8 = qword_140C77760;
		}
		v9 = v8 - v6;
		sub_1400CB3D0(a1, &v54);
		v10 = qword_140C77760;
		if ((*(_BYTE*)(a1 + 656) & 8) != 0 && (v11 = *(_QWORD*)(a1 + 48)) != 0)
		{
			v12 = v10 + sub_14010CF80(*(_QWORD*)(a1 + 48));
			sub_14010D2F0(v11);
		}
		else
		{
			v12 = qword_140C77760;
		}
		v13 = v12 - v10;
		sub_1400CB3D0(a1, &v52);
		v14 = qword_140C77760;
		if ((*(_BYTE*)(a1 + 656) & 8) != 0 && (v15 = *(_QWORD*)(a1 + 48)) != 0)
		{
			v16 = sub_14010CF80(*(_QWORD*)(a1 + 48)) + v14;
			sub_14010D1C0(v15);
		}
		else
		{
			v16 = qword_140C77760;
		}
		v17 = v16 - v14;
		if (v13 < v9)
			v13 = v9;
		if (v17 < v13)
			v17 = v13;
		*(_DWORD*)a2 += v17;
		sub_1400CB3D0(a1, &v56);
		v18 = HIDWORD(qword_140C77760);
		if ((*(_BYTE*)(a1 + 656) & 8) != 0 && (v19 = *(_QWORD*)(a1 + 48)) != 0)
		{
			sub_14010D0A0(*(_QWORD*)(a1 + 48));
			v20 = sub_14010D1C0(v19) + v18;
		}
		else
		{
			v20 = HIDWORD(qword_140C77760);
		}
		v21 = v20 - v18;
		sub_1400CB3D0(a1, &v54);
		v22 = HIDWORD(qword_140C77760);
		if ((*(_BYTE*)(a1 + 656) & 8) != 0 && (v23 = *(_QWORD*)(a1 + 48)) != 0)
		{
			sub_14010CF80(*(_QWORD*)(a1 + 48));
			sub_14010D0A0(v23);
			v24 = sub_14010D1C0(v23) + v22;
		}
		else
		{
			v24 = HIDWORD(qword_140C77760);
		}
		v25 = v24 - v22;
		sub_1400CB3D0(a1, &v52);
		v26 = HIDWORD(qword_140C77760);
		if ((*(_BYTE*)(a1 + 656) & 8) != 0 && (v27 = *(_QWORD*)(a1 + 48)) != 0)
		{
			sub_14010CF80(*(_QWORD*)(a1 + 48));
			v28 = v26 + sub_14010D1C0(v27);
		}
		else
		{
			v28 = HIDWORD(qword_140C77760);
		}
		v29 = v28 - v26;
		if (v25 < v21)
			v25 = v21;
		if (v29 < v25)
			v29 = v25;
		*(_DWORD*)(a2 + 4) += v29;
		sub_1400CB3D0(a1, &v52);
		v30 = v53 - v52;
		if ((*(_BYTE*)(a1 + 656) & 8) != 0 && (v31 = *(_QWORD*)(a1 + 48)) != 0)
		{
			v32 = v30 - sub_14010D0A0(*(_QWORD*)(a1 + 48));
			sub_14010D2F0(v31);
		}
		else
		{
			v32 = v53 - v52;
		}
		v33 = v30 - v32;
		sub_1400CB3D0(a1, &v54);
		v34 = v55 - v54;
		if ((*(_BYTE*)(a1 + 656) & 8) != 0 && (v35 = *(_QWORD*)(a1 + 48)) != 0)
		{
			v36 = v34 - sub_14010D0A0(*(_QWORD*)(a1 + 48));
			sub_14010D1C0(v35);
			sub_14010D2F0(v35);
		}
		else
		{
			v36 = v55 - v54;
		}
		v37 = v34 - v36;
		sub_1400CB3D0(a1, &v56);
		v38 = v57 - v56;
		if ((*(_BYTE*)(a1 + 656) & 8) != 0 && (v39 = *(_QWORD*)(a1 + 48)) != 0)
		{
			v40 = v38 - sub_14010D0A0(*(_QWORD*)(a1 + 48));
			sub_14010D1C0(v39);
		}
		else
		{
			v40 = v57 - v56;
		}
		v41 = v38 - v40;
		if (v37 < v33)
			v37 = v33;
		if (v41 < v37)
			v41 = v37;
		*(_DWORD*)a2 += v41;
		v42 = sub_1400CA470(a1, &v56, 6);
		v43 = v42[3] - v42[1];
		v44 = sub_1400CA470(a1, &v54, 5);
		v45 = v44[3] - v44[1];
		v46 = sub_1400CA470(a1, &v52, 4);
		v47 = v46[3] - v46[1];
		if (v45 < v43)
			v45 = v43;
		if (v47 < v45)
			v47 = v45;
		*(_DWORD*)(a2 + 4) += v47;
	}
	if ((*(_BYTE*)(a1 + 656) & 2) != 0)
	{
		v48 = *(_QWORD*)(a1 + 472);
		if (v48)
			v49 = sub_1400C4410(v48);
		else
			v49 = 0;
		*(_DWORD*)a2 += v49;
	}
	if ((*(_BYTE*)(a1 + 656) & 4) != 0)
	{
		v50 = *(_QWORD*)(a1 + 464);
		if (v50)
			v2 = sub_1400C4410(v50);
		*(_DWORD*)(a2 + 4) += v2;
	}
	return a2;
}
// 140C77760: using guessed type __int64 qword_140C77760;

