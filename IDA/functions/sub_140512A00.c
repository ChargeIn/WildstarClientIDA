#include "../winhttp.h"

//----- (0000000140512A00) ----------------------------------------------------
__int64 __fastcall sub_140512A00(__int64 a1)
{
	_DWORD* v1; // rbx
	__int64* v3; // rdx
	int v4; // eax
	int v5; // ecx
	__int64 v6; // r9
	unsigned __int64 v7; // r10
	_DWORD* v8; // r8
	int v9; // edx
	int v10; // eax
	BOOL v11; // eax
	bool v12; // r8
	int v13; // eax
	__int64 v15; // [rsp+20h] [rbp-18h] BYREF
	int v16; // [rsp+28h] [rbp-10h]
	__int64 v17; // [rsp+48h] [rbp+10h] BYREF

	v1 = dword_140A12138;
	v3 = (__int64*)dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v3 = *(__int64**)(a1 + 24);
	v4 = *((_DWORD*)v3 + 2);
	if (v4 == 3)
		goto LABEL_7;
	if (v4 == 4 && sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v17))
	{
		v16 = 3;
		v3 = &v15;
		v15 = v17;
	LABEL_7:
		v5 = (int)*(double*)v3;
		goto LABEL_8;
	}
	v5 = 0;
LABEL_8:
	v6 = *(_QWORD*)(a1 + 24);
	v7 = *(_QWORD*)(a1 + 16);
	v8 = dword_140A12138;
	v9 = 1;
	if (v6 + 16 < v7)
		v8 = (_DWORD*)(v6 + 16);
	v10 = v8[2];
	v11 = v10 && (v10 != 1 || *v8);
	v12 = v11;
	if (v6 + 32 < v7)
		v1 = (_DWORD*)(v6 + 32);
	v13 = v1[2];
	if (!v13 || v13 == 1 && !*v1)
		v9 = 0;
	LODWORD(xmmword_140C7D630) = v5 + xmmword_140C7D630;
	if (v12)
	{
		DWORD2(xmmword_140C7D630) += v5;
		++DWORD1(xmmword_140C7D630);
	}
	if (v9)
		HIDWORD(xmmword_140C7D630) += v5;
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C7D630: using guessed type __int128 xmmword_140C7D630;

