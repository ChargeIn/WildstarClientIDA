#include "../winhttp.h"

//----- (00000001407376F0) ----------------------------------------------------
__int64 __fastcall sub_1407376F0(__int64 a1)
{
	__int64* v1; // rdx
	int v2; // ebx
	int v3; // eax
	int v4; // r9d
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64* v8; // rdx
	int v9; // ecx
	__int64 v10; // [rsp+20h] [rbp-38h] BYREF
	int v11; // [rsp+28h] [rbp-30h]
	__int64 v12; // [rsp+30h] [rbp-28h] BYREF
	__int64 v13; // [rsp+38h] [rbp-20h]
	__int64 v14; // [rsp+40h] [rbp-18h]
	__int64 v15; // [rsp+68h] [rbp+10h] BYREF

	v1 = (__int64*)dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(__int64**)(a1 + 24);
	v2 = 0;
	v3 = *((_DWORD*)v1 + 2);
	if (v3 == 3)
		goto LABEL_7;
	if (v3 == 4 && sub_14005AC80((char*)(*v1 + 32), (unsigned __int64*)&v15))
	{
		v11 = 3;
		v1 = &v10;
		v10 = v15;
	LABEL_7:
		v4 = (int)*(double*)v1;
		goto LABEL_8;
	}
	v4 = 0;
LABEL_8:
	v5 = 0i64;
	if (qword_140C7DE20)
	{
		while (1)
		{
			v6 = *(_QWORD*)(qword_140C7DE18 + 8 * v5);
			if (*(_DWORD*)(v6 + 16) == 7)
				break;
			if (++v5 >= (unsigned __int64)qword_140C7DE20)
				return 0i64;
		}
		v8 = *(__int64**)(qword_140C7DE18 + 8 * v5);
		if (v6 && (v4 == 3 || !v4))
		{
			v12 = 0i64;
			v13 = 0i64;
			v14 = 0i64;
			LOBYTE(v2) = v4 == 3;
			v9 = *(_DWORD*)(qword_140C635F0 + 5760);
			LODWORD(v14) = v2;
			LODWORD(v10) = v9;
			v13 = *v8;
			v12 = v10;
			sub_1403F4740(qword_140C65898, 0x538u, (__int64)&v12);
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

