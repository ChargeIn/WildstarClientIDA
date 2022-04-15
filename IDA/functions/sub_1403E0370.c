#include "../winhttp.h"

//----- (00000001403E0370) ----------------------------------------------------
__int64* __fastcall sub_1403E0370(int a1, int a2)
{
	int v2; // eax
	int v3; // xmm6_4
	int v6; // ebx
	int v7; // xmm7_4
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rax
	int v11; // eax
	__int64 v12; // rax
	int v13; // xmm0_4
	__int64 v14; // rax
	int v15; // xmm0_4
	__int64 v16; // rax
	int v17; // eax
	__int64 v18; // rax
	int v19; // eax
	__int64 v20; // rax
	int v21; // xmm0_4
	__int64 v22; // rax
	int v23; // xmm0_4
	__int64 v24; // rax
	int v25; // eax
	__int64 v26; // rax
	int v27; // eax
	__int64 v28; // rax
	int v29; // xmm0_4
	__int64 v30; // rax
	int v31; // xmm0_4
	__int64 v32; // rax
	int v33; // eax
	__int64 v34; // rax
	__int64 v35; // rax
	__int64 v36; // rax
	int v38; // edi

	v2 = dword_140DC2394;
	v3 = 1065353216;
	v6 = 50;
	v7 = 0;
	if ((dword_140DC2394 & 1) == 0)
	{
		dword_140DC2394 |= 1u;
		v8 = sub_140200220(0x35Cu);
		if (v8)
			v9 = *(_DWORD*)(v8 + 4);
		else
			v9 = 50;
		qword_140DC2398 = v9;
		v10 = sub_140200220(0x35Cu);
		if (v10)
			v11 = *(_DWORD*)(v10 + 8);
		else
			v11 = 50;
		qword_140DC23A0 = v11;
		v12 = sub_140200220(0x35Cu);
		if (v12)
			v13 = *(_DWORD*)(v12 + 28);
		else
			v13 = 0;
		dword_140DC23A8 = v13;
		v14 = sub_140200220(0x35Cu);
		if (v14)
			v15 = *(_DWORD*)(v14 + 24);
		else
			v15 = 1065353216;
		v2 = dword_140DC2394;
		dword_140DC23AC = v15;
	}
	if ((v2 & 2) == 0)
	{
		dword_140DC2394 = v2 | 2;
		v16 = sub_140200220(0x35Du);
		if (v16)
			v17 = *(_DWORD*)(v16 + 4);
		else
			v17 = 50;
		qword_140DC23B0 = v17;
		v18 = sub_140200220(0x35Du);
		if (v18)
			v19 = *(_DWORD*)(v18 + 8);
		else
			v19 = 50;
		qword_140DC23B8 = v19;
		v20 = sub_140200220(0x35Du);
		if (v20)
			v21 = *(_DWORD*)(v20 + 28);
		else
			v21 = 0;
		dword_140DC23C0 = v21;
		v22 = sub_140200220(0x35Du);
		if (v22)
			v23 = *(_DWORD*)(v22 + 24);
		else
			v23 = 1065353216;
		v2 = dword_140DC2394;
		dword_140DC23C4 = v23;
	}
	if ((v2 & 4) == 0)
	{
		dword_140DC2394 = v2 | 4;
		v24 = sub_140200220(0x35Eu);
		if (v24)
			v25 = *(_DWORD*)(v24 + 4);
		else
			v25 = 50;
		qword_140DC23C8 = v25;
		v26 = sub_140200220(0x35Eu);
		if (v26)
			v27 = *(_DWORD*)(v26 + 8);
		else
			v27 = 50;
		qword_140DC23D0 = v27;
		v28 = sub_140200220(0x35Eu);
		if (v28)
			v29 = *(_DWORD*)(v28 + 28);
		else
			v29 = 0;
		dword_140DC23D8 = v29;
		v30 = sub_140200220(0x35Eu);
		if (v30)
			v31 = *(_DWORD*)(v30 + 24);
		else
			v31 = 1065353216;
		v2 = dword_140DC2394;
		dword_140DC23DC = v31;
	}
	if ((v2 & 8) == 0)
	{
		dword_140DC2394 = v2 | 8;
		v32 = sub_140200220(0x35Fu);
		if (v32)
			v33 = *(_DWORD*)(v32 + 4);
		else
			v33 = 50;
		qword_140DC23E0 = v33;
		v34 = sub_140200220(0x35Fu);
		if (v34)
			v6 = *(_DWORD*)(v34 + 8);
		qword_140DC23E8 = v6;
		v35 = sub_140200220(0x35Fu);
		if (v35)
			v7 = *(_DWORD*)(v35 + 28);
		dword_140DC23F0 = v7;
		v36 = sub_140200220(0x35Fu);
		if (v36)
			v3 = *(_DWORD*)(v36 + 24);
		dword_140DC23F4 = v3;
	}
	if (!a1)
		return &qword_140DC2398;
	v38 = a2 - 1;
	if (!v38)
		return &qword_140DC23C8;
	if (v38 == 1)
		return &qword_140DC23E0;
	return &qword_140DC23B0;
}
// 140DC2394: using guessed type int dword_140DC2394;
// 140DC2398: using guessed type __int64 qword_140DC2398;
// 140DC23A0: using guessed type __int64 qword_140DC23A0;
// 140DC23A8: using guessed type int dword_140DC23A8;
// 140DC23AC: using guessed type int dword_140DC23AC;
// 140DC23B0: using guessed type __int64 qword_140DC23B0;
// 140DC23B8: using guessed type __int64 qword_140DC23B8;
// 140DC23C0: using guessed type int dword_140DC23C0;
// 140DC23C4: using guessed type int dword_140DC23C4;
// 140DC23C8: using guessed type __int64 qword_140DC23C8;
// 140DC23D0: using guessed type __int64 qword_140DC23D0;
// 140DC23D8: using guessed type int dword_140DC23D8;
// 140DC23DC: using guessed type int dword_140DC23DC;
// 140DC23E0: using guessed type __int64 qword_140DC23E0;
// 140DC23E8: using guessed type __int64 qword_140DC23E8;
// 140DC23F0: using guessed type int dword_140DC23F0;
// 140DC23F4: using guessed type int dword_140DC23F4;

