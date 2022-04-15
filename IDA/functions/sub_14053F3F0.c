#include "../winhttp.h"

//----- (000000014053F3F0) ----------------------------------------------------
__int64 __fastcall sub_14053F3F0(__int64 a1, _DWORD* a2)
{
	unsigned int v2; // r9d
	unsigned int v3; // r10d
	__int64 v4; // rbx
	int v7; // eax
	int v8; // eax
	int v9; // eax
	int v10; // eax
	int v11; // eax
	int v12; // eax
	__int64 v13; // r8
	__int64 v14; // rax
	unsigned __int64 v15; // rdx
	unsigned __int64 v16; // rcx
	_DWORD* v17; // rax
	unsigned __int64 v18; // rcx
	_DWORD* v19; // rax
	__int64 v20; // rsi
	int* v21; // rax
	__int64* v22; // rdx
	__int64 v23; // rax
	int v24; // eax
	int v25; // ecx
	int v26; // eax
	int v27; // eax
	__int64(__fastcall * *v29)(); // [rsp+20h] [rbp-69h] BYREF
	int v30; // [rsp+28h] [rbp-61h]
	int v31; // [rsp+2Ch] [rbp-5Dh]
	int v32; // [rsp+30h] [rbp-59h]
	int v33; // [rsp+34h] [rbp-55h]
	int v34; // [rsp+38h] [rbp-51h]
	int v35; // [rsp+40h] [rbp-49h]
	int v36; // [rsp+44h] [rbp-45h]
	int v37; // [rsp+48h] [rbp-41h]
	int v38; // [rsp+4Ch] [rbp-3Dh]
	int v39; // [rsp+50h] [rbp-39h]
	int v40; // [rsp+54h] [rbp-35h]
	int v41; // [rsp+58h] [rbp-31h]
	int v42; // [rsp+5Ch] [rbp-2Dh]
	int v43; // [rsp+60h] [rbp-29h]
	unsigned __int64 v44; // [rsp+70h] [rbp-19h] BYREF
	int v45; // [rsp+78h] [rbp-11h]
	int v46; // [rsp+80h] [rbp-9h]
	int v47; // [rsp+84h] [rbp-5h]
	int v48; // [rsp+88h] [rbp-1h]
	int v49; // [rsp+8Ch] [rbp+3h]
	int v50; // [rsp+90h] [rbp+7h]
	int v51; // [rsp+94h] [rbp+Bh]
	int v52; // [rsp+98h] [rbp+Fh]
	int v53; // [rsp+9Ch] [rbp+13h]
	int v54; // [rsp+A0h] [rbp+17h]
	int v55; // [rsp+A4h] [rbp+1Bh]
	char v56; // [rsp+A8h] [rbp+1Fh]
	int v57; // [rsp+B8h] [rbp+2Fh]
	int v58; // [rsp+BCh] [rbp+33h]
	__int64 v59; // [rsp+C0h] [rbp+37h]
	int v60; // [rsp+C8h] [rbp+3Fh]
	__int64 v61; // [rsp+CCh] [rbp+43h]

	v2 = a2[3];
	v3 = a2[2];
	v61 = 0i64;
	v4 = 0i64;
	v55 = a2[13];
	v46 = a2[4];
	v47 = a2[5];
	v7 = a2[6];
	v56 = 0;
	v48 = v7;
	v49 = a2[7];
	v8 = a2[8];
	v44 = __PAIR64__(v2, v3);
	v50 = v8;
	v9 = a2[9];
	v45 = 8;
	v51 = v9;
	v10 = a2[10];
	v53 = 0;
	v52 = v10;
	v11 = *(_DWORD*)(a1 + 304);
	v54 = 2;
	v57 = v11;
	v12 = a2[1];
	v60 = 0;
	v58 = v12;
	v59 = *(_QWORD*)(a1 + 408);
	v13 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v13 || *(_DWORD*)(v13 + 8) != v2)
	{
		v14 = *(_QWORD*)(qword_140C65898 + 25744);
		if ((!v14 || *(_DWORD*)(v14 + 8) != v2)
			&& (!v13 || *(_DWORD*)(v13 + 8) != v3)
			&& (!v14 || *(_DWORD*)(v14 + 8) != v3))
		{
			if (!v13)
				goto LABEL_25;
			v15 = *(_QWORD*)(v13 + 704);
			v16 = 0i64;
			if (v15)
			{
				v17 = *(_DWORD**)(v13 + 696);
				while (*v17 != v2)
				{
					++v16;
					++v17;
					if (v16 >= v15)
						goto LABEL_14;
				}
			}
			else
			{
			LABEL_14:
				v18 = 0i64;
				if (!v15)
					goto LABEL_25;
				v19 = *(_DWORD**)(v13 + 696);
				while (*v19 != v3)
				{
					++v18;
					++v19;
					if (v18 >= v15)
						goto LABEL_25;
				}
			}
		}
	}
	v20 = qword_140C65B70;
	v21 = sub_14018B280(192i64, 0);
	if (v21)
		v4 = sub_140567380((__int64)v21, &v44);
	v22 = (__int64*)(v20 + 2000);
	if (!*(_QWORD*)(v4 + 104))
	{
		*(_QWORD*)(v4 + 104) = v22;
		*(_QWORD*)(v4 + 112) = *v22;
		*v22 = v4;
		v23 = *(_QWORD*)(v4 + 112);
		if (v23)
			*(_QWORD*)(v23 + 104) = v4 + 112;
	}
	sub_140563AD0(v20, v4);
LABEL_25:
	v24 = a2[3];
	v25 = a2[9];
	v31 = 5;
	v30 = v24;
	v26 = a2[2];
	v38 = v25;
	v32 = v26;
	v34 = 2;
	v29 = off_140B6F730;
	v27 = *(_DWORD*)(a1 + 304);
	v43 = 8;
	v33 = v27;
	v35 = a2[8] - v25;
	v36 = a2[4];
	v37 = a2[7];
	v39 = a2[10];
	v40 = a2[6];
	v41 = a2[11];
	v42 = a2[13];
	return sub_14060B2B0((int*)&v29);
}
// 140B6F730: using guessed type __int64 (__fastcall *off_140B6F730[135])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

