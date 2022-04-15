#include "../winhttp.h"

//----- (0000000140743FF0) ----------------------------------------------------
__int64 __fastcall sub_140743FF0(__int64 a1)
{
	__int64* v2; // rax
	bool v3; // cf
	__int64* v4; // rbx
	__int64* v5; // rcx
	int v6; // esi
	int v7; // eax
	int v8; // r12d
	__int64* v9; // rcx
	int v10; // eax
	int v11; // r15d
	__int64* v12; // rcx
	int v13; // eax
	int v14; // r14d
	int v15; // eax
	__int64 v16; // rax
	__int64 v17; // rax
	__int64 v19; // [rsp+20h] [rbp-38h] BYREF
	unsigned __int64 v20; // [rsp+28h] [rbp-30h]
	unsigned __int64 v21; // [rsp+30h] [rbp-28h]
	__int64 v22; // [rsp+78h] [rbp+20h] BYREF

	if (!*(_QWORD*)(qword_140C65898 + 27728))
		return 0i64;
	v2 = *(__int64**)(a1 + 24);
	v3 = (unsigned __int64)v2 < *(_QWORD*)(a1 + 16);
	v4 = (__int64*)dword_140A12138;
	v5 = (__int64*)dword_140A12138;
	if (v3)
		v5 = v2;
	v6 = 0;
	v7 = *((_DWORD*)v5 + 2);
	if (v7 == 3)
		goto LABEL_8;
	if (v7 == 4 && sub_14005AC80((char*)(*v5 + 32), (unsigned __int64*)&v22))
	{
		LODWORD(v20) = 3;
		v5 = &v19;
		v19 = v22;
	LABEL_8:
		v8 = (int)*(double*)v5;
		goto LABEL_9;
	}
	v8 = 0;
LABEL_9:
	v9 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(*(_QWORD*)(a1 + 24) + 16i64) < *(_QWORD*)(a1 + 16))
		v9 = (__int64*)(*(_QWORD*)(a1 + 24) + 16i64);
	v10 = *((_DWORD*)v9 + 2);
	if (v10 == 3)
		goto LABEL_15;
	if (v10 == 4 && sub_14005AC80((char*)(*v9 + 32), (unsigned __int64*)&v22))
	{
		LODWORD(v20) = 3;
		v9 = &v19;
		v19 = v22;
	LABEL_15:
		v11 = (int)*(double*)v9;
		goto LABEL_16;
	}
	v11 = 0;
LABEL_16:
	v12 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(*(_QWORD*)(a1 + 24) + 32i64) < *(_QWORD*)(a1 + 16))
		v12 = (__int64*)(*(_QWORD*)(a1 + 24) + 32i64);
	v13 = *((_DWORD*)v12 + 2);
	if (v13 == 3)
		goto LABEL_22;
	if (v13 == 4 && sub_14005AC80((char*)(*v12 + 32), (unsigned __int64*)&v22))
	{
		LODWORD(v20) = 3;
		v12 = &v19;
		v19 = v22;
	LABEL_22:
		v14 = (int)*(double*)v12;
		goto LABEL_23;
	}
	v14 = 0;
LABEL_23:
	if ((unsigned __int64)(*(_QWORD*)(a1 + 24) + 48i64) < *(_QWORD*)(a1 + 16))
		v4 = (__int64*)(*(_QWORD*)(a1 + 24) + 48i64);
	v15 = *((_DWORD*)v4 + 2);
	if (v15 == 3)
		goto LABEL_29;
	if (v15 == 4 && sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v22))
	{
		LODWORD(v20) = 3;
		v4 = &v19;
		v19 = v22;
	LABEL_29:
		v6 = (int)*(double*)v4;
	}
	v16 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v16)
	{
		v20 = 0i64;
		v21 = 0i64;
		v19 = 0i64;
		v17 = *(_QWORD*)(v16 + 72);
		v20 = __PAIR64__(v11, v8);
		v21 = __PAIR64__(v6, v14);
		v19 = v17;
		sub_1403F4740(qword_140C65898, 0x42Eu, (__int64)&v19);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

