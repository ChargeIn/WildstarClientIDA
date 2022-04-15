#include "../winhttp.h"

//----- (00000001406ACA10) ----------------------------------------------------
__int64 __fastcall sub_1406ACA10(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned __int64 v3; // rdx
	__int64 v4; // r9
	unsigned int v5; // eax
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rbx
	unsigned int v9; // r12d
	unsigned int v10; // r15d
	unsigned int v11; // r14d
	unsigned int v12; // ebp
	unsigned int v13; // esi
	unsigned int v14; // eax
	unsigned int v15; // ebx
	unsigned int v16; // edi
	__int64 v17; // rax
	bool v18; // zf
	unsigned int v19; // eax
	__int64 v20; // rax
	unsigned int v21; // eax
	__int64 v22; // rax
	unsigned int v23; // eax
	__int64 v24; // rax
	unsigned int v25; // eax
	__int64 v26; // rax
	unsigned int v27; // eax
	__int64 v28; // rax
	__int64 v29; // rcx
	__int64 v31; // [rsp+20h] [rbp-48h] BYREF
	__int64 v32; // [rsp+28h] [rbp-40h]
	__int64 v33; // [rsp+30h] [rbp-38h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && *(_QWORD*)(v2 + 8))
	{
		v3 = *(_QWORD*)(qword_140C63650 + 768);
		v4 = 0i64;
		v5 = 0;
		if (v3)
		{
			v6 = *(_QWORD*)(qword_140C63650 + 760);
			v7 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a1)
			{
				v7 = ++v5;
				if (v5 >= v3)
					goto LABEL_9;
			}
			v4 = *(_QWORD*)(v6 + 8i64 * v5);
		}
	LABEL_9:
		v8 = v4 + 384;
		v9 = sub_1400F26A0(v4 + 384, 2);
		v10 = sub_1400F26A0(v8, 3);
		v11 = sub_1400F26A0(v8, 4);
		v12 = sub_1400F26A0(v8, 5);
		v13 = sub_1400F26A0(v8, 6);
		v14 = sub_1400F26A0(v8, 7);
		v15 = 0;
		v16 = v14;
		v31 = 0i64;
		v32 = 0i64;
		v33 = 0i64;
		v17 = sub_140207D60(v9);
		if (v9 && v17)
		{
			v18 = (*(_BYTE*)(v17 + 24) & 1) == 0;
			v19 = 0;
			if (!v18)
				v19 = v9;
			LODWORD(v31) = v19;
		}
		v20 = sub_140207D60(v10);
		if (v10 && v20)
		{
			v18 = (*(_BYTE*)(v20 + 24) & 4) == 0;
			v21 = 0;
			if (!v18)
				v21 = v10;
			HIDWORD(v31) = v21;
		}
		v22 = sub_140207D60(v11);
		if (v11 && v22)
		{
			v18 = (*(_BYTE*)(v22 + 24) & 8) == 0;
			v23 = 0;
			if (!v18)
				v23 = v11;
			LODWORD(v32) = v23;
		}
		v24 = sub_140207D60(v12);
		if (v12 && v24)
		{
			v18 = (*(_BYTE*)(v24 + 24) & 0x10) == 0;
			v25 = 0;
			if (!v18)
				v25 = v12;
			HIDWORD(v32) = v25;
		}
		v26 = sub_140207D60(v13);
		if (v13 && v26)
		{
			v18 = (*(_BYTE*)(v26 + 24) & 0x20) == 0;
			v27 = 0;
			if (!v18)
				v27 = v13;
			LODWORD(v33) = v27;
		}
		v28 = sub_140207D60(v16);
		if (v16 && v28)
		{
			if (*(char*)(v28 + 24) < 0)
				v15 = v16;
			HIDWORD(v33) = v15;
		}
		sub_1404B79D0(v29, (char*)&v31);
	}
	return 0i64;
}
// 1406ACC06: variable 'v29' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;

