//----- (0000000140511F40) ----------------------------------------------------
__int64 __fastcall sub_140511F40(__int64 a1)
{
	unsigned int v1; // edi
	_DWORD* v3; // rax
	__int64* v4; // rbx
	_DWORD* v5; // rcx
	int v6; // eax
	int v7; // eax
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	int v10; // [rsp+28h] [rbp-10h]
	__int64 v11; // [rsp+48h] [rbp+10h] BYREF

	v1 = 0;
	if (*(_DWORD*)(qword_140C635F0 + 5704))
	{
		v3 = *(_DWORD**)(a1 + 24);
		v4 = (__int64*)dword_140A12138;
		v5 = dword_140A12138;
		if ((unsigned __int64)v3 < *(_QWORD*)(a1 + 16))
			v5 = v3;
		v6 = v5[2];
		if (v6 == 3 || v6 == 4 && sub_14005AC80((char*)(*(_QWORD*)v5 + 32i64), (unsigned __int64*)&v11))
		{
			if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
				v4 = *(__int64**)(a1 + 24);
			v7 = *((_DWORD*)v4 + 2);
			if (v7 == 3)
				goto LABEL_13;
			if (v7 == 4 && sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v11))
			{
				v10 = 3;
				v4 = &v9;
				v9 = v11;
			LABEL_13:
				v1 = (int)*(double*)v4;
			}
		}
	}
	sub_140016560(qword_140C65678, v1);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65678: using guessed type __int64 qword_140C65678;

