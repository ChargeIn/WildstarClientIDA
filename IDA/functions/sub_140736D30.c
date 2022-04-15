#include "../winhttp.h"

//----- (0000000140736D30) ----------------------------------------------------
__int64 __fastcall sub_140736D30(__int64 a1)
{
	__int64* v1; // rdx
	int v2; // eax
	unsigned int v3; // ebx
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v8; // [rsp+20h] [rbp-18h] BYREF
	int v9; // [rsp+28h] [rbp-10h]
	__int64 v10; // [rsp+48h] [rbp+10h] BYREF

	v1 = (__int64*)dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(__int64**)(a1 + 24);
	v2 = *((_DWORD*)v1 + 2);
	if (v2 != 3)
	{
		if (v2 != 4 || !sub_14005AC80((char*)(*v1 + 32), (unsigned __int64*)&v10))
		{
			v3 = 0;
			goto LABEL_8;
		}
		v9 = 3;
		v1 = &v8;
		v8 = v10;
	}
	v3 = (int)*(double*)v1;
LABEL_8:
	v4 = sub_1405B1510(&qword_140C7DFB0);
	if (v4)
	{
		if (*(_DWORD*)(v4 + 192) != 4)
		{
			v5 = *(_QWORD*)(qword_140C659F8 + 200);
			*(_DWORD*)(qword_140C659F8 + 212) = v3;
			if (v5)
			{
				v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 112i64))(v5);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 88i64))(v6, v3);
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

